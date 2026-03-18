/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20
 * Callers:
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A4850 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00AAE88 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00AAED0 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00ACE88 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00BA080 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C002FB44 (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C00CF9B0 (GreSelectRedirectionBitmap.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026C5C0 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027B11C (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
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
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD *v14; // r14
  __int64 v15; // rdi
  int v16; // r9d
  __int64 *ThreadWin32Thread; // rax
  int v18; // r14d
  int v19; // r15d
  HBITMAP v20; // r8
  struct PDEVOBJ *v21; // rdx
  HDEV v22; // rcx
  int v23; // eax
  int v24; // edi
  int v25; // [rsp+70h] [rbp+8h]

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
      if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6, v8) )
        PsGetThreadWin32Thread(CurrentThread);
      v14 = KeGetCurrentThread();
      v15 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11, v13)
        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v14)) != 0LL
        && (v15 = *ThreadWin32Thread) != 0 )
      {
        v18 = *(_DWORD *)(v15 + 104);
        v19 = *(_DWORD *)(v15 + 108);
        *(_QWORD *)(v15 + 104) = 0LL;
      }
      else
      {
        v18 = v25;
        v19 = v25;
      }
      if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
      {
        v20 = *(HBITMAP *)(v4 + 344);
        v21 = *(struct PDEVOBJ **)(v4 + 336);
        v22 = *(HDEV *)(v4 + 328);
        if ( (*(_DWORD *)(v4 + 116) & 2) == 0 || *(_DWORD *)(v4 + 492) && g_pDwmState )
          GreHintSpriteShape(v22, v21, v20, v4 + 352, *(_DWORD *)(v4 + 488), *(_DWORD *)(v4 + 492), 0);
        else
          GdiHintSpriteShapeDelayDelete(v22, (HWND)v21, v20, v16);
        *(_DWORD *)(v4 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v23 = *(_DWORD *)(v4 + 116);
      if ( (v23 & 2) != 0 )
      {
        *(_DWORD *)(v4 + 116) = v23 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v4 + 496), *(HWND *)(v4 + 504), *(HSPRITE *)(v4 + 512));
        v3 = 1;
      }
      if ( v15 )
      {
        *(_DWORD *)(v15 + 104) = v18;
        *(_DWORD *)(v15 + 108) = v19;
      }
      if ( !v3 )
      {
LABEL_32:
        if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
        {
          v24 = *(_DWORD *)(v4 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
          if ( v24 == 1 )
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
