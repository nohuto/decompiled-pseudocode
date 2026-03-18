/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00B1710 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B17CC (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0010570 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0012B10 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012BB8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00154AC (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 *     VidSchCancelDeviceCommand @ 0x1C0031D90 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C005F96C (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005FAA4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005FB34 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0061B40 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0066700 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006BA84 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C006E49C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006E6F4 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006EF00 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006EF9C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0072534 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00728D0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0073008 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007335C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0076A7C (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076C38 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0076CC0 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0076DEC (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077F68 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C007993C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007BBE8 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007BDA0 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007BED8 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C198 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007D2E4 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007DDC8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007DE14 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007E954 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00805D4 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C008132C (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00A72BC (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A7930 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A85E0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8628 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00A872C (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00A8EF0 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00AABAC (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB93C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AB96C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00AC84C (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00ACF7C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00AE47C (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1968 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00C71E0 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00C9FFC (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        __int64 a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        bool a7,
        struct VIDMM_ALLOC **a8)
{
  int v8; // r10d
  bool v9; // r14
  bool *v10; // r9
  GUID *v11; // r8
  unsigned int *v12; // r15
  VIDMM_GLOBAL *v13; // rdi
  __int64 v14; // r13
  struct _VIDMM_GLOBAL_ALLOC ***v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r12
  int v18; // eax
  unsigned int v19; // r12d
  bool v20; // zf
  __int64 v21; // rbx
  int v22; // eax
  __int64 *v23; // rcx
  int v24; // eax
  bool *v25; // r13
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  const GUID *v31; // r8
  const GUID *v32; // r8
  struct _VIDMM_GLOBAL_ALLOC **v33; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v34; // rax
  struct _VIDMM_GLOBAL_ALLOC **v35; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v36; // rdx
  VIDMM_GLOBAL *v37; // rcx
  struct _VIDMM_LOCAL_ALLOC *v38; // rdx
  char v39; // bl
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 *v44; // rbx
  VIDMM_GLOBAL *v45; // rcx
  struct _VIDMM_LOCAL_ALLOC *v46; // rbx
  __int64 *v47; // r13
  __int64 v48; // rax
  volatile signed __int32 *v49; // rcx
  _DWORD *v50; // rax
  unsigned int v51; // r12d
  unsigned int v52; // ebx
  __int64 v53; // r14
  __int64 v54; // rcx
  _QWORD **v55; // r14
  __int64 v56; // rax
  unsigned __int64 v57; // r8
  __int64 *v58; // r9
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // eax
  struct _KEVENT *v62; // rcx
  __int64 result; // rax
  struct _VIDMM_GLOBAL_ALLOC *v64; // rbx
  int v65; // ecx
  unsigned int v66; // eax
  PRKPROCESS **v67; // r8
  struct _VIDMM_GLOBAL_ALLOC *v68; // rcx
  __int64 v69; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v70; // rax
  char v71; // al
  __int64 v72; // rax
  bool v73; // al
  __int64 v74; // rdx
  struct _VIDMM_LOCAL_ALLOC *v75; // rcx
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned int inited; // eax
  unsigned int v81; // eax
  int v82; // r9d
  __int64 **v83; // rcx
  int v84; // r9d
  int *v85; // rcx
  int v86; // eax
  unsigned int v87; // ecx
  int v88; // edx
  _QWORD *v89; // rbx
  _QWORD *v90; // r14
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  char v93; // r13
  VIDMM_GLOBAL *v94; // rcx
  VIDMM_GLOBAL *v95; // rcx
  __int64 v96; // rax
  VIDMM_SEGMENT ***v97; // rax
  VIDMM_DEVICE **v98; // r13
  VIDMM_SEGMENT **v99; // rcx
  int v100; // eax
  _QWORD **v101; // rax
  _QWORD *v102; // rbx
  _QWORD *v103; // r14
  __int64 v104; // r14
  VIDMM_GLOBAL *v105; // rcx
  struct VIDMM_ALLOC **v106; // rbx
  int v107; // edx
  unsigned int v108; // r11d
  struct _D3DDDI_SEGMENTPREFERENCE v109; // ebx
  __int64 v110; // rcx
  unsigned int v111; // r10d
  __int64 v112; // r14
  char v113; // r10
  unsigned int v114; // r11d
  int v115; // r9d
  __int64 v116; // rcx
  unsigned int v117; // eax
  unsigned int v118; // ecx
  int v119; // eax
  unsigned int v120; // r9d
  int v121; // r10d
  int v122; // r14d
  int v123; // eax
  __int64 v124; // r10
  __int64 v125; // r11
  char v126; // r14
  __int64 v127; // r9
  __int64 v128; // rcx
  int v129; // eax
  unsigned __int64 v130; // rcx
  unsigned int v131; // edx
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  unsigned int v140; // r14d
  __int64 v141; // rax
  __int64 v142; // rbx
  __int64 v143; // rdx
  const GUID *v144; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v145; // r10
  unsigned int v146; // r9d
  __int64 v147; // rcx
  __int64 v148; // rax
  unsigned int v149; // eax
  struct _VIDMM_GLOBAL_ALLOC *v150; // rbx
  char v151; // r14
  _QWORD *v152; // rax
  __int64 v153; // rax
  __int64 v154; // rbx
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rax
  VIDMM_GLOBAL *v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 **v163; // rcx
  __int64 v164; // rdx
  _QWORD *v165; // r12
  _QWORD *v166; // rax
  _QWORD *v167; // r13
  _QWORD *v168; // rcx
  __int64 v169; // rbx
  _QWORD *v170; // rax
  int v171; // [rsp+20h] [rbp-E0h]
  unsigned int updated; // [rsp+40h] [rbp-C0h]
  bool v173; // [rsp+44h] [rbp-BCh]
  bool v174; // [rsp+44h] [rbp-BCh]
  __int64 v176; // [rsp+50h] [rbp-B0h]
  __int64 v177; // [rsp+50h] [rbp-B0h]
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // [rsp+50h] [rbp-B0h]
  _QWORD **v179; // [rsp+50h] [rbp-B0h]
  int v180; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v181; // [rsp+58h] [rbp-A8h]
  unsigned int v182; // [rsp+58h] [rbp-A8h]
  struct _VIDMM_LOCAL_ALLOC *v184; // [rsp+70h] [rbp-90h]
  unsigned int v185; // [rsp+70h] [rbp-90h]
  char v186; // [rsp+78h] [rbp-88h]
  signed int v187; // [rsp+7Ch] [rbp-84h]
  unsigned int v188; // [rsp+7Ch] [rbp-84h]
  bool v189; // [rsp+80h] [rbp-80h] BYREF
  PRKPROCESS **v190; // [rsp+88h] [rbp-78h]
  int v191; // [rsp+90h] [rbp-70h] BYREF
  int v192; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v193; // [rsp+A0h] [rbp-60h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v194; // [rsp+A8h] [rbp-58h] BYREF
  VIDMM_PROCESS_ADAPTER_INFO *v195; // [rsp+B0h] [rbp-50h]
  int v196; // [rsp+B8h] [rbp-48h]
  struct _VIDSCH_SYNC_OBJECT *v197; // [rsp+C0h] [rbp-40h]
  struct _VIDMM_GLOBAL_ALLOC ***v198; // [rsp+C8h] [rbp-38h]
  char v199[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v200; // [rsp+D8h] [rbp-28h]
  int v201; // [rsp+E0h] [rbp-20h]
  char v202[8]; // [rsp+E8h] [rbp-18h] BYREF
  char *v203; // [rsp+F0h] [rbp-10h]
  int v204; // [rsp+F8h] [rbp-8h]
  _BYTE v205[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v206[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v207[24]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v208[24]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v209[16]; // [rsp+160h] [rbp+60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = a3;
  v11 = (GUID *)a8;
  v12 = (unsigned int *)a2;
  v13 = this;
  v197 = a6;
  v14 = 0LL;
  v190 = 0LL;
  *a8 = 0LL;
  v15 = *(struct _VIDMM_GLOBAL_ALLOC ****)(a2 + 16);
  v198 = v15;
  v184 = 0LL;
  if ( v15 )
  {
    v190 = (PRKPROCESS **)*v15;
    v14 = (__int64)*v190;
    v9 = (*((_DWORD *)*v190 + 19) & 0x20000000) != 0;
    v184 = (*v190)[13];
  }
  v16 = *(_QWORD *)(a2 + 8);
  v173 = 0;
  updated = 0;
  v176 = v16;
  if ( !v16 )
  {
    v16 = (__int64)v15[1];
    v176 = v16;
  }
  *v10 = 0;
  v17 = *((int *)this + 2);
  v18 = *(_DWORD *)a2;
  v180 = *(_DWORD *)a2;
  if ( (_DWORD)v17 )
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v91[3] = 270LL;
    v91[4] = 64LL;
    v91[5] = v13;
    v91[6] = v17;
    v91[7] = v180;
    WdLogEvent5_WdCriticalError(v91);
    v18 = v180;
    v8 = 0;
    v11 = (GUID *)a8;
    v10 = a3;
  }
  ++*((_QWORD *)v13 + 575);
  v19 = 0;
  v20 = *((_DWORD *)v13 + 1748) == 0;
  *((_DWORD *)v13 + 2) = v18;
  *((_DWORD *)v13 + 12) = -1;
  *((_QWORD *)v13 + 877) = v16;
  *((_QWORD *)v13 + 878) = v15;
  if ( !v20 )
  {
    do
    {
      v21 = v19;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0p((__int64)this, &EventPagingStartPreparation, v11, *((_QWORD *)v13 + v19 + 143));
        v8 = 0;
      }
      this = (VIDMM_GLOBAL *)*((unsigned int *)v13 + v19 + 414);
      if ( (_DWORD)this != *((_DWORD *)v13 + v19 + 478) || *((_DWORD *)v13 + v19 + 542) != *((_DWORD *)v13 + v19 + 606) )
      {
        v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
        v92[3] = 270LL;
        v92[4] = 33LL;
        v92[5] = v13;
        v92[6] = 0LL;
        v92[7] = 0LL;
        WdLogEvent5_WdCriticalError(v92);
        this = (VIDMM_GLOBAL *)*((unsigned int *)v13 + v19 + 414);
        v8 = 0;
      }
      v22 = *((_DWORD *)v13 + v19++ + 542);
      *((_DWORD *)v13 + v21 + 1086) = v22;
      *((_DWORD *)v13 + v21 + 958) = 0;
      *((_DWORD *)v13 + v21 + 1022) = (_DWORD)this;
    }
    while ( v19 < *((_DWORD *)v13 + 1748) );
    v16 = v176;
    v11 = (GUID *)a8;
    v10 = a3;
  }
  v23 = *(__int64 **)(v16 + 32);
  if ( *((_BYTE *)v23 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)v23 + 50, 0, 0)
    || *(_BYTE *)(*((_QWORD *)v13 + 3) + 2470LL)
    || *(_BYTE *)(*((_QWORD *)v13 + 2) + 777LL) )
  {
    v12[19] = -1071775232;
    *((_BYTE *)v12 + 72) = 1;
  }
  else if ( !*((_BYTE *)v12 + 72) )
  {
    goto LABEL_19;
  }
  v23 = (__int64 *)*v12;
  if ( (unsigned int)((_DWORD)v23 - 203) <= 0xB )
  {
    a2 = 2281LL;
    if ( _bittest((const int *)&a2, (_DWORD)v23 - 203) )
    {
      v26 = v12[19];
      goto LABEL_190;
    }
  }
  if ( (_DWORD)v23 == 113 )
    *((_BYTE *)v12 + 64) = 0;
LABEL_19:
  v24 = *v12;
  v187 = *v12;
  if ( *v12 == 200 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v15;
    if ( *((_DWORD *)v15 + 26) || *((_DWORD *)v15 + 39) )
    {
      v154 = *((int *)v15 + 26);
      v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, a2);
      v155[3] = 270LL;
      v155[4] = 42LL;
      v155[5] = v13;
      v155[6] = v15;
      v155[7] = v154;
      WdLogEvent5_WdCriticalError(v155);
      v16 = v176;
    }
    v27 = *((_DWORD *)v15 + 7) & 3;
    if ( v27 == 2 )
    {
      VIDMM_GLOBAL::NotifyAllocationEviction(v13, (struct VIDMM_ALLOC *)v15, 0, 0LL, 0LL);
    }
    else if ( v27 == 1 )
    {
      a2 = (__int64)v15[7];
      v77 = v15 + 7;
      if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(a2 + 8) != v15 + 7 )
        goto LABEL_311;
      v23 = (__int64 *)v15[8];
      if ( (_QWORD *)*v23 != v77 )
        goto LABEL_311;
      *v23 = a2;
      *(_QWORD *)(a2 + 8) = v23;
      *((_DWORD *)v15 + 7) &= 0xFFFFFFFC;
      v15[8] = 0LL;
      *v77 = 0LL;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      VIDMM_GLOBAL::UnpinOneAllocation(v13, v15, 3LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 && g_IsInternalRelease )
    {
      v156 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, a2);
      v156[5] = 0LL;
      v156[6] = 0LL;
      v156[7] = 0LL;
      v156[3] = 270LL;
      v156[4] = 9LL;
      WdLogEvent5_WdCriticalError(v156);
    }
    if ( v15 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v16 + 240) )
      *(_QWORD *)(v16 + 240) = 0LL;
    v28 = *(_QWORD *)(v16 + 16);
    v20 = v28 == -360;
    v29 = v28 + 360;
    v177 = v29;
    v200 = v29;
    if ( !v20 && *(struct _KTHREAD **)(v29 + 8) == KeGetCurrentThread() )
    {
      v157 = WdLogNewEntry5_WdAssertion(v29, a2);
      *(_QWORD *)(v157 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v157);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v177, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v82 = *(_DWORD *)(v177 + 16);
        if ( v82 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v30, &EventBlockThread, v31, v82);
      }
      ExAcquirePushLockExclusiveEx(v177, 0LL);
    }
    v201 = 2;
    *(_QWORD *)(v177 + 8) = KeGetCurrentThread();
    if ( ((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38) )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16));
      if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)v15) )
        VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)v16, (struct VIDMM_ALLOC *)v15);
      v33 = v15[14];
      v34 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14);
      if ( v33[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14) )
        goto LABEL_311;
      v35 = v15[15];
      if ( *v35 != v34 )
        goto LABEL_311;
      *v35 = (struct _VIDMM_GLOBAL_ALLOC *)v33;
      v33[1] = (struct _VIDMM_GLOBAL_ALLOC *)v35;
      v36 = *(struct _VIDMM_GLOBAL_ALLOC ***)(v16 + 168);
      if ( *v36 != (struct _VIDMM_GLOBAL_ALLOC *)(v16 + 160) )
        goto LABEL_311;
      *(_QWORD *)v34 = v16 + 160;
      v15[15] = v36;
      *v36 = v34;
      *(_QWORD *)(v16 + 168) = v34;
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16), (__int64)v36, v32);
    }
    *((_DWORD *)v15 + 38) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v199);
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 320));
    if ( *((int *)v15[12] + 2) > 0 )
    {
      memset(v209, 0, sizeof(v209));
      v158 = *(_QWORD *)(v16 + 32);
      LODWORD(v209[5]) = 3;
      v209[6] = v15;
      VidSchCancelDeviceCommand(v158, (__int64)v209, 1, 0);
    }
    v38 = 0LL;
    v39 = 0;
    NewAllocOwner = 0LL;
    if ( (**(_DWORD **)(v14 + 504) & 0x20000000) != 0 )
    {
      v67 = (PRKPROCESS **)*v15;
      v68 = (*v15)[5];
      v69 = (__int64)(*v15 + 5);
      if ( v68 == (struct _VIDMM_GLOBAL_ALLOC *)v69 )
      {
LABEL_121:
        v71 = 1;
      }
      else
      {
        while ( 1 )
        {
          v70 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v68 - 40);
          v68 = *(struct _VIDMM_GLOBAL_ALLOC **)v68;
          if ( v70 != v15 && (*((_DWORD *)v70 + 7) & 4) == 0 )
            break;
          if ( v68 == (struct _VIDMM_GLOBAL_ALLOC *)v69 )
            goto LABEL_121;
        }
        v71 = 0;
      }
      if ( v67 != (PRKPROCESS **)v184 )
      {
        if ( v71 )
          *((_BYTE *)v67 + 32) |= 2u;
        goto LABEL_51;
      }
      if ( !v71 )
      {
LABEL_51:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 320));
        if ( v39 )
        {
          v203 = (char *)v13 + 39952;
          if ( v13 != (VIDMM_GLOBAL *)-39952LL && *((struct _KTHREAD **)v13 + 4995) == KeGetCurrentThread() )
          {
            v159 = WdLogNewEntry5_WdAssertion(v41, v40);
            *(_QWORD *)(v159 + 24) = 1309LL;
            WdLogEvent5_WdAssertion(v159);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v13 + 39952, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v84 = *((_DWORD *)v13 + 9992);
              if ( v84 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v42, &EventBlockThread, v43, v84);
            }
            ExAcquirePushLockExclusiveEx((char *)v13 + 39952, 0LL);
          }
          *((_QWORD *)v13 + 4995) = KeGetCurrentThread();
          v44 = (__int64 *)(v14 + 416);
          v20 = *(_QWORD *)(v14 + 416) == 0LL;
          v204 = 2;
          if ( !v20 )
          {
            v160 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)v13 + 3) + 208LL);
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
              v160,
              (struct _VIDMM_GLOBAL_ALLOC *)v14,
              *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v184 + 1) + 16LL) + 8LL * (_QWORD)v160));
            if ( NewAllocOwner )
            {
              v161 = *(unsigned int *)(*((_QWORD *)v13 + 3) + 208LL);
              v162 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v161) + 416LL;
              v163 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v161) + 424LL);
              if ( *v163 != (__int64 *)v162 )
                goto LABEL_311;
              *v44 = v162;
              *(_QWORD *)(v14 + 424) = v163;
              *v163 = v44;
              *(_QWORD *)(v162 + 8) = v44;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v202);
        }
        if ( v173 && !v9 )
        {
          v45 = *(VIDMM_GLOBAL **)(v14 + 136);
          if ( v45 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v45);
              v45 = *(VIDMM_GLOBAL **)(v14 + 136);
            }
            v46 = v184;
            LOBYTE(v171) = 1;
            (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v45 + 48LL))(
              v45,
              v14,
              0LL,
              0LL,
              v171,
              v184);
            VIDMM_GLOBAL::FlushPagingBufferInternal(v13, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          else
          {
            v46 = v184;
          }
          if ( *(_QWORD *)(v14 + 264) )
            VIDMM_GLOBAL::EvictTemporaryAllocation(v45, (struct _VIDMM_GLOBAL_ALLOC *)v14);
          if ( (*(_DWORD *)(v14 + 84) & 2) != 0 )
          {
            VIDMM_SEGMENT::UnlockAllocationBackingStore(v13, (struct _VIDMM_GLOBAL_ALLOC *)v14, v46);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(v13, *(_QWORD *)(v14 + 8));
            *(_DWORD *)(v14 + 84) &= ~2u;
          }
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v13 + 39952));
          v47 = (__int64 *)(v14 + 400);
          v48 = *v47;
          if ( *v47 )
          {
            if ( *(__int64 **)(v48 + 8) != v47 )
              goto LABEL_311;
            v83 = (__int64 **)v47[1];
            if ( *v83 != v47 )
              goto LABEL_311;
            *v83 = (__int64 *)v48;
            *(_QWORD *)(v48 + 8) = v83;
            *v47 = 0LL;
          }
          *((_QWORD *)v13 + 4995) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v13 + 39952, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v15 + 7) |= 4u;
        v49 = (volatile signed __int32 *)v15[24];
        if ( v49 && _InterlockedExchangeAdd(v49 + 8, 0xFFFFFFFF) == 1 )
          ADAPTER_RENDER::NotifyDeferredDestructionComplete(
            *((ADAPTER_RENDER **)v13 + 2),
            (struct DXGTERMINATIONTRACKER *)v15[24]);
        v26 = 0LL;
        v25 = a3;
        goto LABEL_74;
      }
      v72 = WdLogNewEntry5_WdEvent(v68, v69);
      *(_QWORD *)(v72 + 24) = v14;
      *(_QWORD *)(v72 + 32) = v15;
      WdLogEvent5_WdEvent(v72);
      *((_BYTE *)v184 + 32) |= 2u;
      NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(v13, (struct _VIDMM_GLOBAL_ALLOC *)v14);
      VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(v13, (struct _VIDMM_GLOBAL_ALLOC *)v14, v184);
      v73 = VIDMM_GLOBAL::TransferAllocationOwnership(v13, (struct VIDMM_ALLOC *)v15, v184, NewAllocOwner);
      v75 = (struct _VIDMM_LOCAL_ALLOC *)*(unsigned int *)(v14 + 84);
      v173 = !v73;
      if ( ((unsigned __int8)v75 & 4) != 0 )
      {
        v75 = *(struct _VIDMM_LOCAL_ALLOC **)(v14 + 104);
        NewAllocOwner = v75;
      }
      v76 = WdLogNewEntry5_WdEvent(v75, v74);
      *(_QWORD *)(v76 + 24) = *(_QWORD *)(v14 + 104);
      WdLogEvent5_WdEvent(v76);
      v38 = NewAllocOwner;
    }
    else
    {
      v173 = 1;
    }
    v39 = 1;
    if ( (*(_BYTE *)(v14 + 92) & 3) == 3 )
    {
      VIDMM_GLOBAL::TransferAllocationDecommit(v37, (struct _VIDMM_GLOBAL_ALLOC *)v14, v184, v38);
      v39 = 1;
    }
    goto LABEL_51;
  }
  if ( v24 != 113 )
  {
    if ( v24 != 206 )
    {
      switch ( v24 )
      {
        case 119:
          updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                      v13,
                      *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v12 + 4),
                      (struct VIDMM_ALLOC **)v11);
          v26 = updated;
          if ( updated != -1073741267 )
            goto LABEL_117;
          *a3 = 1;
          goto LABEL_212;
        case 203:
          if ( g_IsInternalReleaseOrDbg )
          {
            v96 = WdLogNewEntry5_WdTrace(v23);
            v11 = (GUID *)a8;
            v10 = a3;
            *(_QWORD *)(v96 + 24) = v15;
          }
          if ( *(_BYTE *)(v14 + 96) )
          {
            v26 = 3223191814LL;
            goto LABEL_190;
          }
          if ( !*(_DWORD *)(*(_QWORD *)(v14 + 504) + 12LL) )
          {
            v85 = *(int **)(v14 + 504);
            if ( (*v85 & 0x20000) == 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(v85);
                v85 = *(int **)(v14 + 504);
                v11 = (GUID *)a8;
                v10 = a3;
              }
              if ( *(_QWORD *)(v14 + 136) )
              {
                v86 = *v85;
                if ( (*v85 & 0x40000000) == 0 && ((v86 & 0x20000000) == 0 || v86 >= 0) && (v86 & 0x80000) == 0 )
                {
                  if ( g_IsInternalReleaseOrDbg )
                    WdLogNewEntry5_WdTrace(v85);
                  VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                    *(VIDMM_WORKER_THREAD **)v13,
                    (struct _VIDMM_GLOBAL_ALLOC *)v14);
                  VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
                  VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
                  v11 = (GUID *)a8;
                  v10 = a3;
                }
              }
            }
          }
          v87 = 4;
          v88 = **(_DWORD **)(v14 + 504);
          if ( (v88 & 0x20000) != 0 )
          {
            v87 = v12[8];
          }
          else if ( (v88 & 0x40000000) != 0 || v88 < 0 )
          {
            v87 = 3;
          }
          updated = VIDMM_GLOBAL::PageInOneAllocation(v13, v15, v87, a7, v10, v11);
          v26 = updated;
          if ( (updated & 0x80000000) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 504) + 12LL));
          v89 = (_QWORD *)((char *)v13 + 3720);
          v90 = (_QWORD *)*((_QWORD *)v13 + 465);
          if ( v90 != (_QWORD *)((char *)v13 + 3720) )
          {
            do
            {
              v97 = (VIDMM_SEGMENT ***)*(v90 - 7);
              v98 = (VIDMM_DEVICE **)(v90 - 7);
              v90 = (_QWORD *)*v90;
              v99 = *v97;
              v100 = *((_DWORD *)*v97 + 32);
              if ( v100 )
              {
                if ( v100 == 1 )
                  VIDMM_SEGMENT::ReclaimResource(v99[17], (struct _VIDMM_GLOBAL_ALLOC *)v99);
                VIDMM_DEVICE::AddCommitment(v98[1], (struct VIDMM_ALLOC *)v98);
              }
            }
            while ( v90 != v89 );
            v26 = updated;
          }
          v25 = a3;
          *((_QWORD *)v13 + 466) = (char *)v13 + 3720;
          *v89 = v89;
          goto LABEL_74;
        case 207:
          if ( !*((_DWORD *)v15 + 38) && (*((_BYTE *)v15 + 25) & 1) == 0 )
            VIDMM_GLOBAL::EvictOneAllocation(v13, (struct VIDMM_ALLOC *)v15, (v12[8] & 1) != 0);
          _InterlockedDecrement((volatile signed __int32 *)v15 + 41);
          v26 = 0LL;
          v25 = a3;
          goto LABEL_74;
        case 208:
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v14;
          KeEnterCriticalRegion();
          v104 = v14 + 480;
          ExAcquirePushLockExclusiveEx(v14 + 480, 0LL);
          if ( *(_QWORD *)(v14 + 264) )
          {
            VIDMM_GLOBAL::EvictTemporaryAllocation(v105, (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::FlushPagingBufferInternal(v13, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          VIDMM_GLOBAL::CalculateLockData(v13, &v192, v15);
          if ( v192 == 4 )
          {
            v106 = a8;
            v25 = a3;
          }
          else
          {
            KeStackAttachProcess(*v190[1], &ApcState);
            v106 = a8;
            v25 = a3;
            updated = VIDMM_GLOBAL::LockInternal(
                        v13,
                        (struct VIDMM_LOCK2_DATA *)&v192,
                        (struct VIDMM_ALLOC *)v15,
                        *((void ***)v12 + 4),
                        v12[10],
                        a3,
                        a8);
            KeUnstackDetachProcess(&ApcState);
            if ( v192 != 4 )
              goto LABEL_228;
          }
          updated = VIDMM_GLOBAL::LockInternal(
                      v13,
                      (struct VIDMM_LOCK2_DATA *)&v192,
                      (struct VIDMM_ALLOC *)v15,
                      *((void ***)v12 + 4),
                      v12[10],
                      v25,
                      v106);
LABEL_228:
          ExReleasePushLockExclusiveEx(v104, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_229;
        case 209:
          inited = VIDMM_GLOBAL::InitContextAllocation(
                     v13,
                     (struct VIDMM_ALLOC *)v15,
                     1u,
                     v10,
                     (struct VIDMM_ALLOC **)v11);
          v25 = a3;
          v26 = inited;
          updated = inited;
          goto LABEL_74;
        case 210:
          if ( !(((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38))
            || *(_WORD *)(*(_QWORD *)(v14 + 504) + 4LL) >= 2u )
          {
            goto LABEL_198;
          }
          v81 = VIDMM_GLOBAL::PageInOneAllocation(v13, v15, 0LL, a7, v10, v11);
          *(_DWORD *)(v14 + 80) &= ~0x40u;
          v26 = v81;
          v25 = a3;
          updated = v81;
          goto LABEL_74;
        case 211:
          v101 = (_QWORD **)(*((_QWORD *)v12 + 4) + 296LL);
          v179 = v101;
          v102 = *v101;
          if ( *v101 == v101 )
            goto LABEL_198;
          do
          {
            v103 = (_QWORD *)*(v102 - 2);
            if ( v103 != v102 - 2 )
            {
              do
              {
                VIDMM_GLOBAL::EvictOneAllocation(v13, (struct VIDMM_ALLOC *)(v103 - 5), 0);
                v103 = (_QWORD *)*v103;
              }
              while ( v103 != v102 - 2 );
              v101 = v179;
            }
            v102 = (_QWORD *)*v102;
          }
          while ( v102 != v101 );
          v26 = 0LL;
          goto LABEL_117;
        case 212:
          VIDMM_GLOBAL::UpdateAllocationPriority(v13, (struct VIDMM_ALLOC *)v15, v12[8]);
          v26 = 0LL;
          goto LABEL_117;
        case 213:
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v16);
          v93 = 0;
          if ( !*(_QWORD *)(v16 + 176) )
          {
            v93 = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v205,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41240LL));
            VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)v16, v16, 4);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v205);
          }
          if ( v15 )
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v16, (struct VIDMM_ALLOC *)v15);
          else
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v16);
          VIDMM_GLOBAL::EvictFromFaultedList(v94, (struct VIDMM_DEVICE *)v16);
          updated = VIDMM_GLOBAL::PageInFromFaultedList(v13, (struct VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v16);
          if ( v93 )
          {
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v206,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41240LL));
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v95, (struct _LIST_ENTRY *)(v16 + 176));
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v206);
          }
          goto LABEL_198;
        case 214:
          v107 = *(_DWORD *)(v14 + 76);
          v108 = v12[12];
          v109.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v14 + 72);
          v188 = v107 & 0x3F;
          v110 = 1560LL * (v107 & 0x3F);
          v181 = (v107 & 0x80) != 0;
          v111 = v108 >> 1;
          v112 = v110 + *((_QWORD *)v13 + 5023);
          v114 = v108 >> 2;
          v113 = v111 & 1;
          LOBYTE(v114) = v114 & 1;
          v195 = (VIDMM_PROCESS_ADAPTER_INFO *)(v107 & 0x3F);
          v185 = *(_DWORD *)(v14 + 68);
          v186 = v113;
          LODWORD(v190) = v114;
          if ( v113 )
          {
            v115 = v107;
            v185 = v12[9];
            v116 = *(_QWORD *)(v14 + 136);
            if ( v116 )
            {
              if ( *(_DWORD *)(v14 + 128) )
              {
                v117 = (unsigned __int8)(*(_BYTE *)(v116 + 20) - *(_BYTE *)(v112 + 20));
                v118 = v12[9];
                if ( !_bittest((const int *)&v118, v117) )
                {
                  VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                    *(VIDMM_WORKER_THREAD **)v13,
                    (struct _VIDMM_GLOBAL_ALLOC *)v14);
                  VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
                  VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
                  v115 = *(_DWORD *)(v14 + 76);
                  v11 = (GUID *)a8;
                  LOBYTE(v114) = (_BYTE)v190;
                  v113 = v186;
                }
              }
            }
            v110 = 1560LL * v188;
            *(_DWORD *)(v14 + 68) = v185;
            v119 = v115 ^ ((unsigned __int8)v115 ^ (unsigned __int8)(*((_BYTE *)v12 + 53) << 6)) & 0x40;
            *(_DWORD *)(v14 + 76) = v119;
            v181 = *((_BYTE *)v12 + 52);
            v107 = v119 ^ ((unsigned __int8)v119 ^ (unsigned __int8)(v181 << 7)) & 0x80;
            *(_DWORD *)(v14 + 76) = v107;
          }
          v120 = v107;
          v174 = 0;
          if ( (v12[12] & 1) != 0 )
          {
            v121 = *(_DWORD *)v15[12];
            if ( (v121 & 0x8000) == 0 )
            {
              v122 = 1 << (*(_WORD *)(v112 + 28) - *(_BYTE *)(v112 + 20));
              if ( (v12[11] & 1) != 0 )
              {
                LOBYTE(v123) = v107;
                if ( *(_DWORD *)(v14 + 128) )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v14 + 136) + 80LL) & 0x1000) != 0 )
                  {
                    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                      *(VIDMM_WORKER_THREAD **)v13,
                      (struct _VIDMM_GLOBAL_ALLOC *)v14);
                    VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
                    VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
                    v123 = *(_DWORD *)(v14 + 76);
                    v11 = (GUID *)a8;
                    LOBYTE(v114) = (_BYTE)v190;
                  }
                  else
                  {
                    LOBYTE(v123) = v107;
                    v174 = (v121 & 0x10000) != 0;
                  }
                }
                if ( (v123 & 0x40) != 0 )
                  *(_DWORD *)(v14 + 68) &= ~v122;
                *(_DWORD *)v15[12] |= 0x8000u;
                v120 = *(_DWORD *)(v14 + 76);
              }
              v110 = 1560LL * v188;
            }
            v113 = v186;
          }
          if ( !(_BYTE)v114 )
            goto LABEL_267;
          v109.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v12[10];
          v124 = 0LL;
          v125 = 0LL;
          if ( v109.0 )
          {
            if ( (*(_BYTE *)&v109.0 & 0x1F) != 0 )
            {
              v124 = *(_QWORD *)(*((_QWORD *)v13 + 464)
                               + 8LL * ((v12[10] & 0x1F) + *(_DWORD *)(*((_QWORD *)v13 + 5023) + v110 + 20) - 1));
              v110 = 1560LL * v188;
              v181 = *(_BYTE *)(v124 + 80) & 1;
            }
            if ( ((v109.Value >> 6) & 0x1F) != 0 )
              v125 = *(_QWORD *)(*((_QWORD *)v13 + 464)
                               + 8LL
                               * (((v109.Value >> 6) & 0x1F) - 1 + *(_DWORD *)(*((_QWORD *)v13 + 5023) + v110 + 20)));
          }
          v126 = 0;
          if ( !*(_DWORD *)(v14 + 128) )
            goto LABEL_264;
          v127 = *(_QWORD *)(v14 + 136);
          if ( v124 == v127 || v125 == v127 )
          {
            if ( *(_DWORD *)(v14 + 72) == v109.0 || (v128 = *(_QWORD *)(v14 + 104)) == 0 || !*(_QWORD *)(v128 + 8) )
            {
LABEL_264:
              v129 = (*(_DWORD *)(v14 + 76) ^ (v181 << 10)) & 0x400;
              *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72) = v109;
              *(_DWORD *)(v14 + 76) ^= v129;
              v120 = *(_DWORD *)(v14 + 76);
              if ( v126 )
              {
                VidMmRecordAlloc(v13, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
                v120 = *(_DWORD *)(v14 + 76);
                v11 = (GUID *)a8;
              }
              v113 = v186;
              LOBYTE(v114) = (_BYTE)v190;
LABEL_267:
              v130 = v120;
              v131 = (unsigned __int8)(v120 >> 12);
              v182 = v131;
              if ( (_BYTE)v114 && v113 )
              {
                v132 = v120 ^ (v120 ^ (v12[8] << 12)) & 0xF0000;
                *(_DWORD *)(v14 + 76) = v132;
                v130 = v132 ^ ((unsigned __int16)v132 ^ (unsigned __int16)((unsigned __int16)v12[8] << 12)) & 0xF000u;
                *(_DWORD *)(v14 + 76) = v130;
              }
              if ( (_BYTE)v114 != v113 )
              {
                if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                        (VIDMM_GLOBAL *)v130,
                        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72),
                        v185) )
                {
                  v135 = WdLogNewEntry5_WdAssertion(v134, v133);
                  *(_QWORD *)(v135 + 24) = 11012LL;
                  WdLogEvent5_WdAssertion(v135);
                  VidSchMarkDeviceAsError((__int64)v15[1][4], 21LL, 0);
                }
                MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(v13, v188, v109, &v189);
                v191 = 0;
                if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                        v13,
                        v188,
                        v185,
                        MostPreferredSegment,
                        (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v191) )
                {
                  v139 = WdLogNewEntry5_WdAssertion(v138, v137);
                  *(_QWORD *)(v139 + 24) = 11024LL;
                  WdLogEvent5_WdAssertion(v139);
                  VidSchMarkDeviceAsError((__int64)v15[1][4], 21LL, 0);
                }
                v11 = (GUID *)a8;
                v131 = v182;
                LODWORD(v130) = *(_DWORD *)(v14 + 76) ^ (*(_DWORD *)(v14 + 76) ^ (v191 << 12)) & 0xF0000 ^ (*(_WORD *)(v14 + 76) ^ (unsigned __int16)((_WORD)v191 << 12)) & 0xF000;
                *(_DWORD *)(v14 + 76) = v130;
              }
              v140 = v131 >> 4;
              if ( (v131 >> 4 != (WORD1(v130) & 0xF)
                 || (((unsigned __int8)v131 ^ (unsigned __int8)((unsigned int)v130 >> 12)) & 0xF) != 0)
                && *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v141 = *(_DWORD *)(v14 + 76) & 0x3F;
                v195 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 104) + 8LL) + 16LL)
                                                      + 8LL * (_QWORD)v195);
                v142 = *((_QWORD *)v195 + 6) + 296 * v141;
                DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                  (DXGAUTOPUSHLOCKEXCLUSIVE *)v207,
                  (struct _KTHREAD **)v195 + 45);
                VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v195);
                v146 = *(_DWORD *)(v14 + 76);
                if ( (((unsigned __int8)v182 ^ (unsigned __int8)(v146 >> 12)) & 0xF) != 0 )
                {
                  *(_QWORD *)(v142 + 8LL * (v182 & 0xF) + 136) -= *(_QWORD *)(v14 + 16);
                  v143 = (unsigned __int8)HIBYTE(*(_WORD *)(v14 + 76)) >> 4;
                  *(_QWORD *)(v142 + 8 * v143 + 136) += *(_QWORD *)(v14 + 16);
                  v146 = *(_DWORD *)(v14 + 76);
                }
                if ( v140 != (HIWORD(v146) & 0xF) )
                {
                  *(_QWORD *)(v142 + 8LL * ((unsigned __int8)v182 >> 4) + 72) -= *(_QWORD *)(v14 + 16);
                  v147 = v142 + 8LL * (*(_WORD *)(v14 + 78) & 0xF);
                  *(_QWORD *)(v147 + 72) += *(_QWORD *)(v14 + 16);
                }
                VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v145, v143, v144);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v207);
                v11 = (GUID *)a8;
              }
              v12[12] &= 0xFFFFFFF8;
              if ( v174 && *(_QWORD *)(v14 + 136) )
              {
                VIDMM_GLOBAL::NotifyResidency(v13, (struct _VIDMM_GLOBAL_ALLOC *)v14, 1u);
                v11 = (GUID *)a8;
              }
              if ( *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v148 = *(_QWORD *)(v14 + 504);
                v25 = a3;
                if ( *(_WORD *)(v148 + 4) >= 2u )
                {
LABEL_229:
                  v26 = updated;
                }
                else
                {
                  v149 = VIDMM_GLOBAL::PageInOneAllocation(v13, v15, 0LL, a7, a3, v11);
                  v26 = v149;
                  updated = v149;
                }
                goto LABEL_74;
              }
              goto LABEL_198;
            }
            v126 = 1;
            VidMmRecordAlloc(v13, v14, *(_QWORD *)(v14 + 104), v127, *(_QWORD *)(v14 + 16), 1);
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)v13,
              (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::EvictAllocation(v13, (struct VIDMM_ALLOC *)v15);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(v13);
          }
          v11 = (GUID *)a8;
          goto LABEL_264;
        case 215:
          v150 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v12 + 4);
          v151 = 0;
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v208,
            (struct _KTHREAD **)v13 + 4994);
          if ( *((_QWORD *)v150 + 52) )
          {
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v13, v150);
            v151 = 1;
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v208);
          if ( v151 )
            VIDMM_GLOBAL::DecommitGlobalAllocation(v13, v150);
          v25 = a3;
          v26 = 0LL;
          updated = 0;
          goto LABEL_74;
        default:
          v152 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, 0x1C0000000uLL);
          v152[5] = v187;
          v152[3] = 270LL;
          v152[4] = 5LL;
          v152[6] = -1073741811LL;
          v152[7] = 0LL;
          WdLogEvent5_WdCriticalError(v152);
          v25 = a3;
          v26 = 0LL;
          goto LABEL_74;
      }
    }
    v64 = **v15;
    if ( !*((_DWORD *)v64 + 86) )
    {
LABEL_112:
      if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
        v65 = 1;
      else
        v65 = v8;
      if ( v65 | *((_DWORD *)v15 + 38) && *(_WORD *)(*((_QWORD *)v64 + 63) + 4LL) < 2u )
      {
        v66 = VIDMM_GLOBAL::PageInOneAllocation(v13, v15, 0LL, a7, v10, v11);
        v26 = v66;
        updated = v66;
LABEL_117:
        v25 = a3;
        goto LABEL_74;
      }
LABEL_198:
      v26 = updated;
      goto LABEL_117;
    }
    if ( !VIDMM_GLOBAL::NeedsApertureForLock(v13, **v15) || (*((_DWORD *)v64 + 19) & 0x40) != 0 )
    {
      v11 = (GUID *)a8;
      goto LABEL_112;
    }
    v153 = WdLogNewEntry5_WdWarning(v79, v78);
    *(_QWORD *)(v153 + 24) = v64;
    WdLogEvent5_WdWarning(v153);
    v26 = 3221225473LL;
