/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0
 * Callers:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0060F08 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C006ACA0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0078300 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C007DA00 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001A80 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0001B0C (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001B3C (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001E20 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C0018E68 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0025798 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0025800 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0025888 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0025C40 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C00260D8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C005F4FC (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FD80 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C006109C (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00619C4 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0061B40 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     VidSchDestroySyncObject @ 0x1C006D920 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C006DB10 (VidSchCreateSyncObject.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C00715F4 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00A7DA4 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00AE4B8 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        struct _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS a10,
        struct DXGADAPTERALLOCATION *a11,
        void *a12,
        void *a13,
        unsigned int a14,
        unsigned __int8 a15,
        void *a16,
        char a17,
        struct _VIDMM_CROSSADAPTER_ALLOC **a18,
        struct _D3DDDI_SEGMENTPREFERENCE **a19)
{
  char v19; // r14
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v21; // ebx
  unsigned int v22; // r12d
  __int64 v25; // rdx
  struct DXGADAPTERALLOCATION *v26; // rcx
  unsigned int v27; // r15d
  __int64 CurrentProcess; // rax
  void *v29; // r9
  unsigned int i; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int Value; // ebx
  int v36; // esi
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r12d
  __int64 v41; // rdx
  unsigned int v42; // r9d
  unsigned int v43; // r10d
  int v44; // r8d
  unsigned int v45; // r15d
  unsigned int v46; // r8d
  __int64 v47; // rcx
  UINT v48; // r15d
  UINT v49; // r12d
  __int64 v50; // rcx
  int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // rcx
  char v54; // r12
  char v55; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v57; // rcx
  char v58; // al
  _QWORD *v59; // rax
  __int64 v60; // rcx
  struct _D3DDDI_SEGMENTPREFERENCE *v61; // r15
  int v62; // r12d
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  PVOID v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  struct DXGADAPTERALLOCATION *v71; // r9
  int v72; // eax
  volatile signed __int32 *v73; // rax
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // edx
  unsigned int v78; // eax
  unsigned int *v79; // rax
  int v80; // ecx
  unsigned __int64 v81; // r8
  bool v82; // r9
  unsigned int v83; // r11d
  unsigned int v84; // r11d
  unsigned __int8 v85; // al
  _DWORD *v86; // r8
  int v87; // eax
  int v88; // eax
  const GUID *v89; // r8
  struct VIDMM_SEGMENT *v90; // r9
  unsigned int v91; // ecx
  int v92; // ecx
  unsigned __int8 v93; // dl
  int v94; // eax
  VIDMM_PARTITION *v95; // rbx
  unsigned int v96; // r9d
  int v97; // edx
  __int64 v98; // rcx
  bool v99; // zf
  __int64 v100; // rsi
  unsigned int *v101; // rbx
  unsigned int v102; // edx
  const GUID *v103; // r8
  unsigned int v104; // r9d
  unsigned int v105; // r10d
  unsigned int v106; // r11d
  unsigned int v107; // eax
  unsigned int v108; // ebx
  int v110; // eax
  __int64 v111; // rcx
  int v112; // eax
  __int64 v113; // rcx
  unsigned int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned __int8 v121; // al
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  int v142; // r9d
  __int64 v143; // rax
  int v144; // r9d
  int v145; // eax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  int CrossAdapterDataDpc; // r12d
  void *v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  _QWORD *v164; // rax
  unsigned __int64 v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // rdx
  unsigned __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 j; // rbx
  __int64 v172; // rax
  int **v173; // rcx
  KSPIN_LOCK *v174; // rdx
  __int64 v175; // rdx
  VIDMM_GLOBAL *v176; // rcx
  int *v177; // rbx
  __int64 v178; // rdi
  _QWORD *v179; // rax
  DXGFASTMUTEX *v180; // rcx
  int v181; // [rsp+48h] [rbp-138h]
  int v182; // [rsp+60h] [rbp-120h]
  unsigned __int8 v183; // [rsp+100h] [rbp-80h]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v184; // [rsp+104h] [rbp-7Ch] BYREF
  int v185; // [rsp+108h] [rbp-78h]
  int v186; // [rsp+10Ch] [rbp-74h]
  unsigned int v187; // [rsp+110h] [rbp-70h]
  int v188; // [rsp+114h] [rbp-6Ch] BYREF
  unsigned int v189; // [rsp+118h] [rbp-68h] BYREF
  int v190; // [rsp+11Ch] [rbp-64h]
  __int64 CurrentProcessId; // [rsp+120h] [rbp-60h]
  unsigned __int64 v192; // [rsp+128h] [rbp-58h]
  int v193; // [rsp+130h] [rbp-50h] BYREF
  __int64 v194; // [rsp+138h] [rbp-48h]
  struct DXGADAPTERALLOCATION *v195; // [rsp+140h] [rbp-40h]
  int v196; // [rsp+148h] [rbp-38h]
  int v197[20]; // [rsp+150h] [rbp-30h] BYREF
  unsigned __int8 v198; // [rsp+1F0h] [rbp+70h]
  unsigned int v199; // [rsp+1F0h] [rbp+70h]
  unsigned int v201; // [rsp+200h] [rbp+80h]
  char v202; // [rsp+200h] [rbp+80h]
  unsigned __int8 v204; // [rsp+238h] [rbp+B8h]
  struct _DXGK_ALLOCATIONINFOFLAGS v205; // [rsp+238h] [rbp+B8h]

  v201 = a3;
  v19 = (char)a10.0;
  v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  v22 = a3;
  v184.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 8) != 0 && !a16 && (*(_BYTE *)&a10.0 & 1) != 0 )
  {
    v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(a10.Value & 0xFFFF7FFF);
    v184.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(a10.Value & 0xFFFF7FFF);
  }
  if ( *((_DWORD *)this + 1748) == 1 )
  {
    v22 = 0;
    v201 = 0;
  }
  v194 = 1560LL * v22;
  v26 = (struct DXGADAPTERALLOCATION *)(*((_QWORD *)this + 5023) + v194);
  v195 = v26;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v26) + 24) = a2;
    v117 = (_QWORD *)WdLogNewEntry5_WdTrace(v116);
    v27 = a7;
    v117[4] = a6;
    v117[7] = a8;
    v117[3] = a4;
    v117[5] = 0LL;
    v117[6] = (unsigned int)a7;
    v118 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v118[4] = (unsigned int)v21;
    v26 = a11;
    v118[5] = a11;
    v118[3] = a9.Value;
  }
  else
  {
    v27 = a7;
  }
  *a19 = 0LL;
  if ( *((_DWORD *)this + 8) < 0x5023u && (*(_DWORD *)&v21 & 0x40000) != 0 )
  {
    v119 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v119 + 24) = 2387LL;
    WdLogEvent5_WdAssertion(v119);
    return 3221225485LL;
  }
  LOBYTE(v186) = (*(_BYTE *)&v21 & 1) != 0 && (*(_DWORD *)&v21 & 0x40000) == 0;
  if ( !*((_BYTE *)this + 40136) && (CurrentProcess = PsGetCurrentProcess(), PsGetProcessWow64Process(CurrentProcess)) )
  {
    v29 = a16;
  }
  else
  {
    v29 = a16;
    if ( (*(_DWORD *)&v21 & 0x20000000) == 0
      && (*(_DWORD *)&v21 & 0x40000000) == 0
      && *(int *)&v21 >= 0
      && (*(_DWORD *)&v21 & 0x10000000) == 0
      && (*(_BYTE *)&v21 & 8) == 0
      && (*(_DWORD *)&v21 & 0x400000) == 0
      && !a16 )
    {
      v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v21 & 0xFFFBFFFF);
      LOBYTE(v186) = 1;
      v184.0 = v21;
    }
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v31 = i;
    if ( ((a9.Value >> i) & 0x1F) != 0 )
    {
      v31 = ((a9.Value >> i) & 0x1F) - 1;
      v110 = ~v27;
      if ( _bittest(&v110, (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1)) )
      {
        v120 = WdLogNewEntry5_WdAssertion(((a9.Value >> i) & 0x1F) - 1, (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1));
        *(_QWORD *)(v120 + 24) = 2436LL;
        WdLogEvent5_WdAssertion(v120);
        return 3221225485LL;
      }
    }
  }
  if ( !dword_1C004D418 || (*(_BYTE *)&v21 & 1) != 0 )
    goto LABEL_25;
  if ( (*(_BYTE *)&a9.0 & 0x1F) == 0 )
  {
    v121 = VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, v22, v27, 0x1001u, &v189);
    v29 = a16;
    if ( !v121 )
    {
      v32 = v189;
      a7 = v189;
      goto LABEL_26;
    }
