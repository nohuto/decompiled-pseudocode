/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0088AE0 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00012D0 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C00014B4 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002524 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003734 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037AC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180B4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00180FC (-IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     McTemplateK0iq @ 0x1C00266E0 (McTemplateK0iq.c)
 *     McTemplateK0ppp @ 0x1C0026760 (McTemplateK0ppp.c)
 *     McTemplateK0ppx @ 0x1C00267E4 (McTemplateK0ppx.c)
 *     McTemplateK0ppxx @ 0x1C0026870 (McTemplateK0ppxx.c)
 *     McTemplateK0qqtqttp @ 0x1C0026908 (McTemplateK0qqtqttp.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A008 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005B520 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C005C568 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005D6D4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C005DA6C (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005DAE0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005DFE0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C005E6E4 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C005E790 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005E960 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005EA74 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007D97C (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C007E330 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0082824 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083BA4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00AAE6C (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B30B0 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00B3274 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00B3740 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00B4368 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00B6BB8 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00B6CD0 (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BF0D0 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00C2294 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00C31B0 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00C3A8C (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00C3B40 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00C3F14 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C43E0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C456C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C4B78 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C4FB4 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  VIDMM_WORKER_THREAD *v1; // r12
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v3; // rcx
  __int64 v4; // rcx
  char *v5; // rdi
  unsigned __int8 v6; // r13
  char v7; // r14
  unsigned __int8 v8; // bl
  __int64 v9; // rcx
  union _LARGE_INTEGER v10; // rax
  union _LARGE_INTEGER *v11; // rbx
  _QWORD *v12; // rax
  NTSTATUS v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rbx
  const GUID *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  DXGPUSHLOCK *v21; // rdi
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rsi
  __int64 v34; // r8
  char *v35; // r13
  VIDMM_DEVICE *v36; // r14
  _DWORD *v37; // rcx
  char *v38; // rsi
  VIDMM_WORKER_THREAD *v39; // r15
  __int64 v40; // rbx
  VIDMM_PAGING_QUEUE *v41; // rdi
  unsigned __int8 v42; // r14
  int v43; // r12d
  char v44; // r8
  __int64 v45; // rax
  VIDMM_PAGING_QUEUE **v46; // rdx
  VIDMM_PAGING_QUEUE **v47; // rax
  VIDMM_PAGING_QUEUE **v48; // rax
  VIDMM_PAGING_QUEUE *v49; // r12
  VIDMM_WORKER_THREAD *v50; // rdi
  struct VIDMM_PAGING_QUEUE_PACKET *v51; // r15
  __int64 v52; // rbx
  VIDMM_GLOBAL *v53; // rbx
  __int64 v54; // rcx
  int v55; // r8d
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // r8d
  _QWORD *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  VIDMM_WORKER_THREAD *v64; // r15
  char *v65; // rsi
  VIDMM_PAGING_QUEUE *v66; // rdi
  char v67; // r14
  __int64 v68; // rbx
  int v69; // r12d
  char v70; // r8
  __int64 v71; // rax
  VIDMM_PAGING_QUEUE **v72; // rdx
  VIDMM_PAGING_QUEUE **v73; // rax
  char **v74; // rax
  char v75; // cl
  __int64 v76; // rax
  VIDMM_WORKER_THREAD *v77; // r15
  char *v78; // rsi
  VIDMM_PAGING_QUEUE *v79; // rdi
  char v80; // r14
  __int64 v81; // rbx
  int v82; // r12d
  char v83; // r8
  __int64 v84; // rax
  VIDMM_PAGING_QUEUE **v85; // rdx
  VIDMM_PAGING_QUEUE **v86; // rax
  VIDMM_PAGING_QUEUE **v87; // rax
  char v88; // cl
  _QWORD *v89; // rax
  __int64 v90; // rdx
  VIDMM_COMMIT_TELEMETRY *v91; // rbx
  unsigned __int8 v92; // dl
  int v93; // edi
  __int64 v94; // r9
  _QWORD *v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rbx
  char *v100; // r13
  bool *v101; // rsi
  unsigned __int8 v102; // bl
  int *v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rax
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // ebx
  __int64 v111; // rax
  __int64 *v112; // r15
  char v113; // r13
  unsigned int v114; // r12d
  VIDMM_PROCESS_BUDGET_STATE *v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rcx
  const GUID *v118; // r8
  int v119; // r9d
  _QWORD *v120; // r9
  int v121; // r10d
  unsigned int *v122; // rdi
  unsigned __int64 v123; // r8
  unsigned __int64 v124; // rax
  __int64 v125; // r8
  __int64 v126; // r11
  __int64 v127; // rsi
  unsigned int v128; // r12d
  unsigned int v129; // r15d
  __int64 v130; // r14
  __int64 v131; // rbx
  __int64 v132; // r10
  _BYTE *v133; // r11
  _QWORD *v134; // rcx
  _QWORD *i; // rax
  _QWORD **v136; // rcx
  _QWORD *v137; // rdx
  _QWORD *v138; // rdx
  _QWORD *v139; // rax
  unsigned __int64 v140; // r9
  char v141; // r8
  unsigned __int8 v142; // al
  __int64 v143; // rbx
  __int64 v144; // rax
  VIDMM_COMMIT_TELEMETRY *v145; // rbx
  VIDMM_COMMIT_TELEMETRY *v146; // rcx
  __int64 v147; // rbx
  __int64 v148; // rdx
  struct VIDMM_PAGING_QUEUE_PACKET **v149; // rcx
  __int64 v150; // rbx
  _QWORD *v151; // rax
  _QWORD *v152; // rax
  VIDMM_PAGING_QUEUE *v153; // rcx
  VIDMM_PAGING_QUEUE **v154; // rax
  struct _KEVENT *v155; // rcx
  __int64 v156; // rcx
  _QWORD *v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rcx
  _BOOL8 v160; // rbx
  bool v161; // zf
  VIDMM_WORKER_THREAD *v162; // rax
  VIDMM_COMMIT_TELEMETRY *v163; // rcx
  int v164; // r14d
  int v165; // eax
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // r10
  int v169; // r9d
  __int64 v170; // rsi
  _QWORD *v171; // rbx
  char IsProcessCommitRelinquished; // al
  const CHAR *v173; // r8
  __int64 v174; // rax
  int v175; // ebx
  ULONG v176; // edi
  int v177; // ebx
  ULONG v178; // esi
  unsigned int v179; // esi
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rax
  __int64 v183; // r9
  VIDMM_DEVICE *v184; // rax
  struct VIDMM_DEVICE *v185; // rbx
  VIDMM_DEVICE *v186; // rdi
  struct VIDMM_DEVICE *v187; // rsi
  __int64 v188; // rdx
  __int64 v189; // rdi
  char v190; // si
  unsigned int j; // r14d
  __int64 v192; // rdx
  _QWORD *v193; // rax
  _QWORD *m; // r8
  __int64 v195; // r9
  unsigned __int64 v196; // rcx
  char v197; // al
  _QWORD **v198; // rcx
  _QWORD *v199; // rax
  _QWORD *k; // rcx
  __int64 v201; // r8
  unsigned __int64 v202; // rcx
  char v203; // al
  __int64 v204; // rdx
  _QWORD *v205; // rax
  _QWORD *ii; // r8
  __int64 v207; // r9
  unsigned __int64 v208; // rcx
  char v209; // al
  _QWORD **v210; // rcx
  _QWORD *v211; // rax
  _QWORD *n; // rcx
  __int64 v213; // r8
  unsigned __int64 v214; // rcx
  char v215; // al
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // rbx
  __int64 v219; // rdi
  __int64 v220; // rax
  __int64 v221; // rcx
  const GUID *v222; // r8
  int v223; // r9d
  bool IsPenaltyBoxEmptyWithoutLock; // bl
  __int64 v225; // rbx
  __int64 v226; // r14
  char v227; // bl
  unsigned int jj; // edi
  __int64 v229; // rcx
  const GUID *v230; // r8
  VIDMM_GLOBAL *v231; // r14
  VIDMM_GLOBAL *v232; // r15
  __int64 v233; // rcx
  const GUID *v234; // r8
  int v235; // r9d
  VIDMM_GLOBAL *v236; // rbx
  __int64 v237; // rbx
  __int64 v238; // rbx
  char v239; // r12
  VIDMM_GLOBAL *v240; // rsi
  const GUID *v241; // r8
  VIDMM_GLOBAL **v242; // rax
  struct _VIDMM_GLOBAL_ALLOC *v243; // rdi
  VIDMM_GLOBAL *v244; // rbx
  VIDMM_GLOBAL **v245; // rcx
  __int64 v246; // rax
  __int64 v247; // rcx
  __int64 v248; // rcx
  VIDMM_GLOBAL **v249; // rdx
  VIDMM_GLOBAL *v250; // rdi
  VIDMM_GLOBAL *v251; // rdi
  unsigned int v252; // ebx
  __int64 v253; // rsi
  unsigned int v254; // r8d
  unsigned int v255; // ecx
  __int64 v256; // rdx
  __int64 v257; // rcx
  char v258; // bl
  VIDMM_GLOBAL *v259; // r8
  VIDMM_GLOBAL *v260; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rax
  VIDMM_GLOBAL *v262; // rcx
  VIDMM_GLOBAL *v263; // rdi
  unsigned int kk; // r14d
  __int64 v265; // rbx
  unsigned int mm; // r15d
  __int64 v267; // rax
  __int64 v268; // rsi
  int v269; // eax
  int v270; // eax
  _QWORD **v271; // rdi
  _QWORD *v272; // rbx
  VIDMM_DEVICE *v273; // rcx
  struct _KEVENT *v274; // rcx
  VIDMM_GLOBAL *v275; // rdi
  unsigned int v276; // ebx
  struct _VIDSCH_SYNC_OBJECT *Timeout; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v278; // [rsp+50h] [rbp-B0h]
  char v279; // [rsp+51h] [rbp-AFh]
  bool v280; // [rsp+52h] [rbp-AEh] BYREF
  char v281; // [rsp+53h] [rbp-ADh]
  VIDMM_DEVICE *v282; // [rsp+58h] [rbp-A8h]
  bool v283; // [rsp+60h] [rbp-A0h] BYREF
  VIDMM_PAGING_QUEUE *v284; // [rsp+68h] [rbp-98h]
  int v285; // [rsp+70h] [rbp-90h]
  int v286; // [rsp+74h] [rbp-8Ch]
  int v287; // [rsp+78h] [rbp-88h]
  struct VIDMM_PAGING_QUEUE_PACKET *v288; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC *v289; // [rsp+88h] [rbp-78h] BYREF
  GUID v290; // [rsp+90h] [rbp-70h] BYREF
  VIDMM_COMMIT_TELEMETRY *v291; // [rsp+A0h] [rbp-60h]
  char *v292; // [rsp+A8h] [rbp-58h]
  int *v293; // [rsp+B0h] [rbp-50h]
  int ThreadInformation; // [rsp+B8h] [rbp-48h] BYREF
  struct VIDMM_DEVICE *v295; // [rsp+C0h] [rbp-40h]
  int v296; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v297; // [rsp+D0h] [rbp-30h]
  int v298; // [rsp+D8h] [rbp-28h]
  union _LARGE_INTEGER v299; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v300; // [rsp+E8h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+F8h] [rbp-8h] BYREF
  PVOID Object; // [rsp+100h] [rbp+0h] BYREF
  __int64 v303; // [rsp+108h] [rbp+8h]
  char v304[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v305; // [rsp+118h] [rbp+18h]
  int v306; // [rsp+120h] [rbp+20h]
  struct VIDMM_ALLOC *v307; // [rsp+128h] [rbp+28h] BYREF
  int v308; // [rsp+130h] [rbp+30h] BYREF
  __int64 v309; // [rsp+134h] [rbp+34h]
  int v310; // [rsp+13Ch] [rbp+3Ch]
  struct VIDMM_ALLOC *v311; // [rsp+140h] [rbp+40h]
  __int64 v312; // [rsp+148h] [rbp+48h]
  __int128 v313; // [rsp+150h] [rbp+50h]
  __int128 v314; // [rsp+160h] [rbp+60h]
  __int128 v315; // [rsp+170h] [rbp+70h]
  _BYTE v316[24]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v317[88]; // [rsp+198h] [rbp+98h] BYREF
  char v319; // [rsp+208h] [rbp+108h]
  char v320; // [rsp+210h] [rbp+110h]
  bool v321; // [rsp+218h] [rbp+118h] BYREF

  v1 = this;
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)v1 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 19) + 24LL), Executive, 0, 0, 0LL);
  v3 = (struct _KEVENT *)(*((_QWORD *)v1 + 19) + 48LL);
  *((_DWORD *)v1 + 6) = 1;
  KeSetEvent(v3, 0, 0);
  v5 = (char *)v1 + 48;
  v6 = 0;
  v303 = *((_QWORD *)v1 + 19);
  v4 = v303;
  v319 = 0;
  v7 = 0;
  *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
  v320 = 0;
  Object = (PVOID)(v4 + 24);
  v8 = 0;
  v283 = 0;
  v280 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v1 + 48, 0LL);
  *((_QWORD *)v1 + 7) = KeGetCurrentThread();
  do
  {
LABEL_2:
    *((_QWORD *)v1 + 2) = 0LL;
    if ( v6 || v280 || v8 )
    {
      *((_QWORD *)v1 + 21) = 0LL;
      v10.QuadPart = 0LL;
    }
    else
    {
      v10 = *(union _LARGE_INTEGER *)((char *)v1 + 168);
    }
    v299 = v10;
    if ( v10.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v12[3] = v6;
        v12[4] = v280;
        v12[5] = v8;
      }
      v11 = 0LL;
    }
    else
    {
      v11 = &v299;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    ++*((_QWORD *)v1 + 29);
    v13 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v11, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v14 = *(_QWORD *)v1;
    v15 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v14 + 4608) = v15 * KeQueryTimeIncrement();
    v17 = *(_QWORD *)v1;
    v18 = *(_QWORD *)(*(_QWORD *)v1 + 4608LL);
    if ( v18 - *(_QWORD *)(*(_QWORD *)v1 + 7160LL) > qword_1C004E320 )
    {
      *(_QWORD *)(v17 + 7144) = 0LL;
      *(_DWORD *)(v17 + 7152) = 0;
      *(_QWORD *)(v17 + 7160) = v18;
    }
    v280 = 0;
    v279 = 0;
    *((_BYTE *)v1 + 160) = 0;
    v285 = 0;
    v281 = 0;
    if ( !v13 )
    {
      v17 = *((unsigned int *)v1 + 7);
      if ( (_DWORD)v17 == *((_DWORD *)v1 + 6) )
      {
LABEL_31:
        if ( g_IsInternalReleaseOrDbg )
        {
          v27 = WdLogNewEntry5_WdTrace(v17);
          v17 = *((int *)v1 + 6);
          *(_QWORD *)(v27 + 24) = v17;
        }
        *((_DWORD *)v1 + 44) = 0;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v19 = WdLogNewEntry5_WdTrace(v17);
          *(_QWORD *)(v19 + 24) = *((int *)v1 + 6);
          *(_QWORD *)(v19 + 32) = *((int *)v1 + 7);
          v17 = *((unsigned int *)v1 + 7);
        }
        *((_DWORD *)v1 + 44) = 1;
        if ( (unsigned int)(v17 - 2) <= 3 )
        {
          KeWaitForSingleObject((PVOID)(*(_QWORD *)v1 + 41064LL), Executive, 0, 0, 0LL);
          v20 = *(_QWORD *)v1;
          v21 = (DXGPUSHLOCK *)(*(_QWORD *)v1 + 40024LL);
          DXGPUSHLOCK::AcquireExclusive(v21);
          v22 = v20 + 40008;
          while ( 1 )
          {
            v23 = *(__int64 **)v22;
            if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || (v24 = *v23, *(__int64 **)(*v23 + 8) != v23) )
              __fastfail(3u);
            *(_QWORD *)v22 = v24;
            v25 = v23;
            *(_QWORD *)(v24 + 8) = v22;
            if ( v23 == (__int64 *)v22 )
              break;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v23[2] + 24LL))(
              v23[2],
              0LL,
              v23[3],
              v23[4]);
            operator delete(v25);
          }
          v300 = v23;
          *((_QWORD *)v21 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v21, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( (_DWORD)v17 == 1 )
        {
          *((_DWORD *)v1 + 6) = 1;
          KeSetEvent((PRKEVENT)(*((_QWORD *)v1 + 19) + 48LL), 0, 0);
        }
      }
      v6 = 1;
      v319 = 1;
      goto LABEL_35;
    }
    if ( v13 != 258 )
      goto LABEL_31;
    if ( g_IsInternalReleaseOrDbg )
    {
      v26 = WdLogNewEntry5_WdTrace(v17);
      v17 = *((_QWORD *)v1 + 21);
      *(_QWORD *)(v26 + 24) = v17;
    }
LABEL_35:
    if ( *((_QWORD *)v1 + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0iq(v17, v18, v16);
    v28 = *(_QWORD *)v1;
    *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
    v29 = v28 + 40024;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v28 + 40024));
    v30 = v28 + 40008;
    while ( 1 )
    {
      v31 = *(__int64 **)v30;
      if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 || (v32 = *v31, *(__int64 **)(*v31 + 8) != v31) )
        __fastfail(3u);
      *(_QWORD *)v30 = v32;
      v33 = v31;
      *(_QWORD *)(v32 + 8) = v30;
      if ( v31 == (__int64 *)v30 )
        break;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v31[2] + 24LL))(
        v31[2],
        0LL,
        v31[3],
        v31[4]);
      operator delete(v33);
    }
    *(_QWORD *)(v29 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v29, 0LL);
    KeLeaveCriticalRegion();
    if ( !v6 && !v7 && !v283 )
      goto LABEL_413;
    v288 = 0LL;
    v35 = (char *)v1 + 128;
    v36 = 0LL;
    v282 = 0LL;
    v320 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v1 + 128, 0LL);
    v38 = (char *)v1 + 96;
    *((_QWORD *)v1 + 17) = KeGetCurrentThread();
    v39 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 12);
    if ( v39 == (VIDMM_WORKER_THREAD *)((char *)v1 + 96) )
      goto LABEL_67;
    v40 = *(_QWORD *)v1;
    v41 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 12);
    v42 = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v40 + 41024, 0LL);
    *(_QWORD *)(v40 + 41032) = KeGetCurrentThread();
    v43 = *(_DWORD *)(v40 + 41056);
    *(_QWORD *)(v40 + 41032) = 0LL;
    ExReleasePushLockExclusiveEx(v40 + 41024, 0LL);
    KeLeaveCriticalRegion();
    v44 = 0;
    do
    {
      v284 = v41;
      if ( !v43
        || (v45 = *((_QWORD *)v41 + 4), !*(_BYTE *)(v45 + 24))
        || *(_DWORD *)(v45 + 48) != 203
        || (v37 = *(_DWORD **)(*(_QWORD *)(v45 + 64) + 96LL), (*v37 & 0x20000) == 0) )
      {
        v44 = 1;
        v42 = 0;
      }
      v46 = *(VIDMM_PAGING_QUEUE ***)v41;
      if ( *(char **)v41 == v38 )
        break;
      if ( v46[1] != v41 )
        goto LABEL_527;
      v47 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v41 + 1);
      if ( *v47 != v41 )
        goto LABEL_527;
      *v47 = (VIDMM_PAGING_QUEUE *)v46;
      v46[1] = (VIDMM_PAGING_QUEUE *)v47;
      v48 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v38 + 1);
      if ( *v48 != (VIDMM_PAGING_QUEUE *)v38 )
        goto LABEL_527;
      *((_QWORD *)v41 + 1) = v48;
      *(_QWORD *)v41 = v38;
      *v48 = v41;
      *((_QWORD *)v38 + 1) = v41;
      if ( v46 != (VIDMM_PAGING_QUEUE **)v39 )
        v41 = (VIDMM_PAGING_QUEUE *)v46;
      v37 = 0LL;
      if ( v46 != (VIDMM_PAGING_QUEUE **)v39 )
        v37 = (_DWORD *)v42;
      v42 = (unsigned __int8)v37;
    }
    while ( (_BYTE)v37 );
    if ( !v44 )
    {
      v36 = v282;
LABEL_67:
      v49 = 0LL;
      v284 = 0LL;
      goto LABEL_68;
    }
    v49 = v284;
    if ( v284 )
    {
      v50 = this;
LABEL_156:
      v51 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v49 + 4);
      v89 = (_QWORD *)((char *)v49 + 32);
      v36 = (VIDMM_DEVICE *)*((_QWORD *)v49 + 17);
      v282 = v36;
      v288 = v51;
      if ( *((VIDMM_PAGING_QUEUE **)v51 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v49 + 32) )
        goto LABEL_527;
      v90 = *(_QWORD *)v51;
      if ( *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v51 + 8LL) != v51 )
        goto LABEL_527;
      *v89 = v90;
      *(_QWORD *)(v90 + 8) = v89;
      *(_QWORD *)v51 = 0LL;
      *((_QWORD *)v51 + 1) = 0LL;
      goto LABEL_75;
    }
    v36 = v282;
