/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C0111970
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0023828 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0043BD0 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01025B4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01375C0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C014EEA4 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C014F834 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C014FD2C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C015089C (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C0150A74 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C01F24A8 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C022EEF8 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C025ADD8 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCoun.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C027F630 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _EX_RUNDOWN_REF *a1,
        struct _EX_RUNDOWN_REF *a2,
        struct _EX_RUNDOWN_REF *a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _PRESENT_REDIRECTED_PARAMS *a5)
{
  struct _EX_RUNDOWN_REF *v5; // r12
  struct _EX_RUNDOWN_REF *v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // rdi
  _QWORD *Count; // rcx
  __int64 v9; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // r9
  __int64 *ThreadProperty; // rax
  __int64 *v14; // rsi
  ADAPTER_RENDER *v15; // r13
  ADAPTER_DISPLAY *v16; // r14
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int Ptr_high; // esi
  __int64 v19; // rdx
  struct _EX_RUNDOWN_REF *v20; // rax
  ULONG_PTR v21; // rdx
  ULONG_PTR v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // edx
  struct _EX_RUNDOWN_REF *v26; // rcx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // ecx
  int v31; // ecx
  DXGADAPTER *v32; // rcx
  int v33; // eax
  int v34; // eax
  int *v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  struct _EX_RUNDOWN_REF *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v44; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v50; // rax
  struct _KTHREAD *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // ebx
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rax
  int v60; // esi
  int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rax
  unsigned __int8 PostCompositionStretching; // al
  bool v66; // r9
  struct _EX_RUNDOWN_REF *v67; // rcx
  ULONG_PTR v68; // rax
  __int128 v69; // xmm1
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rax
  char v78; // cl
  __int64 v79; // rax
  unsigned int v80; // r13d
  unsigned __int64 v81; // rdx
  POOL_TYPE v82; // r9d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rcx
  struct _EX_RUNDOWN_REF *v84; // r9
  unsigned int i; // r14d
  struct _EX_RUNDOWN_REF *v86; // r13
  struct _EX_RUNDOWN_REF *v87; // r8
  DXGADAPTER *v88; // rax
  struct _EX_RUNDOWN_REF *v89; // rcx
  __int64 Count_low; // rcx
  ULONG_PTR v91; // rax
  unsigned int *v92; // rdx
  __int64 v93; // rsi
  struct _EX_RUNDOWN_REF **v94; // r13
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  _QWORD *v100; // rax
  ADAPTER_RENDER *v101; // r13
  const struct DXGADAPTER *v102; // rcx
  struct _EX_RUNDOWN_REF *v103; // r10
  __int64 v104; // r8
  __int64 v105; // rdx
  __int64 v106; // rcx
  _QWORD *v107; // rax
  struct _EX_RUNDOWN_REF *v108; // r8
  struct _EX_RUNDOWN_REF *v109; // rdx
  struct _EX_RUNDOWN_REF *v110; // rdx
  __int64 v111; // r8
  struct _EX_RUNDOWN_REF *v112; // r12
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rax
  ULONG_PTR v117; // rcx
  ULONG_PTR v118; // r8
  _QWORD *v119; // rax
  UINT v120; // r14d
  UINT *v121; // rcx
  char *pAllocationList; // rdx
  int v123; // eax
  unsigned int v124; // r8d
  __int64 v125; // r14
  __int64 v126; // rsi
  unsigned __int8 v127; // di
  struct _EX_RUNDOWN_REF *v128; // rbx
  __int16 v129; // ax
  struct _EX_RUNDOWN_REF *v130; // rdx
  __int64 v131; // rax
  DXGADAPTER *v132; // r14
  PVOID Ptr; // rdx
  struct CRefCountedBuffer *v134; // rax
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r14
  __int64 v140; // rax
  __int64 v141; // rsi
  __int64 v142; // r14
  char *v143; // r15
  char *v144; // r14
  _QWORD *v145; // rax
  __int64 v146; // rdx
  int v147; // [rsp+30h] [rbp-3D8h]
  int v148; // [rsp+30h] [rbp-3D8h]
  unsigned __int8 v149; // [rsp+80h] [rbp-388h]
  bool v150; // [rsp+80h] [rbp-388h]
  unsigned int v151; // [rsp+84h] [rbp-384h] BYREF
  DXGADAPTER *v152; // [rsp+88h] [rbp-380h]
  struct _EX_RUNDOWN_REF *v153; // [rsp+90h] [rbp-378h] BYREF
  unsigned int v154; // [rsp+98h] [rbp-370h]
  int v155; // [rsp+9Ch] [rbp-36Ch] BYREF
  int v156; // [rsp+A0h] [rbp-368h]
  int v157; // [rsp+A4h] [rbp-364h] BYREF
  unsigned int v158; // [rsp+A8h] [rbp-360h]
  unsigned int v159; // [rsp+ACh] [rbp-35Ch] BYREF
  unsigned int v160; // [rsp+B0h] [rbp-358h]
  struct _EX_RUNDOWN_REF *v161; // [rsp+B8h] [rbp-350h]
  char *v162; // [rsp+C0h] [rbp-348h]
  struct _EX_RUNDOWN_REF *v163; // [rsp+C8h] [rbp-340h]
  _QWORD *v164; // [rsp+D0h] [rbp-338h]
  int v165; // [rsp+D8h] [rbp-330h] BYREF
  int v166; // [rsp+DCh] [rbp-32Ch] BYREF
  int v167; // [rsp+E0h] [rbp-328h] BYREF
  ADAPTER_RENDER *v168; // [rsp+E8h] [rbp-320h]
  _QWORD *v169; // [rsp+F0h] [rbp-318h]
  int v170; // [rsp+F8h] [rbp-310h] BYREF
  struct _EX_RUNDOWN_REF *v171; // [rsp+100h] [rbp-308h]
  struct _EX_RUNDOWN_REF *v172; // [rsp+108h] [rbp-300h]
  __int64 v173; // [rsp+110h] [rbp-2F8h]
  struct _EX_RUNDOWN_REF *v174; // [rsp+118h] [rbp-2F0h]
  struct _EX_RUNDOWN_REF *v175; // [rsp+120h] [rbp-2E8h]
  __int64 v176; // [rsp+128h] [rbp-2E0h]
  ULONG_PTR v177; // [rsp+130h] [rbp-2D8h]
  struct CRefCountedBuffer *v178; // [rsp+138h] [rbp-2D0h] BYREF
  _BYTE v179[16]; // [rsp+140h] [rbp-2C8h] BYREF
  PVOID P; // [rsp+150h] [rbp-2B8h]
  _BYTE v181[32]; // [rsp+158h] [rbp-2B0h] BYREF
  unsigned int v182; // [rsp+178h] [rbp-290h]
  struct tagRECT v183; // [rsp+180h] [rbp-288h] BYREF
  char v184[4]; // [rsp+190h] [rbp-278h] BYREF
  char v185[4]; // [rsp+194h] [rbp-274h] BYREF
  char v186[4]; // [rsp+198h] [rbp-270h] BYREF
  char v187[4]; // [rsp+19Ch] [rbp-26Ch] BYREF
  int v188; // [rsp+1A0h] [rbp-268h]
  struct _EX_RUNDOWN_REF *v189[7]; // [rsp+1A8h] [rbp-260h] BYREF
  char v190[8]; // [rsp+1E0h] [rbp-228h] BYREF
  __int64 v191; // [rsp+1E8h] [rbp-220h]
  __int64 v192; // [rsp+1F0h] [rbp-218h]
  __int64 v193; // [rsp+1F8h] [rbp-210h]
  __int64 v194; // [rsp+200h] [rbp-208h]
  __int64 v195; // [rsp+208h] [rbp-200h]
  char v196[8]; // [rsp+210h] [rbp-1F8h] BYREF
  char v197[8]; // [rsp+218h] [rbp-1F0h] BYREF
  char v198[16]; // [rsp+220h] [rbp-1E8h] BYREF
  _DXGKARG_PRESENT v199; // [rsp+230h] [rbp-1D8h] BYREF
  __int128 v200; // [rsp+2E0h] [rbp-128h] BYREF
  struct tagRECT v201; // [rsp+2F0h] [rbp-118h] BYREF
  _QWORD v202[6]; // [rsp+300h] [rbp-108h] BYREF
  PVOID v203; // [rsp+330h] [rbp-D8h] BYREF
  _BYTE v204[128]; // [rsp+338h] [rbp-D0h] BYREF
  int v205; // [rsp+3B8h] [rbp-50h]

