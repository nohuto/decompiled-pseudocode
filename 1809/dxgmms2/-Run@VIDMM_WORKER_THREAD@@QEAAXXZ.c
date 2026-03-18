/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0083EE0 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002430 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A3C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00106C8 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0010734 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0010C94 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0018D00 (-IsPenaltyBoxEmptyWithoutLock@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 *     McTemplateK0iq @ 0x1C0026BDC (McTemplateK0iq.c)
 *     McTemplateK0ppp @ 0x1C0026C5C (McTemplateK0ppp.c)
 *     McTemplateK0ppx @ 0x1C0026CE0 (McTemplateK0ppx.c)
 *     McTemplateK0ppxx @ 0x1C0026D6C (McTemplateK0ppxx.c)
 *     McTemplateK0qqtqttp @ 0x1C0026E04 (McTemplateK0qqtqttp.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C006AB3C (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006E6F4 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C006E808 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070FA4 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0078A90 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0078F20 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00795E0 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C007968C (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C0079FF4 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C007A5AC (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C1C0 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C007C4D0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007E8E0 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C007EE0C (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0080114 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00A7B34 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B0010 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00B01D4 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00B06A0 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00B12C8 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00B3AE0 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00B3BF8 (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BC530 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00BF670 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00C0590 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00C0E70 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00C0F24 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00C12F8 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C17C0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C1944 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1EEC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C2330 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  VIDMM_WORKER_THREAD *v1; // r12
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v3; // rcx
  __int64 v4; // rcx
  char *v5; // r15
  unsigned __int8 v6; // r13
  char v7; // r14
  unsigned __int8 v8; // di
  __int64 v9; // rcx
  bool v10; // bl
  union _LARGE_INTEGER v11; // rax
  union _LARGE_INTEGER *v12; // rbx
  _QWORD *v13; // rax
  NTSTATUS v14; // esi
  __int64 v15; // rdi
  __int64 v16; // rbx
  const GUID *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  DXGPUSHLOCK *v22; // rdi
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // r9d
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rsi
  __int64 v38; // r8
  char *v39; // r13
  VIDMM_DEVICE *v40; // r14
  _DWORD *v41; // rcx
  char *v42; // rsi
  VIDMM_WORKER_THREAD *v43; // r15
  __int64 v44; // rbx
  VIDMM_PAGING_QUEUE *v45; // rdi
  unsigned __int8 v46; // r14
  int v47; // r12d
  char v48; // r8
  __int64 v49; // rax
  VIDMM_PAGING_QUEUE **v50; // rdx
  VIDMM_PAGING_QUEUE **v51; // rax
  VIDMM_PAGING_QUEUE **v52; // rax
  VIDMM_PAGING_QUEUE *v53; // r12
  VIDMM_WORKER_THREAD *v54; // rdi
  struct VIDMM_PAGING_QUEUE_PACKET *v55; // r15
  __int64 v56; // rbx
  VIDMM_GLOBAL *v57; // rbx
  int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // r8d
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  VIDMM_WORKER_THREAD *v68; // r15
  char *v69; // rsi
  VIDMM_PAGING_QUEUE *v70; // rdi
  char v71; // r14
  __int64 v72; // rbx
  int v73; // r12d
  char v74; // r8
  __int64 v75; // rax
  VIDMM_PAGING_QUEUE **v76; // rdx
  VIDMM_PAGING_QUEUE **v77; // rax
  char **v78; // rax
  char v79; // cl
  __int64 v80; // rax
  VIDMM_WORKER_THREAD *v81; // r15
  char *v82; // rsi
  VIDMM_PAGING_QUEUE *v83; // rdi
  char v84; // r14
  __int64 v85; // rbx
  int v86; // r12d
  char v87; // r8
  __int64 v88; // rax
  VIDMM_PAGING_QUEUE **v89; // rdx
  VIDMM_PAGING_QUEUE **v90; // rax
  VIDMM_PAGING_QUEUE **v91; // rax
  char v92; // cl
  _QWORD *v93; // rax
  __int64 v94; // rdx
  VIDMM_COMMIT_TELEMETRY *v95; // rbx
  unsigned __int8 v96; // dl
  int v97; // edi
  __int64 v98; // r9
  _QWORD *v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rbx
  char *v104; // r13
  bool *v105; // rsi
  char v106; // bl
  int *v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // rcx
  _QWORD *v110; // rax
  int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  int v114; // ebx
  __int64 v115; // rax
  __int64 *v116; // r15
  char v117; // r13
  unsigned int v118; // r12d
  VIDMM_PROCESS_BUDGET_STATE *v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rcx
  const GUID *v122; // r8
  int v123; // r9d
  _QWORD *v124; // r9
  int v125; // r10d
  unsigned int *v126; // rdi
  unsigned __int64 v127; // r8
  unsigned __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // r11
  __int64 v131; // rsi
  unsigned int v132; // r12d
  unsigned int v133; // r15d
  __int64 v134; // r14
  __int64 v135; // rbx
  __int64 v136; // r10
  _BYTE *v137; // r11
  _QWORD *v138; // rcx
  _QWORD *i; // rax
  _QWORD **v140; // rcx
  _QWORD *v141; // rdx
  _QWORD *v142; // rdx
  _QWORD *v143; // rax
  unsigned __int64 v144; // r9
  char v145; // r8
  unsigned __int8 v146; // al
  __int64 v147; // rbx
  __int64 v148; // rax
  VIDMM_COMMIT_TELEMETRY *v149; // rbx
  VIDMM_COMMIT_TELEMETRY *v150; // rcx
  __int64 v151; // rbx
  __int64 v152; // rdx
  struct VIDMM_PAGING_QUEUE_PACKET **v153; // rcx
  __int64 v154; // rbx
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  VIDMM_PAGING_QUEUE *v157; // rcx
  VIDMM_PAGING_QUEUE **v158; // rax
  struct _KEVENT *v159; // rcx
  __int64 v160; // rcx
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rcx
  _BOOL8 v164; // rbx
  bool v165; // zf
  VIDMM_WORKER_THREAD *v166; // rax
  VIDMM_COMMIT_TELEMETRY *v167; // rcx
  int v168; // r14d
  int v169; // eax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // r10
  int v173; // r9d
  __int64 v174; // rsi
  _QWORD *v175; // rbx
  char IsProcessCommitRelinquished; // al
  const CHAR *v177; // r8
  __int64 v178; // rax
  int v179; // ebx
  ULONG v180; // edi
  int v181; // ebx
  ULONG v182; // esi
  unsigned int v183; // esi
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // r9
  VIDMM_DEVICE *v188; // rax
  struct VIDMM_DEVICE *v189; // rbx
  VIDMM_DEVICE *v190; // rdi
  struct VIDMM_DEVICE *v191; // rsi
  __int64 v192; // rdx
  __int64 v193; // rdi
  char v194; // si
  unsigned int j; // r14d
  __int64 v196; // rdx
  _QWORD *v197; // rax
  _QWORD *m; // r8
  __int64 v199; // r9
  unsigned __int64 v200; // rcx
  char v201; // al
  _QWORD **v202; // rcx
  _QWORD *v203; // rax
  _QWORD *k; // rcx
  __int64 v205; // r8
  unsigned __int64 v206; // rcx
  char v207; // al
  __int64 v208; // rdx
  _QWORD *v209; // rax
  _QWORD *ii; // r8
  __int64 v211; // r9
  unsigned __int64 v212; // rcx
  char v213; // al
  _QWORD **v214; // rcx
  _QWORD *v215; // rax
  _QWORD *n; // rcx
  __int64 v217; // r8
  unsigned __int64 v218; // rcx
  char v219; // al
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // rbx
  __int64 v223; // rdi
  __int64 v224; // rax
  __int64 v225; // rcx
  const GUID *v226; // r8
  int v227; // r9d
  bool IsPenaltyBoxEmptyWithoutLock; // bl
  __int64 v229; // rbx
  __int64 v230; // r14
  char v231; // bl
  unsigned int jj; // edi
  __int64 v233; // rcx
  const GUID *v234; // r8
  VIDMM_GLOBAL *v235; // r14
  VIDMM_GLOBAL *v236; // r15
  __int64 v237; // rcx
  const GUID *v238; // r8
  int v239; // r9d
  VIDMM_GLOBAL *v240; // rbx
  __int64 v241; // rbx
  __int64 v242; // rbx
  char v243; // r12
  VIDMM_GLOBAL *v244; // rsi
  const GUID *v245; // r8
  VIDMM_GLOBAL **v246; // rax
  struct _VIDMM_GLOBAL_ALLOC *v247; // rdi
  VIDMM_GLOBAL *v248; // rbx
  VIDMM_GLOBAL **v249; // rcx
  __int64 v250; // rax
  __int64 v251; // rcx
  __int64 v252; // rcx
  VIDMM_GLOBAL **v253; // rdx
  VIDMM_GLOBAL *v254; // rdi
  VIDMM_GLOBAL *v255; // rdi
  unsigned int v256; // ebx
  VIDMM_GLOBAL *v257; // r8
  __int64 v258; // rsi
  unsigned int v259; // r8d
  unsigned int v260; // ecx
  __int64 v261; // rdx
  __int64 v262; // rcx
  char v263; // bl
  VIDMM_GLOBAL *v264; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  VIDMM_GLOBAL *v266; // rcx
  VIDMM_GLOBAL *v267; // rdi
  unsigned int kk; // r14d
  __int64 v269; // rbx
  unsigned int mm; // r15d
  __int64 v271; // rax
  __int64 v272; // rsi
  int v273; // eax
  int v274; // eax
  _QWORD **v275; // rdi
  _QWORD *v276; // rbx
  VIDMM_DEVICE *v277; // rcx
  struct _KEVENT *v278; // rcx
  VIDMM_GLOBAL *v279; // rdi
  __int64 v280; // rbx
  struct _VIDSCH_SYNC_OBJECT *Timeout; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v282; // [rsp+50h] [rbp-B0h]
  char v283; // [rsp+51h] [rbp-AFh]
  char v284; // [rsp+52h] [rbp-AEh]
  bool v285; // [rsp+53h] [rbp-ADh] BYREF
  VIDMM_DEVICE *v286; // [rsp+58h] [rbp-A8h]
  bool v287; // [rsp+60h] [rbp-A0h] BYREF
  VIDMM_PAGING_QUEUE *v288; // [rsp+68h] [rbp-98h]
  int v289; // [rsp+70h] [rbp-90h]
  int v290; // [rsp+74h] [rbp-8Ch]
  int v291; // [rsp+78h] [rbp-88h]
  struct VIDMM_PAGING_QUEUE_PACKET *v292; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC *v293; // [rsp+88h] [rbp-78h] BYREF
  bool v294; // [rsp+90h] [rbp-70h] BYREF
  int v295; // [rsp+94h] [rbp-6Ch] BYREF
  bool *v296; // [rsp+98h] [rbp-68h]
  VIDMM_COMMIT_TELEMETRY *v297; // [rsp+A0h] [rbp-60h]
  char *v298; // [rsp+A8h] [rbp-58h]
  int *v299; // [rsp+B0h] [rbp-50h]
  int ThreadInformation; // [rsp+B8h] [rbp-48h] BYREF
  struct VIDMM_DEVICE *v301; // [rsp+C0h] [rbp-40h]
  int v302; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v303; // [rsp+D0h] [rbp-30h]
  int v304; // [rsp+D8h] [rbp-28h]
  union _LARGE_INTEGER v305; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v306; // [rsp+E8h] [rbp-18h]
  PVOID Object; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v308; // [rsp+100h] [rbp+0h]
  char v309[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v310; // [rsp+110h] [rbp+10h]
  int v311; // [rsp+118h] [rbp+18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+120h] [rbp+20h] BYREF
  struct VIDMM_ALLOC *v313; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v314[24]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v315[24]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v316[18]; // [rsp+160h] [rbp+60h] BYREF
  char v318; // [rsp+208h] [rbp+108h]
  char v319; // [rsp+210h] [rbp+110h]
  bool v320; // [rsp+218h] [rbp+118h] BYREF

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
  v308 = *((_QWORD *)v1 + 19);
  v4 = v308;
  v318 = 0;
  v7 = 0;
  *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
  v319 = 0;
  Object = (PVOID)(v4 + 24);
  v8 = 0;
  v287 = 0;
  v285 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v1 + 48, 0LL);
  *((_QWORD *)v1 + 7) = KeGetCurrentThread();
  do
  {
LABEL_4:
    v10 = v285;
    *((_QWORD *)v1 + 2) = 0LL;
    if ( v6 || v10 || v8 )
    {
      *((_QWORD *)v1 + 21) = 0LL;
      v11.QuadPart = 0LL;
    }
    else
    {
      v11 = *(union _LARGE_INTEGER *)((char *)v1 + 168);
    }
    v305 = v11;
    if ( v11.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v13[3] = v6;
        v13[4] = v10;
        v13[5] = v8;
      }
      v12 = 0LL;
    }
    else
    {
      v12 = &v305;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    ++*((_QWORD *)v1 + 29);
    v14 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v12, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v15 = *(_QWORD *)v1;
    v16 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v15 + 4608) = v16 * KeQueryTimeIncrement();
    v18 = *(_QWORD *)v1;
    v19 = *(_QWORD *)(*(_QWORD *)v1 + 4608LL);
    if ( v19 - *(_QWORD *)(*(_QWORD *)v1 + 7160LL) > qword_1C004D320 )
    {
      *(_QWORD *)(v18 + 7144) = 0LL;
      *(_DWORD *)(v18 + 7152) = 0;
      *(_QWORD *)(v18 + 7160) = v19;
    }
    v285 = 0;
    v283 = 0;
    *((_BYTE *)v1 + 160) = 0;
    v289 = 0;
    v284 = 0;
    if ( !v14 )
    {
      v18 = *((unsigned int *)v1 + 7);
      if ( (_DWORD)v18 == *((_DWORD *)v1 + 6) )
      {
LABEL_33:
        if ( g_IsInternalReleaseOrDbg )
        {
          v28 = WdLogNewEntry5_WdTrace(v18);
          v18 = *((int *)v1 + 6);
          *(_QWORD *)(v28 + 24) = v18;
        }
        *((_DWORD *)v1 + 44) = 0;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v20 = WdLogNewEntry5_WdTrace(v18);
          *(_QWORD *)(v20 + 24) = *((int *)v1 + 6);
          *(_QWORD *)(v20 + 32) = *((int *)v1 + 7);
          v18 = *((unsigned int *)v1 + 7);
        }
        *((_DWORD *)v1 + 44) = 1;
        if ( (unsigned int)(v18 - 2) <= 3 )
        {
          KeWaitForSingleObject((PVOID)(*(_QWORD *)v1 + 41064LL), Executive, 0, 0, 0LL);
          v21 = *(_QWORD *)v1;
          v22 = (DXGPUSHLOCK *)(*(_QWORD *)v1 + 40024LL);
          DXGPUSHLOCK::AcquireExclusive(v22);
          v23 = v21 + 40008;
          while ( 1 )
          {
            v24 = *(__int64 **)v23;
            if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 || (v25 = *v24, *(__int64 **)(*v24 + 8) != v24) )
              __fastfail(3u);
            *(_QWORD *)v23 = v25;
            v26 = v24;
            *(_QWORD *)(v25 + 8) = v23;
            if ( v24 == (__int64 *)v23 )
              break;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v24[2] + 24LL))(
              v24[2],
              0LL,
              v24[3],
              v24[4]);
            operator delete(v26);
          }
          v306 = v24;
          *((_QWORD *)v22 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v22, 0LL);
          KeLeaveCriticalRegion();
        }
        else if ( (_DWORD)v18 == 1 )
        {
          *((_DWORD *)v1 + 6) = 1;
          KeSetEvent((PRKEVENT)(*((_QWORD *)v1 + 19) + 48LL), 0, 0);
        }
      }
      v6 = 1;
      v318 = 1;
      goto LABEL_37;
    }
    if ( v14 != 258 )
      goto LABEL_33;
    if ( g_IsInternalReleaseOrDbg )
    {
      v27 = WdLogNewEntry5_WdTrace(v18);
      v18 = *((_QWORD *)v1 + 21);
      *(_QWORD *)(v27 + 24) = v18;
    }
LABEL_37:
    if ( *((_QWORD *)v1 + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0iq(v18, v19, v17);
    v29 = *(_QWORD *)v1;
    *((_QWORD *)v1 + 21) = 0x8000000000000000uLL;
    v30 = v29 + 40024;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29 + 40024, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v33 = *(_DWORD *)(v29 + 40040);
        if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, &EventBlockThread, v32, v33);
      }
      ExAcquirePushLockExclusiveEx(v29 + 40024, 0LL);
    }
    v34 = v29 + 40008;
    *(_QWORD *)(v30 + 8) = KeGetCurrentThread();
    while ( 1 )
    {
      v35 = *(__int64 **)v34;
      if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34 || (v36 = *v35, *(__int64 **)(*v35 + 8) != v35) )
        __fastfail(3u);
      *(_QWORD *)v34 = v36;
      v37 = v35;
      *(_QWORD *)(v36 + 8) = v34;
      if ( v35 == (__int64 *)v34 )
        break;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v35[2] + 24LL))(
        v35[2],
        0LL,
        v35[3],
        v35[4]);
      operator delete(v37);
    }
    *(_QWORD *)(v30 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v30, 0LL);
    KeLeaveCriticalRegion();
    if ( !v6 && !v7 && !v287 )
      goto LABEL_417;
    v292 = 0LL;
    v39 = (char *)v1 + 128;
    v40 = 0LL;
    v286 = 0LL;
    v319 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v1 + 128, 0LL);
    v42 = (char *)v1 + 96;
    *((_QWORD *)v1 + 17) = KeGetCurrentThread();
    v43 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 12);
    if ( v43 == (VIDMM_WORKER_THREAD *)((char *)v1 + 96) )
      goto LABEL_75;
    v44 = *(_QWORD *)v1;
    v45 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 12);
    v46 = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v44 + 41024, 0LL);
    *(_QWORD *)(v44 + 41032) = KeGetCurrentThread();
    v47 = *(_DWORD *)(v44 + 41056);
    *(_QWORD *)(v44 + 41032) = 0LL;
    ExReleasePushLockExclusiveEx(v44 + 41024, 0LL);
    KeLeaveCriticalRegion();
    v48 = 0;
    do
    {
      v288 = v45;
      if ( !v47
        || (v49 = *((_QWORD *)v45 + 4), !*(_BYTE *)(v49 + 24))
        || *(_DWORD *)(v49 + 48) != 203
        || (v41 = *(_DWORD **)(*(_QWORD *)(v49 + 64) + 96LL), (*v41 & 0x20000) == 0) )
      {
        v48 = 1;
        v46 = 0;
      }
      v50 = *(VIDMM_PAGING_QUEUE ***)v45;
      if ( *(char **)v45 == v42 )
        break;
      if ( v50[1] != v45 )
        goto LABEL_531;
      v51 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v45 + 1);
      if ( *v51 != v45 )
        goto LABEL_531;
      *v51 = (VIDMM_PAGING_QUEUE *)v50;
      v50[1] = (VIDMM_PAGING_QUEUE *)v51;
      v52 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v42 + 1);
      if ( *v52 != (VIDMM_PAGING_QUEUE *)v42 )
        goto LABEL_531;
      *((_QWORD *)v45 + 1) = v52;
      *(_QWORD *)v45 = v42;
      *v52 = v45;
      *((_QWORD *)v42 + 1) = v45;
      if ( v50 != (VIDMM_PAGING_QUEUE **)v43 )
        v45 = (VIDMM_PAGING_QUEUE *)v50;
      v41 = 0LL;
      if ( v50 != (VIDMM_PAGING_QUEUE **)v43 )
        v41 = (_DWORD *)v46;
      v46 = (unsigned __int8)v41;
    }
    while ( (_BYTE)v41 );
    if ( !v48 )
    {
      v40 = v286;
LABEL_75:
      v53 = 0LL;
      v288 = 0LL;
      goto LABEL_76;
    }
    v53 = v288;
    if ( v288 )
    {
      v54 = this;
LABEL_160:
      v55 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v53 + 4);
      v93 = (_QWORD *)((char *)v53 + 32);
      v40 = (VIDMM_DEVICE *)*((_QWORD *)v53 + 17);
      v286 = v40;
      v292 = v55;
      if ( *((VIDMM_PAGING_QUEUE **)v55 + 1) != (VIDMM_PAGING_QUEUE *)((char *)v53 + 32) )
        goto LABEL_531;
      v94 = *(_QWORD *)v55;
      if ( *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v55 + 8LL) != v55 )
        goto LABEL_531;
      *v93 = v94;
      *(_QWORD *)(v94 + 8) = v93;
      *(_QWORD *)v55 = 0LL;
      *((_QWORD *)v55 + 1) = 0LL;
      goto LABEL_83;
    }
    v40 = v286;