LABEL_68:
    v50 = this;
    if ( ((*((_DWORD *)this + 7) - 1) & 0xFFFFFFFD) == 0 )
    {
      v53 = *(VIDMM_GLOBAL **)this;
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
        (DXGAUTOPUSHLOCKSHARED *)v316,
        (struct DXGPUSHLOCK *const)(*(_QWORD *)this + 41240LL));
      if ( VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v53, 1) )
      {
        if ( VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v54, 2) )
        {
          if ( VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v56, 3) )
          {
            if ( !*(_BYTE *)(*((_QWORD *)v53 + 3) + 2502LL) && !*(_BYTE *)(*((_QWORD *)v53 + 2) + 777LL)
              || VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v57, 4) )
            {
              v320 = 0;
              goto LABEL_104;
            }
            v55 = 4;
          }
          else
          {
            v55 = 3;
          }
        }
        else
        {
          v55 = 2;
        }
      }
      else
      {
        v55 = 1;
      }
      v320 = 1;
      v36 = (VIDMM_DEVICE *)(*((_QWORD *)v53 + 2 * (unsigned int)(v55 - 1) + 5158) - 176LL);
      v282 = v36;
      if ( VIDMM_GLOBAL::IsTdrPending(v53) )
      {
LABEL_106:
        DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v316);
        if ( v36 && (*((_DWORD *)v36 + 13) & 7) == 1 )
          goto LABEL_74;
        v64 = (VIDMM_WORKER_THREAD *)*((_QWORD *)this + 10);
        v65 = (char *)this + 80;
        if ( v64 != (VIDMM_WORKER_THREAD *)((char *)this + 80) )
        {
          v66 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 10);
          v67 = 1;
          v68 = *(_QWORD *)this;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v68 + 41024, 0LL);
          *(_QWORD *)(v68 + 41032) = KeGetCurrentThread();
          v69 = *(_DWORD *)(v68 + 41056);
          *(_QWORD *)(v68 + 41032) = 0LL;
          ExReleasePushLockExclusiveEx(v68 + 41024, 0LL);
          KeLeaveCriticalRegion();
          v70 = 0;
          do
          {
            v284 = v66;
            if ( !v69
              || (v71 = *((_QWORD *)v66 + 4), !*(_BYTE *)(v71 + 24))
              || *(_DWORD *)(v71 + 48) != 203
              || (**(_DWORD **)(*(_QWORD *)(v71 + 64) + 96LL) & 0x20000) == 0 )
            {
              v70 = 1;
              v67 = 0;
            }
            v72 = *(VIDMM_PAGING_QUEUE ***)v66;
            if ( *(char **)v66 == v65 )
              break;
            if ( v72[1] != v66 )
              goto LABEL_527;
            v73 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v66 + 1);
            if ( *v73 != v66 )
              goto LABEL_527;
            *v73 = (VIDMM_PAGING_QUEUE *)v72;
            v72[1] = (VIDMM_PAGING_QUEUE *)v73;
            v74 = (char **)*((_QWORD *)this + 11);
            if ( *v74 != v65 )
              goto LABEL_527;
            *((_QWORD *)v66 + 1) = v74;
            *(_QWORD *)v66 = v65;
            *v74 = (char *)v66;
            *((_QWORD *)this + 11) = v66;
            if ( v72 != (VIDMM_PAGING_QUEUE **)v64 )
              v66 = (VIDMM_PAGING_QUEUE *)v72;
            v75 = 0;
            if ( v72 != (VIDMM_PAGING_QUEUE **)v64 )
              v75 = v67;
            v67 = v75;
          }
          while ( v75 );
          v50 = this;
          if ( v70 )
          {
            v49 = v284;
            if ( v284 )
              goto LABEL_156;
            v36 = v282;
LABEL_129:
            if ( *((_BYTE *)v50 + 216) )
            {
              v76 = *(_QWORD *)v50;
              *((_BYTE *)v50 + 216) = 0;
              *((_QWORD *)v50 + 28) = *(_QWORD *)(v76 + 4608);
            }
            if ( !v36 || *(_QWORD *)(*(_QWORD *)v50 + 4608LL) - *((_QWORD *)v50 + 28) < qword_1C004E3D0 )
            {
              v77 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v50 + 8);
              v78 = (char *)v50 + 64;
              if ( v77 != (VIDMM_WORKER_THREAD *)((char *)v50 + 64) )
              {
                v79 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v50 + 8);
                v80 = 1;
                v81 = *(_QWORD *)this;
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx(v81 + 41024, 0LL);
                *(_QWORD *)(v81 + 41032) = KeGetCurrentThread();
                v82 = *(_DWORD *)(v81 + 41056);
                *(_QWORD *)(v81 + 41032) = 0LL;
                ExReleasePushLockExclusiveEx(v81 + 41024, 0LL);
                KeLeaveCriticalRegion();
                v83 = 0;
                do
                {
                  v284 = v79;
                  if ( !v82
                    || (v84 = *((_QWORD *)v79 + 4), !*(_BYTE *)(v84 + 24))
                    || *(_DWORD *)(v84 + 48) != 203
                    || (**(_DWORD **)(*(_QWORD *)(v84 + 64) + 96LL) & 0x20000) == 0 )
                  {
                    v83 = 1;
                    v80 = 0;
                  }
                  v85 = *(VIDMM_PAGING_QUEUE ***)v79;
                  if ( *(char **)v79 == v78 )
                    break;
                  if ( v85[1] != v79 )
                    goto LABEL_527;
                  v86 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v79 + 1);
                  if ( *v86 != v79 )
                    goto LABEL_527;
                  *v86 = (VIDMM_PAGING_QUEUE *)v85;
                  v85[1] = (VIDMM_PAGING_QUEUE *)v86;
                  v87 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v78 + 1);
                  if ( *v87 != (VIDMM_PAGING_QUEUE *)v78 )
                    goto LABEL_527;
                  *((_QWORD *)v79 + 1) = v87;
                  *(_QWORD *)v79 = v78;
                  *v87 = v79;
                  *((_QWORD *)v78 + 1) = v79;
                  if ( v85 != (VIDMM_PAGING_QUEUE **)v77 )
                    v79 = (VIDMM_PAGING_QUEUE *)v85;
                  v88 = 0;
                  if ( v85 != (VIDMM_PAGING_QUEUE **)v77 )
                    v88 = v80;
                  v80 = v88;
                }
                while ( v88 );
                v50 = this;
                if ( v83 )
                {
                  v49 = v284;
                  if ( v284 )
                    goto LABEL_156;
                  v36 = v282;
                  goto LABEL_154;
                }
                v36 = v282;
              }
              v49 = 0LL;
              v284 = 0LL;
            }