  v5 = a4;
  v175 = a4;
  v6 = a3;
  v171 = a3;
  v161 = a2;
  v7 = a1;
  v174 = a1;
  v189[4] = a1;
  v189[5] = a2;
  v189[3] = a3;
  v189[6] = a4;
  if ( LODWORD(a1->Count) != 2 || a4 && !a2 )
    return 0LL;
  v164 = 0LL;
  if ( a4 )
  {
    Count = (_QWORD *)a4[2].Count;
    v169 = Count;
    v9 = *(_QWORD *)(Count[2] + 16LL);
  }
  else
  {
    Count = *(_QWORD **)a5;
    v164 = *(_QWORD **)a5;
    v9 = *((_QWORD *)a5 + 2);
    v169 = (_QWORD *)*((_QWORD *)a5 + 3);
  }
  v176 = v9;
  v152 = (DXGADAPTER *)v9;
  if ( !a4 && !*(_BYTE *)(v9 + 2506) )
    return 0LL;
  a3[4].Count = 0LL;
  CurrentProcess = PsGetCurrentProcess(Count, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  v173 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v14 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v14;
      v173 = *v14;
    }
    else
    {
      v12 = v173;
    }
  }
  v15 = *(ADAPTER_RENDER **)(v9 + 2560);
  v168 = v15;
  v189[1] = (struct _EX_RUNDOWN_REF *)v15;
  v16 = *(ADAPTER_DISPLAY **)(v9 + 2552);
  v17 = v161;
  if ( !v5 )
    v17 = 0LL;
  v172 = v17;
  if ( v5 )
    Ptr_high = HIDWORD(v17[2].Ptr);
  else
    Ptr_high = *((_DWORD *)v164 + 275);
  DXGPROCESS::GetAllocationSafe(v12, (DXGALLOCATIONREFERENCE *)&v153, Ptr_high);
  v20 = v153;
  if ( !v153 || (v19 = *(_QWORD *)(v169[2] + 16LL), *(_QWORD *)(*(_QWORD *)(v153[1].Count + 16) + 16LL) != v19) )
  {
LABEL_47:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v153, v19);
    return 0LL;
  }
  v21 = v153[5].Count;
  if ( v6[3].Count && v21 && (*(_DWORD *)(v21 + 4) & 1) != 0 )
    v6[4].Count = *(ULONG_PTR *)(*(_QWORD *)(v21 + 56) + 168LL);
  if ( v5 )
    v22 = v161[187].Count;
  else
    v22 = 0LL;
  v177 = v22;
  v164 = (_QWORD *)v22;
  v159 = (*(_DWORD *)(v20[6].Count + 4) >> 6) & 0xF;
  v165 = 0;
  v157 = 0;
  v166 = 0;
  v167 = 0;
  v151 = 0;
  v155 = 0;
  v200 = 0uLL;
  v201 = 0LL;
  v23 = 89LL;
  if ( !BYTE4(v6[44].Ptr) )
    v23 = 65LL;
  v163 = &v6[v23];
  (*(void (__fastcall **)(_QWORD, unsigned int *, struct _EX_RUNDOWN_REF *, ULONG_PTR, struct _EX_RUNDOWN_REF *, int *, int *, unsigned int *, struct _EX_RUNDOWN_REF *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v15 + 65) + 8LL) + 408LL))(
    *((_QWORD *)v15 + 66),
    &v159,
    v7 + 9,
    v7[1].Count,
    &v6[v23],
    &v165,
    &v157,
    &v151,
    v7 + 10,
    &v166,
    &v167,
    &v155,
    &v200,
    &v201);
  v24 = v159;
  LODWORD(v7[5].Count) = v159;
  HIDWORD(v6[15].Ptr) = v24;
  RtlCopyLuid((PLUID)&v6[20], (PLUID)&v7[9]);
  v6[21].Count = v7[1].Count;
  v25 = v6->Count & 0xFFFEFFFF;
  LODWORD(v6->Count) = v25;
  if ( v5 )
  {
    v26 = v172;
    v27 = ((unsigned __int8)v25 ^ (unsigned __int8)LODWORD(v172[11].Count)) & 4 ^ v25;
    LODWORD(v6->Count) = v27;
    v28 = (v27 ^ (4 * LODWORD(v26[11].Count))) & 0x80000 ^ v27;
    LODWORD(v6->Count) = v28;
    v29 = (v28 ^ (4 * LODWORD(v26[11].Count))) & 0x100000 ^ v28;
    LODWORD(v6->Count) = v29;
    v25 = v29 ^ (v29 ^ (4 * LODWORD(v26[11].Count))) & 0x200000;
    LODWORD(v6->Count) = v25;
  }
  v30 = v25 ^ ((unsigned __int8)v25 ^ (unsigned __int8)(HIDWORD(v7[7].Ptr) >> 23)) & 8;
  LODWORD(v6->Count) = v30;
  v31 = ((unsigned __int8)v30 ^ (unsigned __int8)(HIDWORD(v7[7].Ptr) >> 1)) & 0x10 ^ v30;
  LODWORD(v6->Count) = v31;
  LODWORD(v6->Count) = v31 ^ (v31 ^ (32 * HIDWORD(v7[7].Ptr))) & 0x10000000;
  v32 = v152;
  v7[4].Count = (ULONG_PTR)v152;
  LODWORD(v6[15].Count) = HIDWORD(v7[15].Ptr);
  LODWORD(v6[24].Count) = HIDWORD(v7[5].Ptr);
  LODWORD(v6->Count) ^= (LODWORD(v6->Count) ^ (HIDWORD(v7[7].Ptr) << 6)) & 0x2000000;
  LODWORD(v6[19].Count) = HIDWORD(v7[100].Ptr);
  HIDWORD(v6[19].Ptr) = v7[101].Count;
  if ( v5 )
    v33 = HIDWORD(v5[50].Ptr);
  else
    v33 = 1;
  LODWORD(v6[18].Count) = v33;
  if ( BYTE4(v6[44].Ptr) )
    LODWORD(v6[74].Count) = -1;
  if ( bTracingEnabled )
  {
    v6[23].Count = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v15 + 68) + 8LL) + 336LL))(
                     *((_QWORD *)v15 + 69),
                     Ptr_high);
    v32 = v152;
  }
  v34 = v7[7].Count;
  HIDWORD(v6[16].Ptr) = v34;
  v35 = (int *)&v6[16].Ptr + 1;
  v170 = 1;
  if ( !v34 && ((HIDWORD(v7[7].Ptr) & 0x800000) == 0 || (*((_DWORD *)v32 + 477) & 0x40) == 0) )
    v35 = &v170;
  v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)v15 + 65) + 8LL) + 512LL))(
          v169[82],
          v159,
          v35);
  LODWORD(v6[16].Count) = v36;
  if ( v36 != 5 && HIDWORD(v6[16].Ptr) )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v38[3] = v7;
    v38[4] = v7[2].Count;
    v38[5] = HIDWORD(v7[15].Ptr);
    v38[6] = SLODWORD(v6[16].Count);
