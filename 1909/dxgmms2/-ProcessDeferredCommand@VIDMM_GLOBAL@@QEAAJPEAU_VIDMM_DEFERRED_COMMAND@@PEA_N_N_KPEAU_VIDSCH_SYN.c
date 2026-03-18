/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00B47B0 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B486C (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000253C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00116FC (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00117A4 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0014550 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchCancelDeviceCommand @ 0x1C00325E0 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00336D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A140 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A324 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D000 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005E960 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00601F4 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00602D0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060358 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0060484 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00634D0 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0063AA4 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063BD4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063C64 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006A544 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A5E0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0070278 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00704BC (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0070904 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0070960 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C00775F0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D3A4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D55C (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D694 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D954 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0080098 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00802C4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00818E8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0081934 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0081BA0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0082A4C (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084188 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00856C8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAC44 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB9D0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABA18 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00ABB1C (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00ADE1C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AEBB8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AEBE8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00AFB00 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B006C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0564 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B2E6C (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B4A10 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00C9EF8 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00CCAA4 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        GUID *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  int v9; // r9d
  __int64 *v10; // r13
  __int64 v11; // r14
  struct _VIDMM_GLOBAL_ALLOC ***v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // rax
  bool v17; // zf
  unsigned int v18; // r12d
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // r11
  struct _VIDMM_DEFERRED_COMMAND *v24; // r12
  int v25; // edx
  int inited; // r13d
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  char v29; // r14
  VIDMM_GLOBAL *v30; // rcx
  VIDMM_GLOBAL *v31; // rcx
  __int64 v32; // rbx
  _QWORD *v33; // rax
  int v34; // eax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  int v42; // r9d
  const GUID *v43; // r8
  struct _VIDMM_GLOBAL_ALLOC **v44; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v45; // rax
  struct _VIDMM_GLOBAL_ALLOC **v46; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v47; // rdx
  VIDMM_GLOBAL *v48; // rcx
  __int64 v49; // rcx
  char v50; // bl
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // rdi
  VIDMM_DEVICE *v52; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v53; // rcx
  __int64 v54; // r9
  VIDMM_DEVICE *v55; // r8
  struct _VIDMM_GLOBAL_ALLOC ***v56; // rax
  char v57; // al
  struct _VIDMM_LOCAL_ALLOC *v58; // r13
  __int64 v59; // rax
  bool v60; // al
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  const GUID *v68; // r8
  int v69; // r9d
  struct _VIDMM_LOCAL_ALLOC *v70; // r13
  __int64 *v71; // rbx
  VIDMM_GLOBAL *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 **v75; // rcx
  VIDMM_GLOBAL *v76; // rcx
  __int64 v77; // rcx
  const GUID *v78; // r8
  int v79; // r9d
  __int64 *v80; // r14
  __int64 v81; // rax
  __int64 **v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  signed int v85; // r8d
  int v86; // ecx
  __int64 v87; // rax
  int v88; // eax
  VIDMM_GLOBAL *v89; // r14
  VIDMM_GLOBAL *v90; // rbx
  __int64 *v91; // rax
  VIDMM_DEVICE **v92; // rdi
  int v93; // eax
  struct _VIDMM_GLOBAL_ALLOC *v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  struct _KEVENT *v98; // rcx
  unsigned int v99; // eax
  _QWORD **v100; // r12
  _QWORD *i; // r14
  _QWORD *j; // rbx
  __int64 v103; // rdi
  VIDMM_GLOBAL *v104; // rcx
  int v105; // eax
  struct VIDMM_LOCK2_DATA *v106; // rbx
  PRKPROCESS *v107; // rcx
  struct VIDMM_ALLOC **v108; // r12
  bool *v109; // r14
  unsigned int v110; // edx
  struct _VIDMM_DEFERRED_COMMAND *v111; // r10
  __int64 v112; // rbx
  unsigned int v113; // r9d
  struct _D3DDDI_SEGMENTPREFERENCE v114; // edi
  __int64 v115; // r13
  __int64 v116; // rbx
  int v117; // ecx
  int v118; // eax
  unsigned __int8 v119; // r12
  __int64 v120; // rcx
  unsigned int v121; // r8d
  unsigned int v122; // r9d
  int v123; // eax
  int v124; // r9d
  int v125; // ebx
  int v126; // eax
  __int64 v127; // r8
  __int64 v128; // r10
  char v129; // bl
  __int64 v130; // r9
  __int64 v131; // r8
  int v132; // eax
  char v133; // r9
  char v134; // dl
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // rbx
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // r13
  __int64 v146; // rdi
  const GUID *v147; // r8
  unsigned int v148; // r9d
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v152; // rbx
  char v153; // di
  _QWORD *v154; // rax
  int *v155; // rax
  unsigned int v156; // r12d
  unsigned int v157; // ebx
  __int64 v158; // r14
  __int64 v159; // rcx
  _QWORD **v160; // r12
  __int64 v161; // rdx
  _QWORD *v162; // rdi
  _QWORD *v163; // rax
  _QWORD *v164; // r14
  _QWORD *v165; // rcx
  __int64 v166; // rbx
  _QWORD *v167; // rax
  int v168; // r8d
  _QWORD *v169; // r9
  _QWORD *v170; // rdx
  __int64 v171; // rcx
  unsigned int v172; // eax
  __int64 result; // rax
  int v174; // [rsp+20h] [rbp-E0h]
  int v175; // [rsp+30h] [rbp-D0h]
  struct VIDMM_ALLOC **v176; // [rsp+30h] [rbp-D0h]
  unsigned int updated; // [rsp+40h] [rbp-C0h]
  bool v178; // [rsp+44h] [rbp-BCh]
  bool v179; // [rsp+44h] [rbp-BCh]
  bool v182; // [rsp+54h] [rbp-ACh]
  unsigned int v183; // [rsp+54h] [rbp-ACh]
  struct _VIDMM_LOCAL_ALLOC *v185; // [rsp+60h] [rbp-A0h]
  unsigned int v186; // [rsp+60h] [rbp-A0h]
  bool v187; // [rsp+70h] [rbp-90h] BYREF
  int v188; // [rsp+74h] [rbp-8Ch]
  int v189; // [rsp+78h] [rbp-88h]
  int v190; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v191; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v192; // [rsp+88h] [rbp-78h] BYREF
  __int64 v193; // [rsp+90h] [rbp-70h]
  union _LARGE_INTEGER Interval; // [rsp+98h] [rbp-68h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v195; // [rsp+A0h] [rbp-60h]
  char v196[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v197[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v198; // [rsp+B8h] [rbp-48h]
  int v199; // [rsp+C0h] [rbp-40h]
  char v200[8]; // [rsp+C8h] [rbp-38h] BYREF
  char *v201; // [rsp+D0h] [rbp-30h]
  int v202; // [rsp+D8h] [rbp-28h]
  _BYTE v203[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v204[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v205[24]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v206[24]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v207[18]; // [rsp+140h] [rbp+40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1D0h] [rbp+D0h] BYREF

  v195 = a6;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  *a8 = 0LL;
  v12 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v185 = 0LL;
  v182 = 0;
  if ( v12 )
  {
    v10 = (__int64 *)*v12;
    v11 = (__int64)**v12;
    v185 = *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 104);
    v182 = (*(_DWORD *)(v11 + 76) & 0x20000000) != 0;
  }
  v13 = *((_QWORD *)a2 + 1);
  v178 = 0;
  updated = 0;
  if ( !v13 )
    v13 = (__int64)v12[1];
  LOBYTE(a3->Data1) = 0;
  v14 = *((int *)this + 2);
  v15 = *(int *)a2;
  if ( (_DWORD)v14 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v16[3] = 270LL;
    v16[4] = 64LL;
    v16[5] = this;
    v16[6] = v14;
    v16[7] = v15;
    WdLogEvent5_WdCriticalError(v16);
    v9 = 0;
  }
  ++*((_QWORD *)this + 575);
  v17 = *((_DWORD *)this + 1748) == 0;
  *((_DWORD *)this + 2) = v15;
  v18 = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 877) = v13;
  *((_QWORD *)this + 878) = v12;
  if ( !v17 )
  {
    do
    {
      v19 = v18;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0p((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)this + v18 + 143));
        v9 = 0;
      }
      if ( *((_DWORD *)this + v18 + 414) != *((_DWORD *)this + v18 + 478)
        || *((_DWORD *)this + v18 + 542) != *((_DWORD *)this + v18 + 606) )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
        v20[3] = 270LL;
        v20[4] = 33LL;
        v20[5] = this;
        v20[6] = 0LL;
        v20[7] = 0LL;
        WdLogEvent5_WdCriticalError(v20);
        v9 = 0;
      }
      ++v18;
      *((_DWORD *)this + v19 + 1022) = *((_DWORD *)this + v19 + 414);
      *((_DWORD *)this + v19 + 1086) = *((_DWORD *)this + v19 + 542);
      *((_DWORD *)this + v19 + 958) = 0;
    }
    while ( v18 < *((_DWORD *)this + 1748) );
  }
  v21 = *(_QWORD *)(v13 + 32);
  v22 = -1LL;
  v23 = 1;
  if ( *(_BYTE *)(v21 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 200), 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2502LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 777LL) )
  {
    v24 = a2;
    *((_DWORD *)a2 + 19) = -1071775232;
    *((_BYTE *)a2 + 72) = 1;
    goto LABEL_21;
  }
  v24 = a2;
  if ( *((_BYTE *)a2 + 72) )
  {
LABEL_21:
    v21 = *(unsigned int *)v24;
    if ( (unsigned int)(v21 - 203) <= 0xB )
    {
      v25 = 2281;
      if ( _bittest(&v25, v21 - 203) )
      {
        inited = *((_DWORD *)v24 + 19);
        updated = inited;
        goto LABEL_265;
      }
    }
    if ( (_DWORD)v21 == 113 )
      *((_BYTE *)v24 + 64) = 0;
  }
  v27 = *(int *)v24;
  v28 = 0x1C0000000uLL;
  switch ( (int)v27 )
  {
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  (VIDMM_GLOBAL *)v21,
                  (struct _VIDMM_DEFERRED_COMMAND *)((char *)v24 + 32),
                  a8);
      inited = updated;
      if ( updated == -1073741267 )
        goto LABEL_174;
      goto LABEL_158;
    case 119:
      v24 = a2;
      updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(this, *((PVOID *)a2 + 4), a8);
      inited = updated;
      if ( updated != -1073741267 )
        goto LABEL_265;
LABEL_174:
      LOBYTE(a3->Data1) = 1;
      goto LABEL_175;
    case 200:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21) + 24) = v12;
      if ( *((_DWORD *)v12 + 26) || *((_DWORD *)v12 + 39) )
      {
        v32 = *((int *)v12 + 26);
        v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v28);
        v33[3] = 270LL;
        v33[4] = 42LL;
        v33[5] = this;
        v33[6] = v12;
        v33[7] = v32;
        WdLogEvent5_WdCriticalError(v33);
      }
      v34 = *((_DWORD *)v12 + 7) & 3;
      if ( v34 == 2 )
      {
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v12, 0, 0LL, 0LL);
      }
      else if ( v34 == 1 )
      {
        v28 = (unsigned __int64)v12[7];
        v35 = v12 + 7;
        if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(v28 + 8) != v12 + 7 )
          goto LABEL_292;
        v21 = (__int64)v12[8];
        if ( *(_QWORD **)v21 != v35 )
          goto LABEL_292;
        *(_QWORD *)v21 = v28;
        *(_QWORD *)(v28 + 8) = v21;
        *((_DWORD *)v12 + 7) &= 0xFFFFFFFC;
        v12[8] = 0LL;
        *v35 = 0LL;
      }
      if ( (*((_BYTE *)v12 + 25) & 1) != 0 )
        VIDMM_GLOBAL::UnpinOneAllocation(this, v12, 3LL);
      if ( (*((_DWORD *)v12 + 7) & 0x10) != 0 && g_IsInternalRelease )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v28);
        v36[3] = 270LL;
        v36[4] = 9LL;
        v36[5] = 0LL;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
      }
      if ( v12 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v13 + 240) )
        *(_QWORD *)(v13 + 240) = 0LL;
      v37 = *(_QWORD *)(v13 + 16);
      v17 = v37 == -360;
      v38 = v37 + 360;
      v198 = v38;
      if ( !v17 && *(struct _KTHREAD **)(v38 + 8) == KeGetCurrentThread() )
      {
        v39 = WdLogNewEntry5_WdAssertion(v21, v28);
        *(_QWORD *)(v39 + 24) = 1449LL;
        WdLogEvent5_WdAssertion(v39);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v38, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v42 = *(_DWORD *)(v38 + 16);
          if ( v42 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v40, (const EVENT_DESCRIPTOR *)"g", v41, v42);
        }
        ExAcquirePushLockExclusiveEx(v38, 0LL);
      }
      *(_QWORD *)(v38 + 8) = KeGetCurrentThread();
      v17 = (*((_BYTE *)v12 + 25) & 1 | *((_DWORD *)v12 + 38)) == 0;
      v199 = 2;
      if ( v17 )
        goto LABEL_68;
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v13 + 16));
      if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)v12) )
        VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)v13, (__int64 **)v12);
      v44 = v12[14];
      v45 = (struct _VIDMM_GLOBAL_ALLOC *)(v12 + 14);
      if ( v44[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v12 + 14) )
        goto LABEL_292;
      v46 = v12[15];
      if ( *v46 != v45 )
        goto LABEL_292;
      *v46 = (struct _VIDMM_GLOBAL_ALLOC *)v44;
      v44[1] = (struct _VIDMM_GLOBAL_ALLOC *)v46;
      v47 = *(struct _VIDMM_GLOBAL_ALLOC ***)(v13 + 168);
      if ( *v47 != (struct _VIDMM_GLOBAL_ALLOC *)(v13 + 160) )
        goto LABEL_292;
      *(_QWORD *)v45 = v13 + 160;
      v12[15] = v47;
      *v47 = v45;
      *(_QWORD *)(v13 + 168) = v45;
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v13 + 16), (__int64)v47, v43);
LABEL_68:
      *((_DWORD *)v12 + 38) = 0;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v197);
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 320));
      if ( *((int *)v12[12] + 2) > 0 )
      {
        memset(v207, 0, 0x88uLL);
        v49 = *(_QWORD *)(v13 + 32);
        LODWORD(v207[5]) = 3;
        v207[6] = v12;
        VidSchCancelDeviceCommand(v49, (__int64)v207, 1, 0);
      }
      v50 = 0;
      NewAllocOwner = 0LL;
      if ( (**(_DWORD **)(v11 + 504) & 0x20000000) == 0 )
      {
        v58 = v185;
        v178 = 1;
LABEL_84:
        v50 = 1;
        if ( (*(_BYTE *)(v11 + 92) & 3) == 3 )
          VIDMM_GLOBAL::TransferAllocationDecommit(v48, (struct _VIDMM_GLOBAL_ALLOC *)v11, v58, NewAllocOwner);
        goto LABEL_86;
      }
      v52 = (VIDMM_DEVICE *)*v12;
      v53 = (*v12)[5];
      v54 = (__int64)(*v12 + 5);
      v55 = (VIDMM_DEVICE *)*v12;
      if ( v53 == (struct _VIDMM_GLOBAL_ALLOC *)v54 )
      {
LABEL_75:
        v57 = 1;
      }
      else
      {
        while ( 1 )
        {
          v56 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v53 - 40);
          v53 = *(struct _VIDMM_GLOBAL_ALLOC **)v53;
          if ( v56 != v12 && (*((_DWORD *)v56 + 7) & 4) == 0 )
            break;
          v55 = (VIDMM_DEVICE *)*v12;
          if ( v53 == (struct _VIDMM_GLOBAL_ALLOC *)v54 )
            goto LABEL_75;
        }
        v57 = 0;
      }
      if ( v57 )
      {
        v58 = v185;
        if ( v55 != v185 )
        {
          *((_BYTE *)v52 + 32) |= 2u;
          goto LABEL_86;
        }
        v59 = WdLogNewEntry5_WdEvent(v53, v52);
        *(_QWORD *)(v59 + 24) = v11;
        *(_QWORD *)(v59 + 32) = v12;
        WdLogEvent5_WdEvent(v59);
        *((_BYTE *)v185 + 32) |= 2u;
        NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v11, v185);
        v60 = VIDMM_GLOBAL::TransferAllocationOwnership(this, (struct VIDMM_ALLOC *)v12, v185, NewAllocOwner);
        v62 = *(unsigned int *)(v11 + 84);
        v178 = !v60;
        if ( (v62 & 4) != 0 )
          NewAllocOwner = *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 104);
        v63 = WdLogNewEntry5_WdEvent(v62, v61);
        *(_QWORD *)(v63 + 24) = *(_QWORD *)(v11 + 104);
        WdLogEvent5_WdEvent(v63);
        goto LABEL_84;
      }
