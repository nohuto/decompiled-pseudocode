/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071870
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C005C978 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0061248 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062BBC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C007E9BC (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00017CC (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C00017E0 (-IsSoftGPU@DXGADAPTER@@QEBAEXZ.c)
 *     ??0VIDMM_GLOBAL_ALLOC_VGPU_BASE@@QEAA@XZ @ 0x1C00028F4 (--0VIDMM_GLOBAL_ALLOC_VGPU_BASE@@QEAA@XZ.c)
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C000291C (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00029A4 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0003394 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001812C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0024EF8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0025084 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002510C (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00254C0 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C0025874 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     VidSchDestroySyncObject @ 0x1C0061F20 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C0062140 (VidSchCreateSyncObject.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C006B210 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C006B6C4 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D2C8 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00707AC (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00707E8 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070A64 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0070BF4 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0070C50 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C007EB6C (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C007F6A0 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00AB4C4 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00B189C (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ @ 0x1C00B56C8 (-GetVmwpProcess@VIDMM_PROCESS@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS a10,
        struct DXGADAPTERALLOCATION *a11,
        void *a12,
        void *a13,
        unsigned int a14,
        unsigned __int8 a15,
        void *a16,
        char a17,
        struct _VIDMM_CROSSADAPTER_ALLOC **a18,
        struct _VIDMM_GLOBAL_ALLOC **a19)
{
  char v19; // si
  __int64 v24; // rdx
  char v25; // cl
  int Value; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r13d
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  bool v31; // cf
  __int64 v32; // rax
  __int64 CurrentProcess; // rax
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v45; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // eax
  unsigned int v70; // ebx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  bool v80; // r13
  char v81; // al
  __int64 v82; // rax
  VIDMM_GLOBAL_ALLOC_VGPU_BASE *v83; // rax
  __int64 v84; // rcx
  VIDMM_GLOBAL_ALLOC_VGPU_BASE *v85; // rax
  VIDMM_GLOBAL_ALLOC_VGPU_BASE *v86; // r14
  unsigned int v87; // ebx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  int SyncObject; // ebx
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  _QWORD *v96; // rcx
  __int64 v97; // rax
  int v98; // r12d
  int v99; // ebx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  struct DXGADAPTERALLOCATION *v104; // r8
  int v105; // eax
  struct _VIDMM_CROSSADAPTER_ALLOC **v106; // r12
  volatile signed __int32 *v107; // rax
  struct VIDMM_PARTITION *v108; // rax
  bool v109; // zf
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  unsigned __int64 v113; // r12
  _QWORD *v114; // rax
  unsigned __int64 v115; // rbx
  int v116; // edx
  __int64 v117; // rcx
  __int64 v118; // rdx
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v119; // rcx
  char v120; // al
  unsigned int v121; // eax
  bool v122; // r8
  struct VIDMM_PARTITION *v123; // r13
  unsigned int v124; // edx
  __int64 v125; // rax
  _DWORD *v126; // r10
  unsigned int v127; // edx
  unsigned __int64 v128; // rcx
  int v129; // eax
  int v130; // r13d
  unsigned int v131; // ebx
  unsigned int v132; // ecx
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  int v134; // eax
  int v135; // edx
  int v136; // edx
  int v137; // ecx
  int v138; // eax
  __int64 v139; // rcx
  __int64 v140; // r13
  unsigned int *v141; // rbx
  unsigned int v142; // edx
  unsigned int v143; // r8d
  unsigned int v144; // r9d
  unsigned int v145; // r10d
  unsigned int v146; // r11d
  unsigned int v147; // eax
  unsigned int v148; // ebx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 i; // rdi
  __int64 v153; // rax
  __int64 v154; // rdx
  KSPIN_LOCK *v155; // rdx
  __int64 v156; // rdx
  __int64 v157; // rcx
  int *v158; // rdi
  __int64 v159; // rsi
  _QWORD *v160; // rax
  DXGFASTMUTEX *v161; // rcx
  __int64 v162; // rax
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v163; // [rsp+100h] [rbp-80h] BYREF
  unsigned __int8 v164; // [rsp+104h] [rbp-7Ch]
  bool v165; // [rsp+105h] [rbp-7Bh] BYREF
  int v166; // [rsp+108h] [rbp-78h] BYREF
  int v167; // [rsp+10Ch] [rbp-74h]
  unsigned int v168; // [rsp+110h] [rbp-70h]
  int v169; // [rsp+114h] [rbp-6Ch] BYREF
  unsigned int v170; // [rsp+118h] [rbp-68h] BYREF
  int v171; // [rsp+11Ch] [rbp-64h]
  struct VIDMM_PARTITION *v172; // [rsp+120h] [rbp-60h]
  __int64 CurrentProcessId; // [rsp+128h] [rbp-58h]
  unsigned int v174[2]; // [rsp+130h] [rbp-50h]
  unsigned __int64 v175; // [rsp+138h] [rbp-48h]
  __int64 v176; // [rsp+140h] [rbp-40h]
  struct DXGPROCESS *Current; // [rsp+148h] [rbp-38h]
  int v178[36]; // [rsp+150h] [rbp-30h] BYREF
  unsigned __int8 v179; // [rsp+1F0h] [rbp+70h]
  unsigned int v180; // [rsp+1F0h] [rbp+70h]
  struct VIDMM_DEVICE *v181; // [rsp+1F8h] [rbp+78h]
  unsigned __int8 v182; // [rsp+200h] [rbp+80h]
  char v183; // [rsp+200h] [rbp+80h]
  bool v185; // [rsp+238h] [rbp+B8h]
  __int16 v186; // [rsp+238h] [rbp+B8h]

  v181 = a2;
  v19 = (char)a10.0;
  v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  Current = DXGPROCESS::GetCurrent();
  v25 = *((_BYTE *)Current + 299);
  if ( (v25 & 8) == 0 || (v25 & 0x10) != 0 || a16 )
  {
    Value = v163.Value;
  }
  else
  {
    Value = v163.Value;
    if ( (*(_BYTE *)&v163.0 & 1) != 0 )
    {
      Value = v163.Value & 0xFFFF7FFF;
      v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v163.Value & 0xFFFF7FFF);
    }
  }
  v172 = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 1) + 264LL);
  v27 = 0;
  if ( *((_DWORD *)this + 1748) != 1 )
    v27 = a3;
  v28 = v27;
  *(_QWORD *)v174 = v27;
  v176 = *((_QWORD *)this + 5023) + 1560LL * v27;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg) + 24) = v181;
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v181);
    v29[4] = a6;
    v29[6] = a7;
    v29[7] = a8;
    v29[3] = a4;
    v29[5] = 0LL;
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v30[3] = a9.Value;
    v30[4] = v163.Value;
    v30[5] = a11;
    Value = v163.Value;
  }
  *a19 = 0LL;
  v31 = *((_DWORD *)this + 8) < 0x5023u;
  v171 = 0x40000;
  if ( v31 && (Value & 0x40000) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(0x40000LL, v24);
    *(_QWORD *)(v32 + 24) = 2396LL;
    WdLogEvent5_WdAssertion(v32);
    return 3221225485LL;
  }
  if ( (Value & 1) == 0 || (LOBYTE(v167) = 1, (Value & 0x40000) != 0) )
    LOBYTE(v167) = 0;
  if ( !*((_BYTE *)this + 40136) )
  {
    CurrentProcess = PsGetCurrentProcess(0x40000LL, v24);
    if ( PsGetProcessWow64Process(CurrentProcess) )
      goto LABEL_29;
    Value = v163.Value;
  }
  if ( (Value & 0x20000000) == 0
    && (Value & 0x40000000) == 0
    && Value >= 0
    && (Value & 0x10000000) == 0
    && (Value & 8) == 0
    && (Value & 0x400000) == 0
    && !a16 )
  {
    LOBYTE(v167) = 1;
    v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(Value & 0xFFFBFFFF);
  }
LABEL_29:
  v35 = a7;
  if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(this, a9, a7) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v38 + 24) = 2445LL;
    WdLogEvent5_WdAssertion(v38);
    return 3221225485LL;
  }
  if ( !dword_1C004E420 )
  {
LABEL_36:
    v39 = v163.0;
    goto LABEL_37;
  }
  v39 = v163.0;
  if ( (*(_BYTE *)&v163.0 & 1) == 0 )
  {
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v37 = (*(_BYTE *)&a9.0 & 0x1Fu) - 1;
      v35 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
      a7 = v35;
      goto LABEL_37;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, v28, a7, 0x1001u, &v170) )
    {
      v35 = v170;
      a7 = v170;
    }
    goto LABEL_36;
  }
