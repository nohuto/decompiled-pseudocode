/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C0064660
 * Callers:
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C005B0EC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0062FE8 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00700F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C010270C (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C0102750 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C00296D4 (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C00EEBB0 (GreSelectRedirectionBitmap.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026CCF0 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027B7DC (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v2; // ecx
  int v3; // ebp
  __int64 v4; // rsi
  SURFOBJ *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // r14
  __int64 v17; // rdi
  int v18; // r9d
  __int64 *ThreadWin32Thread; // rax
  int v20; // r14d
  int v21; // r15d
  HBITMAP v22; // r8
  struct PDEVOBJ *v23; // rdx
  HDEV v24; // rcx
  int v25; // eax
  int v26; // edi
  int v27; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= ~1u;
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
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 263));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 263) = 0LL;
    }
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v4 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v4 + 272));
      if ( (*(_DWORD *)(v4 + 324))-- != 1 )
        goto LABEL_32;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6, v8, v9) )
        PsGetThreadWin32Thread(CurrentThread);
      v16 = KeGetCurrentThread();
      v17 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14, v15)
        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v16)) != 0LL
        && (v17 = *ThreadWin32Thread) != 0 )
      {
        v20 = *(_DWORD *)(v17 + 104);
        v21 = *(_DWORD *)(v17 + 108);
        *(_QWORD *)(v17 + 104) = 0LL;
      }
      else
      {
        v20 = v27;
        v21 = v27;
      }
      if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
      {
        v22 = *(HBITMAP *)(v4 + 344);
        v23 = *(struct PDEVOBJ **)(v4 + 336);
        v24 = *(HDEV *)(v4 + 328);
        if ( (*(_DWORD *)(v4 + 116) & 2) == 0 || *(_DWORD *)(v4 + 492) && g_pDwmState )
          GreHintSpriteShape(v24, v23, v22, v4 + 352, *(_DWORD *)(v4 + 488), *(_DWORD *)(v4 + 492), 0);
        else
          GdiHintSpriteShapeDelayDelete(v24, (HWND)v23, v22, v18);
        *(_DWORD *)(v4 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v25 = *(_DWORD *)(v4 + 116);
      if ( (v25 & 2) != 0 )
      {
        *(_DWORD *)(v4 + 116) = v25 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v4 + 496), *(HWND *)(v4 + 504), *(HSPRITE *)(v4 + 512));
        v3 = 1;
      }
      if ( v17 )
      {
        *(_DWORD *)(v17 + 104) = v20;
        *(_DWORD *)(v17 + 108) = v21;
      }
      if ( !v3 )
      {
LABEL_32:
        if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
        {
          v26 = *(_DWORD *)(v4 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
          if ( v26 == 1 )
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
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((_QWORD *)this + 263));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 263) = 0LL;
  }
}