LABEL_86:
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 320));
      if ( v50 )
      {
        v201 = (char *)this + 39952;
        if ( this != (VIDMM_GLOBAL *)-39952LL && *((struct _KTHREAD **)this + 4995) == KeGetCurrentThread() )
        {
          v66 = WdLogNewEntry5_WdAssertion(v65, v64);
          *(_QWORD *)(v66 + 24) = 1449LL;
          WdLogEvent5_WdAssertion(v66);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39952, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v69 = *((_DWORD *)this + 9992);
            if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v67, (const EVENT_DESCRIPTOR *)"g", v68, v69);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39952, 0LL);
        }
        v70 = v185;
        *((_QWORD *)this + 4995) = KeGetCurrentThread();
        v71 = (__int64 *)(v11 + 416);
        v17 = *(_QWORD *)(v11 + 416) == 0LL;
        v202 = 2;
        if ( !v17 )
        {
          v72 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 208LL);
          VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
            v72,
            (struct _VIDMM_GLOBAL_ALLOC *)v11,
            *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v185 + 1) + 16LL) + 8LL * (_QWORD)v72));
          if ( NewAllocOwner )
          {
            v73 = *(unsigned int *)(*((_QWORD *)this + 3) + 208LL);
            v74 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v73) + 416LL;
            v75 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v73) + 424LL);
            if ( *v75 != (__int64 *)v74 )
              goto LABEL_292;
            *v71 = v74;
            *(_QWORD *)(v11 + 424) = v75;
            *v75 = v71;
            *(_QWORD *)(v74 + 8) = v71;
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v200);
      }
      else
      {
        v70 = v185;
      }
      if ( v178 && !v182 )
      {
        v76 = *(VIDMM_GLOBAL **)(v11 + 136);
        if ( v76 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v76);
            v76 = *(VIDMM_GLOBAL **)(v11 + 136);
          }
          LOBYTE(v174) = 1;
          (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v76 + 48LL))(
            v76,
            v11,
            0LL,
            0LL,
            v174,
            v70);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v11 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        }
        if ( *(_QWORD *)(v11 + 264) )
          VIDMM_GLOBAL::EvictTemporaryAllocation(v76, (struct _VIDMM_GLOBAL_ALLOC *)v11);
        if ( (*(_DWORD *)(v11 + 84) & 2) != 0 )
        {
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v11, v70);
          VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v11 + 8));
          *(_DWORD *)(v11 + 84) &= ~2u;
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39952, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v79 = *((_DWORD *)this + 9992);
            if ( v79 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v77, (const EVENT_DESCRIPTOR *)"g", v78, v79);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39952, 0LL);
        }
        v80 = (__int64 *)(v11 + 400);
        *((_QWORD *)this + 4995) = KeGetCurrentThread();
        v81 = *v80;
        if ( *v80 )
        {
          if ( *(__int64 **)(v81 + 8) != v80 )
            goto LABEL_292;
          v82 = (__int64 **)v80[1];
          if ( *v82 != v80 )
            goto LABEL_292;
          *v82 = (__int64 *)v81;
          *(_QWORD *)(v81 + 8) = v82;
          *v80 = 0LL;
        }
        *((_QWORD *)this + 4995) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
        KeLeaveCriticalRegion();
      }
      *((_DWORD *)v12 + 7) |= 4u;
      v21 = (__int64)v12[24];
      if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 32), 0xFFFFFFFF) == 1 )
        ADAPTER_RENDER::NotifyDeferredDestructionComplete(
          *((ADAPTER_RENDER **)this + 2),
          (struct DXGTERMINATIONTRACKER *)v12[24]);