LABEL_46:
    WdLogEvent5_WdPresentTokenEvent(v38);
    goto LABEL_47;
  }
  if ( !v165 )
  {
    if ( v166 )
    {
      LOBYTE(v147) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v15 + 65) + 8LL) + 400LL))(
        *((_QWORD *)v15 + 66),
        (unsigned int)(1 << HIDWORD(v6[15].Ptr)),
        v7 + 9,
        v6[21].Count,
        &v151,
        0,
        v147,
        v184,
        v196);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v16, HIDWORD(v6[15].Ptr), v151, 0);
    }
    else if ( !v167 )
    {
LABEL_54:
      v40 = v153;
      if ( v153 )
        ExReleaseRundownProtection(v153 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v40, v37) + 247) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v44 = WdLogNewEntry5_WdAssertion(v42, v41);
          *(_QWORD *)(v44 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v44);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v42, v41);
        if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
        {
          v46 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v46 = *ThreadWin32Thread;
          }
          if ( v46 )
            v50 = *(_QWORD *)(v46 + 80);
          else
            v50 = 0LL;
          if ( v50 )
          {
            v51 = KeGetCurrentThread();
            if ( !v51 )
            {
              v52 = WdLogNewEntry5_WdAssertion(v48, v47);
              *(_QWORD *)(v52 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v52);
            }
            v55 = PsGetCurrentProcessSessionId(v48, v47);
            if ( !v55 || (unsigned int)PsGetThreadSessionId(v51) != v55 )
              goto LABEL_77;
            v56 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v57 = (__int64 *)PsGetThreadWin32Thread(v51);
              if ( v57 )
                v56 = *v57;
            }
            if ( v56 )
              v58 = *(_QWORD *)(v56 + 80);
            else