LABEL_76:
    v54 = this;
    if ( ((*((_DWORD *)this + 7) - 1) & 0xFFFFFFFD) == 0 )
    {
      v57 = *(VIDMM_GLOBAL **)this;
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
        (DXGAUTOPUSHLOCKSHARED *)v314,
        (struct DXGPUSHLOCK *const)(*(_QWORD *)this + 41240LL));
      if ( !VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock((__int64)v57, 1)
        || !VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v59, 2)
        || !VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v60, 3)
        || (*(_BYTE *)(*((_QWORD *)v57 + 3) + 2470LL) || *(_BYTE *)(*((_QWORD *)v57 + 2) + 777LL))
        && !VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v61, 4) )
      {
        v319 = 1;
        v40 = (VIDMM_DEVICE *)(*((_QWORD *)v57 + 2 * (unsigned int)(v58 - 1) + 5158) - 176LL);
        v286 = v40;
        if ( VIDMM_GLOBAL::IsTdrPending(v57) )
        {
LABEL_110:
          DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v314);
          if ( v40 && (*((_DWORD *)v40 + 13) & 7) == 1 )
            goto LABEL_82;
          v68 = (VIDMM_WORKER_THREAD *)*((_QWORD *)this + 10);
          v69 = (char *)this + 80;
          if ( v68 != (VIDMM_WORKER_THREAD *)((char *)this + 80) )
          {
            v70 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 10);
            v71 = 1;
            v72 = *(_QWORD *)this;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v72 + 41024, 0LL);
            *(_QWORD *)(v72 + 41032) = KeGetCurrentThread();
            v73 = *(_DWORD *)(v72 + 41056);
            *(_QWORD *)(v72 + 41032) = 0LL;
            ExReleasePushLockExclusiveEx(v72 + 41024, 0LL);
            KeLeaveCriticalRegion();
            v74 = 0;
            do
            {
              v288 = v70;
              if ( !v73
                || (v75 = *((_QWORD *)v70 + 4), !*(_BYTE *)(v75 + 24))
                || *(_DWORD *)(v75 + 48) != 203
                || (**(_DWORD **)(*(_QWORD *)(v75 + 64) + 96LL) & 0x20000) == 0 )
              {
                v74 = 1;
                v71 = 0;
              }
              v76 = *(VIDMM_PAGING_QUEUE ***)v70;
              if ( *(char **)v70 == v69 )
                break;
              if ( v76[1] != v70 )
                goto LABEL_531;
              v77 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v70 + 1);
              if ( *v77 != v70 )
                goto LABEL_531;
              *v77 = (VIDMM_PAGING_QUEUE *)v76;
              v76[1] = (VIDMM_PAGING_QUEUE *)v77;
              v78 = (char **)*((_QWORD *)this + 11);
              if ( *v78 != v69 )
                goto LABEL_531;
              *((_QWORD *)v70 + 1) = v78;
              *(_QWORD *)v70 = v69;
              *v78 = (char *)v70;
              *((_QWORD *)this + 11) = v70;
              if ( v76 != (VIDMM_PAGING_QUEUE **)v68 )
                v70 = (VIDMM_PAGING_QUEUE *)v76;
              v79 = 0;
              if ( v76 != (VIDMM_PAGING_QUEUE **)v68 )
                v79 = v71;
              v71 = v79;
            }
            while ( v79 );
            v54 = this;
            if ( v74 )
            {
              v53 = v288;
              if ( v288 )
                goto LABEL_160;
              v40 = v286;
LABEL_133:
              if ( *((_BYTE *)v54 + 216) )
              {
                v80 = *(_QWORD *)v54;
                *((_BYTE *)v54 + 216) = 0;
                *((_QWORD *)v54 + 28) = *(_QWORD *)(v80 + 4608);
              }
              if ( !v40 || *(_QWORD *)(*(_QWORD *)v54 + 4608LL) - *((_QWORD *)v54 + 28) < qword_1C004D3C8 )
              {
                v81 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v54 + 8);
                v82 = (char *)v54 + 64;
                if ( v81 != (VIDMM_WORKER_THREAD *)((char *)v54 + 64) )
                {
                  v83 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v54 + 8);
                  v84 = 1;
                  v85 = *(_QWORD *)this;
                  KeEnterCriticalRegion();
                  ExAcquirePushLockExclusiveEx(v85 + 41024, 0LL);
                  *(_QWORD *)(v85 + 41032) = KeGetCurrentThread();
                  v86 = *(_DWORD *)(v85 + 41056);
                  *(_QWORD *)(v85 + 41032) = 0LL;
                  ExReleasePushLockExclusiveEx(v85 + 41024, 0LL);
                  KeLeaveCriticalRegion();
                  v87 = 0;
                  do
                  {
                    v288 = v83;
                    if ( !v86
                      || (v88 = *((_QWORD *)v83 + 4), !*(_BYTE *)(v88 + 24))
                      || *(_DWORD *)(v88 + 48) != 203
                      || (**(_DWORD **)(*(_QWORD *)(v88 + 64) + 96LL) & 0x20000) == 0 )
                    {
                      v87 = 1;
                      v84 = 0;
                    }
                    v89 = *(VIDMM_PAGING_QUEUE ***)v83;
                    if ( *(char **)v83 == v82 )
                      break;
                    if ( v89[1] != v83 )
                      goto LABEL_531;
                    v90 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v83 + 1);
                    if ( *v90 != v83 )
                      goto LABEL_531;
                    *v90 = (VIDMM_PAGING_QUEUE *)v89;
                    v89[1] = (VIDMM_PAGING_QUEUE *)v90;
                    v91 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v82 + 1);
                    if ( *v91 != (VIDMM_PAGING_QUEUE *)v82 )
                      goto LABEL_531;
                    *((_QWORD *)v83 + 1) = v91;
                    *(_QWORD *)v83 = v82;
                    *v91 = v83;
                    *((_QWORD *)v82 + 1) = v83;
                    if ( v89 != (VIDMM_PAGING_QUEUE **)v81 )
                      v83 = (VIDMM_PAGING_QUEUE *)v89;
                    v92 = 0;
                    if ( v89 != (VIDMM_PAGING_QUEUE **)v81 )
                      v92 = v84;
                    v84 = v92;
                  }
                  while ( v92 );
                  v54 = this;
                  if ( v87 )
                  {
                    v53 = v288;
                    if ( v288 )
                      goto LABEL_160;
                    v40 = v286;
                    goto LABEL_158;
                  }
                  v40 = v286;
                }
                v53 = 0LL;
                v288 = 0LL;
              }