LABEL_264:
      inited = 0;
LABEL_265:
      if ( LOBYTE(a3->Data1) )
      {
LABEL_175:
        VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
        goto LABEL_176;
      }
      v155 = (int *)*((_QWORD *)v24 + 3);
      if ( v155 )
        *v155 = inited;
      v192 = v195;
      v156 = 0;
      v191 = a5;
      *((_QWORD *)this + 466) = (char *)this + 3720;
      for ( *((_QWORD *)this + 465) = (char *)this + 3720; v156 < *((_DWORD *)this + 1748); ++v156 )
      {
        v157 = 0;
        v158 = 1560LL * v156;
        if ( *(_DWORD *)(v158 + *((_QWORD *)this + 5023) + 24) )
        {
          do
          {
            v159 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL
                                                       * (v157 + *(_DWORD *)(v158 + *((_QWORD *)this + 5023) + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v159 + 160LL))(v159);
            ++v157;
          }
          while ( v157 < *(_DWORD *)(v158 + *((_QWORD *)this + 5023) + 24) );
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p(v21, &EventPagingEndPreparation, (const GUID *)v22, *((_QWORD *)this + v156 + 143));
        if ( *((_DWORD *)this + v156 + 414) != *((_DWORD *)this + v156 + 478)
          || *((_DWORD *)this + v156 + 542) != *((_DWORD *)this + v156 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v156, 0, 0LL, 0LL, 0, 0);
        }
        v21 = *((_QWORD *)this + v156 + 143);
        if ( v21 )
          *(_DWORD *)(v21 + 172) = *(_DWORD *)(v21 + 168);
      }
      v160 = (_QWORD **)((char *)this + 41424);
      if ( *v160 != v160 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        v162 = *v160;
        if ( *v160 != v160 )
        {
          while ( 1 )
          {
            v163 = (_QWORD *)*v162;
            v164 = v162 - 36;
            if ( *(_QWORD **)(*v162 + 8LL) != v162 )
              break;
            v165 = (_QWORD *)v162[1];
            if ( (_QWORD *)*v165 != v162 )
              break;
            *v165 = v163;
            v163[1] = v165;
            *v162 = 0LL;
            v162 = v163;
            if ( (*((_DWORD *)v164 + 13) & 7) != 0 )
            {
              v166 = v164[4];
              v167 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v165, v161);
              v167[3] = 270LL;
              v167[4] = 63LL;
              v167[5] = v164;
              v167[6] = v166;
              v167[7] = 0LL;
              WdLogEvent5_WdCriticalError(v167);
            }
            VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v164);
            if ( v162 == v160 )
              goto LABEL_286;
          }
LABEL_292:
          __fastfail(3u);
        }
      }
