/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223420 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223C84 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0119AF0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAV.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C011CD94 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C013E22C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C01FE894 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02266C0 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0226FA0 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
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
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v29; // rax
  struct _KTHREAD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rbx
  _QWORD *v37; // rax
  struct DXGALLOCATION **v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _KTHREAD *v41; // rdi
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rax
  struct _KTHREAD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rax
  bool v57; // cl
  struct CRefCountedBuffer *v58; // rdi
  struct _D3DKMT_PRESENT *v59; // rdx
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rax
  char v64; // bl
  struct _DXGKARG_PRESENT *v65; // rcx
  unsigned int v66; // r9d
  struct DXGCONTEXT **v67; // r15
  int v68; // r8d
  const struct _D3DKMT_PRESENT *v69; // rdx
  UINT MultipassOffset; // eax
  UINT v71; // eax
  struct _DXGKARG_PRESENT *v72; // rcx
  RECT *v73; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  unsigned int v76; // edi
  __int64 v77; // rcx
  __int64 v78; // rax
  struct _VIDMM_DMA_BUFFER *v79; // r9
  struct DXGALLOCATION *v80; // rcx
  __int64 v81; // rcx
  struct _KTHREAD *v82; // rdi
  __int64 v83; // rax
  int v84; // ebx
  __int64 v85; // rbx
  __int64 v86; // rcx
  __int64 *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  unsigned int v91; // ebx
  struct _VIDMM_DMA_BUFFER *v92; // rax
  __int64 v93; // rdi
  D3DKMT_HANDLE *v94; // rdx
  struct DXGALLOCATION **v95; // rax
  __int64 v96; // rcx
  _QWORD *v97; // rax
  struct DXGCONTEXT **v98; // r15
  __int64 v99; // rcx
  _QWORD *v100; // rax
  unsigned int *v101; // rdx
  struct DXGALLOCATION **v102; // rax
  __int64 v103; // rcx
  _QWORD *v104; // rax
  struct DXGCONTEXT **v105; // rdi
  __int64 v106; // rcx
  _QWORD *v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // r9
  _BYTE *PoolWithTag; // r9
  unsigned int v111; // ebx
  struct DXGCONTEXT **v112; // rdx
  __int64 v113; // rax
  struct DXGALLOCATION *v114; // r12
  __int64 v115; // rax
  struct _DXGKARG_PRESENT *v116; // rcx
  __int64 v117; // rax
  int v118; // ecx
  char *v119; // r15
  __int64 v120; // rax
  char *v121; // r8
  _QWORD *v122; // rcx
  __int64 v123; // rax
  int v124; // ecx
  char *v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  char v128; // al
  __int64 v129; // rbx
  char *v130; // rbx
  char *v131; // rdx
  __int64 v132; // r15
  __int64 v133; // r12
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rax
  BOOL v138; // r12d
  __int64 v139; // rbx
  struct _DXGKARG_PRESENT *v140; // r8
  void *v141; // rdx
  unsigned int v142; // r15d
  struct DXGCONTEXT **v143; // r12
  struct _KTHREAD *v144; // rcx
  __int64 v145; // rax
  struct DXGCONTEXT *v146; // rdx
  __int64 v147; // rax
  int v148; // eax
  char *v149; // r8
  struct _KTHREAD *v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rcx
  int v153; // ebx
  __int64 v154; // rbx
  __int64 *v155; // rax
  __int64 v156; // rbx
  _QWORD *v157; // rax
  struct DXGALLOCATION *v158; // rcx
  __int64 v159; // rcx
  struct _KTHREAD *v160; // rdi
  __int64 v161; // rax
  int v162; // ebx
  __int64 v163; // rbx
  __int64 v164; // rcx
  __int64 *v165; // rax
  __int64 v166; // rax
  struct _KTHREAD *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rcx
  int v170; // ebx
  __int64 v171; // rbx
  __int64 *v172; // rax
  __int64 v173; // rbx
  _QWORD *v174; // rax
  int v176; // [rsp+50h] [rbp-368h]
  struct _VIDMM_DMA_BUFFER *v177; // [rsp+58h] [rbp-360h]
  unsigned int v178; // [rsp+60h] [rbp-358h]
  struct DXGALLOCATION *v180; // [rsp+68h] [rbp-350h] BYREF
  struct DXGALLOCATION *v181; // [rsp+70h] [rbp-348h] BYREF
  int v182; // [rsp+78h] [rbp-340h] BYREF
  bool v183; // [rsp+7Ch] [rbp-33Ch]
  bool v184; // [rsp+7Eh] [rbp-33Ah]
  __int64 v185; // [rsp+80h] [rbp-338h]
  struct _DXGKARG_PRESENT *v186; // [rsp+88h] [rbp-330h]
  unsigned int v187; // [rsp+90h] [rbp-328h]
  struct _D3DKMT_PRESENT *v188; // [rsp+98h] [rbp-320h]
  __int64 v189; // [rsp+A0h] [rbp-318h] BYREF
  unsigned int v190; // [rsp+A8h] [rbp-310h]
  int v191; // [rsp+ACh] [rbp-30Ch]
  unsigned int v192; // [rsp+B0h] [rbp-308h]
  struct DXGCONTEXT **v193; // [rsp+B8h] [rbp-300h]
  struct CRefCountedBuffer *v194; // [rsp+C0h] [rbp-2F8h] BYREF
  signed __int64 v195; // [rsp+C8h] [rbp-2F0h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+D0h] [rbp-2E8h]
  struct _D3DKMT_PRESENT *v197; // [rsp+D8h] [rbp-2E0h]
  struct DXGK_PRESENT_PARAMS *v198; // [rsp+E0h] [rbp-2D8h]
  struct DXGALLOCATION *v199; // [rsp+E8h] [rbp-2D0h]
  PVOID P; // [rsp+F0h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v201; // [rsp+F8h] [rbp-2C0h] BYREF
  struct _EX_RUNDOWN_REF *v202; // [rsp+100h] [rbp-2B8h] BYREF
  struct _EX_RUNDOWN_REF *v203; // [rsp+108h] [rbp-2B0h] BYREF
  struct _EX_RUNDOWN_REF *v204[2]; // [rsp+110h] [rbp-2A8h] BYREF
  PVOID v205; // [rsp+120h] [rbp-298h]
  _BYTE v206[64]; // [rsp+128h] [rbp-290h] BYREF
  unsigned int v207; // [rsp+168h] [rbp-250h]
  __int64 v208; // [rsp+170h] [rbp-248h]
  __int64 v209; // [rsp+178h] [rbp-240h]
  __int64 v210; // [rsp+180h] [rbp-238h]
  __int64 v211; // [rsp+188h] [rbp-230h]
  __int64 v212; // [rsp+190h] [rbp-228h]
  __int64 v213; // [rsp+198h] [rbp-220h]
  __int64 v214; // [rsp+1A0h] [rbp-218h]
  __int64 v215; // [rsp+1A8h] [rbp-210h]
  __int64 v216; // [rsp+1B0h] [rbp-208h]
  __int64 v217; // [rsp+1B8h] [rbp-200h]
  __int64 v218; // [rsp+1C0h] [rbp-1F8h]
  __int64 v219; // [rsp+1C8h] [rbp-1F0h]
  _QWORD v220[12]; // [rsp+1D0h] [rbp-1E8h] BYREF
  _BYTE v221[320]; // [rsp+230h] [rbp-188h] BYREF

  v198 = a3;
  v188 = a2;
  v186 = a9;
  v204[1] = (struct _EX_RUNDOWN_REF *)this;
  v193 = a5;
  v199 = a6;
  v190 = a7;
  v187 = a8;
  v177 = a11;
  v197 = a14;
  v15 = *((_QWORD *)this + 2);
  v16 = *(_QWORD *)(v15 + 40);
  v185 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 7214LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v180 = 0LL;
  v181 = 0LL;
  if ( a7 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v201, a7);
    DXGALLOCATIONREFERENCE::MoveAssign(&v180, AllocationSafe);
    v21 = (__int64)v201;
    if ( v201 )
      ExReleaseRundownProtection(v201 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v21) + 255) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v24 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v24);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v26 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v26 = *ThreadWin32Thread;
        }
        if ( v26 )
          v29 = *(_QWORD *)(v26 + 80);
        else
          v29 = 0LL;
        if ( v29 )
        {
          v30 = KeGetCurrentThread();
          if ( !v30 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v27);
            *(_QWORD *)(v31 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v31);
          }
          v33 = PsGetCurrentProcessSessionId(v27);
          if ( !v33 || (unsigned int)PsGetThreadSessionId(v30) != v33 )
            goto LABEL_28;
          v34 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v35 = (__int64 *)PsGetThreadWin32Thread(v30);
            if ( v35 )
              v34 = *v35;
          }
          if ( v34 )
            v36 = *(_QWORD *)(v34 + 80);
          else