LABEL_154:
            *((_BYTE *)v50 + 216) = 1;
            goto LABEL_74;
          }
          v36 = v282;
        }
        v49 = 0LL;
        v284 = 0LL;
        goto LABEL_129;
      }
      if ( v58 == 2 )
      {
        v59 = (_QWORD *)*((_QWORD *)v36 + 29);
        if ( !v59 )
          goto LABEL_105;
        v60 = v59[27];
        if ( v60 <= *(_QWORD *)(*v59 + 4608LL) )
          goto LABEL_105;
        VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v53, *((_QWORD *)v53 + 576) - v60, 8);
        goto LABEL_104;
      }
      if ( v58 == 3 )
      {
        v61 = *((_QWORD *)v53 + 576);
        v62 = *((_QWORD *)v36 + 26);
        v63 = *(_QWORD *)v53;
        if ( v61 < v62 )
        {
          VIDMM_WORKER_THREAD::SetTimeout(v63, v61 - v62, 6);
LABEL_104:
          v36 = 0LL;
          goto LABEL_105;
        }
        VIDMM_WORKER_THREAD::SetTimeout(v63, 0LL, 6);
      }
LABEL_105:
      v282 = v36;
      goto LABEL_106;
    }
    v49 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 8);
    v284 = v49;
    if ( v49 != (VIDMM_WORKER_THREAD *)((char *)this + 64) )
    {
      while ( *((_DWORD *)v49 + 29) != 3 )
      {
        v49 = *(VIDMM_PAGING_QUEUE **)v49;
        v284 = v49;
        if ( v49 == (VIDMM_WORKER_THREAD *)((char *)this + 64) )
          goto LABEL_72;
      }
      goto LABEL_156;
    }
