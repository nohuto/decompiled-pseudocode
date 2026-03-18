/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011EBA0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C011B100 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C01215C8 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C022F5CC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0286E60 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B8F0 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00238D4 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0023B9C (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0023BC0 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C00240D4 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C0024A88 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C0042EEC (McTemplateK0pqPR1XR1.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0044D74 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1x @ 0x1C00451D8 (McTemplateK0pqPR1x.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C020B960 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C0228B80 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0269B04 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10)
{
  unsigned __int64 *v10; // rsi
  char v12; // r12
  struct DXGSYNCOBJECT **v13; // rax
  _BYTE *PoolWithTag; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  struct ADAPTER_RENDER *v20; // rbx
  struct DXGCONTEXT *v21; // r14
  struct DXGDEVICESYNCOBJECT **v22; // r13
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KEVENT *v27; // rbx
  struct _KEVENT *v28; // rbx
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v31; // rcx
  char v32; // bl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rax
  PERESOURCE *v44; // rbx
  __int64 v45; // r8
  unsigned int v46; // r15d
  __int64 v47; // r14
  struct DXGPROCESS *v48; // rdi
  char *v49; // rsi
  unsigned int v50; // ebx
  __int64 v51; // rcx
  const GUID *v52; // r8
  int v53; // r9d
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rdi
  unsigned int v57; // ecx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  const GUID *v73; // r8
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // r9d
  __int64 v78; // rax
  __int64 v79; // rax
  struct DXGCONTEXT *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  struct ADAPTER_RENDER *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  struct DXGCONTEXT *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  unsigned int v90; // ebx
  __int64 v91; // rcx
  const GUID *v92; // r8
  int v93; // r9d
  __int64 v94; // rax
  unsigned int v95; // ebx
  struct DXGPROCESS *v96; // rdi
  __int64 v97; // r8
  unsigned int v98; // ecx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rcx
  struct DXGCONTEXT *v105; // rdi
  __int64 v106; // rax
  struct DXGSYNCOBJECT **v107; // rdx
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  _QWORD *v112; // rax
  __int64 v113; // rcx
  _BYTE *v114; // r9
  unsigned int v115; // r10d
  __int64 v116; // rcx
  unsigned int v117; // r15d
  __int64 v118; // rbx
  size_t v119; // r8
  bool v120; // r12
  __int64 v121; // rax
  unsigned int v122; // r15d
  struct DXGCONTEXT *v123; // r13
  struct DXGSYNCOBJECT **v124; // rdx
  __int64 v125; // rdi
  __int64 v126; // rdx
  __int64 v127; // rcx
  _QWORD *v128; // rax
  __int64 v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  int v132; // eax
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  const GUID *v136; // r8
  int v137; // r9d
  __int64 v138; // rax
  __int64 v139; // rax
  int v140; // ecx
  unsigned __int64 v141; // r14
  struct DXGCONTEXT *v142; // r10
  __int64 v143; // r9
  __int64 v144; // rdi
  int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  struct DXGCONTEXT *v150; // r10
  _QWORD *v151; // rbx
  _QWORD *v152; // r12
  char *v153; // r13
  __int64 v154; // rdi
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // rsi
  struct DXGCONTEXT *v160; // rbx
  int v161; // eax
  __int64 v162; // rdx
  __int64 v163; // rcx
  const GUID *v164; // r8
  __int64 v165; // rdi
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-288h]
  char v170; // [rsp+50h] [rbp-258h]
  char v171; // [rsp+51h] [rbp-257h]
  PERESOURCE *v172; // [rsp+58h] [rbp-250h] BYREF
  char v173; // [rsp+60h] [rbp-248h]
  unsigned int v174; // [rsp+68h] [rbp-240h]
  __int64 v175; // [rsp+70h] [rbp-238h] BYREF
  int v176; // [rsp+78h] [rbp-230h]
  struct DXGPROCESS *v177; // [rsp+80h] [rbp-228h]
  PVOID v178; // [rsp+88h] [rbp-220h] BYREF
  _BYTE v179[32]; // [rsp+90h] [rbp-218h] BYREF
  int v180; // [rsp+B0h] [rbp-1F8h]
  DXGCONTEXT *v181; // [rsp+B8h] [rbp-1F0h] BYREF
  char v182; // [rsp+C0h] [rbp-1E8h]
  struct DXGCONTEXT *v183; // [rsp+C8h] [rbp-1E0h]
  unsigned int *v184; // [rsp+D0h] [rbp-1D8h]
  _BYTE v185[16]; // [rsp+D8h] [rbp-1D0h] BYREF
  struct DXGCONTEXT *v186; // [rsp+E8h] [rbp-1C0h] BYREF
  PVOID P; // [rsp+F0h] [rbp-1B8h]
  _BYTE v188[32]; // [rsp+F8h] [rbp-1B0h] BYREF
  unsigned int v189; // [rsp+118h] [rbp-190h]
  void *Src; // [rsp+120h] [rbp-188h]
  unsigned __int64 v191; // [rsp+128h] [rbp-180h] BYREF
  const unsigned __int64 *v192; // [rsp+130h] [rbp-178h]
  struct DXGSYNCOBJECT **i; // [rsp+138h] [rbp-170h]
  __int64 v194; // [rsp+140h] [rbp-168h] BYREF
  __int64 v195; // [rsp+148h] [rbp-160h] BYREF
  char v196; // [rsp+150h] [rbp-158h]
  struct DXGCONTEXT *v197; // [rsp+158h] [rbp-150h]
  __int64 v198; // [rsp+160h] [rbp-148h] BYREF
  char v199; // [rsp+168h] [rbp-140h]
  struct DXGADAPTERSYNCOBJECT *v200; // [rsp+170h] [rbp-138h] BYREF
  __int128 v201; // [rsp+178h] [rbp-130h] BYREF
  PVOID v202; // [rsp+188h] [rbp-120h]
  _BYTE v203[32]; // [rsp+190h] [rbp-118h] BYREF
  unsigned int v204; // [rsp+1B0h] [rbp-F8h]
  char v205[8]; // [rsp+1C0h] [rbp-E8h] BYREF
  _BYTE v206[16]; // [rsp+1C8h] [rbp-E0h] BYREF
  __int64 v207; // [rsp+1D8h] [rbp-D0h]
  char v208; // [rsp+1E0h] [rbp-C8h]
  int v209; // [rsp+1E4h] [rbp-C4h]
  __int64 v210; // [rsp+1E8h] [rbp-C0h]
  _BYTE v211[16]; // [rsp+208h] [rbp-A0h] BYREF
  __int64 v212; // [rsp+218h] [rbp-90h]
  __int64 v213; // [rsp+248h] [rbp-60h]
  char v214; // [rsp+250h] [rbp-58h]

  v10 = a3;
  v192 = a3;
  v184 = a2;
  v174 = a1;
  Src = a3;
  v191 = a4;
  v177 = a6;
  v197 = a6;
  v12 = 0;
  P = 0LL;
  v189 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v188;
    P = v188;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
      v13 = 0LL;
      goto LABEL_9;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    P = PoolWithTag;
  }
  v189 = a1;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * a1);
    PoolWithTag = P;
  }
  v13 = (struct DXGSYNCOBJECT **)PoolWithTag;
