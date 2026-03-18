/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010CFE0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013DBD8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PARAMS@@@Z @ 0x1C02581C0 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PAR.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0258ACC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B5A0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAV.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C013C060 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0152D64 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C022F1CC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C025B6CC (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025BFC8 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        const struct DXGK_PRESENT_PARAMS *a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION *a6,
        unsigned int a7,
        unsigned int a8,
        struct _DXGKARG_PRESENT *a9,
        struct _D3DKMT_PRESENT_RGNS *a10,
        struct _VIDMM_DMA_BUFFER *a11,
        struct VIDSCH_SUBMIT_DATA_BASE *a12,
        enum _D3DDDIFORMAT a13,
        struct _D3DKMT_PRESENT *a14)
{
  struct DXGCONTEXT **v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v33; // rax
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rbx
  __int64 *v40; // rax
  __int64 v41; // rbx
  _QWORD *v42; // rax
  struct DXGALLOCATION **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _KTHREAD *v48; // rdi
  __int64 v49; // rax
  int v50; // ebx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rax
  struct _KTHREAD *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // ebx
  __int64 v61; // rbx
  __int64 *v62; // rax
  __int64 v63; // rbx
  _QWORD *v64; // rax
  DXGCONTEXT *v65; // r8
  __int64 v66; // rax
  bool v67; // cl
  struct CRefCountedBuffer *v68; // rbx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdx
  char v78; // di
  struct _DXGKARG_PRESENT *v79; // rcx
  unsigned int v80; // r10d
  unsigned int v81; // r9d
  __int64 v82; // r8
  const struct _D3DKMT_PRESENT *v83; // rdx
  LONG right; // eax
  DXGCONTEXT *v85; // r15
  UINT v86; // eax
  struct _DXGKARG_PRESENT *v87; // rcx
  RECT *v88; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  struct _VIDMM_DMA_BUFFER *v94; // r9
  struct DXGALLOCATION *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct _KTHREAD *v98; // rdi
  __int64 v99; // rax
  int v100; // ebx
  __int64 v101; // rbx
  __int64 v102; // rcx
  __int64 *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  unsigned int v107; // ebx
  struct _VIDMM_DMA_BUFFER *v108; // rax
  __int64 v109; // rdi
  D3DKMT_HANDLE *v110; // rdx
  struct _EX_RUNDOWN_REF **v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  _QWORD *v116; // rax
  __int64 v117; // r15
  __int64 v118; // r8
  __int64 v119; // rdx
  __int64 v120; // rcx
  _QWORD *v121; // rax
  unsigned int *v122; // rdx
  struct _EX_RUNDOWN_REF **v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  _QWORD *v128; // rax
  __int64 v129; // rdi
  __int64 v130; // r8
  __int64 v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // r8
  __int64 v135; // rax
  _QWORD *v136; // r9
  _BYTE *PoolWithTag; // r9
  unsigned int v138; // ebx
  struct DXGCONTEXT **v139; // rdx
  struct DXGCONTEXT *v140; // r8
  __int64 v141; // rax
  struct DXGALLOCATION *v142; // r12
  __int64 v143; // rax
  struct _DXGKARG_PRESENT *v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rdx
  unsigned int v147; // edi
  __int64 v148; // rdx
  int v150; // ecx
  __int64 v151; // rax
  char *v152; // r8
  _QWORD *v153; // rcx
  __int64 v154; // rax
  int v155; // ecx
  char *v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // rcx
  char v159; // al
  __int64 v160; // rbx
  char *v161; // rbx
  char *v162; // rdx
  char *v163; // rcx
  __int64 v164; // r15
  __int64 v165; // r12
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rax
  BOOL v170; // r12d
  struct _DXGKARG_PRESENT *v171; // r8
  void *v172; // rdx
  __int64 v173; // rcx
  unsigned int v174; // r15d
  struct DXGCONTEXT *v175; // r10
  __int64 v176; // rax
  __int64 v177; // rdx
  int v178; // eax
  char *v179; // r8
  struct _KTHREAD *v180; // rdi
  __int64 v181; // rax
  __int64 v182; // rcx
  int v183; // ebx
  __int64 v184; // rbx
  __int64 *v185; // rax
  __int64 v186; // rbx
  _QWORD *v187; // rax
  struct DXGALLOCATION *v188; // rcx
  __int64 v189; // rdx
  __int64 v190; // rcx
  struct _KTHREAD *v191; // rdi
  __int64 v192; // rax
  int v193; // ebx
  __int64 v194; // rbx
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 *v197; // rax
  __int64 v198; // rax
  struct _KTHREAD *v199; // rdi
  __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  int v203; // ebx
  __int64 v204; // rbx
  __int64 *v205; // rax
  __int64 v206; // rbx
  _QWORD *v207; // rax
  int v208; // [rsp+50h] [rbp-378h]
  struct _VIDMM_DMA_BUFFER *v209; // [rsp+58h] [rbp-370h]
  unsigned int v210; // [rsp+60h] [rbp-368h]
  struct DXGALLOCATION *v213; // [rsp+78h] [rbp-350h] BYREF
  struct DXGALLOCATION *v214; // [rsp+80h] [rbp-348h] BYREF
  int v215; // [rsp+88h] [rbp-340h] BYREF
  struct _DXGKARG_PRESENT *v216; // [rsp+90h] [rbp-338h]
  __int64 v217; // [rsp+A0h] [rbp-328h]
  unsigned int v218; // [rsp+A8h] [rbp-320h]
  struct _D3DKMT_PRESENT *v219; // [rsp+B0h] [rbp-318h]
  __int64 v220; // [rsp+B8h] [rbp-310h] BYREF
  unsigned int v221; // [rsp+C0h] [rbp-308h]
  int v222; // [rsp+C4h] [rbp-304h]
  unsigned int v223; // [rsp+C8h] [rbp-300h]
  struct DXGALLOCATION *v224; // [rsp+D0h] [rbp-2F8h]
  struct CRefCountedBuffer *v225; // [rsp+D8h] [rbp-2F0h] BYREF
  signed __int64 v226; // [rsp+E0h] [rbp-2E8h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+E8h] [rbp-2E0h]
  struct _D3DKMT_PRESENT *v228; // [rsp+F0h] [rbp-2D8h]
  struct DXGK_PRESENT_PARAMS *v229; // [rsp+F8h] [rbp-2D0h]
  PVOID P; // [rsp+100h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v231; // [rsp+108h] [rbp-2C0h] BYREF
  struct _EX_RUNDOWN_REF *v232; // [rsp+110h] [rbp-2B8h] BYREF
  struct _EX_RUNDOWN_REF *v233; // [rsp+118h] [rbp-2B0h] BYREF
  struct _EX_RUNDOWN_REF *v234[2]; // [rsp+120h] [rbp-2A8h] BYREF
  PVOID v235; // [rsp+130h] [rbp-298h]
  _BYTE v236[64]; // [rsp+138h] [rbp-290h] BYREF
  unsigned int v237; // [rsp+178h] [rbp-250h]
  __int64 v238; // [rsp+180h] [rbp-248h]
  __int64 v239; // [rsp+188h] [rbp-240h]
  __int64 v240; // [rsp+190h] [rbp-238h]
  __int64 v241; // [rsp+198h] [rbp-230h]
  __int64 v242; // [rsp+1A0h] [rbp-228h]
  __int64 v243; // [rsp+1A8h] [rbp-220h]
  __int64 v244; // [rsp+1B0h] [rbp-218h]
  __int64 v245; // [rsp+1B8h] [rbp-210h]
  __int64 v246; // [rsp+1C0h] [rbp-208h]
  __int64 v247; // [rsp+1C8h] [rbp-200h]
  __int64 v248; // [rsp+1D0h] [rbp-1F8h]
  __int64 v249; // [rsp+1D8h] [rbp-1F0h]
  _QWORD v250[12]; // [rsp+1E0h] [rbp-1E8h] BYREF
  _BYTE v251[320]; // [rsp+240h] [rbp-188h] BYREF