LABEL_28:
            v36 = 0LL;
          if ( *(_DWORD *)(v36 + 136) )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32);
            v37[3] = 275LL;
            v37[4] = 38LL;
            v37[5] = *(int *)(v36 + 136);
            v37[6] = 0LL;
            v37[7] = 0LL;
            WdLogEvent5_WdCriticalError(v37);
          }
        }
      }
      v16 = v185;
    }
  }
  if ( v187 )
  {
    v38 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v202, v187);
    DXGALLOCATIONREFERENCE::MoveAssign(&v181, v38);
    v39 = (__int64)v202;
    if ( v202 )
      ExReleaseRundownProtection(v202 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v39) + 255) )
    {
      v41 = KeGetCurrentThread();
      if ( !v41 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v40);
        *(_QWORD *)(v42 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v42);
      }
      v43 = PsGetCurrentProcessSessionId(v40);
      if ( v43 && (unsigned int)PsGetThreadSessionId(v41) == v43 )
      {
        v44 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v46 = (__int64 *)PsGetThreadWin32Thread(v41);
          if ( v46 )
            v44 = *v46;
        }
        if ( v44 )
          v47 = *(_QWORD *)(v44 + 80);
        else
          v47 = 0LL;
        if ( v47 )
        {
          v48 = KeGetCurrentThread();
          if ( !v48 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v45);
            *(_QWORD *)(v49 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v49);
          }
          v51 = PsGetCurrentProcessSessionId(v45);
          if ( !v51 || (unsigned int)PsGetThreadSessionId(v48) != v51 )
            goto LABEL_56;
          v52 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v53 = (__int64 *)PsGetThreadWin32Thread(v48);
            if ( v53 )
              v52 = *v53;
          }
          if ( v52 )
            v54 = *(_QWORD *)(v52 + 80);
          else