LABEL_25:
    v32 = (unsigned int)a7;
    goto LABEL_26;
  }
  v31 = (*(_BYTE *)&a9.0 & 0x1Fu) - 1;
  v32 = (unsigned int)(1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1));
  a7 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
LABEL_26:
  if ( !a4 )
  {
    v122 = WdLogNewEntry5_WdAssertion(v31, v32);
    *(_QWORD *)(v122 + 24) = 2476LL;
    WdLogEvent5_WdAssertion(v122);
    return 3221225485LL;
  }
  if ( ((*(_DWORD *)&v21 | (*(unsigned int *)&v21 >> 1)) & 0x1000) != 0 )
  {
    v123 = WdLogNewEntry5_WdAssertion(v31, v32);
    *(_QWORD *)(v123 + 24) = 2484LL;
    WdLogEvent5_WdAssertion(v123);
    return 3221225485LL;
  }
  v193 = 0;
  v188 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          this,
          v22,
          v32,
          &v184,
          a4,
          a5,
          v29 != 0LL,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v188) )
  {
    v124 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v124 + 24) = 2495LL;
    WdLogEvent5_WdAssertion(v124);
    return 3221225485LL;
  }
  Value = v184.Value;
  if ( (v184.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v184.0 & 1) == 0 )
    {
      v125 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v125 + 24) = 2510LL;
      WdLogEvent5_WdAssertion(v125);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v184.0 & 2) != 0 || (*(_BYTE *)&v184.0 & 0x20) != 0 || (*(_BYTE *)&v184.0 & 0x10) != 0 )
    {
      v126 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v126 + 24) = 2522LL;
      WdLogEvent5_WdAssertion(v126);
      return 3221225485LL;
    }
  }
  if ( (v184.Value & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)&v184.0 & 2) != 0
      || (*(_BYTE *)&v184.0 & 4) != 0 && (v34 = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL), (v34 & 8) == 0)
      || (v184.Value & 0x100000) != 0
      || (v184.Value & 0x80000) != 0
      || (*(_BYTE *)&v184.0 & 8) != 0
      || (*(_BYTE *)&v184.0 & 0x10) != 0
      || (*(_BYTE *)&v184.0 & 0x20) != 0 )
    {
      v127 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v127 + 24) = 2541LL;
      WdLogEvent5_WdAssertion(v127);
      return 3221225485LL;
    }
  }
  v36 = v188;
  v37 = 0LL;
  v38 = a8;
  if ( (v188 & 4) != 0 )
    v37 = a5;
  v192 = v37;
  if ( !a8 )
    goto LABEL_46;
  v39 = *((_QWORD *)this + 5023);
  v40 = 0;
  v41 = a8;
  v42 = *(_DWORD *)(v39 + v194 + 20);
  v43 = v42;
  if ( (~*(_DWORD *)(v39 + 16) & a8) != 0 )
    goto LABEL_207;
  v44 = 1;
  do
  {
    v45 = v41;
    if ( (v41 & 1) != 0 )
    {
      v38 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v43);
      if ( (*(_DWORD *)(v38 + 80) & 1) == 0 )
        v40 |= v44;
    }
    v41 = (unsigned int)v41 >> 1;
    ++v43;
    v44 = __ROL4__(v44, 1);
  }
  while ( v45 >= 2 );
  if ( v40 )
  {
LABEL_207:
    v129 = WdLogNewEntry5_WdAssertion(v38, v41);
    *(_QWORD *)(v129 + 24) = 2573LL;
    WdLogEvent5_WdAssertion(v129);
    return 3221225485LL;
  }
  v38 = a8;
  v33 = a8;
  if ( (~*(_DWORD *)(v39 + v194 + 16) & a8) != 0 )
  {
LABEL_46:
    v48 = (v184.Value >> 1) & 1;
    if ( v48 )
    {
      if ( (*(_BYTE *)&v184.0 & 1) == 0 )
      {
        v130 = WdLogNewEntry5_WdAssertion(v38, v33);
        *(_QWORD *)(v130 + 24) = 2606LL;
        WdLogEvent5_WdAssertion(v130);
        return 3221225485LL;
      }
      if ( (v184.Value & 0x20000000) != 0 || (v184.Value & 0x80000000) != 0 || (v184.Value & 0x40000000) != 0 )
      {
        v131 = WdLogNewEntry5_WdAssertion(v38, v33);
        *(_QWORD *)(v131 + 24) = 2619LL;
        WdLogEvent5_WdAssertion(v131);
        return 3221225485LL;
      }
    }
    CurrentProcessId = 16LL;
    v49 = (v184.Value >> 2) & 1;
    if ( v49 && (v184.Value & 0x800000) == 0 )
    {
      if ( *((_BYTE *)this + 7073) )
      {
        if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v201, v38, 16, 0LL) )
        {
          v132 = WdLogNewEntry5_WdAssertion(v111, v33);
          *(_QWORD *)(v132 + 24) = 2652LL;
          WdLogEvent5_WdAssertion(v132);
          return 3221225485LL;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 308LL) & 8) == 0
             && !VIDMM_GLOBAL::VerifySegmentSet(this, v201, a8, 1, 0LL) )
      {
        v134 = WdLogNewEntry5_WdAssertion(v133, v33);
        *(_QWORD *)(v134 + 24) = 2659LL;
        WdLogEvent5_WdAssertion(v134);
        return 3221225485LL;
      }
    }
    v50 = (Value >> 29) & 1;
    if ( ((Value >> 29) & 1) != 0 && (v48 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
    {
      v135 = WdLogNewEntry5_WdAssertion(v50, v33);
      *(_QWORD *)(v135 + 24) = 2679LL;
      WdLogEvent5_WdAssertion(v135);
      return 3221225485LL;
    }
    if ( (Value & 0x100000) != 0 && (!(_DWORD)v50 || !a18 || (v36 & 1) == 0) )
    {
      v136 = WdLogNewEntry5_WdAssertion(v50, v33);
      *(_QWORD *)(v136 + 24) = 2691LL;
      WdLogEvent5_WdAssertion(v136);
      return 3221225485LL;
    }
    if ( a16 && (v48 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
    {
      v137 = WdLogNewEntry5_WdAssertion(v50, a16);
      *(_QWORD *)(v137 + 24) = 2711LL;
      WdLogEvent5_WdAssertion(v137);
      return 3221225485LL;
    }
    if ( ((Value >> 26) & 1) != 0 )
    {
      if ( (Value & 8) == 0 )
      {
        v138 = WdLogNewEntry5_WdAssertion(v50, a16);
        *(_QWORD *)(v138 + 24) = 2727LL;
        WdLogEvent5_WdAssertion(v138);
        return 3221225485LL;
      }
    }
    else if ( (Value & 8) == 0 )
    {
      goto LABEL_53;
    }
    if ( (Value & 1) != 0 && ((Value >> 26) & 1) == 0 && !a16
      || v48
      || (_DWORD)v50
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (Value & 0x80000000) != 0
      || (Value & 0x40000000) != 0 )
    {
      v139 = WdLogNewEntry5_WdAssertion(v50, a16);
      *(_QWORD *)(v139 + 24) = 2760LL;
      WdLogEvent5_WdAssertion(v139);
      return 3221225485LL;
    }
LABEL_53:
    v51 = (Value >> 4) & 1;
    if ( v51 && (v48 || (Value & 0x20) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
    {
      v140 = WdLogNewEntry5_WdAssertion(v50, a16);
      *(_QWORD *)(v140 + 24) = 2782LL;
      WdLogEvent5_WdAssertion(v140);
      return 3221225485LL;
    }
    v52 = (Value >> 5) & 1;
    if ( ((Value >> 5) & 1) != 0
      && (v48 || (_DWORD)v50 || v51 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
    {
      v141 = WdLogNewEntry5_WdAssertion(v50, v52);
      *(_QWORD *)(v141 + 24) = 2806LL;
      WdLogEvent5_WdAssertion(v141);
      return 3221225485LL;
    }
    v53 = Value >> 31;
    if ( (Value & 0x80000000) != 0 )
    {
      if ( v48
        || v49 && (v142 = *(_DWORD *)(*((_QWORD *)this + 3) + 308LL), (v142 & 0x10) == 0) && (v142 & 8) == 0
        || v51
        || (_DWORD)v52
        || (Value & 0x40000000) != 0 )
      {
        v143 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v143 + 24) = 2830LL;
        WdLogEvent5_WdAssertion(v143);
        return 3221225485LL;
      }
    }
    else if ( (Value & 0x40000000) != 0 )
    {
      if ( v48
        || v49 && (v144 = *(_DWORD *)(*((_QWORD *)this + 3) + 308LL), (v144 & 0x10) == 0) && (v144 & 8) == 0
        || v51
        || (_DWORD)v52 )
      {
        v146 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v146 + 24) = 2854LL;
        WdLogEvent5_WdAssertion(v146);
        return 3221225485LL;
      }
      v53 = *(unsigned int *)(*((_QWORD *)this + 3) + 1892LL);
      if ( (v53 & 0x200) == 0 )
        Value |= 1u;
      v145 = (unsigned __int8)v186;
      if ( (Value & 1) != 0 )
        v145 = 1;
      Value |= 0x20000000u;
      v184.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      v186 = v145;
    }
    if ( ((Value >> 28) & 1) != 0 )
    {
      v113 = *((_QWORD *)this + 3);
      v114 = Value & 0xEFFF7FBF;
      v115 = *(unsigned int *)(v113 + 308);
      if ( (v115 & 8) != 0 || (v115 & 0x10) != 0 )
        v114 = Value & 0xEFFF7FBB;
      if ( v114 )
      {
        v147 = WdLogNewEntry5_WdAssertion(v113, v115);
        *(_QWORD *)(v147 + 24) = 2896LL;
        WdLogEvent5_WdAssertion(v147);
        return 3221225485LL;
      }
      if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v201, a8, 1, 0LL) )
      {
        v148 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v148 + 24) = 2906LL;
        WdLogEvent5_WdAssertion(v148);
        return 3221225485LL;
      }
    }
    if ( (Value & 0x400000) != 0 )
    {
      if ( (Value & 0x20000000) == 0 )
      {
        v149 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v149 + 24) = 2922LL;
        WdLogEvent5_WdAssertion(v149);
        return 3221225485LL;
      }
      if ( !a12 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v150 + 24) = 2932LL;
        WdLogEvent5_WdAssertion(v150);
        return 3221225485LL;
      }
    }
    if ( (Value & 0x4000) != 0 )
    {
      if ( (Value & 1) == 0 )
      {
        v151 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v151 + 24) = 2944LL;
        WdLogEvent5_WdAssertion(v151);
        return 3221225485LL;
      }
      if ( (Value & 2) != 0
        || (Value & 8) != 0
        || (Value & 0x10) != 0
        || (Value & 0x20) != 0
        || (Value & 0x40) != 0
        || (Value & 0x100) != 0
        || (Value & 0x200) != 0
        || (Value & 0x40000) != 0 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v53, v52);
        *(_QWORD *)(v152 + 24) = Value;
        WdLogEvent5_WdAssertion(v152);
        return 3221225485LL;
      }
    }
    if ( (VIDMM_GLOBAL::_Config & 2) != 0
      && DXGPROCESS::GetCurrent()
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 322)
      && ((Value >> 28) & 1) == 0
      && (Value & 0x40000000) == 0 )
    {
      Value |= 0x8000000u;
      v184.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
    }
    v54 = 0;
    v55 = 0;
    v204 = 0;
    v183 = 0;
    v198 = 0;
    Current = DXGPROCESS::GetCurrent();
    v185 = 0;
    v57 = *((unsigned __int8 *)Current + 323);
    if ( (v57 & 8) != 0 )
    {
      v185 = 0;
      if ( !a16 )
      {
        v185 = 1;
        if ( (Value & 0x10) != 0 )
        {
          v54 = 1;
          v183 = 1;
        }
        else if ( (Value & 1) != 0 )
        {
          if ( (Value & 0x8000) != 0 )
          {
            v153 = WdLogNewEntry5_WdAssertion(v57, 1LL);
            *(_QWORD *)(v153 + 24) = 3004LL;
            WdLogEvent5_WdAssertion(v153);
            return 3221225485LL;
          }
          if ( (v57 & 0x10) != 0 && (Value & 0x20000000) == 0 )
          {
            v58 = 1;
            v198 = 1;
            v185 = 1;
LABEL_65:
            if ( (unsigned __int8)v55 | (unsigned __int8)(v54 | v58) )
            {
              v59 = operator new(0x220uLL, 0x61306956u, 0LL, PagedPool);
              v61 = (struct _D3DDDI_SEGMENTPREFERENCE *)v59;
              if ( !v59 )
                goto LABEL_279;
            }
            else
            {
              v59 = operator new(0x200uLL, 0x31306956u, 0LL, PagedPool);
              v61 = (struct _D3DDDI_SEGMENTPREFERENCE *)v59;
              if ( !v59 )
                goto LABEL_279;
            }
            v62 = 0;
            v59[44] = 0LL;
            v59[60] = 0LL;
            v63 = v59 + 24;
            *v63 = v63;
            v63[1] = v63;
            if ( v61 )
            {
              v64 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
              if ( v64 )
              {
                *v64 = 0LL;
                v64[1] = 0LL;
                *((_DWORD *)v64 + 6) = 0;
                *((_DWORD *)v64 + 7) = 13;
                *((_DWORD *)v64 + 8) = 32;
                v64[2] = 0LL;
              }
              else
              {
                v64 = 0LL;
              }
              *(_QWORD *)&v61[80].0 = v64;
              if ( v64 )
              {
                v66 = operator new[](0x28uLL, 0x32346956u, (POOL_TYPE)512);
                *(_QWORD *)&v61[126].0 = v66;
                if ( v66 )
                {
                  memset(v66, 0, 0x28uLL);
                  v69 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
                  if ( *(_BYTE *)(v69 + 57) )
                  {
                    if ( (Value & 0x40000000) == 0 && (Value & 0x80000000) == 0 )
                    {
LABEL_77:
                      v71 = a11;
                      if ( a11 )
                      {
                        v72 = *((_DWORD *)a11 + 1);
                        if ( (v72 & 0x8000) != 0 )
                        {
                          v61[19].Value |= 0x800u;
                          v72 = *((_DWORD *)a11 + 1);
                        }
                        if ( (v72 & 0x10000) != 0 )
                        {
                          v61[20].Value |= 0x400u;
                          v61[19].Value |= 0x400000u;
                        }
                      }
                      if ( a18 )
                        v73 = (volatile signed __int32 *)*a18;
                      else
                        v73 = 0LL;
                      *(_QWORD *)&v61[124].0 = v73;
                      if ( !v73 )
                      {
LABEL_85:
                        *(_QWORD *)&v61->0 = a4;
                        v74 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
                        if ( a4 > v74 )
                        {
                          v164 = (_QWORD *)WdLogNewEntry5_WdAssertion(v69, v68);
                          v165 = a4;
                        }
                        else
                        {
                          v75 = (v192 + 4095) & 0xFFFFFFFFFFFFF000uLL;
                          CurrentProcessId = v75;
                          if ( v192 > v75 )
                          {
                            v164 = (_QWORD *)WdLogNewEntry5_WdAssertion(v75, v68);
                            v165 = v192;
                          }
                          else
                          {
                            if ( v74 > 0xFFFF0000 && (v61[20].Value & 0x400) == 0 )
                            {
                              v164 = (_QWORD *)WdLogNewEntry5_WdAssertion(v75, v68);
                              v164[3] = 3219LL;
                              goto LABEL_301;
                            }
                            v76 = (a6 + 4095) & 0xFFFFF000;
                            v187 = v76;
                            if ( a6 <= (unsigned int)v76 )
                            {
                              if ( v74 + v76 >= v74 && v75 + v76 >= v75 )
                              {
                                if ( (Value & 0x10000000) != 0 )
                                {
                                  Value |= 8u;
                                  v184.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
                                }
                                *(_QWORD *)&v61[90].0 = a12;
                                if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 )
                                  v77 = 0;
                                else
                                  v77 = 0x20000;
                                v78 = v77 | v61[20].Value & 0xFFFDFFFF;
                                *(_QWORD *)&v61[6].0 = v75;
                                v61[20].Value = v78;
                                v79 = *(unsigned int **)&v61[126].0;
                                v61[8].Value = v76;
                                v61[40].Value = 0;
                                *(_QWORD *)&v61[4].0 = v74;
                                *(_QWORD *)&v61[2].0 = v74;
                                *v79 = Value;
                                v80 = v61[19].Value ^ (v61[19].Value ^ (v36 << 7)) & 0x80;
                                v61[16].Value = a8;
                                v81 = v80 ^ ((unsigned __int8)v80 ^ (unsigned __int8)(32 * v36)) & 0x40u;
                                v61[32].Value = 0;
                                v61[78].Value = 0;
                                *(_QWORD *)&v61[10].0 = v71;
                                v82 = 0;
                                v61[17].Value = a7;
                                v61[18].0 = a9.0;
                                v192 = v81;
                                v83 = v185 & 0xFFFFFFF1 | (4 * (v198 | (4 * v204)));
                                v61[19].Value = v81;
                                v84 = v61[20].Value & 0xFFFF077F | ((v204 | (4 * v183)) << 12) & 0xFFFFDFFF | ((v186 & 0xF | (16 * v83)) << 7);
                                v61[20].Value = v84;
                                if ( (Value & 1) != 0 )
                                {
                                  v82 = 1;
                                  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 308LL) & 8) == 0 )
                                  {
                                    v85 = VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(this, v201, a7);
                                    LOBYTE(v81) = v192;
                                    if ( !v85 )
                                      v82 = 0;
                                  }
                                }
                                v61[20].Value = v84 & 0xFFFBFFFF | (v82 << 18);
                                v86 = *(_DWORD **)(1560 * (v81 & 0x3F) + *((_QWORD *)this + 5023) + 440);
                                if ( dword_1C004D41C
                                  && (v36 & 2) != 0
                                  && v86
                                  && ((*v86 & 0x200) != 0 || dword_1C004D41C == 2)
                                  && ((v168 = *(_QWORD *)&v61[2].0, !(_WORD)v168) || v168 > (unsigned int)dword_1C004D420)
                                  && !v82 )
                                {
                                  v87 = 256;
                                }
                                else
                                {
                                  v87 = 0;
                                }
                                v61[20].Value = v87 | v84 & 0xFFFBFEFF | (v82 << 18);
                                v88 = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v61);
                                if ( v88 < 0 )
                                {
                                  CrossAdapterDataDpc = v88;
                                  goto LABEL_313;
                                }
                                if ( (Value & 0x4000) != 0 )
                                  v61[20].Value |= 0x20u;
                                if ( (*((_BYTE *)v195 + 436) & 3) != 0 )
                                {
                                  v112 = 1 << (*((_WORD *)v195 + 14) - *((_BYTE *)v195 + 20));
                                  v61[16].Value |= v112;
                                  if ( (v36 & 2) != 0 && (Value & 0x8000) == 0 )
                                    v61[17].Value |= v112;
                                }
                                *(_QWORD *)&v61[12].0 = a13;
                                *(_QWORD *)&v61[30].0 = a16;
                                v90 = 0LL;
                                v91 = v61[19].Value & 0xF7FFFFFF | (a16 != 0LL ? 0x8000000 : 0);
                                v92 = (v91 ^ (a15 << 28)) & 0x10000000 ^ v91;
                                v61[94].Value = a14;
                                v61[19].Value = v92 ^ ((unsigned __int8)v201 ^ (unsigned __int8)v92) & 0x3F;
                                *(_QWORD *)&v61[76].0 = v61 + 74;
                                *(_QWORD *)&v61[74].0 = v61 + 74;
                                *(_QWORD *)&v61[118].0 = -1LL;
                                v93 = (v61[19].Value & 0x80) != 0;
                                if ( a9.0 )
                                {
                                  if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
                                  {
                                    v90 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                                                   + 8LL
                                                                   * ((*(_BYTE *)&a9.0 & 0x1Fu)
                                                                    + *(_DWORD *)(v194 + *((_QWORD *)this + 5023) + 20)
                                                                    - 1));
                                    v93 = *((_BYTE *)v90 + 80);
                                  }
                                  else if ( ((a9.Value >> 6) & 0x1F) != 0 )
                                  {
                                    v90 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                                                   + 8LL
                                                                   * (((a9.Value >> 6) & 0x1F)
                                                                    + *(_DWORD *)(v194 + *((_QWORD *)this + 5023) + 20)
                                                                    - 1));
                                  }
                                }
                                v61[19].Value ^= ((unsigned __int16)*(_DWORD *)&v61[19].0 ^ (unsigned __int16)(v93 << 10)) & 0x400;
                                if ( VIDMM_GLOBAL::VerifyBudgetGroups(
                                       this,
                                       v201,
                                       a7,
                                       v90,
                                       (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v193) )
                                {
                                  v94 = v61[19].Value ^ (v61[19].Value ^ (v193 << 12)) & 0xF0000 ^ (*(_WORD *)&v61[19].0 ^ (unsigned __int16)((_WORD)v193 << 12)) & 0xF000;
                                  v61[19].Value = v94;
                                  if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
                                    *((_BYTE *)&v61[24].0 + 1) = 1;
                                  v61[19].Value = v94 ^ ((unsigned __int16)v94 ^ (unsigned __int16)((unsigned __int8)a17 << 8)) & 0x100;
                                  v95 = *(VIDMM_PARTITION **)(*((_QWORD *)a2 + 1) + 264LL);
                                  *(_QWORD *)&v61[122].0 = VIDMM_PARTITION::GetAdapterInfo(v95, this);
                                  VidMmiReferencePartition(v95);
                                  v96 = v61[19].Value;
                                  LOBYTE(v97) = (v61[20].Value & 0x1400) == 0
                                             && (**(_DWORD **)&v61[126].0 & 0x4000003A) == 0;
                                  v98 = (v96 & 0x100) == 0;
                                  v99 = bTracingEnabled == 0;
                                  v61[20].Value = v61[20].Value & 0xFFFEFFFF | (((unsigned int)v98 & v97) << 16);
                                  if ( !v99 )
                                  {
                                    v100 = *(_QWORD *)&v61[10].0;
                                    v101 = v100 ? *(unsigned int **)(v100 + 24) : 0LL;
                                    LOWORD(v96) = v96 & 0x3F;
                                    v189 = v96;
                                    v194 = *((_QWORD *)a2 + 3);
                                    v192 = *((_QWORD *)this + 3);
                                    v195 = *(struct DXGADAPTERALLOCATION **)&v61[90].0;
                                    CurrentProcessId = (__int64)PsGetCurrentProcessId();
                                    LOBYTE(v199) = 0;
                                    v98 = 0LL;
                                    *(_BYTE *)&v205.0 = 0;
                                    LOBYTE(v102) = 0;
                                    v202 = 0;
                                    v103 = 0LL;
                                    LOBYTE(v104) = 0;
                                    LOBYTE(v105) = 0;
                                    LOBYTE(v106) = 0;
                                    if ( v101 )
                                    {
                                      v98 = *v101;
                                      v102 = v101[1];
                                      v103 = (const GUID *)v101[2];
                                      v104 = v101[3];
                                      v105 = v101[4];
                                      v106 = v101[5];
                                      v199 = v101[6];
                                      v205.0 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v101[7];
                                      v107 = v101[8];
                                      v108 = v101[9];
                                      v202 = v107;
                                    }
                                    else
                                    {
                                      LOBYTE(v108) = 0;
                                    }
                                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                                      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
                                        v98,
                                        &EventCreateAdapterAllocation,
                                        v103,
                                        CurrentProcessId,
                                        v194,
                                        v192,
                                        v19,
                                        0,
                                        v187,
                                        v181,
                                        a7,
                                        *(_BYTE *)&a9.0,
                                        v182,
                                        a8,
                                        a14,
                                        (char)v61,
                                        v100,
                                        0,
                                        v98,
                                        v102,
                                        (char)v103,
                                        v104,
                                        v105,
                                        v106,
                                        v199,
                                        *(_BYTE *)&v205.0,
                                        v202,
                                        v108,
                                        0,
                                        (char)v195,
                                        v189,
                                        a17);
                                  }
                                  ++*((_DWORD *)this + 1908);
                                  *((_QWORD *)this + 955) += v74;
                                  *((_QWORD *)this + 5019) += v74;
                                  if ( g_IsInternalReleaseOrDbg )
                                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v98) + 24) = v61;
                                  *a19 = v61;
                                  return 0LL;
                                }
                                return 3221225485LL;
                              }
                              v164 = (_QWORD *)WdLogNewEntry5_WdAssertion(v75, v68);
                              v166 = CurrentProcessId;
                              v167 = v187;
                              v164[3] = v74;
                              v164[4] = v166;
                              v164[5] = v74;
                              v164[6] = v167;
LABEL_301:
                              WdLogEvent5_WdAssertion(v164);
                              CrossAdapterDataDpc = -1073741811;
                              goto LABEL_313;
                            }
                            v164 = (_QWORD *)WdLogNewEntry5_WdAssertion(v75, v68);
                            v165 = a6;
                          }
                        }
                        v164[3] = v165;
                        goto LABEL_301;
                      }
                      _InterlockedIncrement(v73);
                      CrossAdapterDataDpc = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
                                              this,
                                              *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v61[124].0,
                                              (struct _VIDMM_GLOBAL_ALLOC *)v61);
                      if ( CrossAdapterDataDpc >= 0 )
                      {
                        Value = v184.Value;
                        v36 = v188;
                        v71 = a11;
                        goto LABEL_85;
                      }