LABEL_9:
  i = v13;
  if ( !v13 )
    return 3221225495LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181, a5, (struct _KTHREAD **)a6, &v186, a8);
  if ( !v186 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v19[3] = a6;
    v19[4] = a5;
    LODWORD(v20) = -1073741811;
    v19[5] = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_13;
  }
  v21 = v186;
  v183 = v186;
  v171 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v186 + 2) + 16LL) + 16LL) + 185LL);
  v178 = 0LL;
  v180 = 0;
  v22 = 0LL;
  if ( v171 )
  {
    v22 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&v178, a1);
    if ( !v22 )
    {
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
      if ( P != v188 && P )
      {
        ExFreePoolWithTag(P, 0);
        return 3221225495LL;
      }
      return 3221225495LL;
    }
  }
  v23 = *((_QWORD *)v21 + 2);
  v175 = v23;
  v176 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185, (struct DXGDEVICE *)v23);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v205, *((_QWORD *)v21 + 2), 0, v24, a8);
  if ( !a8 )
  {
    if ( a9 )
    {
      v27 = *(struct _KEVENT **)(v23 + 16);
      if ( *(_DWORD *)(v23 + 328) == 2 )
        v28 = v27 + 4;
      else
        v28 = v27 + 3;
      if ( !KeReadStateEvent(v28) )
        KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL));
        v31 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
        if ( *(_DWORD *)(v31 + 136) == 1 )
        {
          DXGADAPTER::WakeUpAdapter(v31, 0xFFFFFFFFLL);
          v32 = 1;
        }
        else
        {
          v32 = 0;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, &EventBlockThread, v30, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 104), 1u);
        if ( v32 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v176 = 1;
    }
    else if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v21 + 2) + 104LL)) )
    {
      DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v185);
    }
    if ( v208 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v25);
      v33[3] = 275LL;
      v33[4] = 4LL;
      v33[5] = v206;
      v33[6] = 0LL;
      v33[7] = 0LL;
      WdLogEvent5_WdCriticalError(v33);
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v207 + 160) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v207 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v34, &EventBlockThread, v35, 72);
        KeWaitForSingleObject((PVOID)(v207 + 48), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v207, 0xFFFFFFFF, 0LL);
    }
    v209 = -1;
    v210 = 0LL;
    v208 = 1;
    v26 = *(unsigned int *)(v213 + 464);
    if ( (_DWORD)v26 != 1 )
      goto LABEL_58;
    if ( v214 )
    {
      COREACCESS::AcquireShared((__int64)v211, 0xFFFFFFFF, 0LL);
      v26 = *(unsigned int *)(v212 + 176);
      if ( (_DWORD)v26 != 1 )
      {
        COREACCESS::Release((COREACCESS *)v211);
LABEL_58:
        COREACCESS::Release((COREACCESS *)v206);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
        if ( v175 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
        if ( v178 != v179 && v178 )
          ExFreePoolWithTag(v178, 0);
        v178 = 0LL;
        v180 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
        if ( P != v188 && P )
          ExFreePoolWithTag(P, 0);
        return 3221226166LL;
      }
    }
    v23 = v175;
    v10 = (unsigned __int64 *)Src;
    v192 = (const unsigned __int64 *)Src;
  }
  Global = DXGGLOBAL::GetGlobal(v26, v25);
  v172 = (PERESOURCE *)Global;
  v173 = 0;
  if ( !Global )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v39 + 24) = 2313LL;
    WdLogEvent5_WdAssertion(v39);
    Global = (struct DXGGLOBAL *)v172;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v41, v40);
    *(_QWORD *)(v42 + 24) = 2318LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( v173 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40);
    v43[3] = 275LL;
    v43[4] = 4LL;
    v43[5] = &v172;
    v43[6] = 0LL;
    v43[7] = 0LL;
    WdLogEvent5_WdCriticalError(v43);
  }
  v44 = v172;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v44[43], 1u);
  v173 = 1;
  v170 = 0;
  v46 = 0;
  if ( v174 )
  {
    v47 = 0LL;
    v48 = v177;
    v49 = (char *)v177 + 184;
    while ( 1 )
    {
      v50 = v184[v47];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v49, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v53 = *((_DWORD *)v49 + 4);
          if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v51, &EventBlockThread, v52, v53);
        }
        ExAcquirePushLockSharedEx(v49, 0LL);
      }
      v54 = (v50 >> 6) & 0xFFFFFF;
      v55 = v50 >> 30;
      if ( (unsigned int)v54 < *((_DWORD *)v48 + 56)
        && (v56 = *((_QWORD *)v48 + 26), v57 = *(_DWORD *)(v56 + 16 * v54 + 8), v55 == ((v57 >> 5) & 3))
        && (v57 & 0x2000) == 0
        && (v57 & 0x1F) == 8 )
      {
        v58 = *(_QWORD *)(v56 + 16LL * (unsigned int)v54);
      }
      else
      {
        v58 = 0LL;
      }
      ExReleasePushLockSharedEx(v49, 0LL);
      KeLeaveCriticalRegion();
      if ( !v58 )
        break;
      if ( v22 )
        v22[v47] = 0LL;
      v62 = *(_DWORD *)(v58 + 192);
      if ( v62 == 5 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v60, v59);
        *(_QWORD *)(v63 + 24) = 1061LL;
        WdLogEvent5_WdAssertion(v63);
        v62 = *(_DWORD *)(v58 + 192);
      }
      if ( v62 == 6 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v60, v59);
        *(_QWORD *)(v64 + 24) = 1062LL;
        WdLogEvent5_WdAssertion(v64);
      }
      v12 = 1;
      if ( v170 )
      {
        v108 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
LABEL_174:
        v108[3] = v177;
LABEL_175:
        WdLogEvent5_WdError(v108);
        if ( v173 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
        if ( v175 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
        if ( v178 != v179 && v178 )
          ExFreePoolWithTag(v178, 0);
        v178 = 0LL;
        v180 = 0;
        goto LABEL_183;
      }
      v65 = *(_DWORD *)(v58 + 192);
      if ( v65 == 4 )
      {
        v108 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
        v108[3] = v177;
        v108[4] = v184[v46];
        v108[5] = v46;
        goto LABEL_175;
      }
      if ( v65 == 3 )
      {
        v66 = v174;
        if ( v174 != 1 )
        {
          v108 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
          v108[4] = v66;
          goto LABEL_174;
        }
      }
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v198, (struct DXGSYNCOBJECT *)v58);
      if ( v199 )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68, v67);
        v69[3] = 275LL;
        v69[4] = 4LL;
        v69[5] = &v198;
        v69[6] = 0LL;
        v69[7] = 0LL;
        WdLogEvent5_WdCriticalError(v69);
      }
      v70 = v198;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v70 + 16) == KeGetCurrentThread() )
      {
        v74 = *(_DWORD *)(v70 + 24);
        if ( v74 <= 0 )
        {
          v75 = WdLogNewEntry5_WdAssertion(v72, v71);
          *(_QWORD *)(v75 + 24) = 559LL;
          WdLogEvent5_WdAssertion(v75);
          v74 = *(_DWORD *)(v70 + 24);
        }
        *(_DWORD *)(v70 + 24) = v74 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v70, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v77 = *(_DWORD *)(v70 + 28);
            if ( v77 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v76, &EventBlockThread, v73, v77);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v70 + 8));
          ExAcquirePushLockExclusiveEx(v70, 0LL);
        }
        if ( *(_QWORD *)(v70 + 16) )
        {
          v78 = WdLogNewEntry5_WdAssertion(v76, v71);
          *(_QWORD *)(v78 + 24) = 583LL;
          WdLogEvent5_WdAssertion(v78);
        }
        if ( *(_DWORD *)(v70 + 24) )
        {
          v79 = WdLogNewEntry5_WdAssertion(v76, v71);
          *(_QWORD *)(v79 + 24) = 584LL;
          WdLogEvent5_WdAssertion(v79);
        }
        *(_QWORD *)(v70 + 16) = KeGetCurrentThread();
        *(_DWORD *)(v70 + 24) = 1;
      }
      v199 = 1;
      v80 = v183;
      v20 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v183 + 2) + 16LL);
      v200 = 0LL;
      if ( (*(_DWORD *)(v58 + 196) & 4) != 0 )
      {
        LODWORD(v20) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v58, v20, &v200);
        if ( (int)v20 < 0 )
          goto LABEL_162;
        v80 = v183;
      }
      else
      {
        if ( v20 && *(struct ADAPTER_RENDER **)(v58 + 304) != v20 )
        {
          v109 = (_QWORD *)WdLogNewEntry5_WdError(v183, v71, v73);
          v109[3] = v58;
          v109[4] = *(_QWORD *)(v58 + 304);
          v109[5] = v20;
          LODWORD(v20) = -1073741811;
          v109[6] = -1073741811LL;
          WdLogEvent5_WdError(v109);
LABEL_162:
          v110 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81, v83);
          v110[3] = v177;
          v110[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v183 + 2) + 16LL) + 16LL);
          v110[5] = (int)v20;