  v229 = a3;
  v219 = a2;
  v234[1] = (struct _EX_RUNDOWN_REF *)this;
  v14 = a5;
  v224 = a6;
  v221 = a7;
  v218 = a8;
  v216 = a9;
  v209 = a11;
  v228 = a14;
  v15 = *((_QWORD *)this + 2);
  v16 = *(_QWORD *)(v15 + 40);
  v217 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 7379LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v213 = 0LL;
  v214 = 0LL;
  if ( a7 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v231, a7);
    v213 = *AllocationSafe;
    *AllocationSafe = 0LL;
    v23 = (__int64)v231;
    if ( v231 )
      ExReleaseRundownProtection(v231 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v23, v22) + 247) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v27 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v27);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v25, v24);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v29 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v29 = *ThreadWin32Thread;
        }
        if ( v29 )
          v33 = *(_QWORD *)(v29 + 80);
        else
          v33 = 0LL;
        if ( v33 )
        {
          v34 = KeGetCurrentThread();
          if ( !v34 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v31, v30);
            *(_QWORD *)(v35 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v35);
          }
          v38 = PsGetCurrentProcessSessionId(v31, v30);
          if ( !v38 || (unsigned int)PsGetThreadSessionId(v34) != v38 )
            goto LABEL_28;
          v39 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v40 = (__int64 *)PsGetThreadWin32Thread(v34);
            if ( v40 )
              v39 = *v40;
          }
          if ( v39 )
            v41 = *(_QWORD *)(v39 + 80);
          else