LABEL_77:
              v58 = 0LL;
            if ( *(_DWORD *)(v58 + 136) )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53);
              v59[3] = 275LL;
              v59[4] = 38LL;
              v59[5] = *(int *)(v58 + 136);
              v59[6] = 0LL;
              v59[7] = 0LL;
              WdLogEvent5_WdCriticalError(v59);
            }
          }
        }
      }
      return 0LL;
    }
    HIDWORD(v7[7].Ptr) |= 0x1000000u;
    goto LABEL_54;
  }
  v6[22].Count = v7[10].Count;
  v60 = 0;
  v156 = 0;
  v61 = HIDWORD(v7[7].Ptr);
  if ( (v61 & 0x200000) == 0 )
  {
    LOBYTE(v147) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v15 + 65) + 8LL) + 400LL))(
      *((_QWORD *)v15 + 66),
      (unsigned int)(1 << HIDWORD(v6[15].Ptr)),
      v7 + 9,
      v6[21].Count,
      &v151,
      0,
      v147,
      v185,
      v197);
    HIDWORD(v7[7].Ptr) |= 0x1000000u;
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v16, HIDWORD(v6[15].Ptr), v151, 0);
    v38 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v38[3] = 1832LL;
    goto LABEL_46;
  }
  if ( v157 || (v62 = *((_QWORD *)v15 + 2), *(_QWORD *)(v62 + 888)) && *(_BYTE *)(v62 + 2498) )
  {
    if ( (v61 & 0x400000) != 0 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v179, v16);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v179);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching((DXGADAPTER **)v16, HIDWORD(v6[15].Ptr));
      v149 = PostCompositionStretching;
      if ( PostCompositionStretching )
      {
        if ( IsYUVAllocation(*(void **)(v153[6].Count + 16), v15)
          || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)v16 + 14)
                                                                         + 3968LL * HIDWORD(v6[15].Ptr))) > 1 )
        {
          PostCompositionStretching = 0;
          v149 = 0;
        }
        else
        {
          PostCompositionStretching = v149;
        }
      }
      *(_QWORD *)&v183.left = 0LL;
      *(_QWORD *)&v183.right = 0LL;
      v66 = !v151 && PostCompositionStretching;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              HIDWORD(v6[15].Ptr),
              v151,
              (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v7[2],
              v66,
              v15,
              v16,
              &v183) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v179);
        LOBYTE(v148) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v15 + 65) + 8LL) + 400LL))(
          *((_QWORD *)v15 + 66),
          (unsigned int)(1 << HIDWORD(v6[15].Ptr)),
          v7 + 9,
          v6[21].Count,
          &v151,
          0,
          v148,
          v187,
          v190);
        v74 = WdLogNewEntry5_WdWarning(v72, v71, v73);
        *(_QWORD *)(v74 + 24) = v151;
        WdLogEvent5_WdWarning(v74);
        HIDWORD(v7[7].Ptr) |= 0x1000000u;
        ADAPTER_DISPLAY::UpdateIndependentFlipState(v16, HIDWORD(v6[15].Ptr), v151, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v179);
        goto LABEL_47;
      }
      v67 = v163;
      LOWORD(v163->Count) = WORD2(v7[92].Ptr);
      WORD2(v67->Ptr) = v7[93].Count;
      WORD1(v67->Ptr) = WORD2(v7[93].Ptr);
      HIWORD(v67->Ptr) = v7[94].Count;
      LODWORD(v67[3].Count) = v7[102].Count;
      if ( v149 )
      {
        v68 = v67->Count;
        v67[1].Count = v67->Count;
        v67[2].Count = v68;
        v69 = *(_OWORD *)((char *)&v7[92].Ptr + 4);
        v200 = v69;
        v201 = v183;
        if ( (_DWORD)v69 == v183.left
          && __PAIR64__(DWORD2(v200), DWORD1(v69)) == *(_QWORD *)&v183.top
          && HIDWORD(v200) == v183.bottom )
        {
          v70 = 0LL;
          v155 = 0;
          v200 = 0uLL;
          v201 = 0LL;
        }
        else
        {
          v70 = 1LL;
          v155 = 1;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v15 + 65)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
          *((_QWORD *)v15 + 66),
          HIDWORD(v6[15].Ptr),
          v70,
          &v200,
          &v201);
        UpdatePostComposition(HIDWORD(v6[15].Ptr), v155 != 0, DWORD2(v200) - v200, HIDWORD(v200) - DWORD1(v200), v16);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*((_QWORD *)v15 + 65) + 8LL)
                                                                               + 416LL))(
        *((_QWORD *)v15 + 66),
        HIDWORD(v6[15].Ptr),
        v163,
        v151);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v179);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v179);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v16, HIDWORD(v6[15].Ptr), v151, 1u);
    }
    LODWORD(v6->Count) = (v155 << 31) | (LODWORD(v6->Count) ^ (LODWORD(v6->Count) ^ (v157 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)&v6[54].Ptr + 4) = v200;
    *(struct tagRECT *)((char *)&v6[56].Ptr + 4) = v201;
  }
  else
  {
    if ( HIDWORD(v7[93].Ptr) - HIDWORD(v7[92].Ptr) != HIDWORD(v7[94].Ptr)
      || LODWORD(v7[94].Count) - LODWORD(v7[93].Count) != LODWORD(v7[95].Count)
      || (v61 & 0x400000) != 0 )
    {
      LOBYTE(v147) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v15 + 65) + 8LL) + 400LL))(
        *((_QWORD *)v15 + 66),
        (unsigned int)(1 << HIDWORD(v6[15].Ptr)),
        v7 + 9,
        v6[21].Count,
        &v151,
        0,
        v147,
        v186,
        v198);
      v64 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v64[3] = HIDWORD(v7[93].Ptr) - HIDWORD(v7[92].Ptr);
      v64[4] = LODWORD(v7[94].Count) - LODWORD(v7[93].Count);
      v64[5] = HIDWORD(v7[94].Ptr);
      v64[6] = LODWORD(v7[95].Count);
      WdLogEvent5_WdPresentTokenEvent(v64);
      HIDWORD(v7[7].Ptr) |= 0x1000000u;
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v16, HIDWORD(v6[15].Ptr), 0, 0);
      goto LABEL_47;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v16, HIDWORD(v6[15].Ptr), 0, 1u);
  }
  if ( (HIDWORD(v7[7].Ptr) & 0x40) != 0 )
  {
    LODWORD(v6->Count) |= 0x40000000u;
    v75 = v7[20].Count;
    LODWORD(v6[45].Count) = v75;
    if ( v75 )
    {
      v76 = (unsigned int)(v75 - 1);
      if ( (_DWORD)v76 )
      {
        if ( (_DWORD)v76 == 1 )
        {
          *(_OWORD *)((char *)&v6[45].Ptr + 4) = *(_OWORD *)((char *)&v7[20].Ptr + 4);
          *(_OWORD *)((char *)&v6[47].Ptr + 4) = *(_OWORD *)((char *)&v7[22].Ptr + 4);
          *(_OWORD *)((char *)&v6[49].Ptr + 4) = *(_OWORD *)((char *)&v7[24].Ptr + 4);
          *(_OWORD *)((char *)&v6[51].Ptr + 4) = *(_OWORD *)((char *)&v7[26].Ptr + 4);
          *(struct _EX_RUNDOWN_REF *)((char *)v6 + 428) = *(struct _EX_RUNDOWN_REF *)((char *)v7 + 228);
        }
        else
        {
          v77 = WdLogNewEntry5_WdAssertion(v76, v63);
          *(_QWORD *)(v77 + 24) = 2033LL;
          WdLogEvent5_WdAssertion(v77);
          LODWORD(v6->Count) &= ~0x40000000u;
        }
      }
      else
      {
        *(_OWORD *)((char *)&v6[45].Ptr + 4) = *(_OWORD *)((char *)&v7[20].Ptr + 4);
        *(struct _EX_RUNDOWN_REF *)((char *)v6 + 380) = *(struct _EX_RUNDOWN_REF *)((char *)v7 + 180);
        HIDWORD(v6[48].Ptr) = HIDWORD(v7[23].Ptr);
      }
    }
  }
  v78 = v151;
  HIDWORD(v7[101].Ptr) = v151;
  v79 = 69LL;
  if ( !BYTE4(v6[44].Ptr) )
    v79 = 61LL;
  LODWORD(v6[v79].Count) ^= (LODWORD(v6[v79].Count) ^ (1 << v78)) & 0x3FF;
  v80 = 1;
  v154 = 1;
  if ( DXGADAPTER::IsDxgmms2(v152) && v5 )
  {
    v80 = HIDWORD(v172[11].Ptr) + 1;
    v154 = v80;
  }
  v160 = 0;
  PoolWithTag = 0LL;
  v162 = 0LL;
  P = 0LL;
  v182 = 0;
  if ( v80 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v181;
LABEL_128:
    P = PoolWithTag;
    v162 = (char *)PoolWithTag;
    v182 = v80;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v80);
      PoolWithTag = (struct _EX_RUNDOWN_REF *)P;
      v162 = (char *)P;
    }
    goto LABEL_130;
  }
  v81 = 0xFFFFFFFFFFFFFFFFuLL % v80;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v80 >= 8 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(v82, 8LL * v80, 0x4B677844u);
    goto LABEL_128;
  }
