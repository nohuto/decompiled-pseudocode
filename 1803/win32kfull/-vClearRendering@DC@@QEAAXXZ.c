/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990
 * Callers:
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F01C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008FE50 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C008FE80 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C009B400 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C008C040 (GreSelectRedirectionBitmap.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C023C400 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C024A5E0 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
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
  HBITMAP v18; // r8
  struct PDEVOBJ *v19; // rdx
  HDEV v20; // rcx
  int v21; // eax
  int v22; // edi
  int v23; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= 0xFFFFFFFC;
  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 63);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      EngLockSurface(*(HSURF *)(v4 + 32));
      v2 = *((_DWORD *)this + 9);
      v4 = *((_QWORD *)this + 63);
    }
    if ( (v2 & 0x40000) != 0 )
    {
      v5 = 0LL;
      if ( v4 )
        v5 = (SURFOBJ *)(v4 + 24);
      EngUnlockSurface(v5);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 314));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 314) = 0LL;
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
        v17 = v23;
        v16 = v23;
      }
      if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
      {
        v18 = *(HBITMAP *)(v4 + 344);
        v19 = *(struct PDEVOBJ **)(v4 + 336);
        v20 = *(HDEV *)(v4 + 328);
        if ( (*(_DWORD *)(v4 + 116) & 2) == 0 || *(_DWORD *)(v4 + 492) && g_pDwmState )
          GreHintSpriteShape(v20, v19, v18, v4 + 352, *(_DWORD *)(v4 + 488), *(_DWORD *)(v4 + 492), 0);
        else
          GdiHintSpriteShapeDelayDelete(v20, (HWND)v19, v18, v14);
        *(_DWORD *)(v4 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v21 = *(_DWORD *)(v4 + 116);
      if ( (v21 & 2) != 0 )
      {
        *(_DWORD *)(v4 + 116) = v21 & 0xFFFFFFFD;
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
          v22 = *(_DWORD *)(v4 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
          if ( v22 == 1 )
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
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 314));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 314) = 0LL;
  }
}