LABEL_158:
              *((_BYTE *)v54 + 216) = 1;
              goto LABEL_82;
            }
            v40 = v286;
          }
          v53 = 0LL;
          v288 = 0LL;
          goto LABEL_133;
        }
        if ( v62 == 2 )
        {
          v63 = (_QWORD *)*((_QWORD *)v40 + 29);
          if ( !v63 )
            goto LABEL_109;
          v64 = v63[27];
          if ( v64 <= *(_QWORD *)(*v63 + 4608LL) )
            goto LABEL_109;
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v57, *((_QWORD *)v57 + 576) - v64, 8);
          goto LABEL_108;
        }
        if ( v62 == 3 )
        {
          v65 = *((_QWORD *)v57 + 576);
          v66 = *((_QWORD *)v40 + 26);
          v67 = *(_QWORD *)v57;
          if ( v65 < v66 )
          {
            VIDMM_WORKER_THREAD::SetTimeout(v67, v65 - v66, 6);
LABEL_108:
            v40 = 0LL;
            goto LABEL_109;
          }
          VIDMM_WORKER_THREAD::SetTimeout(v67, 0LL, 6);
        }
LABEL_109:
        v286 = v40;
        goto LABEL_110;
      }
      v319 = 0;
      goto LABEL_108;
    }
    v53 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)this + 8);
    v288 = v53;
    if ( v53 != (VIDMM_WORKER_THREAD *)((char *)this + 64) )
    {
      while ( *((_DWORD *)v53 + 29) != 3 )
      {
        v53 = *(VIDMM_PAGING_QUEUE **)v53;
        v288 = v53;
        if ( v53 == (VIDMM_WORKER_THREAD *)((char *)this + 64) )
          goto LABEL_80;
      }
      goto LABEL_160;
    }