LABEL_130:
  v189[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_135:
    P = 0LL;
    v182 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v153, v81);
    return 3221225495LL;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v202, v80);
  v84 = (struct _EX_RUNDOWN_REF *)v202[0];
  v163 = (struct _EX_RUNDOWN_REF *)v202[0];
  if ( !v202[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v202);
    if ( P != v181 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_135;
  }
  for ( i = 0; i < v80; ++i )
  {
    if ( i )
    {
      v158 = *(_DWORD *)(*(_QWORD *)(v161[187].Count + 8LL * i) + 408LL);
      v92 = (unsigned int *)(v172[182].Count + 4LL * (i - 1));
      if ( v92 + 1 < v92 || (unsigned __int64)(v92 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v93 = *v92;
      v188 = v93;
      v94 = (struct _EX_RUNDOWN_REF **)&v84[i];
      AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                    v173,
                                                    (DXGALLOCATIONREFERENCE *)v189,
                                                    v93);
      DXGALLOCATIONREFERENCE::MoveAssign(v94, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v189, v96);
      v86 = *v94;
      if ( !v86 )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97, v99);
        v100[3] = v93;
        v100[4] = -1073741811LL;
        v100[5] = 2107LL;
        WdLogEvent5_WdError(v100);
        v60 = -1073741811;
        v156 = -1073741811;
        v101 = v168;
        v102 = v152;
        goto LABEL_186;
      }
      v103 = v161;
      v104 = *(_QWORD *)(*(_QWORD *)(v161[187].Count + 8LL * i) + 16LL);
      v191 = v104;
      v192 = *(_QWORD *)(v86[1].Count + 16);
      v105 = *(_QWORD *)(v192 + 16);
      v193 = v105;
      v194 = *(_QWORD *)(v104 + 16);
      v106 = *(_QWORD *)(v194 + 16);
      v195 = v106;
      if ( v105 != v106 )
      {
        _mm_lfence();
        v107 = (_QWORD *)WdLogNewEntry5_WdError(v106, v105, v104);
        v107[3] = *(_QWORD *)(*(_QWORD *)(v161[187].Count + 8LL * i) + 16LL);
        v107[4] = v163[i].Count;
        v107[5] = -1073741811LL;
        WdLogEvent5_WdError(v107);
        v60 = -1073741811;
        v156 = -1073741811;
        v101 = v168;
        v102 = v152;
        goto LABEL_186;
      }
      v108 = v6 + 69;
      if ( BYTE4(v6[44].Ptr) )
        v109 = (struct _EX_RUNDOWN_REF *)((char *)&v108[8 * (unsigned __int64)(i * HIDWORD(v6[69].Ptr)) + 3]
                                        + HIDWORD(v6[69].Ptr) * ((8 * LODWORD(v6[70].Count) + 191) & 0xFFFFFFF8));
      else
        v109 = v6 + 63;
      v109->Count = *(ULONG_PTR *)(v86[6].Count + 16);
      if ( !*((_BYTE *)v152 + 2506) )
      {
        if ( BYTE4(v6[44].Ptr) )
          v110 = (struct _EX_RUNDOWN_REF *)((char *)&v108[8 * (unsigned __int64)(i * HIDWORD(v6[69].Ptr)) + 2]
                                          + HIDWORD(v6[69].Ptr) * ((8 * LODWORD(v6[70].Count) + 191) & 0xFFFFFFF8));
        else
          v110 = v6 + 70;
        v110->Count = *(ULONG_PTR *)(*(_QWORD *)(v103[187].Count + 8LL * i) + 184LL);
      }
      LODWORD(v6[18].Count) |= 1 << v158;
      v111 = *(_QWORD *)(8LL * i + v103[187].Count);
      if ( (*(_DWORD *)(v111 + 412) & 0x10) == 0 )
      {
        Count_low = 8LL * i + LODWORD(v6[67].Count);
        v91 = *(_QWORD *)(v111 + 272);
        goto LABEL_168;
      }
    }
    else
    {
      v86 = v153;
      if ( BYTE4(v6[44].Ptr) )
        v87 = (struct _EX_RUNDOWN_REF *)((char *)v6
                                       + HIDWORD(v6[69].Ptr) * ((8 * LODWORD(v6[70].Count) + 191) & 0xFFFFFFF8)
                                       + 576);
      else
        v87 = v6 + 63;
      v87->Count = *(ULONG_PTR *)(v153[6].Count + 16);
      v88 = v152;
      if ( !*((_BYTE *)v152 + 2506) )
      {
        if ( BYTE4(v6[44].Ptr) )
        {
          v89 = (struct _EX_RUNDOWN_REF *)((char *)v6
                                         + HIDWORD(v6[69].Ptr) * ((8 * LODWORD(v6[70].Count) + 191) & 0xFFFFFFF8)
                                         + 568);
          v88 = v152;
        }
        else
        {
          v89 = v6 + 70;
        }
        v89->Count = v5[23].Count;
      }
      if ( DXGADAPTER::IsDxgmms2(v88) && v5 && (HIDWORD(v5[51].Ptr) & 0x10) == 0 )
      {
        Count_low = LODWORD(v6[67].Count);
        v91 = v5[34].Count;
LABEL_168:
        *(ULONG_PTR *)((char *)&v6->Count + Count_low) = v91;
      }
    }
    if ( BYTE4(v6[44].Ptr) )
      v112 = (struct _EX_RUNDOWN_REF *)((char *)&v6[8 * (unsigned __int64)(i * HIDWORD(v6[69].Ptr)) + 75]
                                      + HIDWORD(v6[69].Ptr) * ((8 * LODWORD(v6[70].Count) + 191) & 0xFFFFFFF8));
    else
      v112 = v6 + 62;
    v60 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*((_QWORD *)v168 + 68) + 8LL)
                                                                                         + 416LL))(
            v169[81],
            v86[3].Count,
            v112,
            *((_QWORD *)v168 + 69));
    v156 = v60;
    if ( v60 < 0 )
    {
      v116 = WdLogNewEntry5_WdError(v114, v113, v115);
      *(_QWORD *)(v116 + 24) = v86;
      *(_QWORD *)(v116 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v116);
      v5 = v175;
      break;
    }
    *(struct _EX_RUNDOWN_REF *)&v162[8 * i] = (struct _EX_RUNDOWN_REF)v112->Count;
    ++v160;
    v117 = v86[5].Count;
    if ( v117 && (*(_DWORD *)(v117 + 4) & 8) != 0 )
      v118 = *(_QWORD *)(*(_QWORD *)(v117 + 56) + 176LL);
    else
      v118 = 0LL;
    if ( BYTE4(v6[44].Ptr) )
      *(ULONG_PTR *)((char *)&v6[8 * (unsigned __int64)(i * HIDWORD(v6[69].Ptr)) + 76].Count
                   + HIDWORD(v6[69].Ptr) * ((8 * LODWORD(v6[70].Count) + 191) & 0xFFFFFFF8)) = v118;
    else
      v6[71].Count = v118;
    LODWORD(v6->Count) |= 0x1000000u;
    v119 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v119[3] = v7;
    v119[4] = v7[2].Count;
    v119[5] = HIDWORD(v7[15].Ptr);
    v119[6] = v7[9].Count;
    v119[7] = v7[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v119);
    v5 = v175;
    if ( !v175 && (v7[4].Count & 2) != 0 )
    {
      HIDWORD(v6->Ptr) |= 2u;
      v6[60].Count = v7[3].Count;
    }
    v80 = v154;
    v84 = v163;
  }
  v102 = v152;
  v101 = v168;