LABEL_286:
      if ( *((_BYTE *)this + 41440) )
      {
        VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), 0xFFFFFFFFLL);
        *((_BYTE *)this + 41440) = 0;
      }
      if ( a4 )
      {
        v168 = 0;
        v169 = 0LL;
        v170 = 0LL;
        v171 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
        v172 = 0;
        if ( *(_BYTE *)(v171 + 55) )
        {
          v170 = *(_QWORD **)(v171 + 264);
          if ( !*v170 )
          {
            VidSchSignalSyncObjectsFromCpu(1LL, &v192, 0, (char *)&v191);
            goto LABEL_296;
          }
          v172 = *(_DWORD *)(v171 + 64);
        }
        else
        {
          v168 = *(_DWORD *)(v171 + 64);
          v169 = *(_QWORD **)(v171 + 248);
        }
        VidSchSignalSyncObjectsFromGpu(v172, (__int64)v170, v168, v169, 1u, (void **)&v192, 0, &v191);
LABEL_296:
        v21 = *((unsigned int *)this + 1748);
        if ( (unsigned int)v21 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
            v192,
            v191,
            (unsigned int)((1 << v21) - 1));
      }
      *((_QWORD *)this + 877) = 0LL;
      *((_QWORD *)this + 878) = 0LL;
      *((_DWORD *)this + 2) = 0;