LABEL_37:
  if ( !a4 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v40 + 24) = 2485LL;
    WdLogEvent5_WdAssertion(v40);
    return 3221225485LL;
  }
  if ( ((*(_WORD *)&v39 | (unsigned __int16)(*(unsigned int *)&v39 >> 1)) & 0x1000) != 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(*(unsigned int *)&v39 | (*(unsigned int *)&v39 >> 1), v36);
    *(_QWORD *)(v41 + 24) = 2493LL;
    WdLogEvent5_WdAssertion(v41);
    return 3221225485LL;
  }
  v169 = 0;
  v166 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          this,
          v28,
          v35,
          &v163,
          a4,
          a5,
          a16 != 0LL,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v166) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v43, v42);
    *(_QWORD *)(v44 + 24) = 2504LL;
    WdLogEvent5_WdAssertion(v44);
    return 3221225485LL;
  }
  v45 = v163.0;
  if ( (v163.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v163.0 & 1) == 0 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v46 + 24) = 2519LL;
      WdLogEvent5_WdAssertion(v46);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v163.0 & 2) != 0 || (*(_BYTE *)&v163.0 & 0x20) != 0 || (*(_BYTE *)&v163.0 & 0x10) != 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v47 + 24) = 2531LL;
      WdLogEvent5_WdAssertion(v47);
      return 3221225485LL;
    }
  }
  if ( (v163.Value & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)&v163.0 & 2) == 0 )
    {
      if ( (*(_BYTE *)&v163.0 & 4) == 0 )
      {
LABEL_56:
        if ( (*(_DWORD *)&v45 & 0x100000) != 0
          || (*(_DWORD *)&v45 & 0x80000) != 0
          || (*(_BYTE *)&v45 & 8) != 0
          || (*(_BYTE *)&v45 & 0x10) != 0
          || (*(_BYTE *)&v45 & 0x20) != 0 )
        {
          goto LABEL_61;
        }
        goto LABEL_62;
      }
      if ( DXGADAPTER::IsSoftGPU(*((DXGADAPTER **)this + 3)) )
      {
        v45 = v163.0;
        goto LABEL_56;
      }
    }