LABEL_28:
            v41 = 0LL;
          if ( *(_DWORD *)(v41 + 136) )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36);
            v42[3] = 275LL;
            v42[4] = 38LL;
            v42[5] = *(int *)(v41 + 136);
            v42[6] = 0LL;
            v42[7] = 0LL;
            WdLogEvent5_WdCriticalError(v42);
          }
        }
      }
      v16 = v217;
    }
  }
  if ( v218 )
  {
    v43 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v232, v218);
    v214 = *v43;
    *v43 = 0LL;
    v45 = (__int64)v232;
    if ( v232 )
      ExReleaseRundownProtection(v232 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v45, v44) + 247) )
    {
      v48 = KeGetCurrentThread();
      if ( !v48 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v47, v46);
        *(_QWORD *)(v49 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v49);
      }
      v50 = PsGetCurrentProcessSessionId(v47, v46);
      if ( v50 && (unsigned int)PsGetThreadSessionId(v48) == v50 )
      {
        v51 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v54 = (__int64 *)PsGetThreadWin32Thread(v48);
          if ( v54 )
            v51 = *v54;
        }
        if ( v51 )
          v55 = *(_QWORD *)(v51 + 80);
        else
          v55 = 0LL;
        if ( v55 )
        {
          v56 = KeGetCurrentThread();
          if ( !v56 )
          {
            v57 = WdLogNewEntry5_WdAssertion(v53, v52);
            *(_QWORD *)(v57 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v57);
          }
          v60 = PsGetCurrentProcessSessionId(v53, v52);
          if ( !v60 || (unsigned int)PsGetThreadSessionId(v56) != v60 )
            goto LABEL_56;
          v61 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v62 = (__int64 *)PsGetThreadWin32Thread(v56);
            if ( v62 )
              v61 = *v62;
          }
          if ( v61 )
            v63 = *(_QWORD *)(v61 + 80);
          else
LABEL_56:
            v63 = 0LL;
          if ( *(_DWORD *)(v63 + 136) )
          {
            v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v59, v58);
            v64[3] = 275LL;
            v64[4] = 38LL;
            v64[5] = *(int *)(v63 + 136);
            v64[6] = 0LL;
            v64[7] = 0LL;
            WdLogEvent5_WdCriticalError(v64);
          }
        }
      }
    }
  }
  v65 = this;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
    || ((v66 = *(_QWORD *)(v217 + 96)) == 0
      ? (DXGCONTEXT *)(v67 = 0)
      : (v67 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v66 + 224))(0LL, 0LL, 0LL) != 0, v65 = this),
        v67) )
  {
    *((_DWORD *)a12 + 31) = 0;
  }
  v68 = 0LL;
  v225 = 0LL;
  v69 = (__int64)v219;
  if ( v219 )
  {
    v70 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v65 + 2) + 16LL) + 16LL),
            v219->PrivateDriverDataSize,
            v219->pPrivateDriverData,
            &v225);
    v74 = v70;
    if ( v70 < 0 )
    {
      v75 = WdLogNewEntry5_WdError(v72, v71, v73);
      *(_QWORD *)(v75 + 24) = v74;
      WdLogEvent5_WdError(v75);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v214, v76);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v213, v77);
      return (unsigned int)v74;
    }
    v68 = v225;
    v69 = (__int64)v219;
  }
  P = v68;
  v78 = 0;
  v79 = (struct _DXGKARG_PRESENT *)*(unsigned int *)(v17 + 2184);
  if ( ((int)v79 >= 0x2000 || *(_BYTE *)(v17 + 2484)) && *(_DWORD *)(v17 + 1728) >= 0x5007u && v69 )
  {
    v78 = 1;
    if ( v68 )
    {
      v79 = v216;
      v216->PrivateDriverDataSize = *(_DWORD *)(v69 + 1472);
      v79->pPrivateDriverData = (char *)v68 + 8;
    }
    *((_QWORD *)a12 + 3) = v68;
    goto LABEL_76;
  }
  if ( (int)v79 < 0x2000 && !*(_BYTE *)(v17 + 2484) )
  {
LABEL_76:
    v80 = a4;
    goto LABEL_77;
  }
  v80 = a4;
  if ( a4 )
  {
    LODWORD(v74) = -1073741811;
    v85 = this;
    goto LABEL_93;
  }