LABEL_72:
    v49 = 0LL;
    v284 = 0LL;
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v37) + 24) = *((int *)this + 7);
LABEL_74:
    v51 = v288;
LABEL_75:
    *((_QWORD *)v50 + 2) = v36;
    *((_QWORD *)v35 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v35, 0LL);
    KeLeaveCriticalRegion();
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
        McTemplateK0ppp(v9, &EventVidMmSelectOperation, (const GUID *)v34, *((_QWORD *)v36 + 3), v49, v51);
      if ( v49 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v49;
        if ( *((_BYTE *)v51 + 24) && *((_DWORD *)v51 + 12) == 206 )
        {
          v52 = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v51 + 18) = v52 * KeQueryTimeIncrement();
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v36;
      }
    }
    v91 = (VIDMM_WORKER_THREAD *)((char *)v50 + 184);
    v291 = (VIDMM_WORKER_THREAD *)((char *)v50 + 184);
LABEL_162:
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v289 = 0LL;
          *((_QWORD *)v91 + 1) = 0LL;
          *((_QWORD *)v91 + 2) = 0LL;
          *(_QWORD *)v91 = 0LL;
          *((_BYTE *)v91 + 24) = 0;
          v321 = 0;
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          v92 = 0;
          v93 = 2;
          v278 = 0;
          v287 = 2;
          if ( v36 )
          {
            v94 = *((_QWORD *)v36 + 2);
            v278 = 0;
            if ( v94 )
            {
              v34 = 0LL;
              if ( *(_DWORD *)(*(_QWORD *)v36 + 6992LL) )
              {
                while ( 1 )
                {
                  v95 = (_QWORD *)(*(_QWORD *)(v94 + 48) + 296LL * (unsigned int)v34);
                  if ( v95[25] > v95[3] || v95[26] > v95[4] )
                    break;
                  v34 = (unsigned int)(v34 + 1);
                  if ( (unsigned int)v34 >= *(_DWORD *)(*(_QWORD *)v36 + 6992LL) )
                  {
                    v92 = 0;
                    goto LABEL_172;
                  }
                }
                v92 = 1;
                v278 = 1;
              }
LABEL_172:
              v96 = *(_QWORD *)(*(_QWORD *)(v94 + 40) + 32LL);
              if ( *(_BYTE *)(v96 + 298) )
                v93 = 0;
              else
                v93 = 2 - ((*(_DWORD *)(v96 + 304) & 1) != 0);
            }
            v287 = v93;
          }
          v97 = 0LL;
          v98 = 3 * (v92 + 2LL * v285);
          v9 = 12LL;
          if ( v93 != 2 )
            v97 = 12LL;
          v99 = v97 + 8 * v98;
          v100 = (char *)&unk_1C00420E0 + v99;
          v292 = (char *)&unk_1C00420E0 + v99;
          if ( !v49 )
          {
            if ( !v36 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(12LL);
              v6 = 0;
              v319 = 0;
              goto LABEL_346;
            }
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(12LL);
            v101 = (bool *)&unk_1C00420E0 + v99 + 8;
            *(_QWORD *)v290.Data4 = v101;
            v110 = VIDMM_DEVICE::Resume(v36, *v101, &v321, &v289);
            if ( v320 || *((_DWORD *)this + 36) )
            {
              v319 = 1;
              *(_QWORD *)v290.Data4 = v101;
            }
            else
            {
              v319 = 0;
            }
            goto LABEL_263;
          }
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(12LL);
          v101 = (bool *)(v100 + 8);
          v102 = v100[8];
          *(_QWORD *)v290.Data4 = v100 + 8;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppx(v9, v98, (const GUID *)v34, v49, v51, *((_QWORD *)v51 + 5));
          v161 = *((_BYTE *)v51 + 24) == 0;
          v103 = (int *)((char *)v51 + 48);
          v293 = (int *)((char *)v51 + 48);
          if ( v161 )
          {
            v139 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v98);
            v139[3] = *v103;
            v139[4] = v51;
            v139[5] = *((unsigned __int8 *)v51 + 25);
            v139[6] = *((_QWORD *)v51 + 4);
            WdLogEvent5_WdEvent(v139);
            v289 = 0LL;
            v140 = *((_QWORD *)v51 + 4);
            v141 = *((_BYTE *)v51 + 25);
            Timeout = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v49 + 11);
            v321 = 0;
            v110 = VIDMM_GLOBAL::ProcessSystemCommand(
                     *(VIDMM_GLOBAL **)this,
                     (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v51 + 48),
                     v141,
                     v140,
                     Timeout);
            v286 = v110;
          }
          else
          {
            PerformanceFrequency.QuadPart = 0LL;
            KeQueryPerformanceCounter(&PerformanceFrequency);
            v106 = (_QWORD *)WdLogNewEntry5_WdEvent(v105, v104);
            v106[3] = *v103;
            v106[4] = v51;
            v106[5] = *((_QWORD *)v51 + 8);
            v106[6] = *((_QWORD *)v51 + 7);
            v106[7] = *((_QWORD *)v51 + 4);
            WdLogEvent5_WdEvent(v106);
            v107 = VIDMM_GLOBAL::ProcessDeferredCommand(
                     *(VIDMM_GLOBAL **)this,
                     (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v51 + 48),
                     (GUID *)&v321,
                     *((_BYTE *)v51 + 25),
                     *((_QWORD *)v51 + 4),
                     *((struct _VIDSCH_SYNC_OBJECT **)v49 + 11),
                     v102,
                     &v289);
            v161 = *((_BYTE *)v51 + 24) == 0;
            v110 = v107;
            v286 = v107;
            if ( v161 )
            {
              v111 = *((_QWORD *)v51 + 9);
              if ( !v111 )
              {
                v111 = *((_QWORD *)v51 + 8);
                if ( v111 )
                  v111 = *(_QWORD *)(v111 + 8);
              }
            }
            else
            {
              v111 = *((_QWORD *)v51 + 7);
            }
            v112 = *(__int64 **)(v111 + 16);
            v113 = 0;
            v114 = 0;
            if ( *(_DWORD *)(*v112 + 6992) )
            {
              do
              {
                v115 = (VIDMM_PROCESS_BUDGET_STATE *)(v112[6] + 296LL * v114);
                if ( v112 != (__int64 *)-360LL && (struct _KTHREAD *)v112[46] == KeGetCurrentThread() )
                {
                  v116 = WdLogNewEntry5_WdAssertion(v109, v108);
                  *(_QWORD *)(v116 + 24) = 1449LL;
                  WdLogEvent5_WdAssertion(v116);
                }
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v112 + 45, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v119 = *((_DWORD *)v112 + 94);
                    if ( v119 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q(v117, (const EVENT_DESCRIPTOR *)"g", v118, v119);
                  }
                  ExAcquirePushLockSharedEx(v112 + 45, 0LL);
                }
                v120 = (_QWORD *)((char *)v115 + 184);
                v121 = 0;
                v122 = (unsigned int *)(1560LL * v114 + *(_QWORD *)(*v112 + 40184) + 496LL);
                while ( 1 )
                {
                  v123 = *(v120 - 6);
                  if ( v121 == 1 )
                  {
                    v124 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v115);
                    v123 = v124 + v125;
                  }
                  v126 = *v122;
                  if ( v123 > *v120 * (v126 + 100) / 0x64uLL || v123 < *v120 * (100 - v126) / 0x64uLL )
                    break;
                  ++v121;
                  v122 += 6;
                  ++v120;
                  if ( v121 >= 2 )
                    goto LABEL_207;
                }
                v113 = 1;
LABEL_207:
                ExReleasePushLockSharedEx(v112 + 45, 0LL);
                KeLeaveCriticalRegion();
                v127 = *v112;
                ++v114;
              }
              while ( v114 < *(_DWORD *)(*v112 + 6992) );
              if ( v113 )
              {
                ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                v128 = *(_DWORD *)(v127 + 6992);
                v129 = 0;
                if ( v128 )
                {
                  v130 = *(_QWORD *)(v127 + 40184);
                  while ( 2 )
                  {
                    v131 = 1560LL * v129;
                    v132 = 0LL;
                    v133 = (_BYTE *)(v131 + v130 + 512);
                    do
                    {
                      if ( (*v133 & 1) != 0 )
                      {
                        v134 = VIDMM_PARTITION::_PartitionTree;
                        i = 0LL;
                        if ( VIDMM_PARTITION::_PartitionTree )
                        {
                          do
                          {
                            i = v134;
                            v134 = (_QWORD *)*v134;
                          }
                          while ( v134 );
                        }
                        if ( i )
                        {
                          while ( !*(_BYTE *)(*(_QWORD *)(i[5]
                                                        + 368LL * *(unsigned int *)(*(_QWORD *)(v127 + 24) + 208LL)
                                                        + 24)
                                            + 328LL * v129
                                            + 120) )
                          {
                            v136 = (_QWORD **)i[1];
                            v137 = i;
                            if ( v136 )
                            {
                              v138 = *v136;
                              for ( i = (_QWORD *)i[1]; v138; v138 = (_QWORD *)*v138 )
                                i = v138;
                            }
                            else
                            {
                              for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                                    i;
                                    i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                              {
                                if ( (_QWORD *)*i == v137 )
                                  break;
                                v137 = i;
                              }
                            }
                            if ( !i )
                              goto LABEL_227;
                          }
LABEL_230:
                          ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                          _InterlockedIncrement64((volatile signed __int64 *)(v127 + 41344));
                          v109 = *(_QWORD *)v127;
                          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v127 + 8LL) )
                            KeSetEvent(*(PRKEVENT *)(v109 + 152), 0, 0);
                          goto LABEL_232;
                        }
                      }
                      else if ( *(_BYTE *)(v131 + v132 + v130 + 664) )
                      {
                        goto LABEL_230;
                      }
LABEL_227:
                      v133 += 24;
                      v132 += 328LL;
                    }
                    while ( v132 < 656 );
                    if ( ++v129 < v128 )
                      continue;
                    break;
                  }
                }
                ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              }