LABEL_80:
    v53 = 0LL;
    v288 = 0LL;
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v41) + 24) = *((int *)this + 7);
LABEL_82:
    v55 = v292;
LABEL_83:
    *((_QWORD *)v54 + 2) = v40;
    *((_QWORD *)v39 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v39, 0LL);
    KeLeaveCriticalRegion();
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
        McTemplateK0ppp(v9, &EventVidMmSelectOperation, (const GUID *)v38, *((_QWORD *)v40 + 3), v53, v55);
      if ( v53 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v53;
        if ( *((_BYTE *)v55 + 24) && *((_DWORD *)v55 + 12) == 206 )
        {
          v56 = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v55 + 18) = v56 * KeQueryTimeIncrement();
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v40;
      }
    }
    v95 = (VIDMM_WORKER_THREAD *)((char *)v54 + 184);
    v297 = (VIDMM_WORKER_THREAD *)((char *)v54 + 184);
LABEL_166:
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v293 = 0LL;
          *((_QWORD *)v95 + 1) = 0LL;
          *((_QWORD *)v95 + 2) = 0LL;
          *(_QWORD *)v95 = 0LL;
          *((_BYTE *)v95 + 24) = 0;
          v320 = 0;
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          v96 = 0;
          v97 = 2;
          v282 = 0;
          v291 = 2;
          if ( v40 )
          {
            v98 = *((_QWORD *)v40 + 2);
            v282 = 0;
            if ( v98 )
            {
              v38 = 0LL;
              if ( *(_DWORD *)(*(_QWORD *)v40 + 6992LL) )
              {
                while ( 1 )
                {
                  v99 = (_QWORD *)(*(_QWORD *)(v98 + 48) + 296LL * (unsigned int)v38);
                  if ( v99[25] > v99[3] || v99[26] > v99[4] )
                    break;
                  v38 = (unsigned int)(v38 + 1);
                  if ( (unsigned int)v38 >= *(_DWORD *)(*(_QWORD *)v40 + 6992LL) )
                  {
                    v96 = 0;
                    goto LABEL_176;
                  }
                }
                v96 = 1;
                v282 = 1;
              }
LABEL_176:
              v100 = *(_QWORD *)(*(_QWORD *)(v98 + 40) + 32LL);
              if ( *(_BYTE *)(v100 + 322) )
                v97 = 0;
              else
                v97 = 2 - ((*(_DWORD *)(v100 + 328) & 1) != 0);
            }
            v291 = v97;
          }
          v101 = 0LL;
          v102 = 3 * (v96 + 2LL * v289);
          v9 = 12LL;
          if ( v97 != 2 )
            v101 = 12LL;
          v103 = v101 + 8 * v102;
          v104 = (char *)&unk_1C0042090 + v103;
          v298 = (char *)&unk_1C0042090 + v103;
          if ( !v53 )
          {
            if ( !v40 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(12LL);
              v6 = 0;
              v318 = 0;
              goto LABEL_350;
            }
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(12LL);
            v105 = (bool *)&unk_1C0042090 + v103 + 8;
            v296 = v105;
            v114 = VIDMM_DEVICE::Resume(v40, *v105, &v320, &v293);
            if ( v319 || *((_DWORD *)this + 36) )
            {
              v318 = 1;
              v296 = v105;
            }
            else
            {
              v318 = 0;
            }
            goto LABEL_267;
          }
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(12LL);
          v105 = (bool *)(v104 + 8);
          v106 = v104[8];
          v296 = (bool *)(v104 + 8);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppx(v9, v102, (const GUID *)v38, v53, v55, *((_QWORD *)v55 + 5));
          v165 = *((_BYTE *)v55 + 24) == 0;
          v107 = (int *)((char *)v55 + 48);
          v299 = (int *)((char *)v55 + 48);
          if ( v165 )
          {
            v143 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v102);
            v143[3] = *v107;
            v143[4] = v55;
            v143[5] = *((unsigned __int8 *)v55 + 25);
            v143[6] = *((_QWORD *)v55 + 4);
            WdLogEvent5_WdEvent(v143);
            v293 = 0LL;
            v144 = *((_QWORD *)v55 + 4);
            v145 = *((_BYTE *)v55 + 25);
            Timeout = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v53 + 11);
            v320 = 0;
            v114 = VIDMM_GLOBAL::ProcessSystemCommand(
                     *(VIDMM_GLOBAL **)this,
                     (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v55 + 48),
                     v145,
                     v144,
                     Timeout);
            v290 = v114;
          }
          else
          {
            KeQueryPerformanceCounter(&PerformanceFrequency);
            v110 = (_QWORD *)WdLogNewEntry5_WdEvent(v109, v108);
            v110[3] = *v107;
            v110[4] = v55;
            v110[5] = *((_QWORD *)v55 + 8);
            v110[6] = *((_QWORD *)v55 + 7);
            v110[7] = *((_QWORD *)v55 + 4);
            WdLogEvent5_WdEvent(v110);
            v111 = VIDMM_GLOBAL::ProcessDeferredCommand(
                     *(VIDMM_GLOBAL **)this,
                     (__int64)v55 + 48,
                     &v320,
                     *((_BYTE *)v55 + 25),
                     *((_QWORD *)v55 + 4),
                     *((struct _VIDSCH_SYNC_OBJECT **)v53 + 11),
                     v106,
                     &v293);
            v165 = *((_BYTE *)v55 + 24) == 0;
            v114 = v111;
            v290 = v111;
            if ( v165 )
            {
              v115 = *((_QWORD *)v55 + 9);
              if ( !v115 )
              {
                v115 = *((_QWORD *)v55 + 8);
                if ( v115 )
                  v115 = *(_QWORD *)(v115 + 8);
              }
            }
            else
            {
              v115 = *((_QWORD *)v55 + 7);
            }
            v116 = *(__int64 **)(v115 + 16);
            v117 = 0;
            v118 = 0;
            if ( *(_DWORD *)(*v116 + 6992) )
            {
              do
              {
                v119 = (VIDMM_PROCESS_BUDGET_STATE *)(v116[6] + 296LL * v118);
                if ( v116 != (__int64 *)-360LL && (struct _KTHREAD *)v116[46] == KeGetCurrentThread() )
                {
                  v120 = WdLogNewEntry5_WdAssertion(v113, v112);
                  *(_QWORD *)(v120 + 24) = 1309LL;
                  WdLogEvent5_WdAssertion(v120);
                }
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v116 + 45, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v123 = *((_DWORD *)v116 + 94);
                    if ( v123 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q(v121, &EventBlockThread, v122, v123);
                  }
                  ExAcquirePushLockSharedEx(v116 + 45, 0LL);
                }
                v124 = (_QWORD *)((char *)v119 + 184);
                v125 = 0;
                v126 = (unsigned int *)(1560LL * v118 + *(_QWORD *)(*v116 + 40184) + 496LL);
                while ( 1 )
                {
                  v127 = *(v124 - 6);
                  if ( v125 == 1 )
                  {
                    v128 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v119);
                    v127 = v128 + v129;
                  }
                  v130 = *v126;
                  if ( v127 > *v124 * (v130 + 100) / 0x64uLL || v127 < *v124 * (100 - v130) / 0x64uLL )
                    break;
                  ++v125;
                  v126 += 6;
                  ++v124;
                  if ( v125 >= 2 )
                    goto LABEL_211;
                }
                v117 = 1;
LABEL_211:
                ExReleasePushLockSharedEx(v116 + 45, 0LL);
                KeLeaveCriticalRegion();
                v131 = *v116;
                ++v118;
              }
              while ( v118 < *(_DWORD *)(*v116 + 6992) );
              if ( v117 )
              {
                ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                v132 = *(_DWORD *)(v131 + 6992);
                v133 = 0;
                if ( v132 )
                {
                  v134 = *(_QWORD *)(v131 + 40184);
                  while ( 2 )
                  {
                    v135 = 1560LL * v133;
                    v136 = 0LL;
                    v137 = (_BYTE *)(v135 + v134 + 512);
                    do
                    {
                      if ( (*v137 & 1) != 0 )
                      {
                        v138 = VIDMM_PARTITION::_PartitionTree;
                        i = 0LL;
                        if ( VIDMM_PARTITION::_PartitionTree )
                        {
                          do
                          {
                            i = v138;
                            v138 = (_QWORD *)*v138;
                          }
                          while ( v138 );
                        }
                        if ( i )
                        {
                          while ( !*(_BYTE *)(*(_QWORD *)(i[4]
                                                        + 368LL * *(unsigned int *)(*(_QWORD *)(v131 + 24) + 208LL)
                                                        + 24)
                                            + 328LL * v133
                                            + 120) )
                          {
                            v140 = (_QWORD **)i[1];
                            v141 = i;
                            if ( v140 )
                            {
                              v142 = *v140;
                              for ( i = (_QWORD *)i[1]; v142; v142 = (_QWORD *)*v142 )
                                i = v142;
                            }
                            else
                            {
                              for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                                    i;
                                    i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                              {
                                if ( (_QWORD *)*i == v141 )
                                  break;
                                v141 = i;
                              }
                            }
                            if ( !i )
                              goto LABEL_231;
                          }
LABEL_234:
                          ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                          _InterlockedIncrement64((volatile signed __int64 *)(v131 + 41344));
                          v113 = *(_QWORD *)v131;
                          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v131 + 8LL) )
                            KeSetEvent(*(PRKEVENT *)(v113 + 152), 0, 0);
                          goto LABEL_236;
                        }
                      }
                      else if ( *(_BYTE *)(v135 + v136 + v134 + 664) )
                      {
                        goto LABEL_234;
                      }
LABEL_231:
                      v137 += 24;
                      v136 += 328LL;
                    }
                    while ( v136 < 656 );
                    if ( ++v133 < v132 )
                      continue;
                    break;
                  }
                }
                ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              }