LABEL_186:
  v120 = v154;
  HIDWORD(v6[18].Ptr) = v154;
  if ( v60 < 0 || (*((_DWORD *)v102 + 477) & 0x20) == 0 )
  {
    v132 = v152;
    goto LABEL_218;
  }
  memset(&v199, 0, sizeof(v199));
  v199.Flags.Value = 0x2000;
  v121 = (UINT *)v6[3].Count;
  if ( v121 )
  {
    v199.PrivateDriverDataSize = *v121;
    v199.pPrivateDriverData = v121 + 2;
  }
  v203 = 0LL;
  v205 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v203, v120);
  pAllocationList = (char *)v203;
  v199.pAllocationList = (DXGK_ALLOCATIONLIST *)v203;
  if ( v203 )
  {
    v123 = *((_DWORD *)v152 + 479);
    v150 = (v123 & 0x80u) != 0 && (v123 & 0x40) == 0;
    v124 = 0;
    v158 = 0;
    if ( v120 )
    {
      v125 = 0LL;
      v126 = 0LL;
      v127 = v150;
      v128 = v161;
      while ( 1 )
      {
        if ( v5 )
          v129 = *(_WORD *)(*(_QWORD *)(v128[187].Count + v126 * 8) + 408LL);
        else
          v129 = 0;
        *(_WORD *)&pAllocationList[v125 + 26] = v129;
        if ( v124 )
          v130 = (struct _EX_RUNDOWN_REF *)v163[v126].Count;
        else
          v130 = v153;
        if ( v5 )
          v127 = *(_BYTE *)(*(_QWORD *)(v128[187].Count + v126 * 8) + 447LL);
        *(struct _EX_RUNDOWN_REF *)((char *)&v199.pAllocationList->hDeviceSpecificAllocation + v125) = v130[4];
        v131 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v101 + 68) + 8LL)
                                                                            + 248LL))(
                 *((_QWORD *)v101 + 69),
                 v130[3].Count,
                 v127,
                 *(unsigned __int16 *)((char *)&v199.pAllocationList[1].hDeviceSpecificAllocation + v125 + 2));
        *(_QWORD *)((char *)&v199.pAllocationList->8 + v125) = v131;
        v124 = v158 + 1;
        v158 = v124;
        ++v126;
        v125 += 32LL;
        if ( v124 >= v154 )
          break;
        pAllocationList = (char *)v199.pAllocationList;
      }
      v6 = v171;
      v7 = v174;
      v120 = v154;
    }
    v199.FlipInterval = HIDWORD(v6[16].Ptr);
    v199.Flags.Value ^= (*(_WORD *)&v199.Flags.0 ^ (unsigned __int16)(LODWORD(v6->Count) >> 11)) & 0x1700;
    v199.NumSrcAllocations = v120;
    v132 = v152;
    Ptr = 0LL;
    if ( !*((_BYTE *)v152 + 2506) )
      Ptr = v5[23].Ptr;
    v60 = ADAPTER_RENDER::DdiPresent(v101, Ptr, &v199);
    v102 = (const struct DXGADAPTER *)v203;
    if ( v60 < 0 )
    {
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      goto LABEL_225;
    }
    if ( v203 != v204 && v203 )
      ExFreePoolWithTag(v203, 0);
