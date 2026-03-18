/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C00B13E0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0114E28 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C0117720 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0250D70 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B8B0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001AF20 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0021050 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C00211A8 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0021750 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C0022774 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C003C5F8 (McTemplateK0pqPR1XR1.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C003E154 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1x @ 0x1C003E300 (McTemplateK0pqPR1x.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01DCDB0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C01F83B0 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0234B88 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        const unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10)
{
  const unsigned __int64 *v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  struct DXGDEVICESYNCOBJECT **v13; // r15
  _BYTE *PoolWithTag; // rcx
  struct DXGSYNCOBJECT **v15; // rax
  bool v16; // zf
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct DXGCONTEXT *v19; // r14
  PERESOURCE *v21; // rdi
  unsigned int v22; // r12d
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  const GUID *v28; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  PERESOURCE *v35; // rbx
  struct DXGPROCESS *v36; // rdi
  char *v37; // r14
  unsigned int *v38; // r13
  char v39; // si
  unsigned int v40; // ebx
  __int64 v41; // rcx
  const GUID *v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  unsigned int v45; // ebx
  __int64 v46; // rdi
  unsigned int v47; // ecx
  __int64 v48; // rdi
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  const GUID *v62; // r8
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rax
  struct DXGCONTEXT *v66; // rsi
  struct ADAPTER_RENDER *v67; // rbx
  __int64 v68; // rcx
  int DxgAdapterSyncObject; // ebx
  struct ADAPTER_RENDER *v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned int v75; // ebx
  __int64 v76; // rcx
  const GUID *v77; // r8
  int v78; // r9d
  __int64 v79; // rax
  unsigned int v80; // ebx
  struct DXGPROCESS *v81; // rdi
  __int64 v82; // r8
  unsigned int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rcx
  __int64 v88; // rcx
  struct DXGCONTEXT *v89; // rdi
  __int64 v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  _BYTE *v95; // r9
  unsigned int v96; // r10d
  struct DXGSYNCOBJECT **v97; // rdx
  __int64 v98; // rcx
  unsigned int v99; // r15d
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rcx
  size_t v103; // r8
  bool v104; // r12
  __int64 v105; // rax
  unsigned int v106; // r15d
  struct DXGCONTEXT *v107; // r13
  struct DXGSYNCOBJECT **v108; // rdx
  __int64 v109; // rdi
  __int64 v110; // rcx
  _QWORD *v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // rcx
  const GUID *v118; // r8
  int v119; // r9d
  __int64 v120; // rax
  __int64 v121; // rax
  int v122; // ecx
  unsigned __int64 v123; // r14
  struct DXGCONTEXT *v124; // r10
  __int64 v125; // r9
  struct DXGCONTEXT *v126; // rbx
  int v127; // eax
  __int64 v128; // rcx
  const GUID *v129; // r8
  __int64 v130; // rdi
  __int64 v131; // r9
  struct DXGCONTEXT *v132; // r10
  _QWORD *v133; // rbx
  _QWORD *v134; // r12
  const unsigned __int64 *v135; // r13
  __int64 v136; // rdi
  int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // rsi
  int v141; // eax
  __int64 v142; // rdx
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // [rsp+0h] [rbp-278h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-258h]
  struct DXGDEVICESYNCOBJECT **v147; // [rsp+28h] [rbp-250h]
  unsigned __int64 *v148; // [rsp+30h] [rbp-248h]
  char v149; // [rsp+50h] [rbp-228h]
  char v150; // [rsp+51h] [rbp-227h]
  PERESOURCE *v151; // [rsp+58h] [rbp-220h] BYREF
  char v152; // [rsp+60h] [rbp-218h]
  unsigned int v153; // [rsp+68h] [rbp-210h]
  PERESOURCE *v154; // [rsp+70h] [rbp-208h] BYREF
  int v155; // [rsp+78h] [rbp-200h]
  char v156; // [rsp+80h] [rbp-1F8h]
  struct DXGPROCESS *v157; // [rsp+88h] [rbp-1F0h]
  PVOID P; // [rsp+90h] [rbp-1E8h] BYREF
  _BYTE v159[32]; // [rsp+98h] [rbp-1E0h] BYREF
  int v160; // [rsp+B8h] [rbp-1C0h]
  _BYTE v161[16]; // [rsp+C0h] [rbp-1B8h] BYREF
  const unsigned __int64 *v162; // [rsp+D0h] [rbp-1A8h]
  _BYTE v163[16]; // [rsp+D8h] [rbp-1A0h] BYREF
  struct DXGCONTEXT *v164; // [rsp+E8h] [rbp-190h] BYREF
  unsigned int *v165; // [rsp+F0h] [rbp-188h]
  PVOID v166; // [rsp+F8h] [rbp-180h]
  _BYTE v167[32]; // [rsp+100h] [rbp-178h] BYREF
  int v168; // [rsp+120h] [rbp-158h]
  const unsigned __int64 *v169; // [rsp+128h] [rbp-150h]
  struct DXGCONTEXT *v170; // [rsp+130h] [rbp-148h]
  unsigned __int64 v171; // [rsp+138h] [rbp-140h] BYREF
  struct DXGSYNCOBJECT **i; // [rsp+140h] [rbp-138h]
  struct DXGDEVICESYNCOBJECT **v173; // [rsp+148h] [rbp-130h]
  __int64 v174; // [rsp+150h] [rbp-128h] BYREF
  __int64 v175; // [rsp+158h] [rbp-120h] BYREF
  char v176; // [rsp+160h] [rbp-118h]
  struct DXGCONTEXT *v177; // [rsp+168h] [rbp-110h]
  __int64 v178; // [rsp+170h] [rbp-108h] BYREF
  char v179; // [rsp+178h] [rbp-100h]
  struct DXGADAPTERSYNCOBJECT *v180; // [rsp+180h] [rbp-F8h] BYREF
  char v181[8]; // [rsp+190h] [rbp-E8h] BYREF
  struct _KTHREAD **v182[2]; // [rsp+198h] [rbp-E0h] BYREF
  DXGADAPTER *v183; // [rsp+1A8h] [rbp-D0h]
  char v184; // [rsp+1B0h] [rbp-C8h]
  struct _KTHREAD **v185[5]; // [rsp+1B8h] [rbp-C0h] BYREF
  char v186; // [rsp+1E0h] [rbp-98h]
  __int64 v187; // [rsp+1F0h] [rbp-88h]
  __int128 v188; // [rsp+1F8h] [rbp-80h] BYREF
  PVOID v189; // [rsp+208h] [rbp-70h]
  _BYTE v190[32]; // [rsp+210h] [rbp-68h] BYREF
  unsigned int v191; // [rsp+230h] [rbp-48h]

  v10 = a3;
  v162 = a3;
  v165 = a2;
  v11 = a1;
  v153 = v11;
  v12 = a1;
  v187 = a1;
  v169 = a3;
  v171 = a4;
  v157 = a6;
  v177 = a6;
  v13 = 0LL;
  PoolWithTag = 0LL;
  v166 = 0LL;
  v168 = 0;
  if ( (unsigned int)v11 <= 4 )
  {
    PoolWithTag = v167;
    v166 = v167;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v12 < 8 )
    {
      v15 = 0LL;
      goto LABEL_9;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v11, 0x4B677844u);
    v166 = PoolWithTag;
  }
  v168 = v11;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v12);
    PoolWithTag = v166;
  }
  v15 = (struct DXGSYNCOBJECT **)PoolWithTag;