LABEL_232:
              v103 = v293;
              v110 = v286;
              v51 = v288;
              v101 = *(bool **)v290.Data4;
              v49 = v284;
              v36 = v282;
            }
            else
            {
              v51 = v288;
              v49 = v284;
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppxx(v109, &EventPagingQueueComplete, (const GUID *)v34, v49, v51, *((_QWORD *)v51 + 5), 0LL);
          v142 = *((_BYTE *)v51 + 24);
          if ( v110 == -1071775232 )
          {
            v286 = 0;
            goto LABEL_245;
          }
          v9 = v142;
          if ( v142 && (!v321 || *((_BYTE *)v51 + 120)) && *((_QWORD *)v51 + 9) )
          {
            v286 = 0;
LABEL_245:
            if ( v142 )
            {
              if ( *v103 == 206 )
              {
                v143 = MEMORY[0xFFFFF78000000320];
                v144 = v143 * KeQueryTimeIncrement();
                *((_QWORD *)v51 + 19) = v144;
                if ( v144 - *((_QWORD *)v51 + 17) > 1000000 )
                {
                  v145 = v291;
                  VIDMM_COMMIT_TELEMETRY::Init(v291, *(struct VIDMM_GLOBAL **)this, v36, 0LL);
                  VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v146, v51);
                  *((_QWORD *)v145 + 1) = 0LL;
                  *((_QWORD *)v145 + 2) = 0LL;
                  *(_QWORD *)v145 = 0LL;
                  *((_BYTE *)v145 + 24) = 0;
                }
              }
            }
            v147 = *((_QWORD *)v49 + 10);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v147 + 128, 0LL);
            *(_QWORD *)(v147 + 136) = KeGetCurrentThread();
            v149 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v49 + 3);
            if ( *v149 != (VIDMM_PAGING_QUEUE *)((char *)v49 + 16) )
              goto LABEL_527;
            *(_QWORD *)v51 = (char *)v49 + 16;
            *((_QWORD *)v51 + 1) = v149;
            *v149 = v51;
            *((_QWORD *)v49 + 3) = v51;
            if ( *((VIDMM_PAGING_QUEUE **)v49 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v49 + 32) )
            {
              v150 = *((int *)v49 + 28);
              if ( (_DWORD)v150 )
              {
                if ( (_DWORD)v150 != 1 )
                {
                  v151 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v149, v148);
                  v151[3] = 270LL;
                  v151[4] = 58LL;
                  v151[5] = v49;
                  v151[6] = v150;
                  v151[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v151);
                }
                if ( g_IsInternalReleaseOrDbg )
                {
                  v152 = (_QWORD *)WdLogNewEntry5_WdTrace(v149);
                  v152[3] = v49;
                  v152[4] = *((int *)v49 + 28);
                  v152[5] = 0LL;
                }
                v153 = *(VIDMM_PAGING_QUEUE **)v49;
                if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v49 + 8LL) != v49 )
                  goto LABEL_527;
                v154 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v49 + 1);
                if ( *v154 != v49 )
                  goto LABEL_527;
                *v154 = v153;
                *((_QWORD *)v153 + 1) = v154;
                v155 = (struct _KEVENT *)*((_QWORD *)v49 + 15);
                *(_QWORD *)v49 = 0LL;
                *((_QWORD *)v49 + 1) = 0LL;
                *((_DWORD *)v49 + 28) = 0;
                KeSetEvent(v155, 0, 0);
              }
            }
            --*(_DWORD *)(*((_QWORD *)v49 + 17) + 64LL);
            --*(_DWORD *)(*((_QWORD *)v49 + 10) + 144LL);
            v156 = *((_QWORD *)v49 + 10) + 128LL;
            *(_QWORD *)(v156 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v156, 0LL);
            KeLeaveCriticalRegion();
            if ( (*((_DWORD *)v36 + 13) & 7) == 1 )
            {
              v91 = v291;
              v49 = 0LL;
              v284 = 0LL;
              v51 = 0LL;
              v288 = 0LL;
              v281 = 0;
              continue;
            }
            v110 = v286;
            goto LABEL_262;
          }
          break;
        }
        if ( v110 >= 0 )
          goto LABEL_245;
LABEL_262:
        v93 = v287;
