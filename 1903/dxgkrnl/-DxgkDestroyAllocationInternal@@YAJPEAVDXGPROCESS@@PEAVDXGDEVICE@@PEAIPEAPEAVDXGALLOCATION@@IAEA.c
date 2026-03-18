/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113C70
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114D80 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0001C00 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001D54 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003810 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000388C (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003AD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000D570 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D6C0 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023AD0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C003BC90 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00C6B70 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00C9464 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00C9564 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00CBAAC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00CBAD8 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00CBB48 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00CBC9C (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00CBD44 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CCDC0 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0113440 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0115460 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0121F80 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C014C8D4 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0156B3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01F0EBC (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01F10DC (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C020878C (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0223F94 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0258F10 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *a2,
        char *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        unsigned int **a6,
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  const struct DXGALLOCATION *v30; // rdi
  unsigned int v31; // edx
  __int64 v32; // rax
  int v33; // eax
  volatile signed __int64 *v34; // rdi
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // r13d
  __int64 v47; // rdx
  ADAPTER_DISPLAY *v48; // rcx
  __int64 v49; // r14
  struct DXGRESOURCE *v50; // rdi
  __int64 v51; // rax
  struct DXGALLOCATION *v52; // rdi
  char v53; // r12
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // r8d
  unsigned int v58; // r8d
  ADAPTER_DISPLAY *v59; // rcx
  __int64 v60; // rax
  bool v61; // r14
  unsigned int v62; // r12d
  struct DXGALLOCATION **v63; // r14
  struct DXGALLOCATION *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r8d
  unsigned int v68; // r8d
  __int64 v69; // r9
  int v70; // r12d
  __int64 v71; // rax
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v79; // rcx
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned int v83; // edi
  __int64 v84; // rcx
  __int64 v85; // r14
  __int64 v86; // rax
  struct DXGALLOCATION *v87; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v89; // rdx
  __int64 v90; // r10
  __int64 v91; // r8
  unsigned int v92; // r9d
  ADAPTER_DISPLAY *v93; // r10
  unsigned __int8 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  struct DXGDEVICE *v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // r13
  struct DXGRESOURCE *v112; // r14
  unsigned int v113; // r12d
  unsigned int v114; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v116; // rcx
  unsigned int v117; // r13d
  struct DXGALLOCATION **v118; // r10
  struct DXGALLOCATION **v119; // rcx
  __int64 v120; // rdx
  struct DXGALLOCATION *v121; // rdi
  struct DXGRESOURCE *v122; // r14
  struct DXGALLOCATION *v123; // r9
  _QWORD *v124; // rax
  struct DXGALLOCATION *v125; // r9
  _QWORD *v126; // rax
  unsigned __int8 v127; // al
  struct DXGDEVICE *v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  struct DXGADAPTER *v133; // rbx
  char v134; // bl
  __int64 v135; // rax
  char v136; // [rsp+40h] [rbp-3C8h] BYREF
  unsigned __int8 v137; // [rsp+41h] [rbp-3C7h]
  char i; // [rsp+42h] [rbp-3C6h]
  bool v139; // [rsp+43h] [rbp-3C5h]
  char v140; // [rsp+44h] [rbp-3C4h]
  unsigned __int8 v141; // [rsp+45h] [rbp-3C3h] BYREF
  char v142; // [rsp+46h] [rbp-3C2h]
  char v143; // [rsp+47h] [rbp-3C1h]
  unsigned __int8 v144[4]; // [rsp+48h] [rbp-3C0h] BYREF
  unsigned int v145; // [rsp+4Ch] [rbp-3BCh]
  __int64 v146; // [rsp+50h] [rbp-3B8h]
  struct DXGRESOURCE *v147; // [rsp+58h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v148; // [rsp+60h] [rbp-3A8h] BYREF
  struct DXGALLOCATION *v149; // [rsp+68h] [rbp-3A0h]
  struct DXGALLOCATION **v150; // [rsp+70h] [rbp-398h]
  struct DXGPROCESS *v151; // [rsp+78h] [rbp-390h]
  struct DXGALLOCATION *v152; // [rsp+80h] [rbp-388h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v153; // [rsp+88h] [rbp-380h]
  __int64 v154; // [rsp+90h] [rbp-378h] BYREF
  struct DXGADAPTER *v155; // [rsp+98h] [rbp-370h]
  char v156; // [rsp+A0h] [rbp-368h]
  unsigned int v157; // [rsp+A8h] [rbp-360h]
  _BYTE v158[16]; // [rsp+B0h] [rbp-358h] BYREF
  __int64 v159; // [rsp+C0h] [rbp-348h]
  _BYTE v160[8]; // [rsp+D0h] [rbp-338h] BYREF
  char v161; // [rsp+D8h] [rbp-330h] BYREF
  DXGADAPTER *v162; // [rsp+E8h] [rbp-320h]
  char v163; // [rsp+F0h] [rbp-318h]
  int v164; // [rsp+F4h] [rbp-314h]
  __int64 v165; // [rsp+F8h] [rbp-310h]
  _BYTE v166[88]; // [rsp+118h] [rbp-2F0h] BYREF
  _QWORD v167[2]; // [rsp+170h] [rbp-298h] BYREF
  int v168; // [rsp+180h] [rbp-288h]
  _BYTE v169[400]; // [rsp+188h] [rbp-280h] BYREF
  _BYTE v170[160]; // [rsp+320h] [rbp-E8h] BYREF

  v150 = a4;
  v12 = (unsigned int *)a3;
  v151 = a1;
  v15.0 = a8.0;
  v153 = a10;
  if ( a11 )
  {
    v16 = 0;
    v157 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (const unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (const unsigned int *)MmUserProbeAddress;
      v12[v16++] = *v18;
      v157 = v16;
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
  v147 = 0LL;
  v20 = ValidateDestroyAllocation(
          (struct _KTHREAD **)a1,
          a2,
          a5,
          (struct _EX_RUNDOWN_REF *)*a6,
          v17,
          (struct _EX_RUNDOWN_REF **)a4,
          &v147);
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
  v146 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v170, (__int64)a2, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v170);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL))
      && *((_DWORD *)a2 + 82) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent(v29, v28) + 298) )
    {
      if ( v147 )
      {
        v30 = (const struct DXGALLOCATION *)*((_QWORD *)v147 + 3);
        for ( i = 1; v30; v30 = (const struct DXGALLOCATION *)*((_QWORD *)v30 + 8) )
        {
          v31 = *(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL);
          if ( (v31 & 1) == 0
            || *((_QWORD *)a2 + 216) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
            || v30 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, (v31 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
      }
      v27 = v146;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v170);
  }
  if ( v27 )
    v32 = *(_QWORD *)(v27 + 2552);
  else
    v32 = 0LL;
  v167[0] = v32;
  v167[1] = a1;
  if ( v32 )
    v33 = *(_DWORD *)(v32 + 80);
  else
    v33 = 0;
  v168 = 4 * v33;
  memset(v169, 0, sizeof(v169));
  v34 = *(volatile signed __int64 **)(*((_QWORD *)a2 + 2) + 16LL);
  v155 = (struct DXGADAPTER *)v34;
  _InterlockedIncrement64(v34 + 3);
  v154 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v34 + 15, 0LL);
  v156 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v160, (__int64)a2, 2, v35, 0);
  if ( v163 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36);
    v38[3] = 275LL;
    v38[4] = 4LL;
    v38[5] = &v161;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v162 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v162 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v39, &EventBlockThread, v40, 72);
      KeWaitForSingleObject((char *)v162 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared((__int64)v162, 0xFFFFFFFF, 0LL);
  }
  v164 = -1;
  v165 = 0LL;
  v163 = 1;
  if ( v166[72] )
    COREACCESS::AcquireShared((__int64)v166, 0xFFFFFFFF, 0LL);
  v41 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(_DWORD *)(v41 + 176) == 4 )
  {
    v42 = WdLogNewEntry5_WdEvent(v41);
    *(_QWORD *)(v42 + 24) = a2;
    WdLogEvent5_WdEvent(v42);
LABEL_46:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v160);
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v154);
LABEL_48:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v167, v43);
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 116) == 4 )
  {
    v44 = WdLogNewEntry5_WdEvent(v41);
    *(_QWORD *)(v44 + 24) = a2;
    WdLogEvent5_WdEvent(v44);
    DxgkDestroyClientAllocation(v45, a2, v17, a4, v147);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v142 = 0;
  v143 = 0;
  v137 = 0;
  v140 = 0;
  v139 = 0;
  v145 = 0;
  v149 = 0LL;
  v46 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v136);
  v148 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v158,
    (struct DXGFASTMUTEX *const *)v151);
  v49 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v159 = v49;
  v50 = v147;
  if ( v147 )
  {
    if ( *((struct DXGDEVICE **)v147 + 1) != a2 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v48, v47);
      *(_QWORD *)(v51 + 24) = 9303LL;
      WdLogEvent5_WdAssertion(v51);
    }
    v52 = (struct DXGALLOCATION *)*((_QWORD *)v50 + 3);
    if ( v52 )
    {
      v53 = i;
      while ( 1 )
      {
        v54 = *((_QWORD *)v52 + 6);
        v47 = *(_DWORD *)(v54 + 4) & 1;
        v55 = (unsigned int)v47 + ((*(_DWORD *)(v54 + 4) >> 1) & 1) + ((*(_DWORD *)(v54 + 4) >> 13) & 1);
        if ( (unsigned int)v55 > 1 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v55, v47);
          *(_QWORD *)(v56 + 24) = 9312LL;
          WdLogEvent5_WdAssertion(v56);
          v54 = *((_QWORD *)v52 + 6);
        }
        v57 = *(_DWORD *)(v54 + 4);
        if ( (v57 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v57 >> 6) & 0xF)
           || v49
           && (v59 = *(ADAPTER_DISPLAY **)(v49 + 2552)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v59, v58))
          && !v53 )
        {
          v137 = 1;
          v149 = v52;
          v60 = *((_QWORD *)v52 + 6);
          v46 = (*(_DWORD *)(v60 + 4) >> 6) & 0xF;
          v48 = (ADAPTER_DISPLAY *)v46;
          v145 = 1 << ((*(_DWORD *)(v60 + 4) >> 6) & 0xF);
          v61 = 0;
          goto LABEL_87;
        }
        v48 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v52 + 6) + 4LL);
        if ( ((unsigned __int8)v48 & 2) != 0 )
          break;
        v52 = (struct DXGALLOCATION *)*((_QWORD *)v52 + 8);
        if ( !v52 )
          goto LABEL_71;
      }
      v140 = 1;
    }