LABEL_163:
          WdLogEvent5_WdError(v110);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v198);
          if ( v173 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
          if ( v175 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
          if ( v178 != v179 && v178 )
            ExFreePoolWithTag(v178, 0);
          v178 = 0LL;
          v180 = 0;
LABEL_13:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
          if ( P != v188 )
          {
            if ( P )
              ExFreePoolWithTag(P, 0);
          }
          return (unsigned int)v20;
        }
        v200 = (struct DXGADAPTERSYNCOBJECT *)(v58 + 288);
      }
      if ( !v171 )
      {
        v84 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v80 + 2) + 16LL);
        v85 = (*(_DWORD *)(v58 + 196) & 4) != 0
            ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v58, v84) + 4)
            : *(_QWORD *)(v58 + 320);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v84 + 65) + 8LL)
                                                                          + 848LL))(
               v85,
               v191) )
        {
          v87 = v183;
          v88 = *((_QWORD *)v183 + 2);
          if ( *(_BYTE *)(*(_QWORD *)(v88 + 16) + 776LL) )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v88 + 40) + 298LL) || (*((_DWORD *)v186 + 103) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v58 + 196) & 1) == 0 || !*(_BYTE *)(v88 + 1747) )
                goto LABEL_171;
              if ( *(_DWORD *)(v58 + 192) != 3 )
              {
                v89 = WdLogNewEntry5_WdAssertion(v183, v88);
                *(_QWORD *)(v89 + 24) = 337LL;
                WdLogEvent5_WdAssertion(v89);
              }
              if ( v191 > *(_QWORD *)(v58 + 112) )
              {
LABEL_171:
                v110 = (_QWORD *)WdLogNewEntry5_WdError(v87, v88, v86);
                v110[3] = v177;
                LODWORD(v20) = -1073741811;
                v110[4] = -1073741811LL;
                goto LABEL_163;
              }
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v198);
LABEL_157:
      v107 = i;
      i[v47] = (struct DXGSYNCOBJECT *)v58;
      ++v46;
      ++v47;
      if ( v46 >= v174 )
      {
        v23 = v175;
        v10 = (unsigned __int64 *)Src;
        v192 = (const unsigned __int64 *)Src;
        v21 = v183;
        goto LABEL_212;
      }
      v48 = v177;
    }
    v90 = v184[v47];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v49, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v93 = *((_DWORD *)v49 + 4);
        if ( v93 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v91, &EventBlockThread, v92, v93);
      }
      ExAcquirePushLockSharedEx(v49, 0LL);
    }
    v94 = (v90 >> 6) & 0xFFFFFF;
    v95 = v90 >> 30;
    v96 = v177;
    if ( (unsigned int)v94 < *((_DWORD *)v177 + 56) )
    {
      v97 = *((_QWORD *)v177 + 26);
      v98 = *(_DWORD *)(v97 + 16 * v94 + 8);
      if ( v95 == ((v98 >> 5) & 3) && (v98 & 0x2000) == 0 && (v98 & 0x1F) != 0 )
      {
        v99 = v98 & 0x1F;
        if ( (_BYTE)v99 == 11 )
        {
          v101 = *(_QWORD *)(v97 + 16LL * (unsigned int)v94);
          goto LABEL_149;
        }
        v100 = WdLogNewEntry5_WdError(v99, 2LL * (unsigned int)v94, v97);
        *(_QWORD *)(v100 + 24) = 267LL;
        WdLogEvent5_WdError(v100);
      }
    }
    v101 = 0LL;
