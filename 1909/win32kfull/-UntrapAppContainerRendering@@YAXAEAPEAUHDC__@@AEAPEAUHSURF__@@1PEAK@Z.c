/*
 * XREFs of ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00AAE88
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0279180 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD53C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD580 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

void __fastcall UntrapAppContainerRendering(HDC *a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  HDC v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  HSURF *v12; // rdi
  struct SURFACE *v13; // rax
  HSURF v14; // rsi
  struct SURFACE *v15; // rbx
  char v16; // bl
  __int64 v17; // rax
  DCVISRGNSHARELOCK *v18; // rcx
  __int64 v19; // rax
  char v20; // [rsp+20h] [rbp-20h]
  char v21; // [rsp+20h] [rbp-20h]
  DC *v22[2]; // [rsp+30h] [rbp-10h] BYREF
  char v23; // [rsp+78h] [rbp+38h] BYREF

  if ( *a2 )
  {
    v8 = *a1;
    v22[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v22, v8);
    LOBYTE(v9) = 5;
    v10 = HmgShareLock(*a3, v9);
    LOBYTE(v11) = 5;
    v12 = (HSURF *)v10;
    v13 = (struct SURFACE *)HmgShareLock(*a2, v11);
    v14 = *v12;
    v15 = v13;
    DC::pSurface(v22[0], v13);
    DEC_SHARE_REF_CNT(v12);
    DEC_SHARE_REF_CNT(v15);
    GreDereferenceObject(v14, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v22[0] + 9) |= *a4;
    if ( (*((_DWORD *)v22[0] + 9) & 0x200) != 0 )
    {
      v16 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v16 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v23);
      v20 = 5;
      v17 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v20);
      if ( v17 )
        SURFACE::bDeleteSurface(v17, 0LL, 1LL);
      *((_QWORD *)v22[0] + 63) = 0LL;
      DC::vClearRendering(v22[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v18);
      if ( v16 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v21 = 5;
      v19 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v21);
      if ( v19 )
        SURFACE::bDeleteSurface(v19, 0LL, 1LL);
      *((_QWORD *)v22[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    if ( v22[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v22);
    v22[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