LABEL_176:
      if ( *(_DWORD *)a2 == 200 )
      {
        v98 = (struct _KEVENT *)(*((_QWORD *)a2 + 2) + 72LL);
LABEL_305:
        KeSetEvent(v98, 0, 0);
        goto LABEL_306;
      }
      if ( !LOBYTE(a3->Data1) && v12 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 40, 0xFFFFFFFF) == 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v21) + 24) = v12;
        v98 = (struct _KEVENT *)(v12 + 21);
        goto LABEL_305;
      }
LABEL_306:
      result = updated;
      *((_DWORD *)a2 + 19) = updated;
      return result;
    case 203:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21) + 24) = v12;
      if ( *(_BYTE *)(v11 + 96) )
      {
        inited = -1071775482;
        updated = -1071775482;
      }
      else
      {
        v83 = *(unsigned int *)(*(_QWORD *)(v11 + 504) + 12LL);
        if ( !(_DWORD)v83 && (**(_DWORD **)(v11 + 504) & 0x20000) == 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v83);
          if ( *(_QWORD *)(v11 + 136) )
          {
            v84 = **(unsigned int **)(v11 + 504);
            if ( (v84 & 0x40000000) == 0 && ((v84 & 0x20000000) == 0 || (int)v84 >= 0) && (v84 & 0x80000) == 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v84);
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v11);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v12);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
            }
          }
        }
        v85 = 4;
        v86 = **(_DWORD **)(v11 + 504);
        if ( (v86 & 0x20000) != 0 )
        {
          v85 = *((_DWORD *)v24 + 8);
        }
        else if ( (v86 & 0x40000000) != 0 || v86 < 0 )
        {
          v85 = 3;
        }
        v87 = *((_QWORD *)v24 + 5);
        if ( v87 != -1 )
        {
          *(_DWORD *)(v11 + 80) |= 0x800u;
          v87 = *((_QWORD *)v24 + 5);
        }
        v88 = VIDMM_GLOBAL::PageInOneAllocation(
                (__int64)this,
                (__int64 **)v12,
                v85,
                a7,
                a3,
                a8,
                *((_DWORD *)v24 + 9),
                v87);
        *(_DWORD *)(v11 + 80) &= ~0x800u;
        inited = v88;
        updated = v88;
        if ( v88 >= 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 504) + 12LL));
        v89 = (VIDMM_GLOBAL *)((char *)this + 3720);
        v90 = (VIDMM_GLOBAL *)*((_QWORD *)this + 465);
        if ( v90 != (VIDMM_GLOBAL *)((char *)this + 3720) )
        {
          do
          {
            v91 = (__int64 *)*((_QWORD *)v90 - 7);
            v92 = (VIDMM_DEVICE **)((char *)v90 - 56);
            v90 = *(VIDMM_GLOBAL **)v90;
            v21 = *v91;
            v93 = *(_DWORD *)(*v91 + 128);
            if ( v93 )
            {
              if ( v93 == 1 )
                VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v21 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v21);
              VIDMM_DEVICE::AddCommitment(v92[1], (struct VIDMM_ALLOC *)v92);
            }
          }
          while ( v90 != v89 );
        }
        *((_QWORD *)this + 466) = (char *)this + 3720;
        *(_QWORD *)v89 = v89;