LABEL_61:
    v48 = WdLogNewEntry5_WdAssertion(v43, v42);
    *(_QWORD *)(v48 + 24) = 2550LL;
    WdLogEvent5_WdAssertion(v48);
    return 3221225485LL;
  }
LABEL_62:
  v49 = 0LL;
  if ( (v166 & 4) != 0 )
    v49 = a5;
  v175 = v49;
  if ( a8 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v28, a8, 1u, 0LL) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v51, v50);
      *(_QWORD *)(v52 + 24) = 2582LL;
      WdLogEvent5_WdAssertion(v52);
      return 3221225485LL;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny(this, v28, a8, 0x20u) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v53 + 24) = 2597LL;
      WdLogEvent5_WdAssertion(v53);
      return 3221225485LL;
    }
    v45 = v163.0;
  }
  if ( (*(_BYTE *)&v45 & 2) != 0 )
  {
    if ( (*(_BYTE *)&v45 & 1) == 0 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v54 + 24) = 2615LL;
      WdLogEvent5_WdAssertion(v54);
      return 3221225485LL;
    }
    if ( (*(_DWORD *)&v45 & 0x20000000) != 0 || *(int *)&v45 < 0 || (*(_DWORD *)&v45 & 0x40000000) != 0 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v55 + 24) = 2628LL;
      WdLogEvent5_WdAssertion(v55);
      return 3221225485LL;
    }
  }
  CurrentProcessId = 16LL;
  if ( (*(_BYTE *)&v45 & 4) != 0 && (*(_DWORD *)&v45 & 0x800000) == 0 )
  {
    if ( *((_BYTE *)this + 7073) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v28, a8, 0x10u, 0LL) )
      {
        v57 = WdLogNewEntry5_WdAssertion(v56, v42);
        *(_QWORD *)(v57 + 24) = 2661LL;
        WdLogEvent5_WdAssertion(v57);
        return 3221225485LL;
      }
    }
    else if ( !DXGADAPTER::IsSoftGPU(*((DXGADAPTER **)this + 3))
           && !VIDMM_GLOBAL::VerifySegmentSet(this, v28, a8, 1u, 0LL) )
    {
      v59 = WdLogNewEntry5_WdAssertion(v58, v42);
      *(_QWORD *)(v59 + 24) = 2668LL;
      WdLogEvent5_WdAssertion(v59);
      return 3221225485LL;
    }
    v45 = v163.0;
  }
  v60 = (*(unsigned int *)&v45 >> 29) & 1;
  if ( ((*(unsigned int *)&v45 >> 29) & 1) != 0
    && ((*(_BYTE *)&v45 & 2) != 0
     || (*(_BYTE *)&v45 & 8) != 0
     || (*(_BYTE *)&v45 & 0x20) != 0
     || (*(_DWORD *)&v45 & 0x40000000) != 0) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v61 + 24) = 2688LL;
    WdLogEvent5_WdAssertion(v61);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)&v45 & 0x100000) != 0 && (!(_DWORD)v60 || !a18 || (v166 & 1) == 0) )
  {
    v62 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v62 + 24) = 2700LL;
    WdLogEvent5_WdAssertion(v62);
    return 3221225485LL;
  }
  if ( a16
    && ((*(_BYTE *)&v45 & 2) != 0
     || (*(_WORD *)&v45 & 0x100) != 0
     || (*(_WORD *)&v45 & 0x200) != 0
     || (*(_DWORD *)&v45 & 0x40000000) != 0) )
  {
    v63 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v63 + 24) = 2720LL;
    WdLogEvent5_WdAssertion(v63);
    return 3221225485LL;
  }
  if ( ((*(unsigned int *)&v45 >> 26) & 1) != 0 )
  {
    if ( (*(_BYTE *)&v45 & 8) == 0 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v60, v42);
      *(_QWORD *)(v64 + 24) = 2736LL;
      WdLogEvent5_WdAssertion(v64);
      return 3221225485LL;
    }
  }
  else if ( (*(_BYTE *)&v45 & 8) == 0 )
  {
    goto LABEL_117;
  }
  if ( (*(_BYTE *)&v45 & 1) != 0 && ((*(unsigned int *)&v45 >> 26) & 1) == 0 && !a16
    || (*(_BYTE *)&v45 & 2) != 0
    || (_DWORD)v60
    || (*(_BYTE *)&v45 & 0x10) != 0
    || (*(_BYTE *)&v45 & 0x20) != 0
    || *(int *)&v45 < 0
    || (*(_DWORD *)&v45 & 0x40000000) != 0 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v65 + 24) = 2769LL;
    WdLogEvent5_WdAssertion(v65);
    return 3221225485LL;
  }