LABEL_9:
  i = v15;
  if ( !v15 )
  {
    if ( &v145 == (__int64 *)-256LL )
      return 3221225495LL;
    v16 = 1;
LABEL_21:
    if ( !v16 )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225495LL;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161, a5, (struct _KTHREAD **)a6, &v164, a8);
  if ( !v164 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v18[3] = a6;
    v18[4] = a5;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_174;
  }
  v19 = v164;
  v170 = v164;
  v150 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v164 + 2) + 16LL) + 16LL) + 185LL);
  P = 0LL;
  v160 = 0;
  v173 = 0LL;
  if ( v150 )
  {
    v13 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                                           &P,
                                           (unsigned int)v11);
    v173 = v13;
    if ( !v13 )
    {
      if ( P != v159 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v160 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
      PoolWithTag = v166;
      if ( v166 == v167 )
        return 3221225495LL;
      v16 = v166 == 0LL;
      goto LABEL_21;
    }
  }
  v21 = (PERESOURCE *)*((_QWORD *)v19 + 2);
  v154 = v21;
  v22 = 0;
  v155 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163, (struct DXGDEVICE *)v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v181, *((_QWORD *)v19 + 2), 0, v23, a8);
  if ( !a8 )
  {
    if ( a9 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
    }
    else if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v19 + 2) + 104LL)) )
    {
      DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v163);
    }
    if ( v184 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25);
      v26[3] = 275LL;
      v26[4] = 4LL;
      v26[5] = v182;
      v26[6] = 0LL;
      v26[7] = 0LL;
      WdLogEvent5_WdCriticalError(v26);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v183 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v183 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v27, &EventBlockThread, v28, 72);
        KeWaitForSingleObject((char *)v183 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v183);
    }
    v184 = 1;
    v24 = *((unsigned int *)v185[4] + 116);
    if ( (_DWORD)v24 != 1 )
      goto LABEL_42;
    if ( v186 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v185);
      v24 = *((unsigned int *)v185[2] + 44);
      if ( (_DWORD)v24 != 1 )
      {
        COREACCESS::Release(v185);
LABEL_42:
        COREACCESS::Release(v182);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
        if ( v154 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
        if ( P != v159 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v160 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
        if ( v166 != v167 && v166 )
          ExFreePoolWithTag(v166, 0);
        return 3221226166LL;
      }
    }
    v21 = v154;
    v10 = v169;
    v162 = v169;
  }
  Global = DXGGLOBAL::GetGlobal(v24);
  v151 = (PERESOURCE *)Global;
  v152 = 0;
  if ( !Global )
  {
    v31 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v31 + 24) = 2306LL;
    WdLogEvent5_WdAssertion(v31);
    Global = (struct DXGGLOBAL *)v151;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v33 + 24) = 2311LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v152 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32);
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[5] = &v151;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  v35 = v151;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v35[43], 1u);
  v152 = 1;
  v149 = 0;
  if ( v153 )
  {
    v36 = v157;
    v37 = (char *)v157 + 208;
    v38 = v165;
    v162 = (const unsigned __int64 *)((char *)i - (char *)v173);
    v39 = 0;
    while ( 1 )
    {
      v40 = *v38;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v37, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v43 = *((_DWORD *)v37 + 4);
          if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v41, &EventBlockThread, v42, v43);
        }
        ExAcquirePushLockSharedEx(v37, 0LL);
      }
      v44 = (v40 >> 6) & 0xFFFFFF;
      v45 = v40 >> 30;
      if ( (unsigned int)v44 < *((_DWORD *)v36 + 62)
        && (v46 = *((_QWORD *)v36 + 29), v47 = *(_DWORD *)(v46 + 16 * v44 + 8), v45 == ((v47 >> 5) & 3))
        && (v47 & 0x2000) == 0
        && (v47 & 0x1F) == 8 )
      {
        v48 = *(_QWORD *)(v46 + 16LL * (unsigned int)v44);
      }
      else
      {
        v48 = 0LL;
      }
      ExReleasePushLockSharedEx(v37, 0LL);
      KeLeaveCriticalRegion();
      if ( !v48 )
        break;
      if ( v173 )
        *v13 = 0LL;
      v50 = *(_DWORD *)(v48 + 168);
      if ( v50 == 5 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v51 + 24) = 1083LL;
        WdLogEvent5_WdAssertion(v51);
        v50 = *(_DWORD *)(v48 + 168);
      }
      if ( v50 == 6 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v52 + 24) = 1084LL;
        WdLogEvent5_WdAssertion(v52);
      }
      v156 = 1;
      if ( v149 )
      {
        v91 = (_QWORD *)WdLogNewEntry5_WdError(v49);
LABEL_144:
        v91[3] = v157;
LABEL_145:
        WdLogEvent5_WdError(v91);
        if ( v152 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
        if ( v154 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
        if ( P != v159 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v160 = 0;
        goto LABEL_242;
      }
      v53 = *(_DWORD *)(v48 + 168);
      if ( v53 == 4 )
      {
        v91 = (_QWORD *)WdLogNewEntry5_WdError(v49);
        v91[3] = v157;
        v91[4] = v165[v22];
        v91[5] = v22;
        goto LABEL_145;
      }
      if ( v53 == 3 )
      {
        v54 = v153;
        if ( v153 != 1 )
        {
          v91 = (_QWORD *)WdLogNewEntry5_WdError(v49);
          v91[4] = v54;
          goto LABEL_144;
        }
      }
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v178, (struct DXGSYNCOBJECT *)v48);
      if ( v179 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55);
        v56[3] = 275LL;
        v56[4] = 4LL;
        v56[5] = &v178;
        v56[6] = 0LL;
        v56[7] = 0LL;
        WdLogEvent5_WdCriticalError(v56);
      }
      v57 = v178;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v57 + 8) == KeGetCurrentThread() )
      {
        v59 = *(_DWORD *)(v57 + 24);
        if ( v59 <= 0 )
        {
          v60 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v60 + 24) = 409LL;
          WdLogEvent5_WdAssertion(v60);
          v59 = *(_DWORD *)(v57 + 24);
        }
        v61 = v59 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v57 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v63 = *(_DWORD *)(v57 + 28);
            if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v58, &EventBlockThread, v62, v63);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v57);
          ExAcquirePushLockExclusiveEx(v57 + 16, 0LL);
        }
        if ( *(_QWORD *)(v57 + 8) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v64 + 24) = 433LL;
          WdLogEvent5_WdAssertion(v64);
        }
        if ( *(_DWORD *)(v57 + 24) )
        {
          v65 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v65 + 24) = 434LL;
          WdLogEvent5_WdAssertion(v65);
        }
        *(_QWORD *)(v57 + 8) = KeGetCurrentThread();
        v61 = 1;
      }
      *(_DWORD *)(v57 + 24) = v61;
      v179 = 1;
      v66 = v170;
      v67 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v170 + 2) + 16LL);
      v180 = 0LL;
      if ( (*(_DWORD *)(v48 + 172) & 4) != 0 )
      {
        DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v48, v67, &v180);
        if ( DxgAdapterSyncObject < 0 )
          goto LABEL_154;
      }
      else
      {
        if ( v67 && *(struct ADAPTER_RENDER **)(v48 + 280) != v67 )
        {
          v92 = (_QWORD *)WdLogNewEntry5_WdError(v58);
          v92[3] = v48;
          v92[4] = *(_QWORD *)(v48 + 280);
          v92[5] = v67;
          DxgAdapterSyncObject = -1073741811;
          v92[6] = -1073741811LL;
          WdLogEvent5_WdError(v92);
LABEL_154:
          v93 = (_QWORD *)WdLogNewEntry5_WdError(v68);
          v93[3] = v157;
          v93[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 2) + 16LL) + 16LL);
          v93[5] = DxgAdapterSyncObject;
          WdLogEvent5_WdError(v93);
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v178);
          if ( v152 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
          if ( v154 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
          if ( P != v159 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v160 = 0;
LABEL_162:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
          if ( v166 != v167 && v166 )
            ExFreePoolWithTag(v166, 0);
          return (unsigned int)DxgAdapterSyncObject;
        }
        v180 = (struct DXGADAPTERSYNCOBJECT *)(v48 + 264);
      }
      if ( !v150 )
      {
        v70 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v66 + 2) + 16LL);
        v71 = (*(_DWORD *)(v48 + 172) & 4) != 0
            ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v48, v70) + 4)
            : *(_QWORD *)(v48 + 296);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v70 + 65) + 8LL)
                                                                          + 848LL))(
               v71,
               v171) )
        {
          v73 = *((_QWORD *)v66 + 2);
          if ( *(_BYTE *)(*(_QWORD *)(v73 + 16) + 776LL) )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v73 + 40) + 322LL) || (*((_DWORD *)v164 + 99) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v48 + 172) & 1) == 0 || !*(_BYTE *)(v73 + 1747) )
                goto LABEL_166;
              if ( *(_DWORD *)(v48 + 168) != 3 )
              {
                v74 = WdLogNewEntry5_WdAssertion(v72);
                *(_QWORD *)(v74 + 24) = 367LL;
                WdLogEvent5_WdAssertion(v74);
              }
              if ( v171 > *(_QWORD *)(v48 + 112) )
              {
LABEL_166:
                v94 = WdLogNewEntry5_WdError(v72);
                *(_QWORD *)(v94 + 24) = v157;
                *(_QWORD *)(v94 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v94);
                DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v178);
                if ( v152 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
                DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
                if ( v154 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
                if ( P != v159 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v160 = 0;
LABEL_174:
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
                if ( v166 != v167 && v166 )
                {
                  ExFreePoolWithTag(v166, 0);
                  return 3221225485LL;
                }
                return 3221225485LL;
              }
            }
          }
        }
      }
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v178);
      v39 = v156;
