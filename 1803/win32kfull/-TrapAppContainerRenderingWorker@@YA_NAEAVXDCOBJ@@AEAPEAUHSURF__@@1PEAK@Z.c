/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C009B400
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C009A7B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C009B3D0 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // si
  DC *v18; // rbx
  HDC *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  SURFACE *v24; // rdi
  __int64 v25; // rbx
  DC *v26; // r8
  DC *v27; // rcx
  __int64 v28; // rbx
  char v29; // r12
  __int64 v30; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  DCVISRGNSHARELOCK *v35; // rcx
  _BYTE v36[56]; // [rsp+30h] [rbp-38h] BYREF
  char v37; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  if ( gbDisableTrappedAcRendering )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  if ( ThreadWin32Thread )
  {
    if ( *(_BYTE *)(ThreadWin32Thread + 330) )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v37);
  v13 = *((_QWORD *)*a1 + 63);
  if ( !v13
    || (v14 = *(_QWORD *)(v13 + 640), v14 == PsGetCurrentProcess(v12, v11)) && *(int *)(v13 + 112) >= 0
    || (v18 = *a1, *((_QWORD *)*a1 + 60))
    && *((_DWORD *)v18 + 124)
    && !*((_DWORD *)v18 + 125)
    && (v28 = *((_QWORD *)v18 + 61), PsGetCurrentProcess(v12, v15) == v28) )
  {
    v17 = 1;
  }
  else
  {
    v19 = (HDC *)*a1;
    if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
    {
      v29 = 0;
      if ( !(unsigned int)GreGetLockCount(v19, v15, v16)
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphore(ghsemGreLock);
        v29 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v36);
      DC::vSetRendering(*a1);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                   *(HDC *)*a1,
                                   *(_DWORD *)(v13 + 56),
                                   *(_DWORD *)(v13 + 60),
                                   0,
                                   0LL,
                                   0LL);
      if ( CompatibleBitmapInternal )
      {
        LOBYTE(v30) = 5;
        v33 = HmgShareLock(**((_QWORD **)*a1 + 63), v30);
        LOBYTE(v34) = 5;
        v24 = (SURFACE *)v33;
        v25 = HmgShareLock(CompatibleBitmapInternal, v34);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v35);
        if ( v29 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        goto LABEL_15;
      }
      DC::vClearRendering(*a1);
      if ( v29 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v32);
    }
    else
    {
      v21 = GreCreateCompatibleBitmapInternal(*v19, *(_DWORD *)(v13 + 56), *(_DWORD *)(v13 + 60), 0, 0LL, 0LL);
      if ( v21 )
      {
        LOBYTE(v20) = 5;
        v22 = HmgShareLock(**((_QWORD **)*a1 + 63), v20);
        LOBYTE(v23) = 5;
        v24 = (SURFACE *)v22;
        v25 = HmgShareLock(v21, v23);
LABEL_15:
        *a2 = *(HSURF *)v24;
        *a3 = *(HSURF *)v25;
        INC_SHARE_REF_CNT(v24);
        v26 = *a1;
        if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v24) )
        {
          ++*(_DWORD *)(v25 + 324);
          v26 = *a1;
        }
        *((_QWORD *)v26 + 64) = *a2;
        v27 = *a1;
        *((_QWORD *)v27 + 63) = v25;
        DC::vInheritSurfaceDpiScale(v27);
        INC_SHARE_REF_CNT(v25);
        if ( a4 )
        {
          *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
          *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
        }
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v17 = 1;
        DEC_SHARE_REF_CNT(v25);
        DEC_SHARE_REF_CNT(v24);
        goto LABEL_10;
      }
    }
    v17 = 0;
  }
LABEL_10:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
  return v17;
}