LABEL_263:
        if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          McTemplateK0qqtqttp(v321, *v101, (const GUID *)v278, v110, v285, v278, v93, *v101, v321, (char)v289);
        if ( v110 >= 0 )
          goto LABEL_345;
        if ( v281 )
        {
          v157 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v108);
          v157[3] = 270LL;
          v157[4] = 54LL;
          v157[5] = v36;
          v157[6] = v49;
          v157[7] = v51;
          WdLogEvent5_WdCriticalError(v157);
        }
        v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v108);
        v159 = v110;
        v160 = v321;
        v158[5] = v159;
        v158[3] = v51;
        v158[4] = v36;
        v158[6] = v160;
        WdLogEvent5_WdWarning(v158);
        v161 = !v160;
        *((_BYTE *)this + 160) = 1;
        while ( 1 )
        {
LABEL_270:
          if ( v161 )
            goto LABEL_320;
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          v91 = v291;
          VIDMM_COMMIT_TELEMETRY::Init(v291, *(struct VIDMM_GLOBAL **)this, v36, v289);
          if ( !v278 )
          {
            VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v163, *v101);
            v162 = this;
          }
          v164 = v285;
          v295 = 0LL;
          v165 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(v162, v282, v289);
          if ( !v165 )
          {
            v36 = v282;
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v9);
            goto LABEL_162;
          }
          if ( v165 == -1071775484 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v9);
            v36 = v282;
            v185 = v295;
            v186 = v282;
            v187 = v295;
            if ( (*((_DWORD *)v282 + 13) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v282, v295) )
            {
              v185 = v36;
              v186 = v187;
            }
            VIDMM_DEVICE::Yield(v186, v185);
            if ( v185 == v36 )
            {
              v91 = v291;
              goto LABEL_162;
            }
            if ( v49 )
              VIDMM_PAGING_QUEUE::RewindPacket(v49, v51);
            v1 = this;
            v6 = v319;
            v7 = v320;
            v5 = (char *)this + 48;
            v188 = *(_QWORD *)(*(_QWORD *)this + 4608LL) - *((_QWORD *)v185 + 27);
            v8 = 0;
            if ( v188 > *((_QWORD *)this + 21) )
            {
              *((_QWORD *)this + 21) = v188;
              v5 = (char *)this + 48;
              *((_DWORD *)this + 44) = 8;
              v8 = 0;
            }
            goto LABEL_2;
          }
          if ( (**((_DWORD **)v289 + 12) & 0x20000) != 0 )
          {
            if ( *((_BYTE *)v51 + 24) )
            {
              if ( *((_DWORD *)v51 + 12) == 203 && *((_DWORD *)v51 + 20) == 5 )
              {
                v9 = *(_QWORD *)(*(_QWORD *)this + 40184LL);
                if ( (*(_BYTE *)(1560LL * (*(_DWORD *)(**(_QWORD **)v289 + 76LL) & 0x3F) + v9 + 437) & 4) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v9);
                  v285 = v164;
                  v36 = v282;
                  *((_DWORD *)v51 + 20) = 6;
                  goto LABEL_162;
                }
              }
            }
          }
          VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(v91, *v101);
          if ( v93 <= 0 )
            break;
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          --v93;
          v285 = v164;
          v161 = !v321;
          v36 = v282;
        }
        v166 = **(_QWORD **)v289;
        LODWORD(v167) = *(_DWORD *)(v166 + 68);
        v9 = *(unsigned __int16 *)(v166 + 76);
        LOWORD(v9) = *(_WORD *)(v166 + 76) & 0x3F;
        v34 = *(_QWORD *)this;
        if ( !(_DWORD)v167 )
          goto LABEL_299;
        v168 = *(_QWORD *)(v34 + 3712);
        v169 = *(_DWORD *)(1560LL * (unsigned __int16)v9 + *(_QWORD *)(v34 + 40184) + 20);
        do
        {
          _BitScanReverse((unsigned int *)&v9, v167);
          v298 = v9;
          v167 = ((1 << v9) - 1) & (unsigned int)v167;
          v170 = *(_QWORD *)(v168 + 8LL * (unsigned int)(v169 + v9));
          if ( *(_BYTE *)(v170 + 473) )
          {
            v9 = *(_QWORD *)(*(_QWORD *)v34 + 232LL);
            if ( *(_QWORD *)(v170 + 480) != v9 )
            {
              v174 = WdLogNewEntry5_WdEvent(v9, v167);
              *(_QWORD *)(v174 + 24) = v170;
              WdLogEvent5_WdEvent(v174);
              v175 = MEMORY[0xFFFFF78000000320];
              v176 = v175 * KeQueryTimeIncrement();
              VIDMM_GLOBAL::Defragment(*(VIDMM_GLOBAL **)this, (struct VIDMM_SEGMENT *)v170);
              v177 = MEMORY[0xFFFFF78000000320];
              v178 = v177 * KeQueryTimeIncrement();
              v91 = v291;
              v179 = v178 - v176;
              VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(v291, v179);
              v182 = WdLogNewEntry5_WdEvent(v181, v180);
              *(_QWORD *)(v182 + 24) = v179 / 0xA / 0x3E8;
              WdLogEvent5_WdEvent(v182);
              v285 = v164;
              v36 = v282;
              goto LABEL_162;
            }
          }
        }
        while ( (_DWORD)v167 );
        v101 = *(bool **)v290.Data4;
LABEL_299:
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        if ( !dword_1C004E480 || KdRefreshDebuggerNotPresent() )
          goto LABEL_319;
        v171 = *(_QWORD **)(*(_QWORD *)v289 + 8LL);
        IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v171);
        v9 = (unsigned int)g_UnrecoverablePagingFailureDebugMode;
        if ( g_UnrecoverablePagingFailureDebugMode )
        {
          if ( !IsProcessCommitRelinquished )
            goto LABEL_319;
LABEL_316:
          v183 = v171[4];
          if ( v183 && !*(_BYTE *)(v183 + 412) )
          {
            DbgPrintEx(
              0x65u,
              0,
              "\n"
              "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
              "virtual address space torn down, yet we do not detect ourselves in the frozen state for that process.\n"
              "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
            __debugbreak();
          }
          goto LABEL_319;
        }
        if ( IsProcessCommitRelinquished )
          goto LABEL_316;
        v173 = "\n"
               "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
               "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
               "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%p)\""
               "\n"
               "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
        if ( !v51 )
          v173 = "\n"
                 "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                 "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                 "Paging operation type: Failure to resume device\n";
        DbgPrintEx(0x65u, 0, v173, v282, v51, v49);
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "\n"
          "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFailure"
          "DebugMode=1\"\n"
          "or \"ed 0x%p 1\"\n"
          "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagin"
          "gFailureDebugMode=2\"\n"
          "or \"ed 0x%p 2\"\n"
          "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDebugMo"
          "de=3\"\n"
          "or \"ed 0x%p 3\"\n"
          "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepping th"
          "rough the code is done.!!!\n"
          "\n",
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode);
        __debugbreak();
        if ( g_UnrecoverablePagingFailureDebugMode == 2 )
        {
          v91 = v291;
          v285 = v164;
          v36 = v282;
          continue;
        }
        break;
      }
      if ( g_UnrecoverablePagingFailureDebugMode == 3 )
      {
        v161 = !v321;
        v285 = v164;
        v36 = v282;
        goto LABEL_270;
      }
LABEL_319:
      v36 = v282;
LABEL_320:
      v184 = v36;
      if ( v49 && *((_BYTE *)v51 + 24) )
      {
        v161 = *((_QWORD *)v51 + 9) == 0LL;
        *((_BYTE *)v51 + 120) = 1;
        if ( v161 )
        {
          v184 = (VIDMM_DEVICE *)*((_QWORD *)v51 + 7);
          if ( !v184 )
          {
            v184 = *(VIDMM_DEVICE **)(*((_QWORD *)v51 + 8) + 8LL);
            goto LABEL_325;
          }
LABEL_326:
          v9 = *((_QWORD *)v184 + 4);
          if ( v9 )
            VidSchMarkDeviceAsError(v9);
        }
      }
      else
      {
LABEL_325:
        if ( v184 )
          goto LABEL_326;
      }
      if ( v321 )
      {
        v91 = v291;
        v285 = 0;
        v281 = 1;
        continue;
      }
      break;
    }
    if ( v49 )
      VIDMM_PAGING_QUEUE::ReclaimPacket(v49, v51);
LABEL_345:
    v6 = v319;