LABEL_140:
      *(struct DXGDEVICESYNCOBJECT **)((char *)v13 + (_QWORD)v162) = (struct DXGDEVICESYNCOBJECT *)v48;
      ++v22;
      ++v38;
      ++v13;
      if ( v22 >= v153 )
      {
        v21 = v154;
        v10 = v169;
        v162 = v169;
        v19 = v170;
        LODWORD(v12) = v187;
        goto LABEL_180;
      }
      v36 = v157;
    }
    v75 = *v38;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v37, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v78 = *((_DWORD *)v37 + 4);
        if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v76, &EventBlockThread, v77, v78);
      }
      ExAcquirePushLockSharedEx(v37, 0LL);
    }
    v79 = (v75 >> 6) & 0xFFFFFF;
    v80 = v75 >> 30;
    v81 = v157;
    if ( (unsigned int)v79 < *((_DWORD *)v157 + 62) )
    {
      v82 = *((_QWORD *)v157 + 29);
      v83 = *(_DWORD *)(v82 + 16 * v79 + 8);
      if ( v80 == ((v83 >> 5) & 3) && (v83 & 0x2000) == 0 && (v83 & 0x1F) != 0 )
      {
        v84 = v83 & 0x1F;
        if ( (_BYTE)v84 == 11 )
        {
          v86 = *(_QWORD *)(v82 + 16LL * (unsigned int)v79);
          goto LABEL_132;
        }
        v85 = WdLogNewEntry5_WdError(v84);
        *(_QWORD *)(v85 + 24) = 316LL;
        WdLogEvent5_WdError(v85);
      }
    }
    v86 = 0LL;
