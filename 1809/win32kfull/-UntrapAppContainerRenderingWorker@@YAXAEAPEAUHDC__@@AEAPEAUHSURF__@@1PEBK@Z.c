/*
 * XREFs of ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0057A10
 * Callers:
 *     UntrapAppContainerRenderingWrap @ 0x1C00579F0 (UntrapAppContainerRenderingWrap.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02601B0 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWorker(HDC *a1, HSURF *a2, HSURF *a3, const unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  HSURF v12; // rbx
  char v13; // bl
  __int64 v14; // rax
  DCVISRGNSHARELOCK *v15; // rcx
  __int64 v16; // rax
  char v17; // [rsp+20h] [rbp-A8h]
  char v18; // [rsp+20h] [rbp-A8h]
  _BYTE v19[32]; // [rsp+30h] [rbp-98h] BYREF
  HSURF *v20; // [rsp+50h] [rbp-78h]
  DC *v21[6]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp-40h] BYREF
  struct SURFACE *v23; // [rsp+A8h] [rbp-20h]
  char v24; // [rsp+D8h] [rbp+10h] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v21, *a1);
    SURFREF::SURFREF((SURFREF *)v19);
    SURFREF::SURFREF((SURFREF *)v22);
    LOBYTE(v8) = 5;
    v9 = HmgShareLock(*a3, v8);
    v10 = (__int64)*a2;
    LOBYTE(v11) = 5;
    v20 = (HSURF *)v9;
    v23 = (struct SURFACE *)HmgShareLock(v10, v11);
    v12 = *v20;
    DC::pSurface(v21[0], v23);
    DEC_SHARE_REF_CNT(v20);
    v20 = 0LL;
    DEC_SHARE_REF_CNT(v23);
    v23 = 0LL;
    GreDereferenceObject(v12, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v21[0] + 9) |= *a4;
    if ( (*((_DWORD *)v21[0] + 9) & 0x200) != 0 )
    {
      v13 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v13 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v24);
      v17 = 5;
      v14 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v17);
      if ( v14 )
        SURFACE::bDeleteSurface(v14, 0LL, 1LL);
      *((_QWORD *)v21[0] + 63) = 0LL;
      DC::vClearRendering(v21[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v15);
      if ( v13 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v18 = 5;
      v16 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v18);
      if ( v16 )
        SURFACE::bDeleteSurface(v16, 0LL, 1LL);
      *((_QWORD *)v21[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v23 )
      DEC_SHARE_REF_CNT(v23);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v22);
    if ( v20 )
      DEC_SHARE_REF_CNT(v20);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v19);
    DCOBJ::~DCOBJ((DCOBJ *)v21);
  }
}