LABEL_56:
            v54 = 0LL;
          if ( *(_DWORD *)(v54 + 136) )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50);
            v55[3] = 275LL;
            v55[4] = 38LL;
            v55[5] = *(int *)(v54 + 136);
            v55[6] = 0LL;
            v55[7] = 0LL;
            WdLogEvent5_WdCriticalError(v55);
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
    || ((v56 = *(_QWORD *)(v185 + 104)) == 0
      ? (v57 = 0)
      : (v57 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v56 + 224))(0LL, 0LL, 0LL) != 0),
        v57) )
  {
    *((_DWORD *)a12 + 31) = 0;
  }
  v58 = 0LL;
  v194 = 0LL;
  v59 = v188;
  if ( v188 )
  {
    v60 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            v188->PrivateDriverDataSize,
            v188->pPrivateDriverData,
            &v194);
    v62 = v60;
    if ( v60 < 0 )
    {
      v63 = WdLogNewEntry5_WdError(v61);
      *(_QWORD *)(v63 + 24) = v62;
      WdLogEvent5_WdError(v63);
LABEL_68:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v181);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v180);
      return (unsigned int)v62;
    }
    v58 = v194;
    v59 = v188;
  }
  P = v58;
  v64 = 0;
  v65 = (struct _DXGKARG_PRESENT *)*(unsigned int *)(v17 + 2160);
  if ( ((int)v65 >= 0x2000 || *(_BYTE *)(v17 + 2452)) && *(_DWORD *)(v17 + 1712) >= 0x5007u && v59 )
  {
    v64 = 1;
    if ( v58 )
    {
      v65 = v186;
      v186->PrivateDriverDataSize = v59->PrivateDriverDataSize;
      v65->pPrivateDriverData = (char *)v58 + 8;
    }
    *((_QWORD *)a12 + 3) = v58;
    goto LABEL_77;
  }
  if ( (int)v65 < 0x2000 && !*(_BYTE *)(v17 + 2452) )
  {
LABEL_77:
    v66 = a4;
    goto LABEL_78;
  }
  v66 = a4;
  if ( a4 )
  {
    LODWORD(v62) = -1073741811;
    goto LABEL_94;
  }