LABEL_117:
  if ( ((*(unsigned int *)&v45 >> 4) & 1) != 0
    && ((*(_BYTE *)&v45 & 2) != 0
     || (*(_BYTE *)&v45 & 0x20) != 0
     || *(int *)&v45 < 0
     || (*(_DWORD *)&v45 & 0x40000000) != 0) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v66 + 24) = 2791LL;
    WdLogEvent5_WdAssertion(v66);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&v45 & 0x20) != 0
    && ((*(_BYTE *)&v45 & 2) != 0
     || (_DWORD)v60
     || ((*(unsigned int *)&v45 >> 4) & 1) != 0
     || *(int *)&v45 < 0
     || (*(_DWORD *)&v45 & 0x40000000) != 0) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v67 + 24) = 2815LL;
    WdLogEvent5_WdAssertion(v67);
    return 3221225485LL;
  }
  if ( *(int *)&v45 >= 0 )
  {
    if ( (*(_DWORD *)&v45 & 0x40000000) == 0 )
      goto LABEL_154;
    if ( (*(_BYTE *)&v45 & 2) == 0 )
    {
      if ( (*(_BYTE *)&v45 & 4) != 0 )
      {
        if ( !DXGADAPTER::IsWarpAdapter(*((DXGADAPTER **)this + 3))
          && !DXGADAPTER::IsSoftGPU(*((DXGADAPTER **)this + 3)) )
        {
          goto LABEL_160;
        }
        v45 = v163.0;
      }
      if ( (*(_BYTE *)&v45 & 0x10) == 0 && (*(_BYTE *)&v45 & 0x20) == 0 && *(int *)&v45 >= 0 )
      {
        v60 = *(unsigned int *)(*((_QWORD *)this + 3) + 1916LL);
        if ( (v60 & 0x200) == 0 )
          v45 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v45 | 1);
        v69 = (unsigned __int8)v167;
        if ( (*(_BYTE *)&v45 & 1) != 0 )
          v69 = 1;
        v45 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v45 | 0x20000000);
        v163.0 = v45;
        v167 = v69;
        goto LABEL_154;
      }
    }
LABEL_160:
    v74 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v74 + 24) = 2863LL;
    WdLogEvent5_WdAssertion(v74);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&v45 & 2) != 0 )
    goto LABEL_139;
  if ( (*(_BYTE *)&v45 & 4) != 0 )
  {
    if ( !DXGADAPTER::IsWarpAdapter(*((DXGADAPTER **)this + 3)) && !DXGADAPTER::IsSoftGPU(*((DXGADAPTER **)this + 3)) )
      goto LABEL_139;
    v45 = v163.0;
  }
  if ( (*(_BYTE *)&v45 & 0x10) != 0 || (*(_BYTE *)&v45 & 0x20) != 0 || (*(_DWORD *)&v45 & 0x40000000) != 0 )
  {
LABEL_139:
    v68 = WdLogNewEntry5_WdAssertion(v60, v42);
    *(_QWORD *)(v68 + 24) = 2839LL;
    WdLogEvent5_WdAssertion(v68);
    return 3221225485LL;
  }
LABEL_154:
  if ( (*(_DWORD *)&v45 & 0x10000000) != 0 )
  {
    v70 = *(_DWORD *)&v45 & 0xEFFF7FBF;
    if ( DXGADAPTER::IsSoftGPU(*((DXGADAPTER **)this + 3)) || DXGADAPTER::IsWarpAdapter(*((DXGADAPTER **)this + 3)) )
      v70 &= ~4u;
    if ( v70 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v72, v71);
      *(_QWORD *)(v73 + 24) = 2905LL;
      WdLogEvent5_WdAssertion(v73);
      return 3221225485LL;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v28, a8, 1u, 0LL) )
    {
      v75 = WdLogNewEntry5_WdAssertion(v60, v42);
      *(_QWORD *)(v75 + 24) = 2915LL;
      WdLogEvent5_WdAssertion(v75);
      return 3221225485LL;
    }
    v45 = v163.0;
  }
  if ( (*(_DWORD *)&v45 & 0x400000) != 0 )
  {
    if ( (*(_DWORD *)&v45 & 0x20000000) == 0 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v60, v42);
      *(_QWORD *)(v76 + 24) = 2931LL;
      WdLogEvent5_WdAssertion(v76);
      return 3221225485LL;
    }
    if ( !a12 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v60, v42);
      *(_QWORD *)(v77 + 24) = 2941LL;
      WdLogEvent5_WdAssertion(v77);
      return 3221225485LL;
    }
  }
  if ( (*(_WORD *)&v45 & 0x4000) != 0 )
  {
    if ( (*(_BYTE *)&v45 & 1) == 0 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v60, v42);
      *(_QWORD *)(v78 + 24) = 2953LL;
      WdLogEvent5_WdAssertion(v78);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v45 & 2) != 0
      || (*(_BYTE *)&v45 & 8) != 0
      || (*(_BYTE *)&v45 & 0x10) != 0
      || (*(_BYTE *)&v45 & 0x20) != 0
      || (*(_BYTE *)&v45 & 0x40) != 0
      || (*(_WORD *)&v45 & 0x100) != 0
      || (*(_WORD *)&v45 & 0x200) != 0
      || (*(_DWORD *)&v45 & 0x40000) != 0 )
    {
      v79 = WdLogNewEntry5_WdAssertion(v60, v42);
      *(_QWORD *)(v79 + 24) = v163.Value;
      WdLogEvent5_WdAssertion(v79);
      return 3221225485LL;
    }
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() && *((_BYTE *)DXGPROCESS::GetCurrent() + 298) )
    {
      v45 = v163.0;
      if ( (v163.Value & 0x10000000) == 0 && (v163.Value & 0x40000000) == 0 )
      {
        v45 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v163.Value | 0x8000000);
        v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v163.Value | 0x8000000);
      }
    }
    else
    {
      v45 = v163.0;
    }
  }
  LOBYTE(v60) = 0;
  v80 = 0;
  v182 = 0;
  v179 = 0;
  v164 = 0;
  v81 = *((_BYTE *)Current + 299);
  v185 = 0;
  if ( (v81 & 8) == 0 || a16 )
  {
    v83 = (VIDMM_GLOBAL_ALLOC_VGPU_BASE *)operator new(0x200uLL, 0x31306956u, 1LL, PagedPool);
    if ( v83 )
      goto LABEL_204;
    goto LABEL_329;
  }
  v179 = 1;
  if ( (*(_BYTE *)&v45 & 0x10) != 0 )
  {
    LOBYTE(v60) = 1;
    v164 = 1;
  }
  else if ( (*(_BYTE *)&v45 & 1) != 0 )
  {
    v80 = (v81 & 0x10) != 0;
    if ( (*(_WORD *)&v45 & 0x8000) != 0 && (v81 & 0x10) == 0 )
    {
      v82 = WdLogNewEntry5_WdAssertion(v60, v42);
      *(_QWORD *)(v82 + 24) = 3012LL;
      WdLogEvent5_WdAssertion(v82);
      return 3221225485LL;
    }
    v185 = (v81 & 0x10) == 0;
    v182 = v185;
    if ( (*(_DWORD *)&v45 & 0x20000000) != 0 )
    {
      v182 = 1;
      v185 = (v81 & 0x10) == 0;
    }
  }
  if ( (unsigned __int8)v60 | (v185 || v80) )
  {
    v83 = (VIDMM_GLOBAL_ALLOC_VGPU_BASE *)operator new(0x228uLL, 0x61306956u, 1LL, PagedPool);
    if ( v83 )
      goto LABEL_204;
LABEL_329:
    _InterlockedIncrement(&dword_1C004E594);
    v162 = WdLogNewEntry5_WdLowResource(v84);
    *(_QWORD *)(v162 + 24) = 3059LL;
    WdLogEvent5_WdLowResource(v162);
    return 3221225495LL;
  }
  v83 = (VIDMM_GLOBAL_ALLOC_VGPU_BASE *)operator new(0x208uLL, 0x61306956u, 1LL, PagedPool);
  if ( !v83 )
    goto LABEL_329;
