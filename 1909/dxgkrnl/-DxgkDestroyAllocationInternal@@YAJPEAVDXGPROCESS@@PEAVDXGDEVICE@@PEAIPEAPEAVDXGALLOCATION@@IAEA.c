/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F6790 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00021A0 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00023D0 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000391C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003998 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003BD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015280 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023B20 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C003BDF0 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00C78F0 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00CAEAC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00CC2AC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00CC2D8 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD270 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CFE5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00D0454 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D07B4 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00D1CE8 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF690 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F83F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0116200 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0150794 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C015A9FC (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01F152C (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01F174C (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C0208DFC (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0224604 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0259590 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *a2,
        char *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        char *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  unsigned int *v12; // r9
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v15; // ebx
  unsigned int v16; // r10d
  unsigned int v17; // r12d
  const unsigned int *v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v27; // rdi
  const struct DXGALLOCATION *v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  volatile signed __int64 *v32; // rdi
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r13d
  __int64 v45; // rdx
  ADAPTER_DISPLAY *v46; // rcx
  __int64 v47; // r14
  struct DXGRESOURCE *v48; // rdi
  __int64 v49; // rax
  struct DXGALLOCATION *v50; // rdi
  char v51; // r12
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  ADAPTER_DISPLAY *v57; // rcx
  __int64 v58; // rax
  bool v59; // r14
  unsigned int v60; // r12d
  struct DXGALLOCATION **v61; // r14
  struct DXGALLOCATION *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // r8d
  unsigned int v66; // r8d
  __int64 v67; // r9
  int v68; // r12d
  __int64 v69; // rax
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned int v81; // edi
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r14
  __int64 v85; // rax
  struct DXGALLOCATION *v86; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v88; // rdx
  __int64 v89; // r10
  __int64 v90; // r8
  unsigned int v91; // r9d
  ADAPTER_DISPLAY *v92; // r10
  unsigned __int8 v93; // r8
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  struct DXGDEVICE *v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rdx
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r13
  struct DXGRESOURCE *v113; // r14
  unsigned int v114; // r12d
  unsigned int v115; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v117; // rcx
  unsigned int v118; // r13d
  struct DXGALLOCATION **v119; // r10
  struct DXGALLOCATION **v120; // rcx
  __int64 v121; // rdx
  struct DXGALLOCATION *v122; // rdi
  struct DXGRESOURCE *v123; // r14
  struct DXGALLOCATION *v124; // r9
  _QWORD *v125; // rax
  struct DXGALLOCATION *v126; // r9
  _QWORD *v127; // rax
  unsigned __int8 v128; // al
  struct DXGDEVICE *v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  struct DXGADAPTER *v132; // rbx
  char v133; // bl
  __int64 v134; // rax
  char v135; // [rsp+40h] [rbp-3C8h] BYREF
  unsigned __int8 v136; // [rsp+41h] [rbp-3C7h]
  char i; // [rsp+42h] [rbp-3C6h]
  bool v138; // [rsp+43h] [rbp-3C5h]
  char v139; // [rsp+44h] [rbp-3C4h]
  unsigned __int8 v140; // [rsp+45h] [rbp-3C3h] BYREF
  char v141; // [rsp+46h] [rbp-3C2h]
  char v142; // [rsp+47h] [rbp-3C1h]
  unsigned __int8 v143[4]; // [rsp+48h] [rbp-3C0h] BYREF
  unsigned int v144; // [rsp+4Ch] [rbp-3BCh]
  __int64 v145; // [rsp+50h] [rbp-3B8h]
  struct DXGRESOURCE *v146; // [rsp+58h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v147; // [rsp+60h] [rbp-3A8h] BYREF
  struct DXGALLOCATION *v148; // [rsp+68h] [rbp-3A0h]
  struct DXGALLOCATION **v149; // [rsp+70h] [rbp-398h]
  struct DXGPROCESS *v150; // [rsp+78h] [rbp-390h]
  struct DXGALLOCATION *v151; // [rsp+80h] [rbp-388h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v152; // [rsp+88h] [rbp-380h]
  __int64 v153; // [rsp+90h] [rbp-378h] BYREF
  struct DXGADAPTER *v154; // [rsp+98h] [rbp-370h]
  char v155; // [rsp+A0h] [rbp-368h]
  unsigned int v156; // [rsp+A8h] [rbp-360h]
  _BYTE v157[16]; // [rsp+B0h] [rbp-358h] BYREF
  __int64 v158; // [rsp+C0h] [rbp-348h]
  _BYTE v159[8]; // [rsp+D0h] [rbp-338h] BYREF
  char v160; // [rsp+D8h] [rbp-330h] BYREF
  DXGADAPTER *v161; // [rsp+E8h] [rbp-320h]
  char v162; // [rsp+F0h] [rbp-318h]
  int v163; // [rsp+F4h] [rbp-314h]
  __int64 v164; // [rsp+F8h] [rbp-310h]
  _BYTE v165[88]; // [rsp+118h] [rbp-2F0h] BYREF
  _QWORD v166[2]; // [rsp+170h] [rbp-298h] BYREF
  int v167; // [rsp+180h] [rbp-288h]
  _BYTE v168[400]; // [rsp+188h] [rbp-280h] BYREF
  _BYTE v169[160]; // [rsp+320h] [rbp-E8h] BYREF

  v149 = a4;
  v12 = (unsigned int *)a3;
  v150 = a1;
  v15.0 = a8.0;
  v152 = a10;
  if ( a11 )
  {
    v16 = 0;
    v156 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (const unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (const unsigned int *)MmUserProbeAddress;
      v12[v16++] = *v18;
      v156 = v16;
    }
    *a6 = v12;
  }
  else
  {
    v17 = a7;
    if ( a7 )
    {
      v19 = a7;
      do
      {
        *v12 = *(unsigned int *)((char *)v12 + a9 - a3);
        ++v12;
        --v19;
      }
      while ( v19 );
    }
  }
  v146 = 0LL;
  v20 = ValidateDestroyAllocation(a1, a2, a5, *a6, v17, a4, &v146);
  if ( v20 == 255 )
    return 0LL;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  v27 = *((_QWORD *)a2 + 216);
  v145 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v169, (__int64)a2, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v169);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL))
      && *((_DWORD *)a2 + 82) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 298) )
    {
      if ( v146 )
      {
        v28 = (const struct DXGALLOCATION *)*((_QWORD *)v146 + 3);
        for ( i = 1; v28; v28 = (const struct DXGALLOCATION *)*((_QWORD *)v28 + 8) )
        {
          v29 = *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL);
          if ( (v29 & 1) == 0
            || *((_QWORD *)a2 + 216) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
            || v28 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, (v29 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
      }
      v27 = v145;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
  }
  if ( v27 )
    v30 = *(_QWORD *)(v27 + 2552);
  else
    v30 = 0LL;
  v166[0] = v30;
  v166[1] = a1;
  if ( v30 )
    v31 = *(_DWORD *)(v30 + 80);
  else
    v31 = 0;
  v167 = 4 * v31;
  memset(v168, 0, sizeof(v168));
  v32 = *(volatile signed __int64 **)(*((_QWORD *)a2 + 2) + 16LL);
  v154 = (struct DXGADAPTER *)v32;
  _InterlockedIncrement64(v32 + 3);
  v153 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v32 + 15, 0LL);
  v155 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v159, (__int64)a2, 2, v33, 0);
  if ( v162 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
    v36[3] = 275LL;
    v36[4] = 4LL;
    v36[5] = &v160;
    v36[6] = 0LL;
    v36[7] = 0LL;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v161 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v161 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v37, &EventBlockThread, v38, 72);
      KeWaitForSingleObject((char *)v161 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v161, 0xFFFFFFFFLL, 0LL);
  }
  v163 = -1;
  v164 = 0LL;
  v162 = 1;
  if ( v165[72] )
    COREACCESS::AcquireShared((__int64)v165, 0xFFFFFFFF, 0LL);
  v39 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(_DWORD *)(v39 + 176) == 4 )
  {
    v40 = WdLogNewEntry5_WdEvent(v39);
    *(_QWORD *)(v40 + 24) = a2;
    WdLogEvent5_WdEvent(v40);
LABEL_46:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
LABEL_48:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v166, v41);
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 116) == 4 )
  {
    v42 = WdLogNewEntry5_WdEvent(v39);
    *(_QWORD *)(v42 + 24) = a2;
    WdLogEvent5_WdEvent(v42);
    DxgkDestroyClientAllocation(v43, a2, v17, a4, v146);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v141 = 0;
  v142 = 0;
  v136 = 0;
  v139 = 0;
  v138 = 0;
  v144 = 0;
  v148 = 0LL;
  v44 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
  v147 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v157,
    (struct DXGFASTMUTEX *const *)v150);
  v47 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v158 = v47;
  v48 = v146;
  if ( v146 )
  {
    if ( *((struct DXGDEVICE **)v146 + 1) != a2 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v46, v45);
      *(_QWORD *)(v49 + 24) = 9344LL;
      WdLogEvent5_WdAssertion(v49);
    }
    v50 = (struct DXGALLOCATION *)*((_QWORD *)v48 + 3);
    if ( v50 )
    {
      v51 = i;
      while ( 1 )
      {
        v52 = *((_QWORD *)v50 + 6);
        v45 = *(_DWORD *)(v52 + 4) & 1;
        v53 = (unsigned int)v45 + ((*(_DWORD *)(v52 + 4) >> 1) & 1) + ((*(_DWORD *)(v52 + 4) >> 13) & 1);
        if ( (unsigned int)v53 > 1 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v53, v45);
          *(_QWORD *)(v54 + 24) = 9353LL;
          WdLogEvent5_WdAssertion(v54);
          v52 = *((_QWORD *)v50 + 6);
        }
        v55 = *(_DWORD *)(v52 + 4);
        if ( (v55 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v55 >> 6) & 0xF)
           || v47
           && (v57 = *(ADAPTER_DISPLAY **)(v47 + 2552)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v57, v56))
          && !v51 )
        {
          v136 = 1;
          v148 = v50;
          v58 = *((_QWORD *)v50 + 6);
          v44 = (*(_DWORD *)(v58 + 4) >> 6) & 0xF;
          v46 = (ADAPTER_DISPLAY *)v44;
          v144 = 1 << ((*(_DWORD *)(v58 + 4) >> 6) & 0xF);
          v59 = 0;
          goto LABEL_87;
        }
        v46 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v50 + 6) + 4LL);
        if ( ((unsigned __int8)v46 & 2) != 0 )
          break;
        v50 = (struct DXGALLOCATION *)*((_QWORD *)v50 + 8);
        if ( !v50 )
          goto LABEL_71;
      }
      v139 = 1;
    }