LABEL_71:
    v61 = 0;
LABEL_87:
    v50 = v147;
    goto LABEL_88;
  }
  if ( v17 )
  {
    v62 = 0;
    v63 = v150;
    while ( 1 )
    {
      v64 = *v63;
      if ( !*v63 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v48, v47);
        *(_QWORD *)(v65 + 24) = 9342LL;
        WdLogEvent5_WdAssertion(v65);
      }
      if ( *((struct DXGDEVICE **)v64 + 1) != a2 )
      {
        v66 = WdLogNewEntry5_WdAssertion(v48, v47);
        *(_QWORD *)(v66 + 24) = 9343LL;
        WdLogEvent5_WdAssertion(v66);
      }
      if ( *(_DWORD *)(v159 + 284) == 1297040209 )
      {
        v47 = *(unsigned int *)(*((_QWORD *)v64 + 6) + 4LL);
        if ( (v47 & 8) != 0 )
          break;
      }
      v67 = *(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL);
      if ( (v67 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(a2, (v67 >> 6) & 0xF)
         || (v48 = *(ADAPTER_DISPLAY **)(v69 + 2552)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v48, v68)) )
      {
        v137 = 1;
        v139 = v149 != 0LL;
        v149 = v64;
        v46 = (*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) >> 6) & 0xF;
        v48 = (ADAPTER_DISPLAY *)v46;
        v145 |= 1 << ((*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) >> 6) & 0xF);
      }
      ++v62;
      ++v63;
      if ( v62 >= a7 )
        goto LABEL_86;
    }
    v142 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)a2, ((unsigned int)v47 >> 6) & 0xF, v64) )
    {
LABEL_86:
      v61 = v139;
      goto LABEL_87;
    }
    v143 = 1;
    v137 = 1;
    v61 = v149 != 0LL;
    v149 = v64;
    v46 = (*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) >> 6) & 0xF;
    v48 = (ADAPTER_DISPLAY *)v46;
    v145 |= 1 << ((*(_DWORD *)(*((_QWORD *)v64 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_87;
  }
  v61 = 0;
LABEL_88:
  v70 = 0;
  if ( (*((_BYTE *)v151 + 299) & 8) == 0 )
    v70 = v137;
  LODWORD(v151) = v70;
  if ( !(_BYTE)v70 )
  {
    v85 = v146;
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v146 + 2552),
        a2,
        *((struct DXGALLOCATION **)v50 + 3),
        (struct COREDEVICEACCESS *)v160);
    goto LABEL_136;
  }
  if ( !v146 || !*(_QWORD *)(v146 + 2552) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v48, v47);
    *(_QWORD *)(v71 + 24) = 9395LL;
    WdLogEvent5_WdAssertion(v71);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v160);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v154);
  DXGDEVICE::FlushScheduler(a2, 5LL);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v167, v72);
  v73 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v136, 1);
  v77 = v73;
  if ( v73 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v146 + 276),
                                             &v148,
                                             0LL,
                                             0LL,
                                             0);
    v80 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v81 = WdLogNewEntry5_WdEvent(v79);
      *(_QWORD *)(v81 + 24) = v80;
      WdLogEvent5_WdEvent(v81);
    }
    if ( v148 )
    {
      if ( *((_QWORD *)v148 + 2) == *((_QWORD *)a2 + 2) )
      {
        *((_BYTE *)v148 + 1785) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v158);
      }
      else
      {
        v148 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v154);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v160);
    if ( *((_DWORD *)a2 + 116) == 4 )
    {
      v98 = WdLogNewEntry5_WdEvent(v82);
      *(_QWORD *)(v98 + 24) = a2;
      WdLogEvent5_WdEvent(v98);
      v100 = v148;
      if ( v148 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v158);
        *((_BYTE *)v100 + 1785) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v148 + 2), v148);
      }
      DxgkDestroyClientAllocation(v99, a2, a7, v150, v147);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v158);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v136);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v160);
      if ( !v156 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v83 = v145;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v167, (struct _KTHREAD **)a2, v145);
    v47 = *((_QWORD *)a2 + 2);
    if ( *((_QWORD *)a2 + 216) != *(_QWORD *)(v47 + 16) )
    {
      v85 = v146;
LABEL_136:
      if ( v140 || v142 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v162) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v160);
        if ( v143 )
        {
          v103 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v85 + 2552), v46, 0, 0x10u, 0);
          v107 = v103;
          if ( v103 < 0 )
          {
            v108 = WdLogNewEntry5_WdError(v105, v104, v106);
            *(_QWORD *)(v108 + 24) = v46;
            *(_QWORD *)(v108 + 32) = v107;
            WdLogEvent5_WdError(v108);
          }
        }
        DXGDEVICE::FlushScheduler(a2, 6LL);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v162) )
          COREDEVICEACCESS::AcquireSharedUncheck((__int64)v160);
      }
      v109 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v109 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v109 + 144)) )
      {
        v110 = WdLogNewEntry5_WdAssertion(v109, v47);
        *(_QWORD *)(v110 + 24) = 6164LL;
        WdLogEvent5_WdAssertion(v110);
      }
      if ( !*((_DWORD *)a2 + 18) )
        ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 13));
      v111 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      v112 = v147;
      if ( *(_BYTE *)(v111 + 185) )
      {
        if ( v147 )
          v113 = *((_DWORD *)v147 + 5);
        else
          v113 = 0;
        v114 = *((_DWORD *)a2 + 84);
        Current = DXGPROCESS::GetCurrent(v109, v47);
        v116 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v111 + 4144);
        v117 = a7;
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v116,
          *((_DWORD *)Current + 92),
          v114,
          v113,
          a7,
          v150,
          v15);
        if ( v112 )
          *((_DWORD *)v112 + 5) = 0;
        v118 = v150;
        if ( a7 )
        {
          v119 = v150;
          v120 = a7;
          do
          {
            *((_DWORD *)*v119++ + 24) = 0;
            --v120;
          }
          while ( v120 );
        }
        LOBYTE(v70) = (_BYTE)v151;
      }
      else
      {
        v117 = a7;
        v118 = v150;
      }
      if ( v112 )
      {
        DXGDEVICE::TerminateAllocations(
          a2,
          v112,
          1,
          *((struct DXGALLOCATION **)v112 + 3),
          (struct COREDEVICEACCESS *)v160,
          v15);
      }
      else
      {
        v152 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(a2, v118, v117, &v152);
        v121 = v152;
        if ( v152 )
        {
          v122 = (struct DXGRESOURCE *)*((_QWORD *)v152 + 5);
          if ( v122 )
          {
            do
            {
              v123 = v121;
              v124 = (_QWORD *)((char *)v121 + 64);
              v121 = (struct DXGALLOCATION *)*((_QWORD *)v121 + 8);
              *v124 = 0LL;
              DXGDEVICE::TerminateAllocations(a2, v122, 0, v123, (struct COREDEVICEACCESS *)v160, v15);
            }
            while ( v121 );
          }
          else
          {
            do
            {
              v125 = v121;
              v126 = (_QWORD *)((char *)v121 + 64);
              v121 = (struct DXGALLOCATION *)*((_QWORD *)v121 + 8);
              *v126 = 0LL;
              DXGDEVICE::TerminateAllocations(a2, 0LL, 0, v125, (struct COREDEVICEACCESS *)v160, v15);
            }
            while ( v121 );
          }
          v152 = v121;
        }
      }
      if ( v140 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(a2, (struct COREDEVICEACCESS *)v160);
      v127 = 0;
      v141 = 0;
      v144[0] = 0;
      if ( (_BYTE)v70 )
      {
        v128 = v148;
        if ( v148 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v146 + 2552),
            v148,
            (struct COREDEVICEACCESS *)v160,
            &v141,
            v144,
            v153);
          v127 = v141;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v167, v127);
        if ( v128 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v160);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v154);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v158);
          *((_BYTE *)v128 + 1785) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v128 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v148 + 2), v148);
          if ( v136 )
          {
            v136 = 0;
            DxgkReleaseSessionModeChangeLock(v130, v129);
          }
          if ( v141 && v144[0] )
            (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a2 + 5) + 96LL) + 192LL))();
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v158);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v136);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v160);
      if ( v156 )
      {
        v133 = v155;
        ExReleasePushLockSharedEx((char *)v155 + 120, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v133 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v155 + 2), v155);
      }
      v134 = v168;
      if ( (v168 & 2) != 0 )
      {
        v135 = WdLogNewEntry5_WdAssertion(v132, v131);
        *(_QWORD *)(v135 + 24) = 216LL;
        WdLogEvent5_WdAssertion(v135);
      }
      if ( (v134 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v167);
      return 0LL;
    }
    if ( ((v83 - 1) & v83) != 0 )
    {
      v85 = v146;
      ADAPTER_DISPLAY::DisableAllPrimaries(*(PERESOURCE ***)(v146 + 2552), (PERESOURCE **)v47);
      goto LABEL_136;
    }
    if ( v61 )
    {
      if ( v46 == -1 )
      {
        v86 = WdLogNewEntry5_WdAssertion(v84, v47);
        *(_QWORD *)(v86 + 24) = 9545LL;
        WdLogEvent5_WdAssertion(v86);
      }
      v85 = v146;
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v146 + 2552), a2, v46, 0);
      goto LABEL_136;
    }
    v85 = v146;
    v87 = v149;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(DXGADAPTER ***)(v146 + 2552),
                         (*(_DWORD *)(*((_QWORD *)v149 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == a2 )
    {
      v90 = *(_QWORD *)(v85 + 2552);
      if ( *(_QWORD *)(*(_QWORD *)(v90 + 16) + 2560LL) )
      {
        if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v90 + 16)) )
        {
          v94 = 1;
LABEL_119:
          ADAPTER_DISPLAY::DisableMPOPlanes(v93, v92, v94);
          goto LABEL_120;
        }
        if ( *(_DWORD *)(v91 + 2452) == 2200 )
        {
          v94 = 0;
          goto LABEL_119;
        }
      }
    }
LABEL_120:
    v95 = *((_QWORD *)v87 + 6);
    if ( (*(_DWORD *)(v95 + 4) & 1) == 0 )
    {
      v96 = WdLogNewEntry5_WdAssertion(v95, v89);
      *(_QWORD *)(v96 + 24) = 9572LL;
      WdLogEvent5_WdAssertion(v96);
      v95 = *((_QWORD *)v87 + 6);
    }
    if ( ((*(_DWORD *)(v95 + 4) >> 6) & 0xF) != v46 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v95, v89);
      *(_QWORD *)(v97 + 24) = 9573LL;
      WdLogEvent5_WdAssertion(v97);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(PERESOURCE ***)(v85 + 2552), a2, v87);
    goto LABEL_136;
  }
  v101 = WdLogNewEntry5_WdError(v75, v74, v76);
  *(_QWORD *)(v101 + 24) = v77;
  WdLogEvent5_WdError(v101);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v158);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v136);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v160);
  if ( v156 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v154);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v167, v102);
  return (unsigned int)v77;
}