LABEL_236:
              v107 = v299;
              v114 = v290;
              v55 = v292;
              v105 = v296;
              v53 = v288;
              v40 = v286;
            }
            else
            {
              v55 = v292;
              v53 = v288;
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppxx(v113, &EventPagingQueueComplete, (const GUID *)v38, v53, v55, *((_QWORD *)v55 + 5), 0LL);
          v146 = *((_BYTE *)v55 + 24);
          if ( v114 == -1071775232 )
          {
            v290 = 0;
            goto LABEL_249;
          }
          v9 = v146;
          if ( v146 && (!v320 || *((_BYTE *)v55 + 120)) && *((_QWORD *)v55 + 9) )
          {
            v290 = 0;
LABEL_249:
            if ( v146 )
            {
              if ( *v107 == 206 )
              {
                v147 = MEMORY[0xFFFFF78000000320];
                v148 = v147 * KeQueryTimeIncrement();
                *((_QWORD *)v55 + 19) = v148;
                if ( v148 - *((_QWORD *)v55 + 17) > 1000000 )
                {
                  v149 = v297;
                  VIDMM_COMMIT_TELEMETRY::Init(v297, *(struct VIDMM_GLOBAL **)this, v40, 0LL);
                  VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v150, v55);
                  *((_QWORD *)v149 + 1) = 0LL;
                  *((_QWORD *)v149 + 2) = 0LL;
                  *(_QWORD *)v149 = 0LL;
                  *((_BYTE *)v149 + 24) = 0;
                }
              }
            }
            v151 = *((_QWORD *)v53 + 10);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v151 + 128, 0LL);
            *(_QWORD *)(v151 + 136) = KeGetCurrentThread();
            v153 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v53 + 3);
            if ( *v153 != (VIDMM_PAGING_QUEUE *)((char *)v53 + 16) )
              goto LABEL_531;
            *(_QWORD *)v55 = (char *)v53 + 16;
            *((_QWORD *)v55 + 1) = v153;
            *v153 = v55;
            *((_QWORD *)v53 + 3) = v55;
            if ( *((VIDMM_PAGING_QUEUE **)v53 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v53 + 32) )
            {
              v154 = *((int *)v53 + 28);
              if ( (_DWORD)v154 )
              {
                if ( (_DWORD)v154 != 1 )
                {
                  v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v153, v152);
                  v155[3] = 270LL;
                  v155[4] = 58LL;
                  v155[5] = v53;
                  v155[6] = v154;
                  v155[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v155);
                }
                if ( g_IsInternalReleaseOrDbg )
                {
                  v156 = (_QWORD *)WdLogNewEntry5_WdTrace(v153);
                  v156[3] = v53;
                  v156[4] = *((int *)v53 + 28);
                  v156[5] = 0LL;
                }
                v157 = *(VIDMM_PAGING_QUEUE **)v53;
                if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v53 + 8LL) != v53 )
                  goto LABEL_531;
                v158 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v53 + 1);
                if ( *v158 != v53 )
                  goto LABEL_531;
                *v158 = v157;
                *((_QWORD *)v157 + 1) = v158;
                v159 = (struct _KEVENT *)*((_QWORD *)v53 + 15);
                *(_QWORD *)v53 = 0LL;
                *((_QWORD *)v53 + 1) = 0LL;
                *((_DWORD *)v53 + 28) = 0;
                KeSetEvent(v159, 0, 0);
              }
            }
            --*(_DWORD *)(*((_QWORD *)v53 + 17) + 64LL);
            --*(_DWORD *)(*((_QWORD *)v53 + 10) + 144LL);
            v160 = *((_QWORD *)v53 + 10) + 128LL;
            *(_QWORD *)(v160 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v160, 0LL);
            KeLeaveCriticalRegion();
            if ( (*((_DWORD *)v40 + 13) & 7) == 1 )
            {
              v95 = v297;
              v53 = 0LL;
              v288 = 0LL;
              v55 = 0LL;
              v292 = 0LL;
              v284 = 0;
              continue;
            }
            v114 = v290;
            goto LABEL_266;
          }
          break;
        }
        if ( v114 >= 0 )
          goto LABEL_249;
LABEL_266:
        v97 = v291;