LABEL_78:
  v178 = v66 + 1;
  v67 = v193;
  v68 = *((_DWORD *)*v193 + 97);
  v69 = 0LL;
  if ( v66 )
  {
    while ( 1 )
    {
      v69 = (const struct _D3DKMT_PRESENT *)(unsigned int)((_DWORD)v69 + 1);
      v65 = (struct _DXGKARG_PRESENT *)v193[(_QWORD)v69];
      MultipassOffset = v65[2].MultipassOffset;
      if ( (MultipassOffset & v68) != 0 )
        break;
      v68 |= MultipassOffset;
      if ( (unsigned int)v69 >= v66 )
        goto LABEL_81;
    }
LABEL_118:
    v89 = WdLogNewEntry5_WdError(v65);
    *(_QWORD *)(v89 + 24) = this;
    LODWORD(v62) = -1073741811;
    *(_QWORD *)(v89 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v89);
    goto LABEL_94;
  }
LABEL_81:
  *((_DWORD *)a12 + 36) = v68;
  if ( a10 )
  {
    v65 = (struct _DXGKARG_PRESENT *)*((_QWORD *)this + 2);
    v69 = (const struct _D3DKMT_PRESENT *)*((_QWORD *)v65->pDmaBufferPrivateData + 2);
    if ( (v69->BroadcastContext[53] & 0x10) != 0
      && v69 == *(const struct _D3DKMT_PRESENT **)&v65[10].PatchLocationListOutSize )
    {
      v71 = a10->DirtyRectCount + a10->MoveRectCount;
      if ( v71 <= 0x14 )
      {
        v72 = v186;
        v186->SubRectCnt = v71;
        v72->pDstSubRects = (const RECT *)v221;
        v73 = (RECT *)v221;
        MoveRectCount = a10->MoveRectCount;
        if ( (_DWORD)MoveRectCount )
        {
          p_DestRect = &a10->pMoveRects->DestRect;
          do
          {
            *v73 = *p_DestRect;
            p_DestRect = (RECT *)((char *)p_DestRect + 24);
            ++v73;
            --MoveRectCount;
          }
          while ( MoveRectCount );
        }
        memmove(v73, a10->pDirtyRects, 16LL * a10->DirtyRectCount);
      }
    }
  }
  if ( ((*((_DWORD *)a12 + 32) - 3) & 0xFFFFFFFD) == 0 )
  {
    v114 = v199;
    if ( !v199 )
    {
      v115 = WdLogNewEntry5_WdAssertion(v65);
      *(_QWORD *)(v115 + 24) = 7357LL;
      WdLogEvent5_WdAssertion(v115);
    }
    v116 = v186;
    if ( v186->pDmaBuffer )
    {
      v117 = WdLogNewEntry5_WdAssertion(v186);
      *(_QWORD *)(v117 + 24) = 7358LL;
      WdLogEvent5_WdAssertion(v117);
      v116 = v186;
    }
    if ( a4 && v64 )
    {
      LODWORD(v62) = DXGCONTEXT::SubmitPresentLda(this, v188, a4, v67, v114, v116, a12);
      if ( a11 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          a11,
          0LL);
      if ( v58 )
        CRefCountedBuffer::RefCountedBufferRelease(v58);
      goto LABEL_68;
    }
    v118 = 2048;
    if ( v178 > 1 )
      v118 = 3072;
    *(_DWORD *)a12 = *(_DWORD *)a12 & 0xFFFFFBFF | v118;
    *((_DWORD *)a12 + 37) = v178;
    v119 = (char *)a12 + 560;
    v120 = 560LL;
    if ( !*((_BYTE *)a12 + 356) )
      v120 = 488LL;
    *(_DWORD *)((char *)a12 + v120) = *(_DWORD *)((_BYTE *)a12 + v120) & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a12 + 356) )
      v121 = (char *)a12 + *((_DWORD *)a12 + 141) * ((8 * *((_DWORD *)a12 + 142) + 191) & 0xFFFFFFF8) + 608;
    else
      v121 = (char *)a12 + 496;
    LODWORD(v62) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 544LL)
                                                                                 + 8LL)
                                                                     + 408LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                     *((_QWORD *)v114 + 3),
                     v121);
    v176 = v62;
    if ( (int)v62 >= 0 )
    {
      v122 = *(_QWORD **)(*((_QWORD *)this + 2) + 16LL);
      v123 = v122[2];
      if ( *(int *)(v123 + 2160) >= 0x2000 || *(_BYTE *)(v123 + 2452) )
      {
        v124 = 0xFFFF;
        v182 = 0xFFFF;
        v189 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(v122[68] + 8LL) + 216LL))(
          v122[69],
          *(_QWORD *)(*((_QWORD *)v114 + 6) + 8LL),
          &v182,
          &v189);
        v124 = v182;
      }
      if ( *((_BYTE *)a12 + 356) )
        *(_WORD *)((char *)a12 + *((_DWORD *)a12 + 141) * ((8 * *((_DWORD *)a12 + 142) + 191) & 0xFFFFFFF8) + 592) = v124;
      else
        *((_DWORD *)a12 + 137) ^= (*((_DWORD *)a12 + 137) ^ (v124 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a12 + 356) )
        v125 = (char *)a12 + *((_DWORD *)a12 + 141) * ((8 * *((_DWORD *)a12 + 142) + 191) & 0xFFFFFFF8) + 600;
      else
        v125 = (char *)a12 + 512;
      *(_QWORD *)v125 = v189;
      v126 = *((_QWORD *)v114 + 5);
      if ( v126 && (*(_DWORD *)(v126 + 4) & 8) != 0 )
        v127 = *(_QWORD *)(*(_QWORD *)(v126 + 56) + 176LL);
      else
        v127 = 0LL;
      if ( *((_BYTE *)a12 + 356) )
        *(_QWORD *)&v119[*((_DWORD *)a12 + 141) * ((8 * *((_DWORD *)a12 + 142) + 191) & 0xFFFFFFF8) + 56] = v127;
      else
        *((_QWORD *)a12 + 71) = v127;
      v128 = *((_BYTE *)a12 + 356);
      v129 = 720LL;
      if ( !v128 )
        v129 = 520LL;
      v130 = (char *)a12 + v129;
      if ( v128 )
        v131 = (char *)a12 + *((_DWORD *)a12 + 141) * ((8 * *((_DWORD *)a12 + 142) + 191) & 0xFFFFFFF8) + 584;
      else
        v131 = (char *)a12 + 504;
      *(_QWORD *)v131 = *(_QWORD *)(*((_QWORD *)v114 + 6) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2474LL) )
      {
        if ( *((_BYTE *)a12 + 356) )
          v119 = (char *)a12 + *((_DWORD *)a12 + 141) * ((8 * *((_DWORD *)a12 + 142) + 191) & 0xFFFFFFF8) + 576;
        *(_QWORD *)v119 = *((_QWORD *)this + 23);
      }
      if ( *((_BYTE *)a12 + 356) )
        *((_DWORD *)a12 + 150) = -1;
      v132 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL);
      v133 = *((unsigned int *)a12 + 31);
      v134 = *(_QWORD *)(v132 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v134 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v134 + 144));
      if ( (unsigned int)v133 >= *(_DWORD *)(v132 + 80) )
      {
        v135 = WdLogNewEntry5_WdAssertion(v134);
        *(_QWORD *)(v135 + 24) = 5084LL;
        WdLogEvent5_WdAssertion(v135);
      }
      v136 = *(_QWORD *)(v132 + 112) + 3760 * v133;
      *(_WORD *)v130 = 0;
      *((_WORD *)v130 + 1) = *(_WORD *)(v136 + 1012);
      *((_WORD *)v130 + 2) = 0;
      *((_WORD *)v130 + 3) = *(_WORD *)(v136 + 1016);
      v137 = *(_QWORD *)v130;
      *((_QWORD *)v130 + 1) = *(_QWORD *)v130;
      *((_QWORD *)v130 + 2) = v137;
      v138 = a13 == D3DDDIFMT_A16B16G16R16F || a13 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v130 + 6) = v138;
      *((_DWORD *)v130 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v130 + 8) = 0;
      v139 = *((_QWORD *)v199 + 4);
      if ( *((_BYTE *)this + 430) )
      {
        memset(v220, 0, sizeof(v220));
        v220[4] = v139;
        v220[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *((_QWORD *)v180 + 3),
                    *((unsigned __int8 *)this + 431),
                    *((unsigned int *)this + 98));
        v220[6] = v189;
        LOWORD(v220[7]) = v182;
      }
      else
      {
        memset(v220, 0, 24);
        memset(&v220[6], 0, 24);
        v220[3] = v139;
        v220[4] = 2 * (v182 & 0x1Fu);
        v220[5] = v189;
      }
      v140 = v186;
      v186->pAllocationList = (DXGK_ALLOCATIONLIST *)v220;
      v141 = 0LL;
      if ( (v140->Flags.Value & 1) != 0
        || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2474LL) )
      {
        v141 = (void *)*((_QWORD *)this + 23);
      }
      LODWORD(v62) = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v141, v140);
      v176 = v62;
      if ( (int)v62 >= 0 )
      {
        v142 = 0;
        if ( v178 )
        {
          v143 = v193;
          do
          {
            v144 = KeGetCurrentThread();
            if ( *((struct _KTHREAD **)*v143 + 56) != v144 )
            {
              v145 = WdLogNewEntry5_WdAssertion(v144);
              *(_QWORD *)(v145 + 24) = 7541LL;
              WdLogEvent5_WdAssertion(v145);
            }
            if ( (*((_DWORD *)this + 99) & 0x10) != 0 )
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(this, 0LL, 0, a12);
            v146 = *v143;
            v147 = *((_QWORD *)*v143 + 2);
            if ( (*((_DWORD *)*v143 + 99) & 0x10) != 0 )
              v148 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v147 + 16) + 520LL) + 8LL)
                                                                                         + 432LL))(
                       *((_QWORD *)v146 + 36),
                       a12);
            else
              v148 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v147 + 16) + 520LL) + 8LL)
                                                                                         + 424LL))(
                       *((_QWORD *)v146 + 32),
                       a12);
            LODWORD(v62) = v148;
            v176 = v148;
            if ( v148 < 0 )
              break;
            *(_DWORD *)a12 &= ~0x800u;
            ++v142;
            ++v143;
          }
          while ( v142 < v178 );
        }
      }
      if ( (int)v62 < 0 )
      {
        if ( *((_BYTE *)a12 + 356) )
          v149 = (char *)a12 + *((_DWORD *)a12 + 141) * ((8 * *((_DWORD *)a12 + 142) + 191) & 0xFFFFFFF8) + 608;
        else
          v149 = (char *)a12 + 496;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 424LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *((unsigned int *)a12 + 36),
          *(_QWORD *)v149,
          0LL);
      }
    }
    goto LABEL_95;
  }
  v76 = v178;
  if ( v178 <= 1 )
  {
    LODWORD(v62) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                     this,
                     v69,
                     v198,
                     0,
                     v180,
                     v181,
                     v186,
                     a11,
                     a12,
                     (struct COREDEVICEACCESS *)v197);
    v176 = v62;
    v79 = 0LL;
    goto LABEL_96;
  }
  if ( !v64 )
    goto LABEL_118;
  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)this + 2));
  if ( BroadcastPresentSyncObject )
  {
    v90 = *((_QWORD *)this + 2);
    v195 = _InterlockedIncrement64((volatile signed __int64 *)(v90 + 1776));
    *(_DWORD *)a12 |= 0xC00u;
    v91 = 0;
    v92 = a11;
    while ( v91 < v76 )
    {
      if ( v91 )
      {
        LODWORD(v93) = 0;
        v191 = 0;
        v192 = 0;
        if ( v190 )
        {
          v94 = &v188->BroadcastSrcAllocation[v91 - 1];
          if ( v94 + 1 < v94 || (unsigned __int64)(v94 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v93 = *v94;
          v191 = v93;
          v95 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v185, (DXGALLOCATIONREFERENCE *)&v203, v93);
          DXGALLOCATIONREFERENCE::MoveAssign(&v180, v95);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v203);
          if ( !v180 )
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdError(v96);
            v97[3] = v93;
            LODWORD(v62) = -1073741811;
            v97[4] = -1073741811LL;
            v97[5] = 7619LL;
            WdLogEvent5_WdError(v97);
            v176 = -1073741811;
            v79 = v177;
            goto LABEL_96;
          }
          v98 = &v67[v91];
          v208 = *((_QWORD *)*v98 + 2);
          v209 = *(_QWORD *)(*((_QWORD *)v180 + 1) + 16LL);
          v210 = *(_QWORD *)(v209 + 16);
          v211 = *(_QWORD *)(v208 + 16);
          v99 = *(_QWORD *)(v211 + 16);
          v212 = v99;
          v184 = v210 == v99;
          if ( v210 != v99 )
          {
            _mm_lfence();
            v100 = (_QWORD *)WdLogNewEntry5_WdError(v99);
            v213 = *((_QWORD *)*v98 + 2);
            v100[3] = v213;
            v100[4] = v180;
            LODWORD(v62) = -1073741811;
            v100[5] = -1073741811LL;
            WdLogEvent5_WdError(v100);
            v176 = -1073741811;
            v79 = v177;
            goto LABEL_96;
          }
          v67 = v193;
        }
        if ( v187 )
        {
          v101 = &v188->BroadcastDstAllocation[v91 - 1];
          if ( v101 + 1 < v101 || (unsigned __int64)(v101 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v192 = *v101;
          v102 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v185, (DXGALLOCATIONREFERENCE *)v204, v192);
          DXGALLOCATIONREFERENCE::MoveAssign(&v181, v102);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v204);
          if ( !v181 )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdError(v103);
            v104[3] = (unsigned int)v93;
            LODWORD(v62) = -1073741811;
            v104[4] = -1073741811LL;
            v104[5] = 7642LL;
            WdLogEvent5_WdError(v104);
            v176 = -1073741811;
            v79 = v177;
            goto LABEL_96;
          }
          v105 = &v67[v91];
          v214 = *((_QWORD *)*v105 + 2);
          v215 = *(_QWORD *)(*((_QWORD *)v181 + 1) + 16LL);
          v216 = *(_QWORD *)(v215 + 16);
          v217 = *(_QWORD *)(v214 + 16);
          v106 = *(_QWORD *)(v217 + 16);
          v218 = v106;
          v183 = v216 == v106;
          if ( v216 != v106 )
          {
            _mm_lfence();
            v107 = (_QWORD *)WdLogNewEntry5_WdError(v106);
            v219 = *((_QWORD *)*v105 + 2);
            v107[3] = v219;
            v107[4] = v181;
            LODWORD(v62) = -1073741811;
            v107[5] = -1073741811LL;
            WdLogEvent5_WdError(v107);
            v176 = -1073741811;
            v79 = v177;
            goto LABEL_96;
          }
        }
        v76 = v178;
        v92 = v177;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  v67[v91],
                  v197,
                  v198,
                  v91,
                  v180,
                  v181,
                  v186,
                  v92,
                  a12,
                  (struct COREDEVICEACCESS *)v197) < 0 )
      {
        v108 = WdLogNewEntry5_WdError(v90);
        LODWORD(v62) = -1073741811;
        *(_QWORD *)(v108 + 24) = -1073741811LL;
        *(_QWORD *)(v108 + 32) = 7681LL;
        WdLogEvent5_WdError(v108);
        goto LABEL_94;
      }
      v92 = 0LL;
      v177 = 0LL;
      *(_DWORD *)a12 &= ~0x800u;
      ++v91;
    }
    v109 = 0LL;
    v205 = 0LL;
    v207 = 0;
    if ( a4 <= 8 )
    {
      PoolWithTag = v206;
      v205 = v206;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
        goto LABEL_149;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
      v205 = PoolWithTag;
    }
    v207 = a4;
    if ( !PoolWithTag )
    {
LABEL_150:
      LODWORD(v62) = -1073741801;
      v176 = -1073741801;
      goto LABEL_95;
    }
    memset(PoolWithTag, 0, 8LL * a4);
    v109 = v205;