LABEL_190:
    updated = v26;
    goto LABEL_117;
  }
  v25 = a3;
  updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
              (VIDMM_GLOBAL *)v23,
              (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)(v12 + 8),
              (struct VIDMM_ALLOC **)v11);
  v26 = updated;
  if ( updated == -1073741267 )
  {
    *a3 = 1;
    goto LABEL_212;
  }
LABEL_74:
  if ( !*v25 )
  {
    v50 = (_DWORD *)*((_QWORD *)v12 + 3);
    if ( v50 )
      *v50 = v26;
    v194 = v197;
    v51 = 0;
    v193 = a5;
    *((_QWORD *)v13 + 466) = (char *)v13 + 3720;
    *((_QWORD *)v13 + 465) = (char *)v13 + 3720;
    if ( *((_DWORD *)v13 + 1748) )
    {
      do
      {
        v52 = 0;
        v53 = 1560LL * v51;
        if ( *(_DWORD *)(*((_QWORD *)v13 + 5023) + v53 + 24) )
        {
          do
          {
            v54 = *(_QWORD *)(*((_QWORD *)v13 + 464) + 8LL * (v52 + *(_DWORD *)(*((_QWORD *)v13 + 5023) + v53 + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 160LL))(v54);
            ++v52;
          }
          while ( v52 < *(_DWORD *)(*((_QWORD *)v13 + 5023) + v53 + 24) );
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p(v26, &EventPagingEndPreparation, v11, *((_QWORD *)v13 + v51 + 143));
        if ( *((_DWORD *)v13 + v51 + 414) != *((_DWORD *)v13 + v51 + 478)
          || *((_DWORD *)v13 + v51 + 542) != *((_DWORD *)v13 + v51 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(v13, v51, 0, 0LL, 0LL, 0, 0);
        }
        v26 = *((_QWORD *)v13 + v51 + 143);
        if ( v26 )
          *(_DWORD *)(v26 + 172) = *(_DWORD *)(v26 + 168);
        ++v51;
      }
      while ( v51 < *((_DWORD *)v13 + 1748) );
      v15 = v198;
    }
    v55 = (_QWORD **)((char *)v13 + 41424);
    if ( *v55 != v55 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v13, 0xFFFFFFFF);
      v165 = *v55;
      if ( *v55 != v55 )
      {
        while ( 1 )
        {
          v166 = (_QWORD *)*v165;
          v167 = v165 - 36;
          if ( *(_QWORD **)(*v165 + 8LL) != v165 )
            break;
          v168 = (_QWORD *)v165[1];
          if ( (_QWORD *)*v168 != v165 )
            break;
          *v168 = v166;
          v166[1] = v168;
          *v165 = 0LL;
          v165 = v166;
          if ( (*((_DWORD *)v167 + 13) & 7) != 0 )
          {
            v169 = v167[4];
            v170 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v168, v164);
            v170[3] = 270LL;
            v170[4] = 63LL;
            v170[5] = v167;
            v170[6] = v169;
            v170[7] = 0LL;
            WdLogEvent5_WdCriticalError(v170);
          }
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v167);
          if ( v165 == v55 )
            goto LABEL_89;
        }
LABEL_311:
        __fastfail(3u);
      }
    }
LABEL_89:
    if ( *((_BYTE *)v13 + 41440) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)v13 + 2) + 528LL), 0xFFFFFFFFLL);
      *((_BYTE *)v13 + 41440) = 0;
    }
    if ( !a4 )
      goto LABEL_97;
    v56 = *((_QWORD *)v13 + 2);
    v196 = 0;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v60 = *(_QWORD *)(v56 + 528);
    v61 = 0;
    if ( *(_BYTE *)(v60 + 55) )
    {
      v59 = *(_QWORD **)(v60 + 264);
      if ( !*v59 )
      {
        VidSchSignalSyncObjectsFromCpu(1LL, &v194, 0LL, (char *)&v193);
LABEL_95:
        v26 = *((unsigned int *)v13 + 1748);
        if ( (unsigned int)v26 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)v13 + 2) + 528LL),
            v194,
            v193,
            (unsigned int)((1 << v26) - 1));
LABEL_97:
        *((_QWORD *)v13 + 877) = 0LL;
        *((_QWORD *)v13 + 878) = 0LL;
        *((_DWORD *)v13 + 2) = 0;
        goto LABEL_98;
      }
      v61 = *(_DWORD *)(v60 + 64);
    }
    else
    {
      v57 = *(unsigned int *)(v60 + 64);
      v58 = *(__int64 **)(v60 + 248);
    }
    VidSchSignalSyncObjectsFromGpu(v61, (__int64)v59, v57, v58, 1u, (void **)&v194, 0, &v193);
    goto LABEL_95;
  }
LABEL_212:
  VIDMM_GLOBAL::EndPreparation(v13, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
LABEL_98:
  if ( *v12 == 200 )
  {
    v62 = (struct _KEVENT *)(*((_QWORD *)v12 + 2) + 72LL);
LABEL_105:
    KeSetEvent(v62, 0, 0);
    goto LABEL_106;
  }
  if ( !*a3 && v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v26) + 24) = v15;
    v62 = (struct _KEVENT *)(v15 + 21);
    goto LABEL_105;
  }
LABEL_106:
  result = updated;
  v12[19] = updated;
  return result;
}