LABEL_267:
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
          McTemplateK0qqtqttp(v320, *v105, (const GUID *)v282, v114, v289, v282, v97, *v105, v320, (char)v293);
        if ( v114 >= 0 )
          goto LABEL_349;
        if ( v284 )
        {
          v161 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v112);
          v161[3] = 270LL;
          v161[4] = 54LL;
          v161[5] = v40;
          v161[6] = v53;
          v161[7] = v55;
          WdLogEvent5_WdCriticalError(v161);
        }
        v162 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v112);
        v163 = v114;
        v164 = v320;
        v162[5] = v163;
        v162[3] = v55;
        v162[4] = v40;
        v162[6] = v164;
        WdLogEvent5_WdWarning(v162);
        v165 = !v164;
        *((_BYTE *)this + 160) = 1;
        while ( 1 )
        {
LABEL_274:
          if ( v165 )
            goto LABEL_324;
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          v95 = v297;
          VIDMM_COMMIT_TELEMETRY::Init(v297, *(struct VIDMM_GLOBAL **)this, v40, v293);
          if ( !v282 )
          {
            VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v167, *v105);
            v166 = this;
          }
          v168 = v289;
          v301 = 0LL;
          v169 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(v166, v286, v293);
          if ( !v169 )
          {
            v40 = v286;
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v9);
            goto LABEL_166;
          }
          if ( v169 == -1071775484 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v9);
            v40 = v286;
            v189 = v301;
            v190 = v286;
            v191 = v301;
            if ( (*((_DWORD *)v286 + 13) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v286, v301) )
            {
              v189 = v40;
              v190 = v191;
            }
            VIDMM_DEVICE::Yield(v190, v189);
            if ( v189 == v40 )
            {
              v95 = v297;
              goto LABEL_166;
            }
            if ( v53 )
              VIDMM_PAGING_QUEUE::RewindPacket(v53, v55);
            v1 = this;
            v6 = v318;
            v7 = v319;
            v8 = 0;
            v5 = (char *)this + 48;
            v192 = *(_QWORD *)(*(_QWORD *)this + 4608LL) - *((_QWORD *)v189 + 27);
            if ( v192 > *((_QWORD *)this + 21) )
            {
              *((_QWORD *)this + 21) = v192;
              *((_DWORD *)this + 44) = 8;
              goto LABEL_2;
            }
            goto LABEL_4;
          }
          if ( (**((_DWORD **)v293 + 12) & 0x20000) != 0 )
          {
            if ( *((_BYTE *)v55 + 24) )
            {
              if ( *((_DWORD *)v55 + 12) == 203 && *((_DWORD *)v55 + 20) == 5 )
              {
                v9 = *(_QWORD *)(*(_QWORD *)this + 40184LL);
                if ( (*(_BYTE *)(1560LL * (*(_DWORD *)(**(_QWORD **)v293 + 76LL) & 0x3F) + v9 + 437) & 4) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v9);
                  v289 = v168;
                  v40 = v286;
                  *((_DWORD *)v55 + 20) = 6;
                  goto LABEL_166;
                }
              }
            }
          }
          VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(v95, *v105);
          if ( v97 <= 0 )
            break;
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          --v97;
          v289 = v168;
          v165 = !v320;
          v40 = v286;
        }
        v170 = **(_QWORD **)v293;
        LODWORD(v171) = *(_DWORD *)(v170 + 68);
        v9 = *(unsigned __int16 *)(v170 + 76);
        LOWORD(v9) = *(_WORD *)(v170 + 76) & 0x3F;
        v38 = *(_QWORD *)this;
        if ( !(_DWORD)v171 )
          goto LABEL_303;
        v172 = *(_QWORD *)(v38 + 3712);
        v173 = *(_DWORD *)(1560LL * (unsigned __int16)v9 + *(_QWORD *)(v38 + 40184) + 20);
        do
        {
          _BitScanReverse((unsigned int *)&v9, v171);
          v304 = v9;
          v171 = ((1 << v9) - 1) & (unsigned int)v171;
          v174 = *(_QWORD *)(v172 + 8LL * (unsigned int)(v173 + v9));
          if ( *(_BYTE *)(v174 + 473) )
          {
            v9 = *(_QWORD *)(*(_QWORD *)v38 + 232LL);
            if ( *(_QWORD *)(v174 + 480) != v9 )
            {
              v178 = WdLogNewEntry5_WdEvent(v9, v171);
              *(_QWORD *)(v178 + 24) = v174;
              WdLogEvent5_WdEvent(v178);
              v179 = MEMORY[0xFFFFF78000000320];
              v180 = v179 * KeQueryTimeIncrement();
              VIDMM_GLOBAL::Defragment(*(VIDMM_GLOBAL **)this, (struct VIDMM_SEGMENT *)v174);
              v181 = MEMORY[0xFFFFF78000000320];
              v182 = v181 * KeQueryTimeIncrement();
              v95 = v297;
              v183 = v182 - v180;
              VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(v297, v183);
              v186 = WdLogNewEntry5_WdEvent(v185, v184);
              *(_QWORD *)(v186 + 24) = v183 / 0xA / 0x3E8;
              WdLogEvent5_WdEvent(v186);
              v289 = v168;
              v40 = v286;
              goto LABEL_166;
            }
          }
        }
        while ( (_DWORD)v171 );
        v105 = v296;
LABEL_303:
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        if ( !dword_1C004D478 || KdRefreshDebuggerNotPresent() )
          goto LABEL_323;
        v175 = *(_QWORD **)(*(_QWORD *)v293 + 8LL);
        IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v175);
        v9 = (unsigned int)g_UnrecoverablePagingFailureDebugMode;
        if ( g_UnrecoverablePagingFailureDebugMode )
        {
          if ( !IsProcessCommitRelinquished )
            goto LABEL_323;
LABEL_320:
          v187 = v175[4];
          if ( v187 && !*(_BYTE *)(v187 + 432) )
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
          goto LABEL_323;
        }
        if ( IsProcessCommitRelinquished )
          goto LABEL_320;
        v177 = "\n"
               "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
               "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
               "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%p)\""
               "\n"
               "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
        if ( !v55 )
          v177 = "\n"
                 "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                 "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                 "Paging operation type: Failure to resume device\n";
        DbgPrintEx(0x65u, 0, v177, v286, v55, v53);
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
          v95 = v297;
          v289 = v168;
          v40 = v286;
          continue;
        }
        break;
      }
      if ( g_UnrecoverablePagingFailureDebugMode == 3 )
      {
        v165 = !v320;
        v289 = v168;
        v40 = v286;
        goto LABEL_274;
      }
LABEL_323:
      v40 = v286;
LABEL_324:
      v188 = v40;
      if ( v53 && *((_BYTE *)v55 + 24) )
      {
        v165 = *((_QWORD *)v55 + 9) == 0LL;
        *((_BYTE *)v55 + 120) = 1;
        if ( v165 )
        {
          v188 = (VIDMM_DEVICE *)*((_QWORD *)v55 + 7);
          if ( !v188 )
          {
            v188 = *(VIDMM_DEVICE **)(*((_QWORD *)v55 + 8) + 8LL);
            goto LABEL_329;
          }
LABEL_330:
          v9 = *((_QWORD *)v188 + 4);
          if ( v9 )
            VidSchMarkDeviceAsError(v9, 12LL, 0);
        }
      }
      else
      {
LABEL_329:
        if ( v188 )
          goto LABEL_330;
      }
      if ( v320 )
      {
        v95 = v297;
        v289 = 0;
        v284 = 1;
        continue;
      }
      break;
    }
    if ( v53 )
      VIDMM_PAGING_QUEUE::ReclaimPacket(v53, v55);
LABEL_349:
    v6 = v318;