LABEL_149:
    if ( v109 )
    {
      v111 = 1;
      v112 = v67 + 1;
      do
      {
        if ( (*((_DWORD *)*v112 + 99) & 0x10) != 0 )
        {
          v113 = WdLogNewEntry5_WdError(v90);
          *(_QWORD *)(v113 + 24) = v67[v111];
          WdLogEvent5_WdError(v113);
          LODWORD(v62) = -1073741811;
          v176 = -1073741811;
          goto LABEL_157;
        }
        v90 = v111 - 1;
        v109[v90] = *((_QWORD *)*v112 + 32);
        ++v111;
        ++v112;
      }
      while ( v111 < v178 );
      LODWORD(v62) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 520LL)
                                                                                   + 8LL)
                                                                       + 640LL))(
                       0LL,
                       0LL,
                       a4);
      v176 = v62;
      if ( (int)v62 >= 0 )
      {
        LODWORD(v62) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 624LL))(
                         *((_QWORD *)this + 32),
                         BroadcastPresentSyncObject,
                         v195);
        v176 = v62;
      }
LABEL_157:
      if ( v205 != v206 && v205 )
        ExFreePoolWithTag(v205, 0);
      goto LABEL_95;
    }
    goto LABEL_150;
  }
  v78 = WdLogNewEntry5_WdError(v77);
  *(_QWORD *)(v78 + 24) = -1073741801LL;
  *(_QWORD *)(v78 + 32) = 7593LL;
  WdLogEvent5_WdError(v78);
  LODWORD(v62) = -1073741801;