LABEL_149:
    ExReleasePushLockSharedEx(v49, 0LL);
    KeLeaveCriticalRegion();
    if ( !v101 )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdError(v103, v102, v45);
      v112[3] = v96;
      v113 = v184[v46];
      v112[5] = v46;
      goto LABEL_202;
    }
    if ( v22 )
      v22[v47] = (struct DXGDEVICESYNCOBJECT *)v101;
    v170 = 1;
    if ( v12 )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdError(v103, v102, v45);
      v112[3] = v96;
      goto LABEL_203;
    }
    v104 = *(_QWORD *)(v101 + 16);
    v105 = v183;
    if ( v104 != *((_QWORD *)v183 + 2) )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdError(v104, v102, v45);
      v112[3] = *((_QWORD *)v105 + 2);
      v113 = *(_QWORD *)(v101 + 16);
LABEL_202:
      v112[4] = v113;
LABEL_203:
      WdLogEvent5_WdError(v112);
      if ( v173 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v175 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
LABEL_183:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      return -1073741811LL;
    }
    if ( (*(_DWORD *)(v101 + 72) & 0x20) != 0 )
    {
      v111 = WdLogNewEntry5_WdError(v104, v102, v45);
      *(_QWORD *)(v111 + 24) = v184[v46];
      WdLogEvent5_WdError(v111);
      if ( v173 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v175 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225506LL;
    }
    v58 = *(_QWORD *)(v101 + 32);
    if ( (unsigned int)(*(_DWORD *)(v58 + 192) - 5) > 1 )
    {
      v106 = WdLogNewEntry5_WdAssertion(v104, v102);
      *(_QWORD *)(v106 + 24) = 1205LL;
      WdLogEvent5_WdAssertion(v106);
    }
    goto LABEL_157;
  }
  v107 = i;