LABEL_218:
    if ( v157 && (v6->Count & 0x1000000) != 0 )
    {
      v134 = 0LL;
      v178 = 0LL;
      if ( *((int *)v132 + 613) >= 2500 )
      {
        v135 = ReadPresentDirtyRectsData(v102, v151, (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v7, &v178);
        v139 = v135;
        if ( v135 < 0 )
        {
          v140 = WdLogNewEntry5_WdError(v137, v136, v138);
          *(_QWORD *)(v140 + 24) = v139;
          WdLogEvent5_WdError(v140);
          goto LABEL_225;
        }
        v134 = v178;
      }
      v6[5].Count = (ULONG_PTR)v134;
    }
  }
LABEL_225:
  if ( v60 < 0 )
  {
    if ( v160 )
    {
      v141 = v160;
      if ( v5 )
      {
        v142 = (__int64)v164;
        v143 = (char *)(v162 - (char *)v164);
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v101 + 68) + 8LL) + 424LL))(
            *((_QWORD *)v101 + 69),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v142 + 408LL)),
            *(_QWORD *)&v143[v142],
            0LL);
          v142 += 8LL;
          --v141;
        }
        while ( v141 );
        v7 = v174;
      }
      else
      {
        v144 = v162;
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v101 + 68) + 8LL) + 424LL))(
            *((_QWORD *)v101 + 69),
            1LL,
            *(_QWORD *)v144,
            0LL);
          v144 += 8;
          --v141;
        }
        while ( v141 );
        v6 = v171;
      }
    }
    v145 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v145[3] = v7;
    v145[4] = v7[2].Count;
    v145[5] = HIDWORD(v7[15].Ptr);
    v145[6] = v7[9].Count;
    v145[7] = v7[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v145);
    HIDWORD(v7[7].Ptr) |= 0x1000000u;
    LODWORD(v6->Count) &= ~0x1000000u;
    v60 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v202);
  if ( P != v181 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v182 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v153, v146);
  return (unsigned int)v60;
}