LABEL_94:
  v176 = v62;
LABEL_95:
  v79 = v177;
LABEL_96:
  if ( v79 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v79,
      0LL);
  if ( P )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(P, 0);
    LODWORD(v62) = v176;
  }
  v80 = v181;
  if ( v181 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v181 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v80) + 255) )
  {
    v82 = KeGetCurrentThread();
    if ( !v82 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v81);
      *(_QWORD *)(v83 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v83);
    }
    v84 = PsGetCurrentProcessSessionId(v81);
    if ( v84 && (unsigned int)PsGetThreadSessionId(v82) == v84 )
    {
      v85 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v87 = (__int64 *)PsGetThreadWin32Thread(v82);
        if ( v87 )
          v85 = *v87;
      }
      if ( v85 )
        v88 = *(_QWORD *)(v85 + 80);
      else
        v88 = 0LL;
      if ( v88 )
      {
        v150 = KeGetCurrentThread();
        if ( !v150 )
        {
          v151 = WdLogNewEntry5_WdAssertion(v86);
          *(_QWORD *)(v151 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v151);
        }
        v153 = PsGetCurrentProcessSessionId(v86);
        if ( !v153 || (unsigned int)PsGetThreadSessionId(v150) != v153 )
          goto LABEL_249;
        v154 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v155 = (__int64 *)PsGetThreadWin32Thread(v150);
          if ( v155 )
            v154 = *v155;
        }
        if ( v154 )
          v156 = *(_QWORD *)(v154 + 80);
        else