LABEL_313:
                      if ( (v61[23].Value & 1) != 0 )
                      {
                        LOBYTE(v89) = 1;
                        VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v61, v89);
                      }
                      v169 = *(_QWORD *)&v61[126].0;
                      if ( v169 )
                      {
                        if ( *(_QWORD *)(v169 + 24) )
                        {
                          v170 = *(_QWORD *)&v61[126].0;
                          for ( j = 0LL; j < 16; j += 8LL )
                          {
                            v172 = *(_QWORD *)(v169 + 24);
                            if ( *(_QWORD *)(j + v172) )
                            {
                              VidSchDestroySyncObject(*(PVOID *)(j + v172));
                              v169 = *(_QWORD *)&v61[126].0;
                              v170 = v169;
                            }
                          }
                          operator delete(*(void **)(v170 + 24));
                        }
                        v173 = *(int ***)&v61[126].0;
                        if ( v173[2] )
                        {
                          VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v173[2], v169);
                          v173 = *(int ***)&v61[126].0;
                        }
                        operator delete(v173);
                      }
                      v174 = *(KSPIN_LOCK **)&v61[124].0;
                      if ( v174 )
                      {
                        VIDMM_GLOBAL::FreeCrossAdapterDataDpc(
                          (VIDMM_GLOBAL *)v69,
                          v174,
                          (struct _VIDMM_GLOBAL_ALLOC *)v61);
                        v176 = (VIDMM_GLOBAL *)(unsigned int)_InterlockedDecrement(*(volatile signed __int32 **)&v61[124].0);
                        if ( (_DWORD)v176 )
                        {
                          if ( (int)v176 < 0 )
                          {
                            v177 = *(int **)&v61[124].0;
                            v178 = *v177;
                            v179 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v176, v175);
                            v179[3] = 270LL;
                            v179[4] = 66LL;
                            v179[5] = v177;
                            v179[6] = v178;
                            v179[7] = 0LL;
                            WdLogEvent5_WdCriticalError(v179);
                          }
                        }
                        else
                        {
                          VIDMM_GLOBAL::DestroyCrossAdapterAllocation(
                            v176,
                            *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v61[124].0);
                          *a18 = 0LL;
                        }
                      }
                      v180 = *(DXGFASTMUTEX **)&v61[80].0;
                      if ( v180 )
                        DXGFASTMUTEX::`scalar deleting destructor'(v180);
                      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v61);
                      return (unsigned int)CrossAdapterDataDpc;
                    }
                    *(_QWORD *)(*(_QWORD *)&v61[126].0 + 24LL) = operator new[](0x20uLL, 0x33306956u, (POOL_TYPE)512);
                    v157 = *(void **)(*(_QWORD *)&v61[126].0 + 24LL);
                    if ( v157 )
                    {
                      memset(v157, 0, 0x20uLL);
                      v187 = 0;
                      v190 = 1000 * (v201 + 1);
                      while ( 1 )
                      {
                        memset(v197, 0, sizeof(v197));
                        v158 = *(_QWORD *)&v61[126].0;
                        v197[1] |= 0x80u;
                        v159 = *(_QWORD *)(v158 + 24);
                        v197[0] = 5;
                        v160 = (unsigned int)(v190 * v62) + 100LL;
                        *(_QWORD *)(CurrentProcessId + v159) = v160;
                        v161 = *((_QWORD *)this + 2);
                        *(_QWORD *)&v197[2] = v160;
                        v162 = *(_QWORD *)(v161 + 528);
                        v163 = *(_QWORD *)&v61[126].0;
                        v196 = ((v62 != 1) + 7) & 0x7FFFFFFF;
                        CrossAdapterDataDpc = VidSchCreateSyncObject(
                                                v162,
                                                0,
                                                (int)v197,
                                                v196,
                                                0LL,
                                                0LL,
                                                (PVOID)(*(_QWORD *)(v163 + 24) + 8LL * v62),
                                                0LL);
                        if ( CrossAdapterDataDpc < 0 )
                          goto LABEL_313;
                        CurrentProcessId += 8LL;
                        v62 = v187 + 1;
                        v187 = v62;
                        if ( v62 >= 2 )
                          goto LABEL_77;
                      }
                    }
                    _InterlockedIncrement(&dword_1C004D5AC);
                    v155 = WdLogNewEntry5_WdLowResource(0LL);
                    *(_QWORD *)(v155 + 24) = 3082LL;
                  }
                  else
                  {
                    *(_QWORD *)(*(_QWORD *)&v61[126].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
                    v70 = *(_QWORD *)(*(_QWORD *)&v61[126].0 + 16LL);
                    if ( v70 )
                    {
                      *(_QWORD *)v70 = 0LL;
                      *(_DWORD *)(v70 + 8) = 0;
                      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v61[126].0 + 16LL));
                      Value = v184.Value;
                      if ( (v184.Value & 0x100000) != 0 )
                        v68 = 0LL;
                      else
                        v68 = 0xFFFFFFFFLL;
                      v36 = v188;
                      v69 = *(_QWORD *)(*(_QWORD *)&v61[126].0 + 16LL);
                      *(_DWORD *)(v69 + 4) = v68;
                      goto LABEL_77;
                    }
                    _InterlockedIncrement(&dword_1C004D5AC);
                    v155 = WdLogNewEntry5_WdLowResource(0LL);
                    *(_QWORD *)(v155 + 24) = 3136LL;
                  }
                }
                else
                {
                  _InterlockedIncrement(&dword_1C004D6C0);
                  v155 = WdLogNewEntry5_WdLowResource(v67);
                  *(_QWORD *)(v155 + 24) = 3065LL;
                }
              }
              else
              {
                _InterlockedIncrement(&dword_1C004D664);
                v155 = WdLogNewEntry5_WdLowResource(v65);
                *(_QWORD *)(v155 + 24) = 3052LL;
              }
              WdLogEvent5_WdLowResource(v155);
              CrossAdapterDataDpc = -1073741801;
              goto LABEL_313;
            }
LABEL_279:
            _InterlockedIncrement(&dword_1C004D5B4);
            v154 = WdLogNewEntry5_WdLowResource(v60);
            *(_QWORD *)(v154 + 24) = 3040LL;
            WdLogEvent5_WdLowResource(v154);
            return 3221225495LL;
          }
          v55 = 1;
          v204 = 1;
          v185 = 1;
        }
      }
    }
    v58 = 0;
    goto LABEL_65;
  }
  while ( 1 )
  {
    v46 = v33;
    if ( (v33 & 1) != 0 )
    {
      v47 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v42);
      if ( (*(_DWORD *)(v47 + 80) & 0x20) != 0 )
        break;
    }
    v33 = (unsigned int)v33 >> 1;
    ++v42;
    if ( v46 < 2 )
    {
      v38 = a8;
      goto LABEL_46;
    }
  }
  v128 = WdLogNewEntry5_WdAssertion(v47, v33);
  *(_QWORD *)(v128 + 24) = 2588LL;
  WdLogEvent5_WdAssertion(v128);
  return 3221225485LL;
}