LABEL_346:
    v1 = this;
    if ( *((_DWORD *)this + 7) == 1 )
    {
      v189 = *(_QWORD *)this;
      v190 = 0;
      ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      for ( j = 0; j < *(_DWORD *)(v189 + 6992); ++j )
      {
        v192 = *(_QWORD *)(v189 + 40184);
        if ( (*(_BYTE *)(v192 + 1560LL * j + 512) & 1) != 0 )
        {
          v193 = VIDMM_PARTITION::_PartitionTree;
          m = 0LL;
          if ( VIDMM_PARTITION::_PartitionTree )
          {
            do
            {
              m = v193;
              v193 = (_QWORD *)*v193;
            }
            while ( v193 );
          }
          while ( m )
          {
            v195 = 328LL * j + *(_QWORD *)(368LL * *(unsigned int *)(*(_QWORD *)(v189 + 24) + 208LL) + m[5] + 24);
            v196 = *(_QWORD *)(v195 + 8);
            if ( v196 )
              v197 = (__int64)(100 - 100LL * *(_QWORD *)(v195 + 112) / v196) < (unsigned int)dword_1C004E3A8;
            else
              v197 = 0;
            if ( v197 != *(_BYTE *)(v195 + 120) )
            {
              v190 = 1;
              *(_BYTE *)(v195 + 120) = v197;
            }
            v198 = (_QWORD **)m[1];
            v199 = m;
            if ( v198 )
            {
              m = (_QWORD *)m[1];
              for ( k = *v198; k; k = (_QWORD *)*k )
                m = k;
            }
            else
            {
              for ( m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL); m; m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*m == v199 )
                  break;
                v199 = m;
              }
            }
          }
        }
        else
        {
          v201 = 1560LL * j + v192;
          v202 = *(_QWORD *)(v201 + 552);
          if ( v202 )
            v203 = (__int64)(100 - 100LL * *(_QWORD *)(v201 + 656) / v202) < (unsigned int)dword_1C004E3A8;
          else
            v203 = 0;
          if ( v203 != *(_BYTE *)(v201 + 664) )
          {
            v190 = 1;
            *(_BYTE *)(v201 + 664) = v203;
          }
        }
        v204 = *(_QWORD *)(v189 + 40184);
        if ( (*(_BYTE *)(v204 + 1560LL * j + 536) & 1) != 0 )
        {
          v205 = VIDMM_PARTITION::_PartitionTree;
          ii = 0LL;
          if ( VIDMM_PARTITION::_PartitionTree )
          {
            do
            {
              ii = v205;
              v205 = (_QWORD *)*v205;
            }
            while ( v205 );
          }
          while ( ii )
          {
            v207 = 328LL * j + *(_QWORD *)(368LL * *(unsigned int *)(*(_QWORD *)(v189 + 24) + 208LL) + ii[5] + 24);
            v208 = *(_QWORD *)(v207 + 8);
            if ( v208 )
              v209 = (__int64)(100 - 100LL * *(_QWORD *)(v207 + 112) / v208) < (unsigned int)dword_1C004E3A8;
            else
              v209 = 0;
            if ( v209 != *(_BYTE *)(v207 + 120) )
            {
              v190 = 1;
              *(_BYTE *)(v207 + 120) = v209;
            }
            v210 = (_QWORD **)ii[1];
            v211 = ii;
            if ( v210 )
            {
              ii = (_QWORD *)ii[1];
              for ( n = *v210; n; n = (_QWORD *)*n )
                ii = n;
            }
            else
            {
              for ( ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL); ii; ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*ii == v211 )
                  break;
                v211 = ii;
              }
            }
          }
        }
        else
        {
          v213 = v204 + 1560LL * j;
          v214 = *(_QWORD *)(v213 + 880);
          if ( v214 )
            v215 = (__int64)(100 - 100LL * *(_QWORD *)(v213 + 984) / v214) < (unsigned int)dword_1C004E3A8;
          else
            v215 = 0;
          if ( v215 != *(_BYTE *)(v213 + 992) )
          {
            v190 = 1;
            *(_BYTE *)(v213 + 992) = v215;
          }
        }
      }
      ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      v161 = ((unsigned __int8)v190 | *((_BYTE *)this + 160)) == 0;
      *((_BYTE *)this + 160) |= v190;
      if ( !v161 )
        VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 0);
      VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)this, &v283);
      v218 = *(_QWORD *)this;
      v219 = *(_QWORD *)this + 41240LL;
      if ( *(_QWORD *)this != -41240LL && *(struct _KTHREAD **)(*(_QWORD *)this + 41248LL) == KeGetCurrentThread() )
      {
        v220 = WdLogNewEntry5_WdAssertion(v217, v216);
        *(_QWORD *)(v220 + 24) = 1449LL;
        WdLogEvent5_WdAssertion(v220);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v219, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v223 = *(_DWORD *)(v219 + 16);
          if ( v223 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v221, (const EVENT_DESCRIPTOR *)"g", v222, v223);
        }
        ExAcquirePushLockSharedEx(v219, 0LL);
      }
      IsPenaltyBoxEmptyWithoutLock = VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v218, 1);
      ExReleasePushLockSharedEx(v219, 0LL);
      KeLeaveCriticalRegion();
      if ( !IsPenaltyBoxEmptyWithoutLock )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v6 = 1;
        v319 = 1;
      }
    }
LABEL_413:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v9);
    if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
    {
      if ( dword_1C004E380 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v225 = *(_QWORD *)v1;
        v226 = *(_QWORD *)(*(_QWORD *)v1 + 41344LL);
        if ( v226 == *(_QWORD *)(*(_QWORD *)v1 + 41352LL) )
        {
          v227 = 0;
        }
        else
        {
          v297 = 0LL;
          v296 = 14001;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q(v9, &EventVidMmProfilerEnter, (const GUID *)v34, 14001);
          DXGETWPROFILER_BASE::PushProfilerEntry();
          for ( jj = 0; jj < *(_DWORD *)(v225 + 6992); ++jj )
          {
            *(_DWORD *)&v290.Data2 = 0;
            DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
              (DXGAUTOPUSHLOCKSHARED *)v317,
              (struct DXGPUSHLOCK *const)(v225 + 40968));
            DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
              (DXGAUTOEXPUSHLOCKSHARED *)v304,
              (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
            VIDMM_GLOBAL::SetupBudgetState((VIDMM_GLOBAL *)v225, (struct VIDMM_BUDGET_STATE *)&v290.Data2, jj);
            VIDMM_GLOBAL::AssignBudgets(
              (VIDMM_GLOBAL *)v225,
              (struct VIDMM_BUDGET_STATE *)&v290.Data2,
              D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
            if ( (*(_BYTE *)(1560LL * jj + *(_QWORD *)(v225 + 40184) + 536) & 2) != 0 )
              VIDMM_GLOBAL::AssignBudgets(
                (VIDMM_GLOBAL *)v225,
                (struct VIDMM_BUDGET_STATE *)&v290.Data2,
                D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
            if ( v306 == 1 )
            {
              ExReleasePushLockSharedEx(v305, 0LL);
            }
            else if ( v306 == 2 )
            {
              ExReleasePushLockExclusiveEx(v305, 0LL);
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v317);
          }
          *(_QWORD *)(v225 + 41352) = v226;
          VIDMM_GLOBAL::SendBudgetChangeNotifications((VIDMM_GLOBAL *)v225);
          v227 = 1;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v296);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q(v229, &EventVidMmProfilerExit, v230, v296);
        }
        VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v1, v227);
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v9);
      v231 = *(VIDMM_GLOBAL **)v1;
      if ( qword_1C004E2D0 )
      {
        v232 = (VIDMM_GLOBAL *)((char *)v231 + 39936);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v231 + 39952, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v235 = *((_DWORD *)v231 + 9992);
            if ( v235 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v233, (const EVENT_DESCRIPTOR *)"g", v234, v235);
          }
          ExAcquirePushLockSharedEx((char *)v231 + 39952, 0LL);
        }
        v236 = *(VIDMM_GLOBAL **)v232;
        ExReleasePushLockSharedEx((char *)v231 + 39952, 0LL);
        KeLeaveCriticalRegion();
        if ( v236 != v232 )
        {
          if ( (*((_DWORD *)v231 + 1760) & 0x8000) == 0 )
          {
            v237 = *((_QWORD *)v231 + 576) - *((_QWORD *)v231 + 888);
            if ( v237 < qword_1C004E2D0 )
            {
              v238 = v237 - qword_1C004E2D0;
              goto LABEL_466;
            }
          }
          v239 = 0;
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v231 + 39952));
          v240 = *(VIDMM_GLOBAL **)v232;
          if ( *(VIDMM_GLOBAL **)v232 != v232 )
          {
            v239 = 1;
            VIDMM_GLOBAL::StartPreparation((__int64)v231, 0xFFFFFFFFLL, 0LL, 0LL, 1001);
            while ( 1 )
            {
              v242 = *(VIDMM_GLOBAL ***)v240;
              v243 = (VIDMM_GLOBAL *)((char *)v240 - 400);
              v244 = v240;
              v240 = (VIDMM_GLOBAL *)v242;
              if ( v242[1] != v244 )
                break;
              v245 = (VIDMM_GLOBAL **)*((_QWORD *)v244 + 1);
              if ( *v245 != v244 )
                break;
              *v245 = (VIDMM_GLOBAL *)v242;
              v242[1] = (VIDMM_GLOBAL *)v245;
              v246 = *((_QWORD *)v243 + 63);
              *(_QWORD *)v244 = 0LL;
              v247 = *(unsigned __int16 *)(v246 + 4);
              if ( (_WORD)v247 && (_WORD)v247 != 3 )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0p(v247, &EventProcessOfferAllocation, v241, v243);
                v248 = *((_QWORD *)v243 + 17);
                if ( !v248 || (*(_DWORD *)(v248 + 80) & 0x1001) != 0 )
                {
                  v249 = (VIDMM_GLOBAL **)*((_QWORD *)v231 + 5000);
                  if ( *v249 != (VIDMM_GLOBAL *)((char *)v231 + 39992) )
                    break;
                  *(_QWORD *)v244 = (char *)v231 + 39992;
                  *((_QWORD *)v244 + 1) = v249;
                  *v249 = v244;
                  *((_QWORD *)v231 + 5000) = v244;
                }
                else if ( *((_DWORD *)v243 + 32) == 2 )
                {
                  VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v248, v243);
                }
              }
              if ( v240 == v232 )
                goto LABEL_463;
            }