LABEL_249:
          v156 = 0LL;
        if ( *(_DWORD *)(v156 + 136) )
        {
          v157 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v152);
          v157[3] = 275LL;
          v157[4] = 38LL;
          v157[5] = *(int *)(v156 + 136);
          v157[6] = 0LL;
          v157[7] = 0LL;
          WdLogEvent5_WdCriticalError(v157);
        }
      }
    }
    LODWORD(v62) = v176;
  }
  v158 = v180;
  if ( v180 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v180 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v158) + 255) )
  {
    v160 = KeGetCurrentThread();
    if ( !v160 )
    {
      v161 = WdLogNewEntry5_WdAssertion(v159);
      *(_QWORD *)(v161 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v161);
    }
    v162 = PsGetCurrentProcessSessionId(v159);
    if ( v162 && (unsigned int)PsGetThreadSessionId(v160) == v162 )
    {
      v163 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v165 = (__int64 *)PsGetThreadWin32Thread(v160);
        if ( v165 )
          v163 = *v165;
      }
      if ( v163 )
        v166 = *(_QWORD *)(v163 + 80);
      else
        v166 = 0LL;
      if ( v166 )
      {
        v167 = KeGetCurrentThread();
        if ( !v167 )
        {
          v168 = WdLogNewEntry5_WdAssertion(v164);
          *(_QWORD *)(v168 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v168);
        }
        v170 = PsGetCurrentProcessSessionId(v164);
        if ( !v170 || (unsigned int)PsGetThreadSessionId(v167) != v170 )
          goto LABEL_276;
        v171 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v172 = (__int64 *)PsGetThreadWin32Thread(v167);
          if ( v172 )
            v171 = *v172;
        }
        if ( v171 )
          v173 = *(_QWORD *)(v171 + 80);
        else
LABEL_276:
          v173 = 0LL;
        if ( *(_DWORD *)(v173 + 136) )
        {
          v174 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v169);
          v174[3] = 275LL;
          v174[4] = 38LL;
          v174[5] = *(int *)(v173 + 136);
          v174[6] = 0LL;
          v174[7] = 0LL;
          WdLogEvent5_WdCriticalError(v174);
        }
      }
    }
    LODWORD(v62) = v176;
  }
  return (unsigned int)v62;
}