LABEL_132:
    ExReleasePushLockSharedEx(v37, 0LL);
    KeLeaveCriticalRegion();
    if ( !v86 )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdError(v87);
      v101[3] = v81;
      v102 = v165[v22];
      v101[5] = v22;
      goto LABEL_197;
    }
    if ( v173 )
      *v13 = (struct DXGDEVICESYNCOBJECT *)v86;
    v149 = 1;
    if ( v39 )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdError(v87);
      v101[3] = v81;
LABEL_198:
      WdLogEvent5_WdError(v101);
      if ( v152 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
      if ( v154 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
      if ( P != v159 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v160 = 0;
LABEL_242:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
      if ( v166 != v167 && v166 )
        ExFreePoolWithTag(v166, 0);
      return 3221225485LL;
    }
    v88 = *(_QWORD *)(v86 + 16);
    v89 = v170;
    if ( v88 != *((_QWORD *)v170 + 2) )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdError(v88);
      v101[3] = *((_QWORD *)v89 + 2);
      v102 = *(_QWORD *)(v86 + 16);
LABEL_197:
      v101[4] = v102;
      goto LABEL_198;
    }
    if ( (*(_DWORD *)(v86 + 72) & 0x20) != 0 )
    {
      v100 = WdLogNewEntry5_WdError(v88);
      *(_QWORD *)(v100 + 24) = v165[v22];
      WdLogEvent5_WdError(v100);
      if ( v152 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
      if ( v154 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
      if ( P != v159 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v160 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
      if ( v166 != v167 && v166 )
        ExFreePoolWithTag(v166, 0);
      return 3221225506LL;
    }
    v48 = *(_QWORD *)(v86 + 32);
    if ( (unsigned int)(*(_DWORD *)(v48 + 168) - 5) > 1 )
    {
      v90 = WdLogNewEntry5_WdAssertion(v88);
      *(_QWORD *)(v90 + 24) = 1227LL;
      WdLogEvent5_WdAssertion(v90);
    }
    goto LABEL_140;
  }
LABEL_180:
  v95 = 0LL;
  v189 = 0LL;
  v96 = 0;
  v191 = 0;
  v97 = i;
  v98 = (unsigned int)(*((_DWORD *)*i + 42) - 5);
  if ( (unsigned int)v98 > 1 )
  {
    v104 = a10;
  }
  else
  {
    if ( a7 )
    {
      v99 = v153;
      if ( v153 <= 4 )
      {
        v95 = v190;
        v189 = v190;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 < 8 )
        {
LABEL_212:
          if ( !v95 )
            goto LABEL_213;
          v103 = v96;
          if ( &v10[v103] < v10 || (unsigned __int64)&v10[v103] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v95, v10, v103 * 8);
          v95 = v189;
          v10 = (const unsigned __int64 *)v189;
          v162 = (const unsigned __int64 *)v189;
          v169 = (const unsigned __int64 *)v189;
          v104 = a10;
          v97 = i;
          goto LABEL_248;
        }
        v95 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v12, 0x4B677844u);
        v189 = v95;
      }
      v96 = v99;
      v191 = v99;
      if ( !v95 )
      {
LABEL_213:
        v189 = 0LL;
        v191 = 0;
        if ( v152 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
        if ( P != v159 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v160 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
        if ( v166 != v167 && v166 )
          ExFreePoolWithTag(v166, 0);
        v166 = 0LL;
        v168 = 0;
        return 3221225495LL;
      }
      if ( (_DWORD)v12 )
      {
        memset(v95, 0, 8LL * (unsigned int)v12);
        v96 = v191;
        v95 = v189;
      }
      goto LABEL_212;
    }
    v104 = a10;
    if ( a10 )
    {
      v10 = &v171;
      v162 = &v171;
      v169 = &v171;
    }
    else if ( !v10 )
    {
      v105 = WdLogNewEntry5_WdError(v98);
      *(_QWORD *)(v105 + 24) = v157;
      WdLogEvent5_WdError(v105);
      if ( v189 != v190 && v189 )
        ExFreePoolWithTag(v189, 0);
      v189 = 0LL;
      v191 = 0;
      if ( v152 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
      if ( P != v159 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v160 = 0;
      goto LABEL_242;
    }
  }
  v99 = v153;
LABEL_248:
  if ( v150 )
  {
    DxgAdapterSyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 16LL)
                                                          + 4152LL),
                             v157,
                             v164,
                             v165,
                             v97,
                             v173,
                             v10,
                             v171,
                             v99,
                             0LL);
    if ( v189 != v190 && v189 )
      ExFreePoolWithTag(v189, 0);
    v189 = 0LL;
    v191 = 0;
    if ( v152 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
    if ( P != v159 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v160 = 0;
    goto LABEL_162;
  }
  v106 = 0;
  if ( !v153 )
  {
LABEL_341:
    if ( v95 != v190 && v95 )
      ExFreePoolWithTag(v95, 0);
    v189 = 0LL;
    v191 = 0;
    if ( v152 )
    {
      v152 = 0;
      ExReleaseResourceLite(v151[43]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
    if ( v21 && v155 )
    {
      ExReleaseResourceLite(v21[13]);
      KeLeaveCriticalRegion();
    }
    if ( P != v159 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v160 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
    if ( v166 != v167 && v166 )
      ExFreePoolWithTag(v166, 0);
    return 0LL;
  }
  v107 = v164;
  v177 = v164;
  v108 = (struct DXGSYNCOBJECT **)((char *)v97 - (char *)v10);
  for ( i = v108; ; v108 = i )
  {
    v109 = *(__int64 *)((char *)v108 + (_QWORD)v10);
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v175, (struct DXGSYNCOBJECT *)v109);
    if ( v176 )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v110);
      v111[3] = 275LL;
      v111[4] = 4LL;
      v111[5] = &v175;
      v111[6] = 0LL;
      v111[7] = 0LL;
      WdLogEvent5_WdCriticalError(v111);
    }
    v112 = v175;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v112 + 8) == KeGetCurrentThread() )
    {
      v114 = *(_DWORD *)(v112 + 24);
      if ( v114 <= 0 )
      {
        v115 = WdLogNewEntry5_WdAssertion(v113);
        *(_QWORD *)(v115 + 24) = 409LL;
        WdLogEvent5_WdAssertion(v115);
        v114 = *(_DWORD *)(v112 + 24);
      }
      v116 = v114 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v112 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v119 = *(_DWORD *)(v112 + 28);
          if ( v119 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v117, &EventBlockThread, v118, v119);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v112);
        ExAcquirePushLockExclusiveEx(v112 + 16, 0LL);
      }
      if ( *(_QWORD *)(v112 + 8) )
      {
        v120 = WdLogNewEntry5_WdAssertion(v117);
        *(_QWORD *)(v120 + 24) = 433LL;
        WdLogEvent5_WdAssertion(v120);
      }
      if ( *(_DWORD *)(v112 + 24) )
      {
        v121 = WdLogNewEntry5_WdAssertion(v117);
        *(_QWORD *)(v121 + 24) = 434LL;
        WdLogEvent5_WdAssertion(v121);
      }
      *(_QWORD *)(v112 + 8) = KeGetCurrentThread();
      v116 = 1;
      v10 = v162;
    }
    *(_DWORD *)(v112 + 24) = v116;
    v176 = 1;
    v122 = *(_DWORD *)(v109 + 168);
    if ( (unsigned int)(v122 - 5) <= 1 )
    {
      v123 = *v10;
    }
    else
    {
      v123 = 0LL;
      if ( v122 == 3 )
        v123 = v171;
    }
    v124 = v170;
    v125 = (*(_DWORD *)(v109 + 172) & 4) != 0
         ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                         (DXGSYNCOBJECTCA *)v109,
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v170 + 2) + 16LL))
           + 4)
         : *(_QWORD *)(v109 + 296);
    v174 = v125;
    if ( (*((_DWORD *)v107 + 99) & 0x10) != 0 )
      break;
    v126 = v164;
    v141 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v124 + 2) + 16LL)
                                                                                                + 520LL)
                                                                                    + 8LL)
                                                                        + 624LL))(
             *((_QWORD *)v164 + 32),
             v125,
             v123);
    v130 = v141;
    if ( v141 < 0 )
    {
LABEL_312:
      v143 = (_QWORD *)WdLogNewEntry5_WdError(v128);
      v143[3] = v157;
      v143[4] = v165[v106];
      v143[5] = v106;
      v143[6] = v130;
      WdLogEvent5_WdError(v143);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v175);
      if ( v189 != v190 && v189 )
        ExFreePoolWithTag(v189, 0);
      v191 = 0;
      v189 = 0LL;
      if ( v152 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
      if ( v154 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
      if ( P != v159 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v160 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
      if ( v166 != v167 && v166 )
        ExFreePoolWithTag(v166, 0);
      return (unsigned int)v130;
    }
    if ( v149 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        goto LABEL_292;
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v148 = (unsigned __int64 *)v171;
      v147 = (struct DXGDEVICESYNCOBJECT **)&v174;
      McTemplateK0pqPR1x(v128, v142, v129, v126);
    }
LABEL_310:
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v175);
    ++v106;
    v162 = ++v10;
    if ( v106 >= v153 )
    {
      v21 = v154;
      v95 = v189;
      goto LABEL_341;
    }
    v104 = a10;
  }
  if ( v104 )
  {
    v126 = (struct DXGCONTEXT *)*((_QWORD *)v164 + 36);
    v127 = (*(__int64 (__fastcall **)(struct DXGCONTEXT *, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v124 + 2) + 16LL) + 520LL)
                                                                                                 + 8LL)
                                                                                     + 632LL))(
             v126,
             v125,
             v123);
    v130 = v127;
    if ( v127 < 0 )
      goto LABEL_312;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