LABEL_77:
  v81 = v80 + 1;
  v210 = v80 + 1;
  v82 = *((unsigned int *)*a5 + 101);
  v83 = 0LL;
  if ( v80 )
  {
    while ( 1 )
    {
      v83 = (const struct _D3DKMT_PRESENT *)(unsigned int)((_DWORD)v83 + 1);
      v79 = (struct _DXGKARG_PRESENT *)a5[(_QWORD)v83];
      right = v79[2].DstRect.right;
      if ( (right & (unsigned int)v82) != 0 )
        break;
      v82 = right | (unsigned int)v82;
      if ( (unsigned int)v83 >= v80 )
        goto LABEL_80;
    }
    v105 = WdLogNewEntry5_WdError(v79, v83, v82);
    v85 = this;
    goto LABEL_118;
  }
LABEL_80:
  *((_DWORD *)a12 + 36) = v82;
  v85 = this;
  if ( a10 )
  {
    v79 = (struct _DXGKARG_PRESENT *)*((_QWORD *)this + 2);
    v83 = (const struct _D3DKMT_PRESENT *)*((_QWORD *)v79->pDmaBufferPrivateData + 2);
    if ( (v83->BroadcastContext[53] & 0x10) != 0
      && v83 == *(const struct _D3DKMT_PRESENT **)&v79[10].PatchLocationListOutSize )
    {
      v86 = a10->MoveRectCount + a10->DirtyRectCount;
      if ( v86 <= 0x14 )
      {
        v87 = v216;
        v216->SubRectCnt = v86;
        v87->pDstSubRects = (const RECT *)v251;
        v88 = (RECT *)v251;
        MoveRectCount = a10->MoveRectCount;
        if ( (_DWORD)MoveRectCount )
        {
          p_DestRect = &a10->pMoveRects->DestRect;
          do
          {
            *v88 = *p_DestRect;
            p_DestRect = (RECT *)((char *)p_DestRect + 24);
            ++v88;
            --MoveRectCount;
          }
          while ( MoveRectCount );
        }
        memmove(v88, a10->pDirtyRects, 16LL * a10->DirtyRectCount);
        v81 = v210;
      }
    }
  }
  if ( ((*((_DWORD *)a12 + 32) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v81 <= 1 )
    {
      LODWORD(v74) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                       this,
                       v83,
                       v229,
                       0,
                       v213,
                       v214,
                       v216,
                       a11,
                       a12,
                       (struct COREDEVICEACCESS *)v228);
      v208 = v74;
      v94 = 0LL;
      goto LABEL_95;
    }
    if ( !v78 )
    {
      v105 = WdLogNewEntry5_WdError(v79, v83, v82);
LABEL_118:
      *(_QWORD *)(v105 + 24) = v85;
      LODWORD(v74) = -1073741811;
      *(_QWORD *)(v105 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v105);
      goto LABEL_93;
    }
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)this + 2));
    if ( !BroadcastPresentSyncObject )
    {
      v93 = WdLogNewEntry5_WdError(v91, v69, v92);
      *(_QWORD *)(v93 + 24) = -1073741801LL;
      *(_QWORD *)(v93 + 32) = 7758LL;
      WdLogEvent5_WdError(v93);
      LODWORD(v74) = -1073741801;
LABEL_93:
      v208 = v74;
LABEL_94:
      v94 = v209;
LABEL_95:
      if ( v94 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v85 + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v94,
          0LL);
      if ( P )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(P, 0);
        LODWORD(v74) = v208;
      }
      v95 = v214;
      if ( v214 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v214 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v95, v69) + 247) )
      {
        v98 = KeGetCurrentThread();
        if ( !v98 )
        {
          v99 = WdLogNewEntry5_WdAssertion(v97, v96);
          *(_QWORD *)(v99 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v99);
        }
        v100 = PsGetCurrentProcessSessionId(v97, v96);
        if ( v100 && (unsigned int)PsGetThreadSessionId(v98) == v100 )
        {
          v101 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v103 = (__int64 *)PsGetThreadWin32Thread(v98);
            if ( v103 )
              v101 = *v103;
          }
          if ( v101 )
            v104 = *(_QWORD *)(v101 + 80);
          else
            v104 = 0LL;
          if ( v104 )
          {
            v180 = KeGetCurrentThread();
            if ( !v180 )
            {
              v181 = WdLogNewEntry5_WdAssertion(v102, v96);
              *(_QWORD *)(v181 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v181);
            }
            v183 = PsGetCurrentProcessSessionId(v102, v96);
            if ( !v183 || (unsigned int)PsGetThreadSessionId(v180) != v183 )
              goto LABEL_254;
            v184 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v185 = (__int64 *)PsGetThreadWin32Thread(v180);
              if ( v185 )
                v184 = *v185;
            }
            if ( v184 )
              v186 = *(_QWORD *)(v184 + 80);
            else
LABEL_254:
              v186 = 0LL;
            if ( *(_DWORD *)(v186 + 136) )
            {
              v187 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v182, v96);
              v187[3] = 275LL;
              v187[4] = 38LL;
              v187[5] = *(int *)(v186 + 136);
              v187[6] = 0LL;
              v187[7] = 0LL;
              WdLogEvent5_WdCriticalError(v187);
            }
          }
        }
        LODWORD(v74) = v208;
      }
      v188 = v213;
      if ( v213 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v213 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v188, v96) + 247) )
      {
        v191 = KeGetCurrentThread();
        if ( !v191 )
        {
          v192 = WdLogNewEntry5_WdAssertion(v190, v189);
          *(_QWORD *)(v192 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v192);
        }
        v193 = PsGetCurrentProcessSessionId(v190, v189);
        if ( v193 && (unsigned int)PsGetThreadSessionId(v191) == v193 )
        {
          v194 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v197 = (__int64 *)PsGetThreadWin32Thread(v191);
            if ( v197 )
              v194 = *v197;
          }
          if ( v194 )
            v198 = *(_QWORD *)(v194 + 80);
          else
            v198 = 0LL;
          if ( v198 )
          {
            v199 = KeGetCurrentThread();
            if ( !v199 )
            {
              v200 = WdLogNewEntry5_WdAssertion(v196, v195);
              *(_QWORD *)(v200 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v200);
            }
            v203 = PsGetCurrentProcessSessionId(v196, v195);
            if ( !v203 || (unsigned int)PsGetThreadSessionId(v199) != v203 )
              goto LABEL_281;
            v204 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v205 = (__int64 *)PsGetThreadWin32Thread(v199);
              if ( v205 )
                v204 = *v205;
            }
            if ( v204 )
              v206 = *(_QWORD *)(v204 + 80);
            else
LABEL_281:
              v206 = 0LL;
            if ( *(_DWORD *)(v206 + 136) )
            {
              v207 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v202, v201);
              v207[3] = 275LL;
              v207[4] = 38LL;
              v207[5] = *(int *)(v206 + 136);
              v207[6] = 0LL;
              v207[7] = 0LL;
              WdLogEvent5_WdCriticalError(v207);
            }
          }
        }
        LODWORD(v74) = v208;
      }
      return (unsigned int)v74;
    }
    v106 = *((_QWORD *)this + 2);
    v226 = _InterlockedIncrement64((volatile signed __int64 *)(v106 + 1776));
    *(_DWORD *)a12 |= 0xC00u;
    v107 = 0;
    v108 = a11;
    while ( v107 < v210 )
    {
      if ( v107 )
      {
        LODWORD(v109) = 0;
        v222 = 0;
        v223 = 0;
        if ( v221 )
        {
          v110 = &v219->BroadcastSrcAllocation[v107 - 1];
          if ( v110 + 1 < v110 || (unsigned __int64)(v110 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v109 = *v110;
          v222 = v109;
          v111 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v217, (DXGALLOCATIONREFERENCE *)&v233, v109);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v213, v111);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v233, v112);
          if ( !v213 )
          {
            v116 = (_QWORD *)WdLogNewEntry5_WdError(v114, v113, v115);
            v116[3] = v109;
            LODWORD(v74) = -1073741811;
            v116[4] = -1073741811LL;
            v116[5] = 7784LL;
            WdLogEvent5_WdError(v116);
            v208 = -1073741811;
            v94 = v209;
            goto LABEL_95;
          }
          v117 = v107;
          v118 = *((_QWORD *)a5[v117] + 2);
          v238 = v118;
          v239 = *(_QWORD *)(*((_QWORD *)v213 + 1) + 16LL);
          v119 = *(_QWORD *)(v239 + 16);
          v240 = v119;
          v241 = *(_QWORD *)(v118 + 16);
          v120 = *(_QWORD *)(v241 + 16);
          v242 = v120;
          if ( v119 != v120 )
          {
            _mm_lfence();
            v121 = (_QWORD *)WdLogNewEntry5_WdError(v120, v119, v118);
            v243 = *((_QWORD *)a5[v117] + 2);
            v121[3] = v243;
            v121[4] = v213;
            LODWORD(v74) = -1073741811;
            v121[5] = -1073741811LL;
            WdLogEvent5_WdError(v121);
            v208 = -1073741811;
            v85 = this;
            v94 = v209;
            goto LABEL_95;
          }
          v85 = this;
        }
        if ( v218 )
        {
          v122 = &v219->BroadcastDstAllocation[v107 - 1];
          if ( v122 + 1 < v122 || (unsigned __int64)(v122 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v223 = *v122;
          v123 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(v217, (DXGALLOCATIONREFERENCE *)v234, v223);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v214, v123);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v234, v124);
          if ( !v214 )
          {
            v128 = (_QWORD *)WdLogNewEntry5_WdError(v126, v125, v127);
            v128[3] = (unsigned int)v109;
            LODWORD(v74) = -1073741811;
            v128[4] = -1073741811LL;
            v128[5] = 7807LL;
            WdLogEvent5_WdError(v128);
            v208 = -1073741811;
            v94 = v209;
            goto LABEL_95;
          }
          v129 = v107;
          v130 = *((_QWORD *)a5[v129] + 2);
          v244 = v130;
          v245 = *(_QWORD *)(*((_QWORD *)v214 + 1) + 16LL);
          v131 = *(_QWORD *)(v245 + 16);
          v246 = v131;
          v247 = *(_QWORD *)(v130 + 16);
          v132 = *(_QWORD *)(v247 + 16);
          v248 = v132;
          if ( v131 != v132 )
          {
            _mm_lfence();
            v133 = (_QWORD *)WdLogNewEntry5_WdError(v132, v131, v130);
            v249 = *((_QWORD *)a5[v129] + 2);
            v133[3] = v249;
            v133[4] = v214;
            LODWORD(v74) = -1073741811;
            v133[5] = -1073741811LL;
            WdLogEvent5_WdError(v133);
            v208 = -1073741811;
            v94 = v209;
            goto LABEL_95;
          }
        }
        v108 = v209;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  a5[v107],
                  v228,
                  v229,
                  v107,
                  v213,
                  v214,
                  v216,
                  v108,
                  a12,
                  (struct COREDEVICEACCESS *)v228) < 0 )
      {
        v135 = WdLogNewEntry5_WdError(v106, v69, v134);
        LODWORD(v74) = -1073741811;
        *(_QWORD *)(v135 + 24) = -1073741811LL;
        *(_QWORD *)(v135 + 32) = 7846LL;
        WdLogEvent5_WdError(v135);
        goto LABEL_93;
      }
      v108 = 0LL;
      v209 = 0LL;
      *(_DWORD *)a12 &= ~0x800u;
      ++v107;
    }
    v136 = 0LL;
    v235 = 0LL;
    v237 = 0;
    if ( a4 <= 8 )
    {
      PoolWithTag = v236;
      v235 = v236;
    }
    else
    {
      v69 = 0xFFFFFFFFFFFFFFFFuLL % a4;
      if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
        goto LABEL_149;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
      v235 = PoolWithTag;
    }
    v237 = a4;
    if ( !PoolWithTag )
    {
LABEL_150:
      LODWORD(v74) = -1073741801;
      v208 = -1073741801;
      goto LABEL_94;
    }
    memset(PoolWithTag, 0, 8LL * a4);
    v136 = v235;