LABEL_158:
        v24 = a2;
      }
      goto LABEL_265;
    case 206:
      v94 = **v12;
      if ( !*((_DWORD *)v94 + 86) )
        goto LABEL_164;
      if ( VIDMM_GLOBAL::NeedsApertureForLock(this, **v12) && (*((_DWORD *)v94 + 19) & 0x40) == 0 )
      {
        v97 = WdLogNewEntry5_WdWarning(v96, v95);
        *(_QWORD *)(v97 + 24) = v94;
        WdLogEvent5_WdWarning(v97);
        inited = -1073741823;
        updated = -1073741823;
        goto LABEL_265;
      }
      v22 = -1LL;
LABEL_164:
      v21 = (unsigned __int8)(v23 & *((_BYTE *)v12 + 25));
      if ( !((unsigned int)v21 | *((_DWORD *)v12 + 38)) || *(_WORD *)(*((_QWORD *)v94 + 63) + 4LL) >= 2u )
        goto LABEL_264;
      v175 = v9;
LABEL_167:
      v24 = a2;
      inited = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v12, 0, a7, a3, a8, v175, -1LL);
      updated = inited;
      goto LABEL_265;
    case 207:
      if ( !*((_DWORD *)v12 + 38) && (*((_BYTE *)v12 + 25) & 1) == 0 )
        VIDMM_GLOBAL::EvictOneAllocation(
          (struct VIDMM_ALLOC **)this,
          (struct VIDMM_ALLOC *)v12,
          (const GUID *)(*((_BYTE *)v24 + 32) & 1));
      _InterlockedDecrement((volatile signed __int32 *)v12 + 41);
      goto LABEL_264;
    case 208:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21) + 24) = v11;
      KeEnterCriticalRegion();
      v103 = v11 + 480;
      ExAcquirePushLockExclusiveEx(v11 + 480, 0LL);
      if ( *(_QWORD *)(v11 + 264) )
      {
        VIDMM_GLOBAL::EvictTemporaryAllocation(v104, (struct _VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v11 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      if ( !*((_BYTE *)v24 + 52) )
      {
        *(_QWORD *)((char *)v24 + 44) = *(_QWORD *)VIDMM_GLOBAL::CalculateLockData(this, v196, v12);
        *((_BYTE *)v24 + 52) = 1;
      }
      v105 = *((_DWORD *)v24 + 11);
      v106 = (struct _VIDMM_DEFERRED_COMMAND *)((char *)v24 + 44);
      if ( v105 == 4 )
      {
        v108 = a8;
        inited = 0;
        v109 = (bool *)a3;
      }
      else
      {
        v107 = (PRKPROCESS *)v10[1];
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*v107, &ApcState);
        v108 = a8;
        v109 = (bool *)a3;
        updated = VIDMM_GLOBAL::LockInternal(
                    this,
                    v106,
                    (struct VIDMM_ALLOC *)v12,
                    *((void ***)a2 + 4),
                    *((_DWORD *)a2 + 10),
                    (bool *)a3,
                    a8);
        inited = updated;
        KeUnstackDetachProcess(&ApcState);
        v105 = *(_DWORD *)v106;
      }
      if ( v105 == 4 )
      {
        v176 = v108;
        v24 = a2;
        inited = VIDMM_GLOBAL::LockInternal(
                   this,
                   v106,
                   (struct VIDMM_ALLOC *)v12,
                   *((void ***)a2 + 4),
                   *((_DWORD *)a2 + 10),
                   v109,
                   v176);
        updated = inited;
      }
      else
      {
        v24 = a2;
      }
      ExReleasePushLockExclusiveEx(v103, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_265;
    case 209:
      v24 = a2;
      inited = VIDMM_GLOBAL::InitContextAllocation((ADAPTER_RENDER **)this, (__int64 **)v12, 1, (bool *)a3, a8);
      updated = inited;
      goto LABEL_265;
    case 210:
      v21 = *((_BYTE *)v12 + 25) & 1;
      if ( !((unsigned int)v21 | *((_DWORD *)v12 + 38)) || *(_WORD *)(*(_QWORD *)(v11 + 504) + 4LL) >= 2u )
        goto LABEL_264;
      v99 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v12, 0, a7, a3, a8, 0, -1LL);
      *(_DWORD *)(v11 + 80) &= ~0x40u;
      inited = v99;
      v24 = a2;
      updated = v99;
      goto LABEL_265;
    case 211:
      v100 = (_QWORD **)(*((_QWORD *)v24 + 4) + 296LL);
      for ( i = *v100; i != v100; i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
          VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)(j - 5), 0LL);
      }
      v24 = a2;
      goto LABEL_264;
    case 212:
      VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v12, *((_DWORD *)v24 + 8));
      goto LABEL_264;
    case 213:
      VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v13);
      VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v13);
      v29 = 0;
      if ( !*(_QWORD *)(v13 + 176) )
      {
        v29 = 1;
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v203,
          (struct _KTHREAD **)(*(_QWORD *)v13 + 41240LL));
        VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)v13, v13, 4);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v203);
      }
      if ( v12 )
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v13, (VIDMM_DEVICE **)v12);
      else
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v13);
      VIDMM_GLOBAL::EvictFromFaultedList(v30, (struct VIDMM_DEVICE *)v13);
      updated = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v13);
      inited = updated;
      VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v13);
      VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v13);
      if ( v29 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v204,
          (struct _KTHREAD **)(*(_QWORD *)v13 + 41240LL));
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v31, (struct _LIST_ENTRY *)(v13 + 176));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v204);
      }
      goto LABEL_265;
    case 214:
      v110 = *(_DWORD *)(v11 + 76);
      v111 = a2;
      v112 = *((_QWORD *)this + 5023);
      v113 = *(_DWORD *)(v11 + 68);
      v114.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v11 + 72);
      v115 = 1560LL * (v110 & 0x3F);
      v186 = v110 & 0x3F;
      v193 = v110 & 0x3F;
      v116 = v115 + v112;
      v117 = *((_DWORD *)a2 + 12) >> 1;
      v118 = *((_DWORD *)a2 + 12) >> 2;
      LOBYTE(v117) = (*((_DWORD *)a2 + 12) & 2) != 0;
      LOBYTE(v118) = (*((_DWORD *)a2 + 12) & 4) != 0;
      v119 = (v110 & 0x80) != 0;
      v183 = v113;
      v189 = v117;
      v188 = v118;
      if ( (_BYTE)v117 )
      {
        v120 = *(_QWORD *)(v11 + 136);
        v121 = v110;
        v122 = *((_DWORD *)a2 + 9);
        v183 = v122;
        if ( v120
          && *(_DWORD *)(v11 + 128)
          && !_bittest((const int *)&v122, (unsigned __int8)(*(_BYTE *)(v120 + 20) - *(_BYTE *)(v116 + 20))) )
        {
          VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
            *(VIDMM_WORKER_THREAD **)this,
            (struct _VIDMM_GLOBAL_ALLOC *)v11);
          VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v12);
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          v121 = *(_DWORD *)(v11 + 76);
          v122 = v183;
          v111 = a2;
        }
        *(_DWORD *)(v11 + 68) = v122;
        v123 = v121 ^ ((unsigned __int8)v121 ^ (unsigned __int8)(*((_BYTE *)v111 + 53) << 6)) & 0x40;
        *(_DWORD *)(v11 + 76) = v123;
        v119 = *((_BYTE *)v111 + 52);
        v110 = v123 ^ ((unsigned __int8)v123 ^ (unsigned __int8)(v119 << 7)) & 0x80;
        *(_DWORD *)(v11 + 76) = v110;
      }
      v22 = v110;
      v179 = 0;
      if ( (*((_DWORD *)v111 + 12) & 1) != 0 )
      {
        v124 = *(_DWORD *)v12[12];
        if ( (v124 & 0x8000) == 0 )
        {
          v125 = 1 << (*(_WORD *)(v116 + 28) - *(_BYTE *)(v116 + 20));
          if ( (*((_DWORD *)v111 + 11) & 1) != 0 )
          {
            LOBYTE(v126) = v110;
            if ( *(_DWORD *)(v11 + 128) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v11 + 136) + 80LL) & 0x1000) != 0 )
              {
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v11);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v12);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                v126 = *(_DWORD *)(v11 + 76);
                v111 = a2;
              }
              else
              {
                LOBYTE(v126) = v110;
                v179 = (v124 & 0x10000) != 0;
              }
            }
            if ( (v126 & 0x40) != 0 )
              *(_DWORD *)(v11 + 68) &= ~v125;
            *(_DWORD *)v12[12] |= 0x8000u;
            v22 = *(unsigned int *)(v11 + 76);
          }
        }
      }
      if ( (_BYTE)v188 )
      {
        v114.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)v111 + 10);
        v127 = 0LL;
        v128 = 0LL;
        if ( v114.0 )
        {
          if ( (*(_BYTE *)&v114.0 & 0x1F) != 0 )
          {
            v127 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * ((*(_BYTE *)&v114.0 & 0x1Fu) + *(_DWORD *)(*((_QWORD *)this + 5023) + v115 + 20) - 1));
            v119 = *(_BYTE *)(v127 + 80) & 1;
          }
          if ( ((v114.Value >> 6) & 0x1F) != 0 )
            v128 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * (((v114.Value >> 6) & 0x1F) + *(_DWORD *)(*((_QWORD *)this + 5023) + v115 + 20) - 1));
        }
        v129 = 0;
        if ( *(_DWORD *)(v11 + 128) )
        {
          v130 = *(_QWORD *)(v11 + 136);
          if ( v127 == v130 || v128 == v130 )
          {
            if ( *(_DWORD *)(v11 + 72) != v114.0 )
            {
              v131 = *(_QWORD *)(v11 + 104);
              if ( v131 )
              {
                if ( *(_QWORD *)(v131 + 8) )
                {
                  v129 = 1;
                  VidMmRecordAlloc(this, v11, v131, v130, *(_QWORD *)(v11 + 16), 1);
                }
              }
            }
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v11);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v12);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          }
        }
        v132 = (*(_DWORD *)(v11 + 76) ^ (v119 << 10)) & 0x400;
        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v11 + 72) = v114;
        *(_DWORD *)(v11 + 76) ^= v132;
        v22 = *(unsigned int *)(v11 + 76);
        if ( v129 )
        {
          VidMmRecordAlloc(this, v11, *(_QWORD *)(v11 + 104), *(_QWORD *)(v11 + 136), *(_QWORD *)(v11 + 16), 0);
          v22 = *(unsigned int *)(v11 + 76);
        }
      }
      v133 = v188;
      v134 = v189;
      v135 = (unsigned int)v22;
      v136 = (unsigned __int8)((unsigned int)v22 >> 12);
      if ( (_BYTE)v188 && (_BYTE)v189 )
      {
        v137 = v22 ^ (v22 ^ (*((_DWORD *)a2 + 8) << 12)) & 0xF0000;
        *(_DWORD *)(v11 + 76) = v137;
        v135 = v137 ^ ((unsigned __int16)v137 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)a2 + 8) << 12)) & 0xF000u;
        *(_DWORD *)(v11 + 76) = v135;
      }
      if ( v133 != v134 )
      {
        if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                (VIDMM_GLOBAL *)v135,
                *(struct _D3DDDI_SEGMENTPREFERENCE *)(v11 + 72),
                v183) )
        {
          v140 = WdLogNewEntry5_WdAssertion(v139, v138);
          *(_QWORD *)(v140 + 24) = 11187LL;
          WdLogEvent5_WdAssertion(v140);
          VidSchMarkDeviceAsError((__int64)v12[1][4]);
        }
        MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v186, v114, &v187);
        v190 = 0;
        if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                (unsigned __int64)this,
                v186,
                v183,
                MostPreferredSegment,
                (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v190) )
        {
          v144 = WdLogNewEntry5_WdAssertion(v143, v142);
          *(_QWORD *)(v144 + 24) = 11199LL;
          WdLogEvent5_WdAssertion(v144);
          VidSchMarkDeviceAsError((__int64)v12[1][4]);
        }
        LODWORD(v135) = *(_DWORD *)(v11 + 76) ^ (*(_DWORD *)(v11 + 76) ^ (v190 << 12)) & 0xF0000 ^ (*(_WORD *)(v11 + 76) ^ (unsigned __int16)((_WORD)v190 << 12)) & 0xF000;
        *(_DWORD *)(v11 + 76) = v135;
      }
      if ( ((unsigned int)v136 >> 4 != (WORD1(v135) & 0xF)
         || (((unsigned __int8)v136 ^ (unsigned __int8)((unsigned int)v135 >> 12)) & 0xF) != 0)
        && *((_BYTE *)v12 + 25) & 1 | *((_DWORD *)v12 + 38) )
      {
        v145 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 104) + 8LL) + 16LL) + 8 * v193);
        v146 = *(_QWORD *)(v145 + 48) + 296LL * (*(_DWORD *)(v11 + 76) & 0x3F);
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v205,
          (struct _KTHREAD **)(v145 + 360));
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v145);
        v148 = *(_DWORD *)(v11 + 76);
        v149 = v136;
        if ( (((unsigned __int8)v136 ^ (unsigned __int8)(v148 >> 12)) & 0xF) != 0 )
        {
          *(_QWORD *)(v146 + 8 * (v136 & 0xF) + 136) -= *(_QWORD *)(v11 + 16);
          v150 = (unsigned __int8)HIBYTE(*(_WORD *)(v11 + 76)) >> 4;
          *(_QWORD *)(v146 + 8 * v150 + 136) += *(_QWORD *)(v11 + 16);
          v148 = *(_DWORD *)(v11 + 76);
        }
        if ( (unsigned int)v136 >> 4 != (HIWORD(v148) & 0xF) )
        {
          v149 = v136 >> 4;
          *(_QWORD *)(v146 + 8 * (v136 >> 4) + 72) -= *(_QWORD *)(v11 + 16);
          v151 = v146 + 8LL * (*(_WORD *)(v11 + 78) & 0xF);
          *(_QWORD *)(v151 + 72) += *(_QWORD *)(v11 + 16);
        }
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v145, v149, v147);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v205);
      }
      v24 = a2;
      *((_DWORD *)a2 + 12) &= 0xFFFFFFF8;
      if ( v179 && *(_QWORD *)(v11 + 136) )
        VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this, (struct _VIDMM_GLOBAL_ALLOC *)v11, 1u);
      v21 = *((_BYTE *)v12 + 25) & 1;
      if ( !((unsigned int)v21 | *((_DWORD *)v12 + 38)) || *(_WORD *)(*(_QWORD *)(v11 + 504) + 4LL) >= 2u )
        goto LABEL_264;
      v175 = 0;
      goto LABEL_167;
    case 215:
      v152 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v24 + 4);
      v153 = 0;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v206,
        (struct _KTHREAD **)this + 4994);
      if ( *((_QWORD *)v152 + 52) )
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v152);
        v153 = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v206);
      if ( v153 )
        VIDMM_GLOBAL::DecommitGlobalAllocation(this, v152);
      inited = 0;
      updated = 0;
      goto LABEL_265;
    case 217:
      Interval.QuadPart = -10000LL * *((unsigned int *)v24 + 8);
      KeDelayExecutionThread(0, 0, &Interval);
      goto LABEL_264;
    default:
      v154 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, 0x1C0000000uLL);
      v154[3] = 270LL;
      v154[4] = 5LL;
      v154[5] = v27;
      v154[6] = -1073741811LL;
      v154[7] = 0LL;
      WdLogEvent5_WdCriticalError(v154);
      goto LABEL_264;
  }
}
