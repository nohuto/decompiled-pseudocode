/*
 * XREFs of ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00FA690
 * Callers:
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00EF144 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F9860 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0101F10 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00138D8 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00F9350 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00FA654 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00FE560 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FE630 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C01109A8 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C01210C0 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013FA44 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01F4264 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C021EE24 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllocations(
        DXGDEVICE *this,
        unsigned __int64 a2,
        void **j,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v6; // rax
  DXGDEVICE *v7; // r12
  struct DXGALLOCATION *v8; // r15
  int v9; // edi
  struct DXGRESOURCE *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DXGRESOURCE *v13; // rax
  __int64 v14; // rax
  struct DXGALLOCATION *v15; // rcx
  unsigned int v16; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION *v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // edi
  struct DXGPROCESS *v21; // rax
  __int64 v22; // rax
  struct DXGALLOCATION *v23; // r9
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  DXGOVERLAY *i; // rdi
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // edx
  struct _VIDMM_MULTI_ALLOC *v31; // r8
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v34; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rcx
  const GUID *v39; // r8
  int v40; // r9d
  unsigned int *v41; // rdi
  char v42; // si
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  struct _KTHREAD **v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  const GUID *v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  char *v61; // rdi
  _QWORD *v62; // rax
  struct _KTHREAD **v63; // rcx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  const GUID *v68; // r8
  void *v69; // rdx
  struct DXGALLOCATION *v70; // r14
  __int64 v71; // r13
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 *v76; // rax
  __int64 *v77; // rdi
  struct DXGALLOCATION *v78; // rdi
  int v79; // r12d
  __int64 v80; // rax
  __int64 v81; // rcx
  const GUID *v82; // r8
  int v83; // r9d
  __int64 v84; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v86; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v88; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v91; // esi
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r14
  __int64 v96; // rcx
  _QWORD *v97; // rax
  unsigned __int8 v98; // cl
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  struct DXGALLOCATION *v101; // rcx
  void **v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rcx
  struct DXGRESOURCE *v105; // r15
  int v106; // r13d
  __int64 v107; // rcx
  char v108; // si
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v112; // rax
  __int64 v113; // rbx
  unsigned int v114; // edx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  volatile signed __int32 *v119; // rcx
  PVOID v120; // rdi
  int v121; // eax
  struct DXGALLOCATION *v122; // r12
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // r14
  __int64 v127; // r15
  __int64 v128; // r13
  struct DXGPROCESS *v129; // rax
  struct DXGPROCESS *v130; // rbx
  char *v131; // rsi
  __int64 v132; // rcx
  const GUID *v133; // r8
  int v134; // r9d
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  void *v138; // rbx
  __int64 v139; // rsi
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rbx
  __int64 *v144; // rax
  __int64 *v145; // rdi
  __int64 v146; // rdi
  __int64 v147; // rax
  __int64 v148; // rcx
  const GUID *v149; // r8
  int v150; // r9d
  __int64 v151; // rcx
  unsigned __int8 v152; // r15
  __int64 v153; // rbx
  struct _KTHREAD *v154; // rbx
  __int64 v155; // rax
  int v156; // r14d
  __int64 v157; // rax
  int v158; // r14d
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // r12
  __int64 v163; // rcx
  _QWORD *v164; // rax
  unsigned __int8 v165; // cl
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  void *v168; // rcx
  __int64 v169; // rax
  const GUID *v170; // r8
  __int64 v171; // rax
  DXGALLOCATION *v172; // rdi
  DXGALLOCATION *v173; // rbx
  unsigned __int8 v174; // [rsp+40h] [rbp-C0h]
  char v175; // [rsp+40h] [rbp-C0h]
  int v176; // [rsp+44h] [rbp-BCh]
  struct DXGALLOCATION *v177; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGALLOCATION *v178; // [rsp+50h] [rbp-B0h]
  void **v179; // [rsp+58h] [rbp-A8h]
  DXGDEVICE *v180; // [rsp+60h] [rbp-A0h]
  struct DXGRESOURCE *v181; // [rsp+68h] [rbp-98h]
  unsigned int v182; // [rsp+70h] [rbp-90h] BYREF
  void **v183; // [rsp+78h] [rbp-88h]
  unsigned int v184; // [rsp+80h] [rbp-80h] BYREF
  void **v185; // [rsp+88h] [rbp-78h]
  __int64 v186; // [rsp+90h] [rbp-70h]
  BOOL v187; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  int v190; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGALLOCATION *v191; // [rsp+B8h] [rbp-48h]
  char v192; // [rsp+C0h] [rbp-40h]
  int v193; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v194; // [rsp+D0h] [rbp-30h]
  char v195; // [rsp+D8h] [rbp-28h]
  _BYTE v196[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v197[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v198[8]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+8h] BYREF
  char v200[8]; // [rsp+138h] [rbp+38h] BYREF
  struct _KAPC_STATE v201; // [rsp+140h] [rbp+40h] BYREF
  char v202; // [rsp+170h] [rbp+70h] BYREF

  v6 = *((_QWORD *)this + 2);
  v7 = this;
  v8 = a4;
  v180 = this;
  v9 = (int)j;
  P = a4;
  v10 = (struct DXGRESOURCE *)a2;
  v11 = *(_QWORD *)(v6 + 16);
  v176 = (int)j;
  v181 = (struct DXGRESOURCE *)a2;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 144)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 1268LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*((_DWORD *)v7 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v7 + 13));
  v13 = 0LL;
  if ( v9 )
    v13 = v10;
  if ( !v13 || (v179 = (void **)*((_QWORD *)v13 + 8)) == 0LL )
    v179 = (void **)&v202;
  v182 = 0;
  if ( v10 && v9 )
  {
    v14 = WdLogNewEntry5_WdTrace(v11, a2, j, a4);
    *(_QWORD *)(v14 + 24) = v10;
    a2 = *(_QWORD *)(*((_QWORD *)v10 + 1) + 40LL);
    *(_QWORD *)(v14 + 32) = a2;
  }
  LOBYTE(a2) = 0;
  v174 = 0;
  v15 = *(struct DXGALLOCATION **)(*((_QWORD *)v7 + 2) + 16LL);
  if ( *((_BYTE *)v15 + 185) && v9 && v10 && *((_DWORD *)v10 + 5) )
  {
    v16 = *((_DWORD *)v7 + 84);
    Current = DXGPROCESS::GetCurrent();
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 4152LL),
      *((_DWORD *)Current + 98),
      v16,
      *((_DWORD *)v10 + 5),
      0,
      0LL,
      a6);
    LOBYTE(a2) = 1;
    *((_DWORD *)v10 + 5) = 0;
    v174 = 1;
  }
  v177 = v8;
  v18 = v8;
  if ( v8 )
  {
    do
    {
      v178 = (struct DXGALLOCATION *)*((_QWORD *)v18 + 8);
      v19 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
      if ( *(_BYTE *)(v19 + 185) )
      {
        if ( !(_BYTE)a2 && *((_DWORD *)v18 + 24) )
        {
          v20 = *((_DWORD *)v7 + 84);
          v21 = DXGPROCESS::GetCurrent();
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 4152LL),
            *((_DWORD *)v21 + 98),
            v20,
            0,
            1u,
            &v177,
            a6);
        }
        *((_DWORD *)v18 + 24) = 0;
      }
      v22 = WdLogNewEntry5_WdTrace(v19, a2, j, a4);
      *(_QWORD *)(v22 + 24) = v18;
      *(_QWORD *)(v22 + 32) = *(_QWORD *)(*((_QWORD *)v18 + 1) + 40LL);
      v24 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
      if ( (v24 & 1) != 0 )
      {
        v25 = (v24 >> 6) & 0xF;
        if ( (unsigned int)v25 >= *((_DWORD *)v7 + 434) )
        {
          v26 = WdLogNewEntry5_WdAssertion(v25);
          *(_QWORD *)(v26 + 24) = 1364LL;
          WdLogEvent5_WdAssertion(v26);
        }
        DXGDEVICE::RemovePrimaryAllocation(v7, v18);
      }
      if ( (*(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) & 8) != 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v196, (struct DXGFASTMUTEX *const)(*((_QWORD *)v7 + 2) + 632LL), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v196);
        for ( i = (DXGOVERLAY *)*((_QWORD *)v7 + 47); i != (DXGDEVICE *)((char *)v7 + 376) && i; i = *(DXGOVERLAY **)i )
        {
          if ( *((struct DXGALLOCATION **)i + 6) == v18 )
            DXGOVERLAY::Destroy(i);
        }
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v196);
        if ( v196[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v196);
      }
      v28 = *((_QWORD *)v18 + 6);
      v29 = *(_DWORD *)(v28 + 4);
      if ( (v29 & 0x2000) != 0 && *((_QWORD *)v18 + 3) )
      {
        DXGDEVICE::RemoveDirectFlipAllocationFromList(v7, (v29 >> 6) & 0xF, v18);
        v28 = *((_QWORD *)v18 + 6);
      }
      v30 = *(_DWORD *)(v28 + 4);
      if ( (v30 & 0x2000) != 0 || (v30 & 2) != 0 || (v30 & 8) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)v7, (v30 >> 6) & 0xF, v18, v23);
      v31 = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v18 + 3);
      if ( v31 && (*((_DWORD *)v18 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v7 + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v7 + 2) + 552LL),
          v31);
        *((_DWORD *)v18 + 18) &= ~0x800u;
      }
      CurrentProcess = PsGetCurrentProcess();
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v34 = ProcessDxgProcess;
      if ( ProcessDxgProcess )
      {
        if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
        {
          ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v36 = ThreadProperty;
          if ( ThreadProperty )
          {
            ObfDereferenceObject(ThreadProperty);
            v34 = *v36;
          }
        }
      }
      v37 = v34 + 208;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v40 = *(_DWORD *)(v34 + 224);
          if ( v40 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v38, &EventBlockThread, v39, v40);
        }
        ExAcquirePushLockExclusiveEx(v34 + 208, 0LL);
      }
      v41 = (unsigned int *)v177;
      *(_QWORD *)(v34 + 216) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v34 + 232), v41[4]);
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v41);
      v8 = 0LL;
      *(_QWORD *)(v37 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v37, 0LL);
      KeLeaveCriticalRegion();
      v42 = 0;
      if ( a5 )
      {
        v43 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v43 + 160)
          && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v43 + 144)) )
        {
          v42 = 1;
          if ( *((_BYTE *)a5 + 80) )
            COREACCESS::Release((struct _KTHREAD ***)a5 + 5);
          if ( !*((_BYTE *)a5 + 32) )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44);
            v45[3] = 275LL;
            v45[4] = 4LL;
            v45[5] = (char *)a5 + 8;
            v45[6] = 0LL;
            v45[7] = 0LL;
            WdLogEvent5_WdCriticalError(v45);
          }
          v46 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v46[20] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v46);
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v177 + 11);
      if ( v42 )
      {
        if ( *((_BYTE *)a5 + 32) )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47);
          v48[3] = 275LL;
          v48[4] = 4LL;
          v48[5] = (char *)a5 + 8;
          v48[6] = 0LL;
          v48[7] = 0LL;
          WdLogEvent5_WdCriticalError(v48);
        }
        v49 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v49 + 160) )
        {
          if ( !KeReadStateEvent((PRKEVENT)(v49 + 48)) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v50, &EventBlockThread, v51, 72);
            KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3));
        }
        *((_BYTE *)a5 + 32) = 1;
        if ( *((_BYTE *)a5 + 80) )
          COREACCESS::AcquireShared((DXGADAPTER **)a5 + 5);
      }
      v52 = *((_QWORD *)v18 + 3);
      if ( v52 )
      {
        v53 = *((_QWORD *)v7 + 2);
        Object = 0LL;
        v54 = (*(__int64 (__fastcall **)(_QWORD, __int64, PVOID *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v53 + 544) + 8LL)
                                                                          + 168LL))(
                *(_QWORD *)(v53 + 552),
                v52,
                &Object,
                a6.Value);
        if ( v54 < 0 )
        {
          if ( v54 != -1071775486 )
          {
            v57 = WdLogNewEntry5_WdAssertion(v56);
            *(_QWORD *)(v57 + 24) = 1442LL;
            WdLogEvent5_WdAssertion(v57);
          }
          v58 = WdLogNewEntry5_WdTrace(v56, v55, j, a4);
          *(_QWORD *)(v58 + 24) = *((_QWORD *)v7 + 81);
          *(_QWORD *)(v58 + 32) = *((_QWORD *)v18 + 3);
          if ( a5 )
          {
            v59 = *((_QWORD *)a5 + 3);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v59 + 160)
              && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v59 + 144)) )
            {
              if ( *((_BYTE *)a5 + 80) )
                COREACCESS::Release((struct _KTHREAD ***)a5 + 5);
              v61 = (char *)a5 + 8;
              if ( !*((_BYTE *)a5 + 32) )
              {
                v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60);
                v62[3] = 275LL;
                v62[4] = 4LL;
                v62[5] = v61;
                v62[6] = 0LL;
                v62[7] = 0LL;
                WdLogEvent5_WdCriticalError(v62);
              }
              v63 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
              *((_BYTE *)a5 + 32) = 0;
              if ( KeGetCurrentThread() != v63[20] )
                DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v63);
              if ( Object )
              {
                if ( KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL) == 257 )
                {
                  DXGDEVICE::FlushScheduler(v7, 3u);
                  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
                }
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                + 544LL)
                                                                                    + 8LL)
                                                                        + 608LL))(
                  *(_QWORD *)(*((_QWORD *)v7 + 2) + 552LL),
                  *((_QWORD *)v18 + 3),
                  0LL,
                  4LL);
              }
              if ( *((_BYTE *)a5 + 32) )
              {
                v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64);
                v65[3] = 275LL;
                v65[4] = 4LL;
                v65[5] = v61;
                v65[6] = 0LL;
                v65[7] = 0LL;
                WdLogEvent5_WdCriticalError(v65);
              }
              v66 = *((_QWORD *)a5 + 3);
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v66 + 160) )
              {
                if ( !KeReadStateEvent((PRKEVENT)(v66 + 48)) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v67, &EventBlockThread, v68, 72);
                  KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
                }
                DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3));
              }
              *((_BYTE *)a5 + 32) = 1;
              if ( *((_BYTE *)a5 + 80) )
                COREACCESS::AcquireShared((DXGADAPTER **)a5 + 5);
            }
          }
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 544LL)
                                                                             + 8LL)
                                                                 + 160LL))(
            *(_QWORD *)(*((_QWORD *)v7 + 2) + 552LL),
            *((_QWORD *)v18 + 3),
            0LL,
            a6.Value);
        }
        *((_QWORD *)v18 + 3) = 0LL;
      }
      v15 = v177;
      v69 = (void *)*((_QWORD *)v177 + 4);
      if ( v69 )
      {
        j = v179;
        v179[v182++] = v69;
        *((_QWORD *)v15 + 4) = 0LL;
      }
      a2 = v174;
      v18 = v178;
      v177 = v178;
    }
    while ( v178 );
  }
  if ( v182 )
  {
    v70 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 59);
    v71 = *((_QWORD *)v7 + 2);
    v183 = v179;
    v178 = v70;
    v190 = -1;
    v191 = v8;
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      v192 = 1;
      v190 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v15, &EventProfilerEnter, (const GUID *)j, 5029);
    }
    else
    {
      v192 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v190, 5029);
    v72 = PsGetCurrentProcess();
    v73 = PsGetProcessDxgProcess(v72);
    v75 = v73;
    if ( v73 )
    {
      if ( (*(_BYTE *)(v73 + 323) & 4) != 0 )
      {
        v76 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v77 = v76;
        if ( v76 )
        {
          ObfDereferenceObject(v76);
          v75 = *v77;
        }
      }
    }
    v78 = (struct DXGALLOCATION *)(v75 + 120);
    v79 = (int)v8;
    if ( !v75 )
      v78 = v8;
    if ( v78 && *((struct _KTHREAD **)v78 + 1) == KeGetCurrentThread() )
    {
      v80 = WdLogNewEntry5_WdAssertion(v74);
      *(_QWORD *)(v80 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v80);
    }
    if ( v75 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v78, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v83 = *((_DWORD *)v78 + 4);
          if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v81, &EventBlockThread, v82, v83);
        }
        ExAcquirePushLockExclusiveEx(v78, 0LL);
      }
      v79 = 2;
      *((_QWORD *)v78 + 1) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v71 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v71 + 16) + 4256LL));
    CurrentIrql = KeGetCurrentIrql();
    v86 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v88 = WdLogNewEntry5_WdAssertion(v84);
        *(_QWORD *)(v88 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v88);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v84);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached()
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v86 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v86 )
        {
          v91 = *(_DWORD *)(v86 + 136);
LABEL_146:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v198,
            *(struct DXGADAPTER **)(v71 + 16));
          v95 = (*(int (__fastcall **)(struct DXGALLOCATION *, unsigned int *))(*(_QWORD *)(v71 + 16) + 600LL))(
                  v70,
                  &v182);
          if ( v198[0] )
            KeUnstackDetachProcess(&ApcState);
          v96 = KeGetCurrentIrql();
          if ( CurrentIrql != (_BYTE)v96 )
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v96);
            v97[3] = 275LL;
            v97[4] = 16LL;
            v97[5] = v71;
            v97[6] = CurrentIrql;
            v98 = KeGetCurrentIrql();
            v97[7] = v98;
            WdLogEvent5_WdCriticalError(v97);
          }
          if ( v86 && *(_DWORD *)(v86 + 136) != v91 )
          {
            v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v96);
            v99[3] = 275LL;
            v99[4] = 38LL;
            v99[5] = *(int *)(v86 + 136);
            v99[6] = v91;
            v99[7] = 0LL;
            WdLogEvent5_WdCriticalError(v99);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v71 + 16) + 4256LL));
          v100 = (_QWORD *)WdLogNewEntry5_WdTrace(v96, v92, v93, v94);
          v101 = v178;
          v100[3] = v95;
          v100[4] = v101;
          v100[5] = v182;
          v102 = v183;
          v100[6] = *v183;
          if ( (_DWORD)v95 )
          {
            v103 = WdLogNewEntry5_WdError(v102);
            *(_QWORD *)(v103 + 24) = v95;
            WdLogEvent5_WdError(v103);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v71 + 16));
          if ( v79 == 2 )
          {
            *((_QWORD *)v78 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v78, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190);
          if ( v192 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v104, &EventProfilerExit, (const GUID *)j, v190);
          v7 = v180;
          goto LABEL_161;
        }
      }
      else
      {
        v86 = 0LL;
      }
    }
    v91 = 0;
    goto LABEL_146;
  }
LABEL_161:
  v105 = v181;
  v106 = 0;
  v107 = 0LL;
  v108 = 1;
  v178 = 0LL;
  v175 = 1;
  if ( v181 )
  {
    if ( (*((_DWORD *)v181 + 1) & 1) != 0 )
    {
      v109 = *((_QWORD *)v181 + 7);
      if ( v109 )
      {
        v110 = *(_QWORD *)(v109 + 144);
        if ( v110 )
        {
          if ( *(DXGDEVICE **)(v110 + 72) == v7 && (*(_DWORD *)(v110 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v197,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)v105 + 7) + 144LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v197);
            v107 = *(_QWORD *)(*((_QWORD *)v105 + 7) + 144LL);
            *(_QWORD *)(v107 + 72) = 0LL;
            if ( v197[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v197);
          }
        }
        v112 = *((_QWORD *)v105 + 7);
        v113 = *(_QWORD *)(v112 + 128);
        v114 = *(_DWORD *)(v113 - 44);
        if ( (v114 & 2) != 0 )
        {
          if ( *(_DWORD *)(v112 + 124) != 1 )
          {
            v107 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
            if ( *(_DWORD *)(v107 + 256) <= 1u || !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v107) )
            {
              v115 = WdLogNewEntry5_WdAssertion(v107);
              *(_QWORD *)(v115 + 24) = 1558LL;
              WdLogEvent5_WdAssertion(v115);
              v114 = *(_DWORD *)(v113 - 44);
            }
          }
          if ( ((v114 >> 6) & 0xF) >= *((_DWORD *)v7 + 434) )
          {
            v116 = WdLogNewEntry5_WdAssertion(v107);
            *(_QWORD *)(v116 + 24) = 1559LL;
            WdLogEvent5_WdAssertion(v116);
            v114 = *(_DWORD *)(v113 - 44);
          }
          v117 = (v114 >> 6) & 0xF;
          if ( *((struct DXGRESOURCE **)v7 + v117 + 65) == v105 )
            *((_QWORD *)v7 + v117 + 65) = 0LL;
        }
        v118 = *((_QWORD *)v105 + 3);
        for ( j = 0LL; v118; j = (void **)(unsigned int)((_DWORD)j + 1) )
          v118 = *(_QWORD *)(v118 + 64);
        v119 = (volatile signed __int32 *)*((_QWORD *)v105 + 7);
        if ( _InterlockedExchangeAdd(v119 + 15, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v119, v179, (unsigned int)j);
        *((_QWORD *)v105 + 7) = 0LL;
        v107 = 0LL;
      }
      v108 = 0;
      v175 = 0;
    }
    else
    {
      v107 = *((_QWORD *)v181 + 7);
      v178 = (struct DXGALLOCATION *)v107;
    }
  }
  v184 = 0;
  v120 = P;
  v177 = (struct DXGALLOCATION *)P;
  if ( P )
  {
    while ( 1 )
    {
      v121 = *((_DWORD *)v120 + 18);
      v122 = (struct DXGALLOCATION *)*((_QWORD *)v120 + 8);
      if ( (v121 & 0x800) != 0 )
      {
        v123 = WdLogNewEntry5_WdAssertion(v107);
        *(_QWORD *)(v123 + 24) = 1611LL;
        WdLogEvent5_WdAssertion(v123);
        v121 = *((_DWORD *)v120 + 18);
      }
      if ( (v121 & 0x7FE) != 0 )
      {
        v124 = WdLogNewEntry5_WdAssertion(v107);
        *(_QWORD *)(v124 + 24) = 1612LL;
        WdLogEvent5_WdAssertion(v124);
      }
      v125 = *((_QWORD *)v120 + 6);
      if ( v125 )
      {
        if ( !v108 )
          goto LABEL_210;
        v126 = *(_QWORD *)(v125 + 8);
        if ( v126 )
        {
          v127 = *((_QWORD *)v180 + 81);
          v128 = *(_QWORD *)(*((_QWORD *)v180 + 2) + 544LL);
          v129 = DXGPROCESS::GetCurrent();
          v130 = v129;
          if ( v129 )
          {
            v131 = (char *)v129 + 144;
            if ( *((struct _KTHREAD **)v129 + 19) == KeGetCurrentThread() )
            {
              v130 = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v131, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v134 = *((_DWORD *)v131 + 4);
                  if ( v134 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v132, &EventBlockThread, v133, v134);
                }
                ExAcquirePushLockExclusiveEx(v131, 0LL);
              }
              *((_QWORD *)v131 + 1) = KeGetCurrentThread();
            }
            v108 = v175;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v128 + 8) + 128LL))(v127, 0LL, v126);
          v106 = 0;
          if ( v130 )
          {
            *((_QWORD *)v130 + 19) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v130 + 144, 0LL);
            KeLeaveCriticalRegion();
          }
          v105 = v181;
          *(_QWORD *)(*((_QWORD *)v120 + 6) + 8LL) = 0LL;
          v125 = *((_QWORD *)v120 + 6);
        }
        v107 = *(_QWORD *)(v125 + 16);
        if ( v107 )
        {
          v179[v184++] = (void *)v107;
          *(_QWORD *)(*((_QWORD *)v120 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v108 )
      {
LABEL_210:
        if ( !v105 )
        {
          v135 = WdLogNewEntry5_WdAssertion(v107);
          *(_QWORD *)(v135 + 24) = 1640LL;
          WdLogEvent5_WdAssertion(v135);
        }
        if ( (*((_DWORD *)v105 + 1) & 1) == 0 )
        {
          v136 = WdLogNewEntry5_WdAssertion(v107);
          *(_QWORD *)(v136 + 24) = 1641LL;
          WdLogEvent5_WdAssertion(v136);
        }
        if ( !v176 )
        {
          v137 = WdLogNewEntry5_WdAssertion(v107);
          *(_QWORD *)(v137 + 24) = 1642LL;
          WdLogEvent5_WdAssertion(v137);
        }
      }
      v138 = (void *)*((_QWORD *)v120 + 6);
      if ( (!v105 || (*((_DWORD *)v105 + 1) & 1) == 0) && v138 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*((DXGADAPTERALLOCATION **)v120 + 6));
        operator delete(v138);
      }
      v177 = v122;
      v120 = v122;
      if ( !v122 )
      {
        v107 = (__int64)v178;
        break;
      }
    }
  }
  if ( v108 )
  {
    v187 = 0;
    if ( v105 )
      v187 = v176 != 0;
    v186 = v107;
    if ( v184 )
    {
      v185 = v179;
    }
    else
    {
      v185 = 0LL;
      if ( !v176 || !v107 )
        goto LABEL_287;
    }
    v139 = *((_QWORD *)v180 + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v139 + 16) + 185LL) )
      goto LABEL_282;
    v193 = -1;
    v194 = 0LL;
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      v195 = 1;
      v193 = 5005;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v107, &EventProfilerEnter, (const GUID *)j, 5005);
    }
    else
    {
      v195 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v193, 5005);
    v140 = PsGetCurrentProcess();
    v141 = PsGetProcessDxgProcess(v140);
    v143 = v141;
    if ( v141 )
    {
      if ( (*(_BYTE *)(v141 + 323) & 4) != 0 )
      {
        v144 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v145 = v144;
        if ( v144 )
        {
          ObfDereferenceObject(v144);
          v143 = *v145;
        }
      }
    }
    v146 = v143 + 120;
    if ( !v143 )
      v146 = 0LL;
    if ( v146 && *(struct _KTHREAD **)(v146 + 8) == KeGetCurrentThread() )
    {
      v147 = WdLogNewEntry5_WdAssertion(v142);
      *(_QWORD *)(v147 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v147);
    }
    if ( v143 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v146, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v150 = *(_DWORD *)(v146 + 16);
          if ( v150 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v148, &EventBlockThread, v149, v150);
        }
        ExAcquirePushLockExclusiveEx(v146, 0LL);
      }
      v106 = 2;
      *(_QWORD *)(v146 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v139 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v139 + 16) + 4256LL));
    v152 = KeGetCurrentIrql();
    v153 = 0LL;
    if ( v152 < 2u )
    {
      v154 = KeGetCurrentThread();
      if ( !v154 )
      {
        v155 = WdLogNewEntry5_WdAssertion(v151);
        *(_QWORD *)(v155 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v155);
      }
      v156 = PsGetCurrentProcessSessionId(v151);
      if ( v156
        && (unsigned int)PsGetThreadSessionId(v154) == v156
        && !IsThreadCrossSessionAttached()
        && (v157 = PsGetThreadWin32Thread(v154)) != 0
        && *(_QWORD *)v157 )
      {
        v153 = *(_QWORD *)(*(_QWORD *)v157 + 80LL);
        if ( v153 )
        {
          v158 = *(_DWORD *)(v153 + 136);
LABEL_264:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v200,
            *(struct DXGADAPTER **)(v139 + 16));
          v162 = (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(v139 + 16) + 344LL))(
                   *(_QWORD *)(*(_QWORD *)(v139 + 16) + 248LL),
                   &v184);
          if ( v200[0] )
            KeUnstackDetachProcess(&v201);
          v163 = KeGetCurrentIrql();
          if ( v152 != (_BYTE)v163 )
          {
            v164 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v163);
            v164[3] = 275LL;
            v164[4] = 16LL;
            v164[5] = v139;
            v164[6] = v152;
            v165 = KeGetCurrentIrql();
            v164[7] = v165;
            WdLogEvent5_WdCriticalError(v164);
          }
          if ( v153 && *(_DWORD *)(v153 + 136) != v158 )
          {
            v166 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v163);
            v166[3] = 275LL;
            v166[4] = 38LL;
            v166[5] = *(int *)(v153 + 136);
            v166[6] = v158;
            v166[7] = 0LL;
            WdLogEvent5_WdCriticalError(v166);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v139 + 16) + 4256LL));
          v167 = (_QWORD *)WdLogNewEntry5_WdTrace(v163, v159, v160, v161);
          v167[3] = v162;
          v167[4] = v187;
          v167[5] = v186;
          v167[6] = v184;
          if ( v185 )
            v168 = *v185;
          else
            v168 = 0LL;
          v167[7] = v168;
          if ( (_DWORD)v162 )
          {
            v169 = WdLogNewEntry5_WdError(v168);
            *(_QWORD *)(v169 + 24) = v162;
            WdLogEvent5_WdError(v169);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v139 + 16));
          if ( v106 == 2 )
          {
            *(_QWORD *)(v146 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v146, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v193);
          if ( v195 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v107, &EventProfilerExit, v170, v193);
          v105 = v181;
LABEL_282:
          if ( v105 && !v176 )
          {
            if ( (*((_DWORD *)v105 + 1) & 1) != 0 )
            {
              v171 = WdLogNewEntry5_WdAssertion(v107);
              *(_QWORD *)(v171 + 24) = 1690LL;
              WdLogEvent5_WdAssertion(v171);
            }
            *((_QWORD *)v105 + 7) = v186;
          }
          goto LABEL_287;
        }
      }
      else
      {
        v153 = 0LL;
      }
    }
    v158 = 0;
    goto LABEL_264;
  }
LABEL_287:
  v172 = (DXGALLOCATION *)P;
  if ( P )
  {
    v173 = (DXGALLOCATION *)P;
    do
    {
      v172 = (DXGALLOCATION *)*((_QWORD *)v172 + 8);
      if ( v173 )
      {
        DXGALLOCATION::~DXGALLOCATION(v173);
        ExFreePoolWithTag(v173, 0);
      }
      v173 = v172;
    }
    while ( v172 );
  }
}