LABEL_212:
  v114 = 0LL;
  v202 = 0LL;
  v115 = 0;
  v204 = 0;
  v116 = (unsigned int)(*((_DWORD *)*v107 + 48) - 5);
  if ( (unsigned int)v116 > 1 )
  {
    v120 = a10;
  }
  else
  {
    if ( a7 )
    {
      v117 = v174;
      v118 = v174;
      if ( v174 <= 4 )
      {
        v114 = v203;
        v202 = v203;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v174 < 8 )
        {
LABEL_221:
          if ( !v114 )
            goto LABEL_222;
          v119 = v115;
          if ( &v10[v119] < v10 || (unsigned __int64)&v10[v119] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v114, v10, v119 * 8);
          v114 = v202;
          v10 = (unsigned __int64 *)v202;
          v192 = (const unsigned __int64 *)v202;
          Src = v202;
          v120 = a10;
          v107 = i;
          goto LABEL_253;
        }
        v114 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v174, 0x4B677844u);
        v202 = v114;
      }
      v115 = v117;
      v204 = v117;
      if ( !v114 )
      {
LABEL_222:
        v202 = 0LL;
        v204 = 0;
        if ( v173 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
        if ( v23 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
        if ( v178 != v179 && v178 )
          ExFreePoolWithTag(v178, 0);
        v178 = 0LL;
        v180 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
        if ( P != v188 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v189 = 0;
        return 3221225495LL;
      }
      if ( v117 )
      {
        memset(v114, 0, 8 * v118);
        v115 = v204;
        v114 = v202;
      }
      goto LABEL_221;
    }
    v120 = a10;
    if ( a10 )
    {
      v10 = &v191;
      v192 = &v191;
      Src = &v191;
    }
    else if ( !v10 )
    {
      v121 = WdLogNewEntry5_WdError(v116, v107, v45);
      *(_QWORD *)(v121 + 24) = v177;
      WdLogEvent5_WdError(v121);
      if ( v202 != v203 && v202 )
        ExFreePoolWithTag(v202, 0);
      v202 = 0LL;
      v204 = 0;
      if ( v173 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v23 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      goto LABEL_183;
    }
  }
  v117 = v174;
LABEL_253:
  if ( v171 )
  {
    LODWORD(v20) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL) + 16LL) + 4144LL),
                     v177,
                     v186,
                     v184,
                     v107,
                     v22,
                     v10,
                     v191,
                     v117,
                     0LL);
    if ( v202 != v203 && v202 )
      ExFreePoolWithTag(v202, 0);
    v202 = 0LL;
    v204 = 0;
    if ( v173 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
    if ( v23 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
    if ( v178 != v179 && v178 )
      ExFreePoolWithTag(v178, 0);
    v178 = 0LL;
    v180 = 0;
    goto LABEL_13;
  }
  v122 = 0;
  if ( !v174 )
  {
LABEL_343:
    if ( v114 != v203 && v114 )
      ExFreePoolWithTag(v114, 0);
    v202 = 0LL;
    v204 = 0;
    if ( v173 )
    {
      v173 = 0;
      ExReleaseResourceLite(v172[43]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
    if ( v23 && v176 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v23 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v178 != v179 && v178 )
      ExFreePoolWithTag(v178, 0);
    v178 = 0LL;
    v180 = 0;
    if ( v181 && !v182 )
      DXGCONTEXT::ReleaseReference(v181);
    if ( P != v188 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  v123 = v186;
  v197 = v186;
  v124 = (struct DXGSYNCOBJECT **)((char *)v107 - (char *)v10);
  for ( i = v124; ; v124 = i )
  {
    v125 = *(unsigned __int64 *)((char *)v10 + (_QWORD)v124);
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v195, (struct DXGSYNCOBJECT *)v125);
    if ( v196 )
    {
      v128 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v127, v126);
      v128[3] = 275LL;
      v128[4] = 4LL;
      v128[5] = &v195;
      v128[6] = 0LL;
      v128[7] = 0LL;
      WdLogEvent5_WdCriticalError(v128);
    }
    v129 = v195;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v129 + 16) == KeGetCurrentThread() )
    {
      v132 = *(_DWORD *)(v129 + 24);
      if ( v132 <= 0 )
      {
        v133 = WdLogNewEntry5_WdAssertion(v131, v130);
        *(_QWORD *)(v133 + 24) = 559LL;
        WdLogEvent5_WdAssertion(v133);
        v132 = *(_DWORD *)(v129 + 24);
      }
      *(_DWORD *)(v129 + 24) = v132 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v129, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v137 = *(_DWORD *)(v129 + 28);
          if ( v137 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v135, &EventBlockThread, v136, v137);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v129 + 8));
        ExAcquirePushLockExclusiveEx(v129, 0LL);
      }
      if ( *(_QWORD *)(v129 + 16) )
      {
        v138 = WdLogNewEntry5_WdAssertion(v135, v134);
        *(_QWORD *)(v138 + 24) = 583LL;
        WdLogEvent5_WdAssertion(v138);
      }
      if ( *(_DWORD *)(v129 + 24) )
      {
        v139 = WdLogNewEntry5_WdAssertion(v135, v134);
        *(_QWORD *)(v139 + 24) = 584LL;
        WdLogEvent5_WdAssertion(v139);
      }
      *(_QWORD *)(v129 + 16) = KeGetCurrentThread();
      *(_DWORD *)(v129 + 24) = 1;
    }
    v196 = 1;
    v140 = *(_DWORD *)(v125 + 192);
    if ( (unsigned int)(v140 - 5) <= 1 )
    {
      v141 = *v10;
    }
    else
    {
      v141 = 0LL;
      if ( v140 == 3 )
        v141 = v191;
    }
    v142 = v183;
    v143 = (*(_DWORD *)(v125 + 196) & 4) != 0
         ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                         (DXGSYNCOBJECTCA *)v125,
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v183 + 2) + 16LL))
           + 4)
         : *(_QWORD *)(v125 + 320);
    v194 = v143;
    if ( (*((_DWORD *)v123 + 103) & 0x10) != 0 )
      break;
    v160 = v186;
    v161 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v142 + 2) + 16LL)
                                                                                                + 520LL)
                                                                                    + 8LL)
                                                                        + 624LL))(
             *((_QWORD *)v186 + 34),
             v143,
             v141);
    v165 = v161;
    if ( v161 < 0 )
    {
      v168 = (_QWORD *)WdLogNewEntry5_WdError(v163, v162, v164);
      v168[3] = v177;
      v168[4] = v184[v122];
      v168[5] = v122;
      v168[6] = v165;
      WdLogEvent5_WdError(v168);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v195);
      if ( v202 != v203 && v202 )
        ExFreePoolWithTag(v202, 0);
      v202 = 0LL;
      v204 = 0;
      if ( v173 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v175 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v165;
    }
    if ( v170 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1(
          (__int64)Src + 8 * v122,
          &EventWaitForSynchronizationObjectFromGpu,
          (__int64)v164,
          v160,
          Timeout,
          &v194,
          (char *)Src + 8 * v122);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqPR1x(v163, v162, v164, v160);
    }