LABEL_292:
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1(
        (__int64)&v169[v106],
        &EventWaitForSynchronizationObjectFromGpu,
        (__int64)v129,
        v126,
        Timeout,
        &v174,
        &v169[v106]);
      goto LABEL_310;
    }
    goto LABEL_310;
  }
  DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v164 + 50, &v188);
  v133 = (_QWORD *)*((_QWORD *)&v188 + 1);
  v134 = (_QWORD *)v188;
  v135 = v169;
  while ( 1 )
  {
    if ( v133 == v134 || !v133 )
    {
      v188 = 0LL;
      v10 = v162;
      v107 = v177;
      goto LABEL_310;
    }
    v136 = v133[5];
    v137 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v132 + 2) + 16LL)
                                                                                                 + 520LL)
                                                                                     + 8LL)
                                                                         + 632LL))(
             v136,
             v131,
             v123);
    v140 = v137;
    if ( v137 < 0 )
      break;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1(
        (__int64)&v135[v106],
        &EventWaitForSynchronizationObjectFromGpu,
        v139,
        v136,
        Timeout,
        &v174,
        &v135[v106]);
    }
    v133 = (_QWORD *)*v133;
    v131 = v174;
    v132 = v170;
  }
  v144 = (_QWORD *)WdLogNewEntry5_WdError(v138);
  v144[3] = v157;
  v144[4] = v165[v106];
  v144[5] = v106;
  v144[6] = v140;
  WdLogEvent5_WdError(v144);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v175);
  if ( v189 != v190 && v189 )
    ExFreePoolWithTag(v189, 0);
  v189 = 0LL;
  v191 = 0;
  if ( v152 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v151);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v181);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v163);
  if ( v154 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
  if ( P != v159 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v160 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
  if ( v166 != v167 && v166 )
    ExFreePoolWithTag(v166, 0);
  return (unsigned int)v140;
}