LABEL_204:
  v85 = VIDMM_GLOBAL_ALLOC_VGPU_BASE::VIDMM_GLOBAL_ALLOC_VGPU_BASE(v83);
  v86 = v85;
  if ( !v85 )
    goto LABEL_329;
  v87 = v174[0];
  *((_DWORD *)v85 + 19) ^= (*((_DWORD *)v85 + 19) ^ v174[0]) & 0x3F;
  v88 = (__int64)operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v88 )
    v88 = DXGFASTMUTEX::DXGFASTMUTEX(v88, 13);
  *((_QWORD *)v86 + 40) = v88;
  if ( !v88 )
  {
    _InterlockedIncrement(&dword_1C004E644);
    v90 = WdLogNewEntry5_WdLowResource(v89);
    *(_QWORD *)(v90 + 24) = 3073LL;
    WdLogEvent5_WdLowResource(v90);
    SyncObject = -1073741801;
LABEL_308:
    v106 = a18;
    goto LABEL_309;
  }
  v92 = operator new[](0x28uLL, 0x32346956u, (POOL_TYPE)512);
  *((_QWORD *)v86 + 63) = v92;
  if ( !v92 )
  {
    _InterlockedIncrement(&dword_1C004E6A0);
    v95 = WdLogNewEntry5_WdLowResource(v94);
    *(_QWORD *)(v95 + 24) = 3086LL;
    WdLogEvent5_WdLowResource(v95);
    SyncObject = -1073741801;
    goto LABEL_308;
  }
  *v92 = 0LL;
  v92[1] = 0LL;
  v92[2] = 0LL;
  v92[3] = 0LL;
  v92[4] = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 57LL) )
  {
    if ( (v163.Value & 0x40000000) != 0 || (v163.Value & 0x80000000) != 0 )
    {
      *(_QWORD *)(*((_QWORD *)v86 + 63) + 24LL) = operator new[](0x20uLL, 0x33306956u, (POOL_TYPE)512);
      v96 = *(_QWORD **)(*((_QWORD *)v86 + 63) + 24LL);
      if ( v96 )
      {
        v98 = 0;
        *v96 = 0LL;
        v96[1] = 0LL;
        v96[2] = 0LL;
        v96[3] = 0LL;
        v99 = 1000 * (v87 + 1);
        v168 = v99;
        while ( 1 )
        {
          memset(v178, 0, 0x50uLL);
          v178[1] |= 0x80u;
          v100 = *((_QWORD *)v86 + 63);
          v178[0] = 5;
          *(_QWORD *)(CurrentProcessId + *(_QWORD *)(v100 + 24)) = (unsigned int)(v98 * v99) + 100LL;
          v101 = *((_QWORD *)this + 2);
          *(_QWORD *)&v178[2] = (unsigned int)(v98 * v99) + 100LL;
          LODWORD(Current) = ((v98 != 1) + 7) & 0x7FFFFFFF;
          SyncObject = VidSchCreateSyncObject(
                         *(_QWORD *)(v101 + 528),
                         0LL,
                         (unsigned int *)v178,
                         (int)Current,
                         0LL,
                         0LL,
                         (__int64 *)(*(_QWORD *)(*((_QWORD *)v86 + 63) + 24LL) + 8LL * v98),
                         0LL);
          if ( SyncObject < 0 )
            break;
          CurrentProcessId += 8LL;
          ++v98;
          v99 = v168;
          if ( v98 >= 2 )
            goto LABEL_225;
        }
      }
      else
      {
        _InterlockedIncrement(&dword_1C004E58C);
        v97 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v97 + 24) = 3103LL;
        WdLogEvent5_WdLowResource(v97);
        SyncObject = -1073741801;
      }
      goto LABEL_308;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v86 + 63) + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
    v102 = *(_QWORD *)(*((_QWORD *)v86 + 63) + 16LL);
    if ( !v102 )
    {
      _InterlockedIncrement(&dword_1C004E58C);
      v103 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v103 + 24) = 3157LL;
      WdLogEvent5_WdLowResource(v103);
      SyncObject = -1073741801;
      goto LABEL_308;
    }
    *(_QWORD *)v102 = 0LL;
    *(_DWORD *)(v102 + 8) = 0;
    _InterlockedIncrement(*(volatile signed __int32 **)(*((_QWORD *)v86 + 63) + 16LL));
    v93 = 0LL;
    if ( (v163.Value & 0x100000) == 0 )
      v93 = 0xFFFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v86 + 63) + 16LL) + 4LL) = v93;
  }