LABEL_149:
    if ( v136 )
    {
      v138 = 1;
      if ( v210 <= 1 )
      {
LABEL_155:
        LODWORD(v74) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v85 + 2) + 16LL)
                                                                                                 + 520LL)
                                                                                     + 8LL)
                                                                         + 640LL))(
                         0LL,
                         0LL,
                         a4);
        v208 = v74;
        if ( (int)v74 >= 0 )
        {
          LODWORD(v74) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v85 + 2) + 16LL) + 520LL) + 8LL) + 624LL))(
                           *((_QWORD *)v85 + 34),
                           BroadcastPresentSyncObject,
                           v226);
          v208 = v74;
        }
      }
      else
      {
        v139 = a5 + 1;
        while ( 1 )
        {
          v140 = *v139;
          if ( (*((_DWORD *)*v139 + 103) & 0x10) != 0 )
            break;
          v106 = v138 - 1;
          v136[v106] = *((_QWORD *)v140 + 34);
          ++v138;
          ++v139;
          if ( v138 >= v210 )
            goto LABEL_155;
        }
        v141 = WdLogNewEntry5_WdError(v106, v139, v140);
        *(_QWORD *)(v141 + 24) = a5[v138];
        WdLogEvent5_WdError(v141);
        LODWORD(v74) = -1073741811;
        v208 = -1073741811;
      }
      if ( v235 != v236 && v235 )
        ExFreePoolWithTag(v235, 0);
      goto LABEL_94;
    }
    goto LABEL_150;
  }
  v142 = v224;
  if ( !v224 )
  {
    v143 = WdLogNewEntry5_WdAssertion(v79, v83);
    *(_QWORD *)(v143 + 24) = 7522LL;
    WdLogEvent5_WdAssertion(v143);
  }
  v144 = v216;
  if ( v216->pDmaBuffer )
  {
    v145 = WdLogNewEntry5_WdAssertion(v216, v83);
    *(_QWORD *)(v145 + 24) = 7523LL;
    WdLogEvent5_WdAssertion(v145);
    v144 = v216;
  }
  if ( !a4 || !v78 )
  {
    v150 = 2048;
    if ( v210 > 1 )
      v150 = 3072;
    *(_DWORD *)a12 = *(_DWORD *)a12 & 0xFFFFFBFF | v150;
    *((_DWORD *)a12 + 37) = v210;
    v151 = 552LL;
    if ( !*((_BYTE *)a12 + 356) )
      v151 = 488LL;
    *(_DWORD *)((char *)a12 + v151) = *(_DWORD *)((_BYTE *)a12 + v151) & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a12 + 356) )
      v152 = (char *)a12 + *((_DWORD *)a12 + 139) * ((8 * *((_DWORD *)a12 + 140) + 191) & 0xFFFFFFF8) + 600;
    else
      v152 = (char *)a12 + 496;
    LODWORD(v74) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 408LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                     *((_QWORD *)v142 + 3),
                     v152);
    v208 = v74;
    if ( (int)v74 >= 0 )
    {
      v220 = 0LL;
      v153 = *(_QWORD **)(*((_QWORD *)this + 2) + 16LL);
      v154 = v153[2];
      if ( *(int *)(v154 + 2184) >= 0x2000 || *(_BYTE *)(v154 + 2484) )
      {
        v155 = 0xFFFF;
        v215 = 0xFFFF;
        v220 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v153[68] + 8LL) + 216LL))(
          v153[69],
          *(_QWORD *)(*((_QWORD *)v142 + 6) + 8LL),
          &v215,
          &v220,
          0LL);
        v155 = v215;
      }
      if ( *((_BYTE *)a12 + 356) )
        *(_WORD *)((char *)a12 + *((_DWORD *)a12 + 139) * ((8 * *((_DWORD *)a12 + 140) + 191) & 0xFFFFFFF8) + 584) = v155;
      else
        *((_DWORD *)a12 + 137) ^= (*((_DWORD *)a12 + 137) ^ (v155 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a12 + 356) )
        v156 = (char *)a12 + *((_DWORD *)a12 + 139) * ((8 * *((_DWORD *)a12 + 140) + 191) & 0xFFFFFFF8) + 592;
      else
        v156 = (char *)a12 + 512;
      *(_QWORD *)v156 = v220;
      v157 = *((_QWORD *)v142 + 5);
      if ( v157 && (*(_DWORD *)(v157 + 4) & 8) != 0 )
        v158 = *(_QWORD *)(*(_QWORD *)(v157 + 56) + 176LL);
      else
        v158 = 0LL;
      if ( *((_BYTE *)a12 + 356) )
        *(_QWORD *)((char *)a12 + *((_DWORD *)a12 + 139) * ((8 * *((_DWORD *)a12 + 140) + 191) & 0xFFFFFFF8) + 608) = v158;
      else
        *((_QWORD *)a12 + 71) = v158;
      v159 = *((_BYTE *)a12 + 356);
      v160 = 712LL;
      if ( !v159 )
        v160 = 520LL;
      v161 = (char *)a12 + v160;
      if ( v159 )
        v162 = (char *)a12 + *((_DWORD *)a12 + 139) * ((8 * *((_DWORD *)a12 + 140) + 191) & 0xFFFFFFF8) + 576;
      else
        v162 = (char *)a12 + 504;
      *(_QWORD *)v162 = *(_QWORD *)(*((_QWORD *)v142 + 6) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2506LL) )
      {
        v162 = (char *)*((_QWORD *)this + 23);
        if ( *((_BYTE *)a12 + 356) )
          v163 = (char *)a12 + *((_DWORD *)a12 + 139) * ((8 * *((_DWORD *)a12 + 140) + 191) & 0xFFFFFFF8) + 568;
        else
          v163 = (char *)a12 + 560;
        *(_QWORD *)v163 = v162;
      }
      if ( *((_BYTE *)a12 + 356) )
        *((_DWORD *)a12 + 148) = -1;
      v164 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL);
      v165 = *((unsigned int *)a12 + 31);
      v166 = *(_QWORD *)(v164 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v166 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v166 + 144));
      if ( (unsigned int)v165 >= *(_DWORD *)(v164 + 80) )
      {
        v167 = WdLogNewEntry5_WdAssertion(v166, v162);
        *(_QWORD *)(v167 + 24) = 5301LL;
        WdLogEvent5_WdAssertion(v167);
      }
      v168 = *(_QWORD *)(v164 + 112) + 3968 * v165;
      *(_WORD *)v161 = 0;
      *((_WORD *)v161 + 1) = *(_WORD *)(v168 + 1012);
      *((_WORD *)v161 + 2) = 0;
      *((_WORD *)v161 + 3) = *(_WORD *)(v168 + 1016);
      v169 = *(_QWORD *)v161;
      *((_QWORD *)v161 + 1) = *(_QWORD *)v161;
      *((_QWORD *)v161 + 2) = v169;
      v170 = a13 == D3DDDIFMT_A16B16G16R16F || a13 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v161 + 6) = v170;
      *((_DWORD *)v161 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v161 + 8) = 0;
      memset(&v250[1], 0, 0x58uLL);
      v85 = this;
      if ( *((_BYTE *)this + 446) )
      {
        memset(v250, 0, sizeof(v250));
        v250[4] = *((_QWORD *)v224 + 4);
        v250[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *((_QWORD *)v213 + 3),
                    *((unsigned __int8 *)this + 447),
                    *((unsigned int *)this + 102));
        v250[6] = v220;
        LOWORD(v250[7]) = v215;
      }
      else
      {
        memset(v250, 0, 24);
        v250[4] = 0LL;
        memset(&v250[6], 0, 24);
        v250[3] = *((_QWORD *)v224 + 4);
        v250[4] = 2 * (v215 & 0x1Fu);
        v250[5] = v220;
      }
      v171 = v216;
      v216->pAllocationList = (DXGK_ALLOCATIONLIST *)v250;
      v172 = 0LL;
      if ( (v171->Flags.Value & 1) != 0
        || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2506LL) )
      {
        v172 = (void *)*((_QWORD *)this + 23);
      }
      LODWORD(v74) = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v172, v171);
      v208 = v74;
      if ( (int)v74 >= 0 )
      {
        v174 = 0;
        if ( v210 )
        {
          do
          {
            v175 = *v14;
            if ( *((struct _KTHREAD **)*v14 + 58) != KeGetCurrentThread() )
            {
              v176 = WdLogNewEntry5_WdAssertion(v173, v69);
              *(_QWORD *)(v176 + 24) = 7706LL;
              WdLogEvent5_WdAssertion(v176);
              v175 = *v14;
            }
            if ( (*((_DWORD *)this + 103) & 0x10) != 0 )
            {
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v175, 0LL, 0, a12, 0);
              v175 = *v14;
            }
            v177 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v175 + 2) + 16LL) + 520LL) + 8LL);
            if ( (*((_DWORD *)v175 + 103) & 0x10) != 0 )
              v178 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v177 + 432))(
                       *((_QWORD *)v175 + 38),
                       a12);
            else
              v178 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v177 + 424))(
                       *((_QWORD *)v175 + 34),
                       a12);
            v208 = v178;
            LODWORD(v74) = v178;
            if ( v178 < 0 )
              break;
            *(_DWORD *)a12 &= ~0x800u;
            ++v174;
            ++v14;
          }
          while ( v174 < v210 );
          v85 = this;
        }
        else
        {
          v85 = this;
        }
      }
      if ( (int)v74 < 0 )
      {
        if ( *((_BYTE *)a12 + 356) )
          v179 = (char *)a12 + *((_DWORD *)a12 + 139) * ((8 * *((_DWORD *)a12 + 140) + 191) & 0xFFFFFFF8) + 600;
        else
          v179 = (char *)a12 + 496;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v85 + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 424LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v85 + 2) + 16LL) + 552LL),
          *((unsigned int *)a12 + 36),
          *(_QWORD *)v179,
          0LL);
      }
    }
    goto LABEL_94;
  }
  v147 = DXGCONTEXT::SubmitPresentLda(this, v219, a4, a5, v142, v144, a12);
  if ( a11 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 496LL))(
      a11,
      0LL);
  if ( v68 )
    CRefCountedBuffer::RefCountedBufferRelease(v68);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v214, v146);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v213, v148);
  return v147;
}