LABEL_350:
    v1 = this;
    if ( *((_DWORD *)this + 7) == 1 )
    {
      v193 = *(_QWORD *)this;
      v194 = 0;
      ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      for ( j = 0; j < *(_DWORD *)(v193 + 6992); ++j )
      {
        v196 = *(_QWORD *)(v193 + 40184);
        if ( (*(_BYTE *)(v196 + 1560LL * j + 512) & 1) != 0 )
        {
          v197 = VIDMM_PARTITION::_PartitionTree;
          m = 0LL;
          if ( VIDMM_PARTITION::_PartitionTree )
          {
            do
            {
              m = v197;
              v197 = (_QWORD *)*v197;
            }
            while ( v197 );
          }
          while ( m )
          {
            v199 = 328LL * j + *(_QWORD *)(368LL * *(unsigned int *)(*(_QWORD *)(v193 + 24) + 208LL) + m[4] + 24);
            v200 = *(_QWORD *)(v199 + 8);
            if ( v200 )
              v201 = (__int64)(100 - 100LL * *(_QWORD *)(v199 + 112) / v200) < (unsigned int)dword_1C004D3A0;
            else
              v201 = 0;
            if ( v201 != *(_BYTE *)(v199 + 120) )
            {
              v194 = 1;
              *(_BYTE *)(v199 + 120) = v201;
            }
            v202 = (_QWORD **)m[1];
            v203 = m;
            if ( v202 )
            {
              m = (_QWORD *)m[1];
              for ( k = *v202; k; k = (_QWORD *)*k )
                m = k;
            }
            else
            {
              for ( m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL); m; m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*m == v203 )
                  break;
                v203 = m;
              }
            }
          }
        }
        else
        {
          v205 = 1560LL * j + v196;
          v206 = *(_QWORD *)(v205 + 552);
          if ( v206 )
            v207 = (__int64)(100 - 100LL * *(_QWORD *)(v205 + 656) / v206) < (unsigned int)dword_1C004D3A0;
          else
            v207 = 0;
          if ( v207 != *(_BYTE *)(v205 + 664) )
          {
            v194 = 1;
            *(_BYTE *)(v205 + 664) = v207;
          }
        }
        v208 = *(_QWORD *)(v193 + 40184);
        if ( (*(_BYTE *)(v208 + 1560LL * j + 536) & 1) != 0 )
        {
          v209 = VIDMM_PARTITION::_PartitionTree;
          ii = 0LL;
          if ( VIDMM_PARTITION::_PartitionTree )
          {
            do
            {
              ii = v209;
              v209 = (_QWORD *)*v209;
            }
            while ( v209 );
          }
          while ( ii )
          {
            v211 = 328LL * j + *(_QWORD *)(368LL * *(unsigned int *)(*(_QWORD *)(v193 + 24) + 208LL) + ii[4] + 24);
            v212 = *(_QWORD *)(v211 + 8);
            if ( v212 )
              v213 = (__int64)(100 - 100LL * *(_QWORD *)(v211 + 112) / v212) < (unsigned int)dword_1C004D3A0;
            else
              v213 = 0;
            if ( v213 != *(_BYTE *)(v211 + 120) )
            {
              v194 = 1;
              *(_BYTE *)(v211 + 120) = v213;
            }
            v214 = (_QWORD **)ii[1];
            v215 = ii;
            if ( v214 )
            {
              ii = (_QWORD *)ii[1];
              for ( n = *v214; n; n = (_QWORD *)*n )
                ii = n;
            }
            else
            {
              for ( ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL); ii; ii = (_QWORD *)(ii[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*ii == v215 )
                  break;
                v215 = ii;
              }
            }
          }
        }
        else
        {
          v217 = v208 + 1560LL * j;
          v218 = *(_QWORD *)(v217 + 880);
          if ( v218 )
            v219 = (__int64)(100 - 100LL * *(_QWORD *)(v217 + 984) / v218) < (unsigned int)dword_1C004D3A0;
          else
            v219 = 0;
          if ( v219 != *(_BYTE *)(v217 + 992) )
          {
            v194 = 1;
            *(_BYTE *)(v217 + 992) = v219;
          }
        }
      }
      ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      v165 = ((unsigned __int8)v194 | *((_BYTE *)this + 160)) == 0;
      *((_BYTE *)this + 160) |= v194;
      if ( !v165 )
        VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 0);
      VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)this, &v287);
      v222 = *(_QWORD *)this;
      v223 = *(_QWORD *)this + 41240LL;
      if ( *(_QWORD *)this != -41240LL && *(struct _KTHREAD **)(*(_QWORD *)this + 41248LL) == KeGetCurrentThread() )
      {
        v224 = WdLogNewEntry5_WdAssertion(v221, v220);
        *(_QWORD *)(v224 + 24) = 1309LL;
        WdLogEvent5_WdAssertion(v224);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v223, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v227 = *(_DWORD *)(v223 + 16);
          if ( v227 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v225, &EventBlockThread, v226, v227);
        }
        ExAcquirePushLockSharedEx(v223, 0LL);
      }
      IsPenaltyBoxEmptyWithoutLock = VIDMM_GLOBAL::IsPenaltyBoxEmptyWithoutLock(v222, 1);
      ExReleasePushLockSharedEx(v223, 0LL);
      KeLeaveCriticalRegion();
      if ( !IsPenaltyBoxEmptyWithoutLock )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v6 = 1;
        v318 = 1;
      }
    }
LABEL_417:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v9);
    if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
    {
      if ( dword_1C004D378 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v229 = *(_QWORD *)v1;
        v230 = *(_QWORD *)(*(_QWORD *)v1 + 41344LL);
        if ( v230 == *(_QWORD *)(*(_QWORD *)v1 + 41352LL) )
        {
          v231 = 0;
        }
        else
        {
          v303 = 0LL;
          v302 = 14001;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q(v9, &EventVidMmProfilerEnter, (const GUID *)v38, 14001);
          DXGETWPROFILER_BASE::PushProfilerEntry();
          for ( jj = 0; jj < *(_DWORD *)(v229 + 6992); ++jj )
          {
            v295 = 0;
            DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
              (DXGAUTOPUSHLOCKSHARED *)v315,
              (struct DXGPUSHLOCK *const)(v229 + 40968));
            DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
              (DXGAUTOEXPUSHLOCKSHARED *)v309,
              (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
            VIDMM_GLOBAL::SetupBudgetState((VIDMM_GLOBAL *)v229, (struct VIDMM_BUDGET_STATE *)&v295, jj);
            VIDMM_GLOBAL::AssignBudgets(
              (VIDMM_GLOBAL *)v229,
              (struct VIDMM_BUDGET_STATE *)&v295,
              D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
            if ( (*(_BYTE *)(1560LL * jj + *(_QWORD *)(v229 + 40184) + 536) & 2) != 0 )
              VIDMM_GLOBAL::AssignBudgets(
                (VIDMM_GLOBAL *)v229,
                (struct VIDMM_BUDGET_STATE *)&v295,
                D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
            if ( v311 == 1 )
            {
              ExReleasePushLockSharedEx(v310, 0LL);
            }
            else if ( v311 == 2 )
            {
              ExReleasePushLockExclusiveEx(v310, 0LL);
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v315);
          }
          *(_QWORD *)(v229 + 41352) = v230;
          VIDMM_GLOBAL::SendBudgetChangeNotifications((VIDMM_GLOBAL *)v229);
          v231 = 1;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v302);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q(v233, &EventVidMmProfilerExit, v234, v302);
        }
        VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v1, v231);
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v9);
      v235 = *(VIDMM_GLOBAL **)v1;
      if ( qword_1C004D2D0 )
      {
        v236 = (VIDMM_GLOBAL *)((char *)v235 + 39936);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v235 + 39952, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v239 = *((_DWORD *)v235 + 9992);
            if ( v239 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v237, &EventBlockThread, v238, v239);
          }
          ExAcquirePushLockSharedEx((char *)v235 + 39952, 0LL);
        }
        v240 = *(VIDMM_GLOBAL **)v236;
        ExReleasePushLockSharedEx((char *)v235 + 39952, 0LL);
        KeLeaveCriticalRegion();
        if ( v240 != v236 )
        {
          if ( (*((_DWORD *)v235 + 1760) & 0x8000) == 0 )
          {
            v241 = *((_QWORD *)v235 + 576) - *((_QWORD *)v235 + 888);
            if ( v241 < qword_1C004D2D0 )
            {
              v242 = v241 - qword_1C004D2D0;
              goto LABEL_470;
            }
          }
          v243 = 0;
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v235 + 39952));
          v244 = *(VIDMM_GLOBAL **)v236;
          if ( *(VIDMM_GLOBAL **)v236 != v236 )
          {
            v243 = 1;
            VIDMM_GLOBAL::StartPreparation((__int64)v235, 0xFFFFFFFFLL, 0LL, 0LL, 1001);
            while ( 1 )
            {
              v246 = *(VIDMM_GLOBAL ***)v244;
              v247 = (VIDMM_GLOBAL *)((char *)v244 - 400);
              v248 = v244;
              v244 = (VIDMM_GLOBAL *)v246;
              if ( v246[1] != v248 )
                break;
              v249 = (VIDMM_GLOBAL **)*((_QWORD *)v248 + 1);
              if ( *v249 != v248 )
                break;
              *v249 = (VIDMM_GLOBAL *)v246;
              v246[1] = (VIDMM_GLOBAL *)v249;
              v250 = *((_QWORD *)v247 + 63);
              *(_QWORD *)v248 = 0LL;
              v251 = *(unsigned __int16 *)(v250 + 4);
              if ( (_WORD)v251 && (_WORD)v251 != 3 )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0p(v251, &EventProcessOfferAllocation, v245, v247);
                v252 = *((_QWORD *)v247 + 17);
                if ( !v252 || (*(_DWORD *)(v252 + 80) & 0x1001) != 0 )
                {
                  v253 = (VIDMM_GLOBAL **)*((_QWORD *)v235 + 5000);
                  if ( *v253 != (VIDMM_GLOBAL *)((char *)v235 + 39992) )
                    break;
                  *(_QWORD *)v248 = (char *)v235 + 39992;
                  *((_QWORD *)v248 + 1) = v253;
                  *v253 = v248;
                  *((_QWORD *)v235 + 5000) = v248;
                }
                else if ( *((_DWORD *)v247 + 32) == 2 )
                {
                  VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v252, v247);
                }
              }
              if ( v244 == v236 )
                goto LABEL_467;
            }
