/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00BA080
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0031A18 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C00BA060 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0087E70 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD53C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD580 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  char v4; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  DC *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  SURFACE *v27; // rdi
  struct SURFACE *v28; // rbx
  DC *v29; // r8
  __int64 v30; // rbx
  char v31; // bp
  __int64 v32; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  DCVISRGNSHARELOCK *v37; // rcx
  _BYTE v38[16]; // [rsp+30h] [rbp-38h] BYREF
  char v39; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  if ( gbDisableTrappedAcRendering )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10);
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 328) & 4) != 0 )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39);
  v17 = *((_QWORD *)*a1 + 62);
  if ( !v17
    || (v18 = *(_QWORD *)(v17 + 640), v18 == PsGetCurrentProcess(v14, v13, v15, v16)) && *(int *)(v17 + 112) >= 0
    || (v22 = *a1, *((_QWORD *)*a1 + 59))
    && *((_DWORD *)v22 + 122)
    && !*((_DWORD *)v22 + 123)
    && (v30 = *((_QWORD *)v22 + 60), PsGetCurrentProcess(v14, v19, v20, v21) == v30) )
  {
    v4 = 1;
  }
  else
  {
    if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
    {
      v31 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphore(ghsemGreLock);
        v31 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v38);
      DC::vSetRendering(*a1);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
      if ( !CompatibleBitmapInternal )
      {
        DC::vClearRendering(*a1);
        if ( v31 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v34);
        goto LABEL_10;
      }
      LOBYTE(v32) = 5;
      v35 = HmgShareLock(**((_QWORD **)*a1 + 62), v32);
      LOBYTE(v36) = 5;
      v27 = (SURFACE *)v35;
      v28 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v36);
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v37);
      if ( v31 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      goto LABEL_15;
    }
    v24 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
    if ( v24 )
    {
      LOBYTE(v23) = 5;
      v25 = HmgShareLock(**((_QWORD **)*a1 + 62), v23);
      LOBYTE(v26) = 5;
      v27 = (SURFACE *)v25;
      v28 = (struct SURFACE *)HmgShareLock(v24, v26);
LABEL_15:
      *a2 = *(HSURF *)v27;
      *a3 = *(HSURF *)v28;
      INC_SHARE_REF_CNT(v27);
      v29 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v27) )
      {
        ++*((_DWORD *)v28 + 81);
        v29 = *a1;
      }
      *((_QWORD *)v29 + 63) = *a2;
      DC::pSurface(*a1, v28);
      INC_SHARE_REF_CNT(v28);
      if ( a4 )
      {
        *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
        *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
      }
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v4 = 1;
      DEC_SHARE_REF_CNT(v28);
      DEC_SHARE_REF_CNT(v27);
    }
  }
LABEL_10:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
  return v4;
}
