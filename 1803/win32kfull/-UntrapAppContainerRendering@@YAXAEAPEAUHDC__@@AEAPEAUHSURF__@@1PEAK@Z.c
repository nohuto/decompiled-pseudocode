/*
 * XREFs of ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008FE50
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02481F4 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRendering(HDC *a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  HDC v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  HSURF *v12; // rdi
  __int64 v13; // rax
  DC *v14; // r13
  __int64 v15; // rbx
  HSURF v16; // rbp
  DC *v17; // rcx
  char v18; // bl
  __int64 v19; // rax
  DCVISRGNSHARELOCK *v20; // rcx
  __int64 v21; // rax
  char v22; // [rsp+20h] [rbp-48h]
  char v23; // [rsp+20h] [rbp-48h]
  DC *v24[2]; // [rsp+30h] [rbp-38h] BYREF
  char v25; // [rsp+78h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v8 = *a1;
    v24[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v24, v8);
    LOBYTE(v9) = 5;
    v10 = HmgShareLock(*a3, v9);
    LOBYTE(v11) = 5;
    v12 = (HSURF *)v10;
    v13 = HmgShareLock(*a2, v11);
    v14 = v24[0];
    v15 = v13;
    v16 = *v12;
    v17 = v24[0];
    *((_QWORD *)v24[0] + 63) = v13;
    DC::vInheritSurfaceDpiScale(v17);
    DEC_SHARE_REF_CNT(v12);
    DEC_SHARE_REF_CNT(v15);
    GreDereferenceObject(v16);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v14 + 9) |= *a4;
    if ( (*((_DWORD *)v14 + 9) & 0x200) != 0 )
    {
      v18 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v18 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v25);
      v22 = 5;
      v19 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v22);
      if ( v19 )
        SURFACE::bDeleteSurface(v19, 0LL, 1LL);
      *((_QWORD *)v14 + 64) = 0LL;
      DC::vClearRendering(v14);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v20);
      if ( v18 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v23 = 5;
      v21 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v23);
      if ( v21 )
        SURFACE::bDeleteSurface(v21, 0LL, 1LL);
      *((_QWORD *)v14 + 64) = 0LL;
      *a2 = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v24);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
