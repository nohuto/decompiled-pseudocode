/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009ACEC (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C009AD68 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009AE04 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C009AE88 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C008C040 (GreSelectRedirectionBitmap.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C023C400 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C024A5E0 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  int v4; // ecx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  int v14; // ebp
  int v15; // ecx
  __int64 v16; // rsi
  SURFOBJ *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *v24; // r14
  __int64 v25; // rdi
  __int64 *v26; // rax
  int v27; // r14d
  int v28; // r15d
  HBITMAP v29; // r8
  struct PDEVOBJ *v30; // rdx
  HDEV v31; // rcx
  int v32; // eax
  int v33; // edi
  int v34; // [rsp+78h] [rbp+10h]

  if ( *(_QWORD *)a2 )
  {
    v4 = *((_DWORD *)this + 18);
    if ( (v4 & 0x801000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)a2 + 40LL) &= ~2u;
      v4 = *((_DWORD *)this + 18);
    }
    if ( (v4 & 0x1000) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 12);
      if ( !v5 || (v6 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL || *v5 != *v6 )
      {
        if ( *(_QWORD *)a2 )
        {
          v7 = *(unsigned int *)(*(_QWORD *)a2 + 36LL);
          if ( (v7 & 0x200) != 0 )
          {
            if ( (v7 & 0x4000) == 0 )
            {
              CurrentThread = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached(v7, a2) )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                if ( ThreadWin32Thread )
                {
                  v10 = *ThreadWin32Thread;
                  if ( v10 )
                    *(_BYTE *)(v10 + 328) = 0;
                }
              }
            }
            v11 = (_QWORD *)*((_QWORD *)this + 10);
            if ( v11 && **(_QWORD **)a2 == *v11 && !*((_QWORD *)this + 15)
              || (v12 = (_QWORD *)*((_QWORD *)this + 12)) != 0LL && **(_QWORD **)a2 == *v12 && !*((_QWORD *)this + 18) )
            {
              GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
              v13 = *(_QWORD *)a2;
              v14 = 0;
              *(_DWORD *)(v13 + 40) &= 0xFFFFFFFC;
              v15 = *(_DWORD *)(v13 + 36);
              if ( (v15 & 0x4000) != 0 )
              {
                v16 = *(_QWORD *)(v13 + 504);
                if ( *(_QWORD *)(v16 + 248) || (*(_DWORD *)(v16 + 116) & 1) != 0 )
                {
                  EngLockSurface(*(HSURF *)(v16 + 32));
                  v15 = *(_DWORD *)(v13 + 36);
                  v16 = *(_QWORD *)(v13 + 504);
                }
                if ( (v15 & 0x40000) != 0 )
                {
                  v17 = 0LL;
                  if ( v16 )
                    v17 = (SURFOBJ *)(v16 + 24);
                  EngUnlockSurface(v17);
                  GreSelectRedirectionBitmap(*(_QWORD *)v13, *(_QWORD *)(v13 + 2512));
                  *(_DWORD *)(v13 + 36) &= ~0x40000u;
                  *(_QWORD *)(v13 + 2512) = 0LL;
                }
                if ( *(_QWORD *)(v16 + 248) || (*(_DWORD *)(v16 + 116) & 1) != 0 )
                {
                  GreAcquireSemaphore(ghsemSprite);
                  EngUnlockSurface((SURFOBJ *)(v16 + 24));
                  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v16 + 272));
                  if ( (*(_DWORD *)(v16 + 324))-- != 1 )
                    goto LABEL_52;
                  v21 = KeGetCurrentThread();
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
                    PsGetThreadWin32Thread(v21);
                  v24 = KeGetCurrentThread();
                  v25 = 0LL;
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22)
                    && (v26 = (__int64 *)PsGetThreadWin32Thread(v24)) != 0LL
                    && (v25 = *v26) != 0 )
                  {
                    v27 = *(_DWORD *)(v25 + 104);
                    v28 = *(_DWORD *)(v25 + 108);
                    *(_QWORD *)(v25 + 104) = 0LL;
                  }
                  else
                  {
                    v28 = v34;
                    v27 = v34;
                  }
                  if ( (*(_DWORD *)(v16 + 112) & 0x2000000) != 0 )
                  {
                    v29 = *(HBITMAP *)(v16 + 344);
                    v30 = *(struct PDEVOBJ **)(v16 + 336);
                    v31 = *(HDEV *)(v16 + 328);
                    if ( (*(_DWORD *)(v16 + 116) & 2) == 0 || *(_DWORD *)(v16 + 492) && g_pDwmState )
                      GreHintSpriteShape(v31, v30, v29, v16 + 352, *(_DWORD *)(v16 + 488), *(_DWORD *)(v16 + 492), 0);
                    else
                      GdiHintSpriteShapeDelayDelete(v31, (HWND)v30, v29, 0);
                    *(_DWORD *)(v16 + 112) &= ~0x2000000u;
                    _InterlockedDecrement(&glDelayedHintShape);
                  }
                  v32 = *(_DWORD *)(v16 + 116);
                  if ( (v32 & 2) != 0 )
                  {
                    *(_DWORD *)(v16 + 116) = v32 & 0xFFFFFFFD;
                    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v16 + 272));
                    GreDeleteSpriteDelayDelete(*(HDEV *)(v16 + 496), *(HWND *)(v16 + 504), *(HSPRITE *)(v16 + 512));
                    v14 = 1;
                  }
                  if ( v25 )
                  {
                    *(_DWORD *)(v25 + 104) = v27;
                    *(_DWORD *)(v25 + 108) = v28;
                  }
                  if ( !v14 )
                  {
LABEL_52:
                    if ( *(_QWORD *)(v16 + 248) || (*(_DWORD *)(v16 + 116) & 1) != 0 )
                    {
                      v33 = *(_DWORD *)(v16 + 320);
                      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v16 + 272));
                      if ( v33 == 1 )
                        bDeleteSurface(*(_QWORD *)v16);
                    }
                  }
                  if ( ghsemSprite )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
                    GreReleaseSemaphoreInternal(ghsemSprite);
                  }
                }
              }
              else if ( (v15 & 0x40000) != 0 )
              {
                GreSelectRedirectionBitmap(*(_QWORD *)v13, *(_QWORD *)(v13 + 2512));
                *(_DWORD *)(v13 + 36) &= ~0x40000u;
                *(_QWORD *)(v13 + 2512) = 0LL;
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
              GreReleaseSemaphoreInternal(ghsemDCVisRgn);
            }
          }
        }
      }
    }
  }
}