LABEL_527:
            __fastfail(3u);
          }
LABEL_463:
          *((_QWORD *)v231 + 4995) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v231 + 39952, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)v231 + 888) = *((_QWORD *)v231 + 576);
          v238 = -qword_1C004E2D0;
          if ( v239 )
            VIDMM_GLOBAL::EndPreparation(v231, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
          v1 = this;
LABEL_466:
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v231, v238, 3);
        }
      }
      v250 = *(VIDMM_GLOBAL **)v1;
      if ( *(_DWORD *)(*(_QWORD *)v1 + 7040LL)
        || *((_QWORD *)v250 + 893) < (unsigned __int64)qword_1C004E310
        && *((_DWORD *)v250 + 1788) < (unsigned int)dword_1C004E318 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v9);
          v250 = *(VIDMM_GLOBAL **)v1;
        }
        VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v250);
        v251 = *(VIDMM_GLOBAL **)v1;
        if ( (*(_DWORD *)(*(_QWORD *)v1 + 7040LL) & 0x8000) != 0 )
        {
          VIDMM_GLOBAL::StartPreparation((__int64)v251, 0xFFFFFFFFLL, 0LL, 0LL, 1003);
          v252 = 0;
          if ( *((_DWORD *)v251 + 926) )
          {
            do
              VIDMM_SEGMENT::TrimOfferLists(*(_QWORD *)(*((_QWORD *)v251 + 464) + 8LL * v252++), 12LL, 0LL, 0LL);
            while ( v252 < *((_DWORD *)v251 + 926) );
            v1 = this;
          }
          VIDMM_GLOBAL::EndPreparation(v251, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
          v251 = *(VIDMM_GLOBAL **)v1;
        }
        *((_QWORD *)v251 + 466) = (char *)v251 + 3720;
        *((_QWORD *)v251 + 465) = (char *)v251 + 3720;
        v250 = *(VIDMM_GLOBAL **)v1;
        if ( qword_1C004E2C8 )
        {
          v253 = 0x8000000000000000uLL;
          if ( *((_BYTE *)v250 + 40138) )
          {
            v254 = *((_DWORD *)v250 + 926);
            v255 = 0;
            if ( v254 )
            {
              while ( 1 )
              {
                v256 = *(_QWORD *)(*((_QWORD *)v250 + 464) + 8LL * v255);
                if ( (*(_DWORD *)(v256 + 80) & 0x1001) != 0 && *(_QWORD *)(v256 + 176) != v256 + 176 )
                  break;
                if ( ++v255 >= v254 )
                  goto LABEL_489;
              }
              *((_QWORD *)v250 + 887) = *((_QWORD *)v250 + 576);
              *((_BYTE *)v250 + 40138) = 0;
              v253 = -qword_1C004E2C8;
            }
          }
          else
          {
            v257 = *((_QWORD *)v250 + 576) - *((_QWORD *)v250 + 887);
            if ( v257 < qword_1C004E2C8 )
            {
              v253 = v257 - qword_1C004E2C8;
            }
            else
            {
              VIDMM_GLOBAL::StartPreparation((__int64)v250, 0xFFFFFFFFLL, 0LL, 0LL, 207);
              v258 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v250);
              VIDMM_GLOBAL::EndPreparation(v250, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
              if ( !v258 )
                *((_BYTE *)v250 + 40138) = 1;
            }
          }
LABEL_489:
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v250, v253, 2);
          v250 = *(VIDMM_GLOBAL **)v1;
        }
      }
      v6 = v319;
      v259 = v250;
      if ( !v319 && !VIDMM_GLOBAL::UnderCleanupLimit(v250) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v260, 1);
        v259 = *(VIDMM_GLOBAL **)v1;
        v279 = 1;
      }
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination((KSPIN_LOCK *)v259, &v280);
      if ( NextPendingTermination )
      {
        v262 = *(VIDMM_GLOBAL **)v1;
        v311 = NextPendingTermination;
        v309 = 0LL;
        v310 = 0;
        v312 = 0LL;
        v313 = 0LL;
        v314 = 0LL;
        v315 = 0LL;
        v308 = 200;
        VIDMM_GLOBAL::ProcessDeferredCommand(
          v262,
          (struct _VIDMM_DEFERRED_COMMAND *)&v308,
          &v290,
          0,
          0LL,
          0LL,
          0,
          &v307);
      }
      v263 = *(VIDMM_GLOBAL **)v1;
      if ( *(_BYTE *)(*(_QWORD *)v1 + 40874LL) )
      {
        for ( kk = 0; kk < *((_DWORD *)v263 + 1748); ++kk )
        {
          v265 = *((_QWORD *)v263 + 5023) + 1560LL * kk;
          if ( !*(_DWORD *)(v265 + 432) && (*(_BYTE *)(v265 + 436) & 0x40) == 0 )
          {
            for ( mm = 0; mm < *(_DWORD *)(v265 + 24); ++mm )
            {
              v267 = *((_QWORD *)v263 + 464);
              v9 = mm + *(_DWORD *)(v265 + 20);
              v268 = *(_QWORD *)(v267 + 8 * v9);
              if ( *(_DWORD *)(v268 + 368) != -1 )
              {
                if ( (*(_BYTE *)(v265 + 436) & 0x40) == 0 )
                {
                  v269 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v267 + 8 * v9));
                  if ( v269 == *(_DWORD *)(v265 + 60) || v269 == *(_DWORD *)(v265 + 44) )
                  {
                    if ( *(_QWORD *)(v265 + 464) != v265 + 464 )
                    {
                      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v263, kk);
                      VIDMM_GLOBAL::StartPreparation((__int64)v263, kk, 0LL, 0LL, 121);
                      VIDMM_GLOBAL::FlushScratchGpuVaRanges(v263, kk);
                      VIDMM_GLOBAL::EndPreparation(v263, kk, 0LL, 0, 0LL, 0LL);
                    }
                    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v263, kk);
                    *(_BYTE *)(v265 + 436) |= 0x40u;
                  }
                }
                (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v263 + 5013))(
                  *((_QWORD *)v263 + 5014),
                  *(unsigned int *)(v268 + 368),
                  0LL);
              }
            }
          }
        }
        *((_BYTE *)v263 + 40874) = 0;
      }
    }
    v7 = v320;
    v5 = (char *)v1 + 48;
    v8 = v279;
  }
  while ( v6 );
  v270 = *((_DWORD *)v1 + 7);
  if ( v270 == *((_DWORD *)v1 + 6) )
    goto LABEL_521;
  if ( v270 == 5 )
  {
    v271 = (_QWORD **)(*(_QWORD *)v1 + 41328LL);
    v272 = *v271;
    if ( *v271 != v271 )
    {
      do
      {
        v273 = (VIDMM_DEVICE *)(v272 - 24);
        if ( !*(v272 - 2) && *((_QWORD *)v273 + 3) )
          VIDMM_DEVICE::FullySuspend(v273);
        v272 = (_QWORD *)*v272;
      }
      while ( v272 != v271 );
      v270 = *((_DWORD *)v1 + 7);
    }
  }
  v274 = (struct _KEVENT *)(*((_QWORD *)v1 + 19) + 48LL);
  *((_DWORD *)v1 + 6) = v270;
  KeSetEvent(v274, 0, 0);
  if ( *((_DWORD *)v1 + 7) != 2 )
  {
LABEL_521:
    v275 = *(VIDMM_GLOBAL **)v1;
    v7 = v320;
    v276 = 0;
    if ( *(_DWORD *)(*(_QWORD *)v1 + 3704LL) )
    {
      do
      {
        v9 = *(_QWORD *)(*((_QWORD *)v275 + 464) + 8LL * v276);
        if ( (*(_BYTE *)(v9 + 82) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR((VIDMM_SEGMENT *)v9);
        ++v276;
      }
      while ( v276 < *((_DWORD *)v275 + 926) );
      v7 = v320;
    }
    v8 = v279;
    v5 = (char *)v1 + 48;
    goto LABEL_2;
  }
  *((_QWORD *)v1 + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 48, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)v1 + 1));
  PsTerminateSystemThread(0);
}