LABEL_225:
  v104 = a11;
  if ( a11 )
  {
    v105 = *((_DWORD *)a11 + 1);
    if ( (v105 & 0x8000) != 0 )
    {
      *((_DWORD *)v86 + 19) |= 0x800u;
      v105 = *((_DWORD *)a11 + 1);
    }
    if ( (v105 & 0x10000) != 0 )
    {
      *((_DWORD *)v86 + 20) |= 0x400u;
      *((_DWORD *)v86 + 19) |= 0x400000u;
    }
  }
  v106 = a18;
  if ( a18 )
    v107 = (volatile signed __int32 *)*a18;
  else
    v107 = 0LL;
  *((_QWORD *)v86 + 62) = v107;
  if ( v107 )
  {
    _InterlockedIncrement(v107);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(this, *((struct _VIDMM_CROSSADAPTER_ALLOC **)v86 + 62), v86);
    if ( SyncObject < 0 )
    {
LABEL_309:
      if ( (*((_DWORD *)v86 + 23) & 1) != 0 )
        VIDMM_GLOBAL::UncommitGlobalBackingStore(this, v86, 1);
      v150 = *((_QWORD *)v86 + 63);
      if ( v150 )
      {
        if ( *(_QWORD *)(v150 + 24) )
        {
          v151 = *((_QWORD *)v86 + 63);
          for ( i = 0LL; i < 16; i += 8LL )
          {
            v153 = *(_QWORD *)(v150 + 24);
            v154 = *(_QWORD *)(i + v153);
            if ( v154 )
            {
              VidSchDestroySyncObject(*(_VIDSCH_SYNC_OBJECT **)(i + v153), v154);
              v150 = *((_QWORD *)v86 + 63);
              v151 = v150;
            }
          }
          operator delete(*(void **)(v151 + 24));
          v150 = *((_QWORD *)v86 + 63);
        }
        if ( *(_QWORD *)(v150 + 16) )
        {
          VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(int **)(v150 + 16), 1LL);
          v150 = *((_QWORD *)v86 + 63);
        }
        operator delete((void *)v150);
      }
      v155 = (KSPIN_LOCK *)*((_QWORD *)v86 + 62);
      if ( v155 )
      {
        VIDMM_GLOBAL::FreeCrossAdapterDataDpc(this, v155, v86);
        v157 = (unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)v86 + 62));
        if ( (_DWORD)v157 )
        {
          if ( (int)v157 < 0 )
          {
            v158 = (int *)*((_QWORD *)v86 + 62);
            v159 = *v158;
            v160 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v157, v156);
            v160[3] = 270LL;
            v160[4] = 66LL;
            v160[5] = v158;
            v160[6] = v159;
            v160[7] = 0LL;
            WdLogEvent5_WdCriticalError(v160);
          }
        }
        else
        {
          VIDMM_GLOBAL::DestroyCrossAdapterAllocation(this, *((struct _VIDMM_CROSSADAPTER_ALLOC **)v86 + 62));
          *v106 = 0LL;
        }
      }
      v161 = (DXGFASTMUTEX *)*((_QWORD *)v86 + 40);
      if ( v161 )
        DXGFASTMUTEX::`scalar deleting destructor'(v161);
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v86);
      return (unsigned int)SyncObject;
    }
    v104 = a11;
  }
  v108 = v172;
  *(_QWORD *)v86 = a4;
  v109 = (*((_DWORD *)v108 + 18) & 1) == 0;
  v110 = 0xFFFFLL;
  if ( v109 )
    v110 = 4095LL;
  v111 = (unsigned int)v110;
  v112 = ~v110;
  v113 = v112 & (v111 + a4);
  if ( a4 > v113 )
  {
    v114 = (_QWORD *)WdLogNewEntry5_WdAssertion(v111, v93);
    v114[3] = a4;
LABEL_307:
    WdLogEvent5_WdAssertion(v114);
    SyncObject = -1073741811;
    goto LABEL_308;
  }
  v115 = v112 & (v111 + v175);
  if ( v175 > v115 )
  {
    v114 = (_QWORD *)WdLogNewEntry5_WdAssertion(v111, v175);
    v114[3] = v175;
    goto LABEL_307;
  }
  if ( v113 > 0xFFFF0000 && (*((_DWORD *)v86 + 20) & 0x400) == 0 )
  {
    v114 = (_QWORD *)WdLogNewEntry5_WdAssertion(v111, v175);
    v114[3] = 3248LL;
    goto LABEL_307;
  }
  v116 = v111 + a6;
  v117 = (unsigned int)~(_DWORD)v111;
  v118 = (unsigned int)v117 & v116;
  v168 = v118;
  if ( a6 > (unsigned int)v118 )
  {
    v114 = (_QWORD *)WdLogNewEntry5_WdAssertion(v117, v118);
    v114[3] = a6;
    goto LABEL_307;
  }
  if ( v118 + v113 < v113 || v118 + v115 < v115 )
  {
    v114 = (_QWORD *)WdLogNewEntry5_WdAssertion(v117, v118);
    v149 = v168;
    v114[3] = v113;
    v114[4] = v115;
    v114[5] = v113;
    v114[6] = v149;
    goto LABEL_307;
  }
  if ( (v163.Value & 0x10000000) != 0 )
    v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v163.Value | 8);
  *((_QWORD *)v86 + 45) = a12;
  if ( (v163.Value & 0x20000000) == 0 || (*(_BYTE *)&v163.0 & 0x10) != 0 )
    v171 = 0;
  v119 = (_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *)*((_QWORD *)v86 + 63);
  *((_DWORD *)v86 + 20) = v171 | *((_DWORD *)v86 + 20) & 0xFFFBFFFF;
  *((_QWORD *)v86 + 3) = v115;
  *((_DWORD *)v86 + 8) = v118;
  *((_DWORD *)v86 + 40) = 0;
  *((_QWORD *)v86 + 2) = v113;
  *((_QWORD *)v86 + 1) = v113;
  v119->0 = v163.0;
  *((_DWORD *)v86 + 16) = a8;
  *((_DWORD *)v86 + 17) = a7;
  *((_D3DDDI_SEGMENTPREFERENCE *)v86 + 18) = a9;
  LODWORD(v119) = *((_DWORD *)v86 + 19) ^ (*((_DWORD *)v86 + 19) ^ (v166 << 7)) & 0x80;
  *((_DWORD *)v86 + 19) = (_DWORD)v119;
  v120 = (unsigned __int8)v119 ^ (32 * v166);
  *((_DWORD *)v86 + 32) = 0;
  *((_DWORD *)v86 + 78) = 0;
  v121 = (unsigned int)v119 ^ v120 & 0x40;
  *((_QWORD *)v86 + 5) = v104;
  LODWORD(v119) = (unsigned __int8)v167;
  *((_DWORD *)v86 + 19) = v121;
  *((_DWORD *)v86 + 20) = *((_DWORD *)v86 + 20) & 0xFFFE0F7F | ((_DWORD)v119 << 7) & 0xFFFE0FFF | (v182 << 16) | (v179 << 12) & 0xFFFF1FFF | (v164 << 15) | (v185 << 13) & 0xFFFFBFFF | (v80 << 14);
  if ( v179 )
    *((_QWORD *)v86 + 64) = VIDMM_PROCESS::GetVmwpProcess(*((VIDMM_PROCESS **)v181 + 1));
  v122 = 0;
  if ( (*(_BYTE *)&v163.0 & 1) != 0 )
    v122 = DXGADAPTER::IsSoftGPU(*((DXGADAPTER **)this + 3))
        || VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(this, v174[0], a7);
  v123 = v172;
  v124 = *((_DWORD *)v86 + 20) & 0xFFF7FFFF | (v122 << 19);
  v125 = *((_DWORD *)v86 + 19) & 0x3F;
  *((_DWORD *)v86 + 20) = v124;
  v126 = *(_DWORD **)(1560 * v125 + *((_QWORD *)this + 5023) + 440);
  if ( (*((_DWORD *)v123 + 18) & 1) != 0 )
  {
    v127 = v124 | 0x100;
  }
  else
  {
    if ( dword_1C004E424
      && (**(_DWORD **)(*((_QWORD *)this + 3) + 2456LL) & 0x2000) == 0
      && (v166 & 2) != 0
      && v126
      && ((*v126 & 0x200) != 0 || dword_1C004E424 == 2)
      && ((v128 = *((_QWORD *)v86 + 1), !(_WORD)v128) || v128 > (unsigned int)dword_1C004E428)
      && !v122 )
    {
      v129 = 256;
    }
    else
    {
      v129 = 0;
    }
    v127 = v129 | v124 & 0xFFFFFEFF;
  }
  *((_DWORD *)v86 + 20) = v127;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(this, v86);
  if ( SyncObject < 0 )
    goto LABEL_308;
  if ( (*(_WORD *)&v163.0 & 0x4000) != 0 )
    *((_DWORD *)v86 + 20) |= 0x20u;
  if ( (*(_BYTE *)(v176 + 436) & 3) != 0 )
  {
    v130 = 1 << (*(_WORD *)(v176 + 28) - *(_BYTE *)(v176 + 20));
    *((_DWORD *)v86 + 16) |= v130;
    if ( (v166 & 2) != 0 && (*(_WORD *)&v163.0 & 0x8000) == 0 )
      *((_DWORD *)v86 + 17) |= v130;
    v123 = v172;
  }
  v131 = v174[0];
  *((_QWORD *)v86 + 6) = a13;
  *((_QWORD *)v86 + 15) = a16;
  v132 = *((_DWORD *)v86 + 19) & 0xF7FFFFFF | (a16 != 0LL ? 0x8000000 : 0);
  *((_DWORD *)v86 + 19) = v132 ^ (v132 ^ (a15 << 28)) & 0x10000000;
  *((_DWORD *)v86 + 94) = a14;
  *((_QWORD *)v86 + 38) = (char *)v86 + 296;
  *((_QWORD *)v86 + 37) = (char *)v86 + 296;
  *((_QWORD *)v86 + 59) = -1LL;
  v165 = (*((_DWORD *)v86 + 19) & 0x80) != 0;
  MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v131, a9, &v165);
  *((_DWORD *)v86 + 19) ^= (*((_DWORD *)v86 + 19) ^ (v165 << 10)) & 0x400;
  if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
          (unsigned __int64)this,
          v131,
          a7,
          MostPreferredSegment,
          (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v169) )
    return 3221225485LL;
  v134 = *((_DWORD *)v86 + 19) ^ (*((_DWORD *)v86 + 19) ^ (v169 << 12)) & 0xF0000;
  *((_DWORD *)v86 + 19) = v134;
  v135 = v134 ^ ((unsigned __int16)v134 ^ (unsigned __int16)((_WORD)v169 << 12)) & 0xF000;
  *((_DWORD *)v86 + 19) = v135;
  if ( (*(_BYTE *)&v163.0 & 0x10) != 0 || (*(_BYTE *)&v163.0 & 0x20) != 0 )
    *((_BYTE *)v86 + 97) = 1;
  *((_DWORD *)v86 + 19) = v135 ^ ((unsigned __int16)v135 ^ (unsigned __int16)((unsigned __int8)a17 << 8)) & 0x100;
  *((_QWORD *)v86 + 61) = *((_QWORD *)v123 + 5) + 368LL * (unsigned int)VIDMM_GLOBAL::AdapterId(this);
  VidMmiReferencePartition(v123);
  v136 = **((_DWORD **)v86 + 63);
  if ( (v136 & 0x3A) != 0
    || (v137 = *((_DWORD *)v86 + 20), (v137 & 0x2000) != 0)
    || (*((_DWORD *)v86 + 19) & 0x100) != 0
    || (v137 & 0x400) != 0
    || (v136 & 0x40000000) != 0 )
  {
    v137 = *((_DWORD *)v86 + 20);
    v138 = 0;
  }
  else
  {
    v138 = 0x20000;
  }
  v139 = v138 | v137 & 0xFFFDFFFF;
  v109 = bTracingEnabled == 0;
  *((_DWORD *)v86 + 20) = v139;
  if ( !v109 )
  {
    v140 = *((_QWORD *)v86 + 5);
    v141 = v140 ? *(unsigned int **)(v140 + 24) : 0LL;
    *(_QWORD *)v174 = *((_QWORD *)v181 + 3);
    v175 = *((_QWORD *)this + 3);
    v186 = *((_WORD *)v86 + 38) & 0x3F;
    v176 = *((_QWORD *)v86 + 45);
    CurrentProcessId = (__int64)PsGetCurrentProcessId();
    LOBYTE(v180) = 0;
    v139 = 0LL;
    LOBYTE(v181) = 0;
    LOBYTE(v142) = 0;
    v183 = 0;
    LOBYTE(v143) = 0;
    LOBYTE(v144) = 0;
    LOBYTE(v145) = 0;
    LOBYTE(v146) = 0;
    if ( v141 )
    {
      v139 = *v141;
      v142 = v141[1];
      v143 = v141[2];
      v144 = v141[3];
      v145 = v141[4];
      v146 = v141[5];
      v180 = v141[6];
      LODWORD(v181) = v141[7];
      v147 = v141[8];
      v148 = v141[9];
      v183 = v147;
    }
    else
    {
      LOBYTE(v148) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
        (__int64)&DxgkControlGuid_Context,
        &EventCreateAdapterAllocation,
        0LL,
        CurrentProcessId,
        v174[0],
        v175,
        v19,
        v113,
        v168,
        0,
        a7,
        *(_BYTE *)&a9.0,
        0,
        a8,
        a14,
        (char)v86,
        v140,
        0,
        v139,
        v142,
        v143,
        v144,
        v145,
        v146,
        v180,
        (char)v181,
        v183,
        v148,
        0,
        v176,
        v186,
        a17);
  }
  ++*((_DWORD *)this + 1908);
  *((_QWORD *)this + 955) += v113;
  *((_QWORD *)this + 5019) += v113;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v139) + 24) = v86;
  *a19 = v86;
  return 0LL;
}
