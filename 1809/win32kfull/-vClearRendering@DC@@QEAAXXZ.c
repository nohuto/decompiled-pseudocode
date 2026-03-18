/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0057A10 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     NtGdiGetPixel @ 0x1C005E7C0 (NtGdiGetPixel.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0065580 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0137D98 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C00553A0 (GreSelectRedirectionBitmap.c)
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C025360C (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C0262164 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v2; // ecx
  int v3; // ebp
  __int64 v4; // rsi
  SURFOBJ *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // r14
  __int64 v13; // rdi
  int v14; // r9d
  __int64 *ThreadWin32Thread; // rax
  int v16; // r14d
  int v17; // r15d
  unsigned int v18; // r10d
  HBITMAP v19; // r8
  HWND v20; // rdx
  HDEV v21; // rcx
  int v22; // eax
  int v23; // edi
  int v24; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= 0xFFFFFFFC;
  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      EngLockSurface(*(HSURF *)(v4 + 32));
      v2 = *((_DWORD *)this + 9);
      v4 = *((_QWORD *)this + 62);
    }
    if ( (v2 & 0x40000) != 0 )
    {
      v5 = 0LL;
      if ( v4 )
        v5 = (SURFOBJ *)(v4 + 24);
      EngUnlockSurface(v5);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 266));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 266) = 0LL;
    }
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v4 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v4 + 272));
      if ( (*(_DWORD *)(v4 + 324))-- != 1 )
        goto LABEL_32;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
        PsGetThreadWin32Thread(CurrentThread);
      v12 = KeGetCurrentThread();
      v13 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10)
        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v12)) != 0LL
        && (v13 = *ThreadWin32Thread) != 0 )
      {
        v16 = *(_DWORD *)(v13 + 104);
        v17 = *(_DWORD *)(v13 + 108);
        *(_QWORD *)(v13 + 104) = 0LL;
      }
      else
      {
        v17 = v24;
        v16 = v24;
      }
      if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
      {
        v18 = *(_DWORD *)(v4 + 492);
        v19 = *(HBITMAP *)(v4 + 344);
        v20 = *(HWND *)(v4 + 336);
        v21 = *(HDEV *)(v4 + 328);
        if ( (*(_DWORD *)(v4 + 116) & 2) == 0 || v18 && g_pDwmState )
          GreHintSpriteShape(v21, v20, v19, *(_DWORD *)(v4 + 488), v18, 0);
        else
          GdiHintSpriteShapeDelayDelete(v21, v20, v19, v14);
        *(_DWORD *)(v4 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v22 = *(_DWORD *)(v4 + 116);
      if ( (v22 & 2) != 0 )
      {
        *(_DWORD *)(v4 + 116) = v22 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v4 + 496), *(HWND *)(v4 + 504), *(HSPRITE *)(v4 + 512));
        v3 = 1;
      }
      if ( v13 )
      {
        *(_DWORD *)(v13 + 104) = v16;
        *(_DWORD *)(v13 + 108) = v17;
      }
      if ( !v3 )
      {
LABEL_32:
        if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
        {
          v23 = *(_DWORD *)(v4 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
          if ( v23 == 1 )
            bDeleteSurface(*(_QWORD *)v4);
        }
      }
      if ( ghsemSprite )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 266));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 266) = 0LL;
  }
}
