/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00700F0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B5A8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C00700D0 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0043E6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006369C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00636E0 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0064660 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C010FD5C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  char v4; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  DC *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  SURFACE *v28; // rdi
  struct SURFACE *v29; // rbx
  DC *v30; // r8
  __int64 v31; // rbx
  char v32; // bp
  __int64 v33; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  DCVISRGNSHARELOCK *v38; // rcx
  _BYTE v39[16]; // [rsp+30h] [rbp-38h] BYREF
  char v40; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  if ( gbDisableTrappedAcRendering )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 328) & 4) != 0 )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v40);
  v18 = *((_QWORD *)*a1 + 62);
  if ( !v18
    || (v19 = *(_QWORD *)(v18 + 640), v19 == PsGetCurrentProcess(v15, v14, v16, v17)) && *(int *)(v18 + 112) >= 0
    || (v23 = *a1, *((_QWORD *)*a1 + 59))
    && *((_DWORD *)v23 + 122)
    && !*((_DWORD *)v23 + 123)
    && (v31 = *((_QWORD *)v23 + 60), PsGetCurrentProcess(v15, v20, v21, v22) == v31) )
  {
    v4 = 1;
  }
  else
  {
    if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
    {
      v32 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphore(ghsemGreLock);
        v32 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v39);
      DC::vSetRendering(*a1);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                   *(HDC *)*a1,
                                   *(_DWORD *)(v18 + 56),
                                   *(_DWORD *)(v18 + 60),
                                   0,
                                   0LL,
                                   0LL);
      if ( !CompatibleBitmapInternal )
      {
        DC::vClearRendering(*a1);
        if ( v32 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v35);
        goto LABEL_10;
      }
      LOBYTE(v33) = 5;
      v36 = HmgShareLock(**((_QWORD **)*a1 + 62), v33);
      LOBYTE(v37) = 5;
      v28 = (SURFACE *)v36;
      v29 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v37);
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v38);
      if ( v32 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      goto LABEL_15;
    }
    v25 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, *(_DWORD *)(v18 + 56), *(_DWORD *)(v18 + 60), 0, 0LL, 0LL);
    if ( v25 )
    {
      LOBYTE(v24) = 5;
      v26 = HmgShareLock(**((_QWORD **)*a1 + 62), v24);
      LOBYTE(v27) = 5;
      v28 = (SURFACE *)v26;
      v29 = (struct SURFACE *)HmgShareLock(v25, v27);
LABEL_15:
      *a2 = *(HSURF *)v28;
      *a3 = *(HSURF *)v29;
      INC_SHARE_REF_CNT(v28);
      v30 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v28) )
      {
        ++*((_DWORD *)v29 + 81);
        v30 = *a1;
      }
      *((_QWORD *)v30 + 63) = *a2;
      DC::pSurface(*a1, v29);
      INC_SHARE_REF_CNT(v29);
      if ( a4 )
      {
        *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
        *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
      }
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v4 = 1;
      DEC_SHARE_REF_CNT(v29);
      DEC_SHARE_REF_CNT(v28);
    }
  }
LABEL_10:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
  return v4;
}