LABEL_531:
            __fastfail(3u);
          }
LABEL_467:
          *((_QWORD *)v235 + 4995) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v235 + 39952, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)v235 + 888) = *((_QWORD *)v235 + 576);
          v242 = -qword_1C004D2D0;
          if ( v243 )
            VIDMM_GLOBAL::EndPreparation(v235, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
          v1 = this;
LABEL_470:
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v235, v242, 3);
        }
      }
      v254 = *(VIDMM_GLOBAL **)v1;
      if ( *(_DWORD *)(*(_QWORD *)v1 + 7040LL)
        || *((_QWORD *)v254 + 893) < (unsigned __int64)qword_1C004D310
        && *((_DWORD *)v254 + 1788) < (unsigned int)dword_1C004D318 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v9);
          v254 = *(VIDMM_GLOBAL **)v1;
        }
        VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v254);
        v255 = *(VIDMM_GLOBAL **)v1;
        if ( (*(_DWORD *)(*(_QWORD *)v1 + 7040LL) & 0x8000) != 0 )
        {
          VIDMM_GLOBAL::StartPreparation((__int64)v255, 0xFFFFFFFFLL, 0LL, 0LL, 1003);
          v256 = 0;
          if ( *((_DWORD *)v255 + 926) )
          {
            do
              VIDMM_SEGMENT::TrimOfferLists(*(_QWORD *)(*((_QWORD *)v255 + 464) + 8LL * v256++), 12LL, 0LL, 0LL);
            while ( v256 < *((_DWORD *)v255 + 926) );
            v1 = this;
          }
          VIDMM_GLOBAL::EndPreparation(v255, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
          v255 = *(VIDMM_GLOBAL **)v1;
        }
        *((_QWORD *)v255 + 466) = (char *)v255 + 3720;
        *((_QWORD *)v255 + 465) = (char *)v255 + 3720;
        v254 = *(VIDMM_GLOBAL **)v1;
        v257 = *(VIDMM_GLOBAL **)v1;
        if ( qword_1C004D2C8 )
        {
          v258 = 0x8000000000000000uLL;
          if ( *((_BYTE *)v254 + 40138) )
          {
            v259 = *((_DWORD *)v254 + 926);
            v260 = 0;
            if ( v259 )
            {
              while ( 1 )
              {
                v261 = *(_QWORD *)(*((_QWORD *)v254 + 464) + 8LL * v260);
                if ( (*(_DWORD *)(v261 + 80) & 0x1001) != 0 && *(_QWORD *)(v261 + 176) != v261 + 176 )
                  break;
                if ( ++v260 >= v259 )
                  goto LABEL_493;
              }
              *((_QWORD *)v254 + 887) = *((_QWORD *)v254 + 576);
              *((_BYTE *)v254 + 40138) = 0;
              v258 = -qword_1C004D2C8;
            }
          }
          else
          {
            v262 = *((_QWORD *)v254 + 576) - *((_QWORD *)v254 + 887);
            if ( v262 < qword_1C004D2C8 )
            {
              v258 = v262 - qword_1C004D2C8;
            }
            else
            {
              VIDMM_GLOBAL::StartPreparation((__int64)v254, 0xFFFFFFFFLL, 0LL, 0LL, 207);
              v263 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v254);
              VIDMM_GLOBAL::EndPreparation(v254, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
              if ( !v263 )
                *((_BYTE *)v254 + 40138) = 1;
            }
          }
LABEL_493:
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v254, v258, 2);
          v254 = *(VIDMM_GLOBAL **)v1;
          goto LABEL_494;
        }
      }
      else
      {
LABEL_494:
        v257 = v254;
      }
      v6 = v318;
      if ( !v318 && !VIDMM_GLOBAL::UnderCleanupLimit(v254) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v264, 1);
        v257 = *(VIDMM_GLOBAL **)v1;
        v283 = 1;
      }
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination((KSPIN_LOCK *)v257, &v285);
      if ( NextPendingTermination )
      {
        memset(v316, 0, 0x50uLL);
        v266 = *(VIDMM_GLOBAL **)v1;
        v316[2] = NextPendingTermination;
        LODWORD(v316[0]) = 200;
        VIDMM_GLOBAL::ProcessDeferredCommand(v266, (__int64)v316, &v294, 0, 0LL, 0LL, 0, &v313);
      }
      v267 = *(VIDMM_GLOBAL **)v1;
      if ( *(_BYTE *)(*(_QWORD *)v1 + 40874LL) )
      {
        for ( kk = 0; kk < *((_DWORD *)v267 + 1748); ++kk )
        {
          v269 = *((_QWORD *)v267 + 5023) + 1560LL * kk;
          if ( !*(_DWORD *)(v269 + 432) && (*(_BYTE *)(v269 + 436) & 0x40) == 0 )
          {
            for ( mm = 0; mm < *(_DWORD *)(v269 + 24); ++mm )
            {
              v271 = *((_QWORD *)v267 + 464);
              v9 = mm + *(_DWORD *)(v269 + 20);
              v272 = *(_QWORD *)(v271 + 8 * v9);
              if ( *(_DWORD *)(v272 + 368) != -1 )
              {
                if ( (*(_BYTE *)(v269 + 436) & 0x40) == 0 )
                {
                  v273 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v271 + 8 * v9));
                  if ( v273 == *(_DWORD *)(v269 + 60) || v273 == *(_DWORD *)(v269 + 44) )
                  {
                    if ( *(_QWORD *)(v269 + 464) != v269 + 464 )
                    {
                      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v267, kk);
                      VIDMM_GLOBAL::StartPreparation((__int64)v267, kk, 0LL, 0LL, 121);
                      VIDMM_GLOBAL::FlushScratchGpuVaRanges(v267, kk);
                      VIDMM_GLOBAL::EndPreparation(v267, kk, 0LL, 0, 0LL, 0LL);
                    }
                    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v267, kk);
                    *(_BYTE *)(v269 + 436) |= 0x40u;
                  }
                }
                (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v267 + 5013))(
                  *((_QWORD *)v267 + 5014),
                  *(unsigned int *)(v272 + 368),
                  0LL);
              }
            }
          }
        }
        *((_BYTE *)v267 + 40874) = 0;
      }
    }
    v7 = v319;
    v5 = (char *)v1 + 48;
    v8 = v283;
  }
  while ( v6 );
  v274 = *((_DWORD *)v1 + 7);
  if ( v274 == *((_DWORD *)v1 + 6) )
    goto LABEL_526;
  if ( v274 == 5 )
  {
    v275 = (_QWORD **)(*(_QWORD *)v1 + 41328LL);
    v276 = *v275;
    if ( *v275 != v275 )
    {
      do
      {
        v277 = (VIDMM_DEVICE *)(v276 - 24);
        if ( !*(v276 - 2) && *((_QWORD *)v277 + 3) )
          VIDMM_DEVICE::FullySuspend(v277);
        v276 = (_QWORD *)*v276;
      }
      while ( v276 != v275 );
      v274 = *((_DWORD *)v1 + 7);
    }
  }
  v278 = (struct _KEVENT *)(*((_QWORD *)v1 + 19) + 48LL);
  *((_DWORD *)v1 + 6) = v274;
  KeSetEvent(v278, 0, 0);
  if ( *((_DWORD *)v1 + 7) != 2 )
  {
LABEL_526:
    v279 = *(VIDMM_GLOBAL **)v1;
    v5 = (char *)v1 + 48;
    v7 = v319;
    v280 = 0LL;
    if ( *(_DWORD *)(*(_QWORD *)v1 + 3704LL) )
    {
      do
      {
        v9 = *(_QWORD *)(*((_QWORD *)v279 + 464) + 8 * v280);
        if ( (*(_BYTE *)(v9 + 82) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR((VIDMM_SEGMENT *)v9);
        v280 = (unsigned int)(v280 + 1);
      }
      while ( (unsigned int)v280 < *((_DWORD *)v279 + 926) );
LABEL_2:
      v7 = v319;
      v5 = (char *)v1 + 48;
    }
    v8 = v283;
    goto LABEL_4;
  }
  *((_QWORD *)v1 + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 48, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)v1 + 1));
  PsTerminateSystemThread(0);
}