LABEL_315:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v195);
    ++v122;
    v192 = ++v10;
    if ( v122 >= v174 )
    {
      v23 = v175;
      v114 = v202;
      goto LABEL_343;
    }
    v120 = a10;
  }
  if ( v120 )
  {
    v144 = *((_QWORD *)v186 + 38);
    v145 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v142 + 2) + 16LL)
                                                                                                 + 520LL)
                                                                                     + 8LL)
                                                                         + 632LL))(
             v144,
             v143,
             v141);
    v20 = (struct ADAPTER_RENDER *)v145;
    if ( v145 < 0 )
    {
      v166 = (_QWORD *)WdLogNewEntry5_WdError(v147, v146, v148);
      v166[3] = v177;
      v166[4] = v184[v122];
      v166[5] = v122;
      v166[6] = v20;
      WdLogEvent5_WdError(v166);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v195);
      if ( v202 != v203 && v202 )
        ExFreePoolWithTag(v202, 0);
      v202 = 0LL;
      v204 = 0;
      if ( v173 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v175 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
      if ( v178 != v179 && v178 )
        ExFreePoolWithTag(v178, 0);
      v178 = 0LL;
      v180 = 0;
      goto LABEL_13;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1(
        (__int64)Src + 8 * v122,
        &EventWaitForSynchronizationObjectFromGpu,
        v148,
        v144,
        Timeout,
        &v194,
        (char *)Src + 8 * v122);
    }
    goto LABEL_315;
  }
  DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v186 + 52, &v201);
  v151 = (_QWORD *)*((_QWORD *)&v201 + 1);
  v152 = (_QWORD *)v201;
  v153 = (char *)Src;
  while ( 1 )
  {
    if ( v151 == v152 || !v151 )
    {
      v201 = 0LL;
      v10 = (unsigned __int64 *)v192;
      v123 = v197;
      goto LABEL_315;
    }
    v154 = v151[5];
    v155 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v150 + 2) + 16LL)
                                                                                                 + 520LL)
                                                                                     + 8LL)
                                                                         + 632LL))(
             v154,
             v149,
             v141);
    v159 = v155;
    if ( v155 < 0 )
      break;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1(
        (__int64)&v153[8 * v122],
        &EventWaitForSynchronizationObjectFromGpu,
        v158,
        v154,
        Timeout,
        &v194,
        &v153[8 * v122]);
    }
    v151 = (_QWORD *)*v151;
    v149 = v194;
    v150 = v183;
  }
  v167 = (_QWORD *)WdLogNewEntry5_WdError(v157, v156, v158);
  v167[3] = v177;
  v167[4] = v184[v122];
  v167[5] = v122;
  v167[6] = v159;
  WdLogEvent5_WdError(v167);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v195);
  if ( v202 != v203 && v202 )
    ExFreePoolWithTag(v202, 0);
  v202 = 0LL;
  v204 = 0;
  if ( v173 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v172);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
  if ( v175 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v175);
  if ( v178 != v179 && v178 )
    ExFreePoolWithTag(v178, 0);
  v178 = 0LL;
  v180 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v181);
  if ( P != v188 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v159;
}