LABEL_71:
    v59 = 0;
LABEL_87:
    v48 = v146;
    goto LABEL_88;
  }
  if ( v17 )
  {
    v60 = 0;
    v61 = v149;
    while ( 1 )
    {
      v62 = *v61;
      if ( !*v61 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v63 + 24) = 9383LL;
        WdLogEvent5_WdAssertion(v63);
      }
      if ( *((struct DXGDEVICE **)v62 + 1) != a2 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v64 + 24) = 9384LL;
        WdLogEvent5_WdAssertion(v64);
      }
      if ( *(_DWORD *)(v158 + 284) == 1297040209 )
      {
        v45 = *(unsigned int *)(*((_QWORD *)v62 + 6) + 4LL);
        if ( (v45 & 8) != 0 )
          break;
      }
      v65 = *(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL);
      if ( (v65 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v65 >> 6) & 0xF)
         || (v46 = *(ADAPTER_DISPLAY **)(v67 + 2552)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v46, v66)) )
      {
        v136 = 1;
        v138 = v148 != 0LL;
        v148 = v62;
        v44 = (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF;
        v46 = (ADAPTER_DISPLAY *)v44;
        v144 |= 1 << ((*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF);
      }
      ++v60;
      ++v61;
      if ( v60 >= a7 )
        goto LABEL_86;
    }
    v141 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, ((unsigned int)v45 >> 6) & 0xF, v62) )
    {
LABEL_86:
      v59 = v138;
      goto LABEL_87;
    }
    v142 = 1;
    v136 = 1;
    v59 = v148 != 0LL;
    v148 = v62;
    v44 = (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF;
    v46 = (ADAPTER_DISPLAY *)v44;
    v144 |= 1 << ((*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_87;
  }
  v59 = 0;
LABEL_88:
  v68 = 0;
  if ( (*((_BYTE *)v150 + 299) & 8) == 0 )
    v68 = v136;
  LODWORD(v150) = v68;
  if ( !(_BYTE)v68 )
  {
    v84 = v145;
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v145 + 2552),
        a2,
        *((struct DXGALLOCATION **)v48 + 3),
        (struct COREDEVICEACCESS *)v159);
    goto LABEL_136;
  }
  if ( !v145 || !*(_QWORD *)(v145 + 2552) )
  {
    v69 = WdLogNewEntry5_WdAssertion(v46, v45);
    *(_QWORD *)(v69 + 24) = 9436LL;
    WdLogEvent5_WdAssertion(v69);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v159);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
  DXGDEVICE::FlushScheduler(a2, 5LL);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v166, v70);
  v71 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v135, 1);
  v75 = v71;
  if ( v71 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v145 + 276),
                                             &v147,
                                             0LL,
                                             0LL,
                                             0);
    v78 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v79 = WdLogNewEntry5_WdEvent(v77);
      *(_QWORD *)(v79 + 24) = v78;
      WdLogEvent5_WdEvent(v79);
    }
    if ( v147 )
    {
      if ( *((_QWORD *)v147 + 2) == *((_QWORD *)a2 + 2) )
      {
        *((_BYTE *)v147 + 1785) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v157);
      }
      else
      {
        v147 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v159);
    if ( *((_DWORD *)a2 + 116) == 4 )
    {
      v97 = WdLogNewEntry5_WdEvent(v80);
      *(_QWORD *)(v97 + 24) = a2;
      WdLogEvent5_WdEvent(v97);
      v99 = v147;
      if ( v147 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157);
        *((_BYTE *)v99 + 1785) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v147 + 2), v147);
      }
      DxgkDestroyClientAllocation(v98, a2, a7, v149, v146);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v157);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
      if ( !v155 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v81 = v144;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v166, (struct _KTHREAD **)a2, v144);
    v83 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 216) != *(_QWORD *)(v83 + 16) )
    {
      v84 = v145;
LABEL_136:
      if ( v139 || v141 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v161) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v159);
        if ( v142 )
        {
          v102 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v84 + 2552), v44, 0, 16, 0);
          v106 = v102;
          if ( v102 < 0 )
          {
            v107 = WdLogNewEntry5_WdError(v104, v103, v105);
            *(_QWORD *)(v107 + 24) = v44;
            *(_QWORD *)(v107 + 32) = v106;
            WdLogEvent5_WdError(v107);
          }
        }
        DXGDEVICE::FlushScheduler(a2, 6LL);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v161) )
          COREDEVICEACCESS::AcquireSharedUncheck((__int64)v159);
      }
      v108 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v108 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v108 + 144)) )
      {
        v111 = WdLogNewEntry5_WdAssertion(v110, v109);
        *(_QWORD *)(v111 + 24) = 6198LL;
        WdLogEvent5_WdAssertion(v111);
      }
      if ( !*((_DWORD *)a2 + 18) )
        ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 13));
      v112 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      v113 = v146;
      if ( *(_BYTE *)(v112 + 185) )
      {
        if ( v146 )
          v114 = *((_DWORD *)v146 + 5);
        else
          v114 = 0;
        v115 = *((_DWORD *)a2 + 84);
        Current = DXGPROCESS::GetCurrent();
        v117 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v112 + 4144);
        v118 = a7;
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v117,
          *((_DWORD *)Current + 92),
          v115,
          v114,
          a7,
          v149,
          v15);
        if ( v113 )
          *((_DWORD *)v113 + 5) = 0;
        v119 = v149;
        if ( a7 )
        {
          v120 = v149;
          v121 = a7;
          do
          {
            *((_DWORD *)*v120++ + 24) = 0;
            --v121;
          }
          while ( v121 );
        }
        LOBYTE(v68) = (_BYTE)v150;
      }
      else
      {
        v118 = a7;
        v119 = v149;
      }
      if ( v113 )
      {
        DXGDEVICE::TerminateAllocations(
          a2,
          v113,
          1,
          *((struct DXGALLOCATION **)v113 + 3),
          (struct COREDEVICEACCESS *)v159,
          v15);
      }
      else
      {
        v151 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(a2, v119, v118, &v151);
        v122 = v151;
        if ( v151 )
        {
          v123 = (struct DXGRESOURCE *)*((_QWORD *)v151 + 5);
          if ( v123 )
          {
            do
            {
              v124 = v122;
              v125 = (_QWORD *)((char *)v122 + 64);
              v122 = (struct DXGALLOCATION *)*((_QWORD *)v122 + 8);
              *v125 = 0LL;
              DXGDEVICE::TerminateAllocations(a2, v123, 0, v124, (struct COREDEVICEACCESS *)v159, v15);
            }
            while ( v122 );
          }
          else
          {
            do
            {
              v126 = v122;
              v127 = (_QWORD *)((char *)v122 + 64);
              v122 = (struct DXGALLOCATION *)*((_QWORD *)v122 + 8);
              *v127 = 0LL;
              DXGDEVICE::TerminateAllocations(a2, 0LL, 0, v126, (struct COREDEVICEACCESS *)v159, v15);
            }
            while ( v122 );
          }
          v151 = v122;
        }
      }
      if ( v139 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(a2, (struct COREDEVICEACCESS *)v159);
      v128 = 0;
      v140 = 0;
      v143[0] = 0;
      if ( (_BYTE)v68 )
      {
        v129 = v147;
        if ( v147 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v145 + 2552),
            v147,
            (struct COREDEVICEACCESS *)v159,
            &v140,
            v143,
            v152);
          v128 = v140;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v166, v128);
        if ( v129 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v159);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157);
          *((_BYTE *)v129 + 1785) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v129 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v147 + 2), v147);
          if ( v135 )
          {
            v135 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v140 && v143[0] )
            (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 96LL) + 192LL))();
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v157);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
      if ( v155 )
      {
        v132 = v154;
        ExReleasePushLockSharedEx((char *)v154 + 120, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v132 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v154 + 2), v154);
      }
      v133 = v167;
      if ( (v167 & 2) != 0 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v131, v130);
        *(_QWORD *)(v134 + 24) = 216LL;
        WdLogEvent5_WdAssertion(v134);
      }
      if ( (v133 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v166);
      return 0LL;
    }
    if ( ((v81 - 1) & v81) != 0 )
    {
      v84 = v145;
      ADAPTER_DISPLAY::DisableAllPrimaries(*(PERESOURCE ***)(v145 + 2552), (PERESOURCE **)v83);
      goto LABEL_136;
    }
    if ( v59 )
    {
      if ( v44 == -1 )
      {
        v85 = WdLogNewEntry5_WdAssertion(v82, v83);
        *(_QWORD *)(v85 + 24) = 9586LL;
        WdLogEvent5_WdAssertion(v85);
      }
      v84 = v145;
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v145 + 2552), a2, v44, 0);
      goto LABEL_136;
    }
    v84 = v145;
    v86 = v148;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(DXGADAPTER ***)(v145 + 2552),
                         (*(_DWORD *)(*((_QWORD *)v148 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == a2 )
    {
      v89 = *(_QWORD *)(v84 + 2552);
      if ( *(_QWORD *)(*(_QWORD *)(v89 + 16) + 2560LL) )
      {
        if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v89 + 16)) )
        {
          v93 = 1;
LABEL_119:
          ADAPTER_DISPLAY::DisableMPOPlanes(v92, v91, v93);
          goto LABEL_120;
        }
        if ( *(_DWORD *)(v90 + 2452) == 2200 )
        {
          v93 = 0;
          goto LABEL_119;
        }
      }
    }
LABEL_120:
    v94 = *((_QWORD *)v86 + 6);
    if ( (*(_DWORD *)(v94 + 4) & 1) == 0 )
    {
      v95 = WdLogNewEntry5_WdAssertion(v94, v88);
      *(_QWORD *)(v95 + 24) = 9613LL;
      WdLogEvent5_WdAssertion(v95);
      v94 = *((_QWORD *)v86 + 6);
    }
    if ( ((*(_DWORD *)(v94 + 4) >> 6) & 0xF) != v44 )
    {
      v96 = WdLogNewEntry5_WdAssertion(v94, v88);
      *(_QWORD *)(v96 + 24) = 9614LL;
      WdLogEvent5_WdAssertion(v96);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(PERESOURCE ***)(v84 + 2552), a2, v86);
    goto LABEL_136;
  }
  v100 = WdLogNewEntry5_WdError(v73, v72, v74);
  *(_QWORD *)(v100 + 24) = v75;
  WdLogEvent5_WdError(v100);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v157);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
  if ( v155 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v166, v101);
  return (unsigned int)v75;
}
