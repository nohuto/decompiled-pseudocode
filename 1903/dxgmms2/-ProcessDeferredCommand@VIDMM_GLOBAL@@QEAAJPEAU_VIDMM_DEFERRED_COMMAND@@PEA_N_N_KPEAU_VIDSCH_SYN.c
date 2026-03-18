/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077D20
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0087740 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00B4B10 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4BCC (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001EB4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000257C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004C60 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001174C (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00117F4 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0014560 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchCancelDeviceCommand @ 0x1C00325E0 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00336D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A534 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A718 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D3F0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005ED50 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00605E4 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00606C0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060748 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0060874 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00638C0 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0063E94 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063FC4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0064054 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006A934 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A9D0 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C900 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0070568 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00707AC (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0070BF4 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0070C50 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C00774F0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C42C (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C5E4 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C71C (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C9DC (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007EF68 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C007F194 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00807B8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0080804 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0080A70 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0082F28 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0084468 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00AA930 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAFA0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABD2C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABD74 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00ABE78 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00AE17C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AEF18 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AEF48 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00AFE60 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B03CC (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B08C4 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B31CC (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B4D70 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00CA258 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00CCE04 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        __int64 a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  unsigned int v8; // r10d
  bool v9; // di
  bool *v10; // r9
  GUID *v11; // r8
  int *v12; // r15
  __int64 v14; // r13
  struct _VIDMM_GLOBAL_ALLOC ***v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r12
  int v18; // eax
  unsigned int v19; // r12d
  bool v20; // zf
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r12
  bool *v24; // r13
  int inited; // r12d
  int v26; // eax
  __int64 v27; // r12
  __int64 v28; // r12
  __int64 v29; // rcx
  const GUID *v30; // r8
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // r12
  int v32; // ecx
  const GUID *v33; // r8
  struct _VIDMM_GLOBAL_ALLOC **v34; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v35; // rax
  struct _VIDMM_GLOBAL_ALLOC **v36; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v37; // rdx
  VIDMM_GLOBAL *v38; // rcx
  char v39; // bl
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 *v44; // rbx
  VIDMM_GLOBAL *v45; // rcx
  struct _VIDMM_LOCAL_ALLOC *v46; // rbx
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 *v49; // r13
  __int64 v50; // rax
  int *v51; // rax
  unsigned int v52; // r13d
  unsigned int v53; // ebx
  __int64 v54; // rdi
  __int64 v55; // rcx
  _QWORD **v56; // rdi
  int v57; // r8d
  _QWORD *v58; // r9
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // eax
  struct _KEVENT *v62; // rcx
  __int64 result; // rax
  struct _VIDMM_GLOBAL_ALLOC *v64; // rbx
  VIDMM_DEVICE *v65; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v66; // rcx
  __int64 v67; // r9
  VIDMM_DEVICE *v68; // r8
  struct _VIDMM_GLOBAL_ALLOC ***v69; // rax
  char v70; // al
  __int64 v71; // rax
  bool v72; // al
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  int v80; // r9d
  int v81; // r9d
  int v82; // r9d
  __int64 **v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  signed int v86; // ecx
  int v87; // edx
  __int64 v88; // rax
  int v89; // eax
  VIDMM_GLOBAL *v90; // rbx
  VIDMM_GLOBAL *v91; // rdi
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  char v94; // r12
  VIDMM_GLOBAL *v95; // rcx
  VIDMM_GLOBAL *v96; // rcx
  __int64 v97; // rax
  __int64 *v98; // rax
  VIDMM_DEVICE **v99; // r12
  int v100; // eax
  _QWORD **v101; // r13
  _QWORD *v102; // rbx
  _QWORD *i; // rdi
  __int64 v104; // rdi
  VIDMM_GLOBAL *v105; // rcx
  struct VIDMM_ALLOC **v106; // rbx
  int v107; // edx
  unsigned int v108; // r11d
  __int64 v109; // rbx
  int v110; // r10d
  struct _D3DDDI_SEGMENTPREFERENCE v111; // edi
  __int64 v112; // rcx
  __int64 v113; // rbx
  unsigned int v114; // eax
  unsigned __int8 v115; // r12
  char v116; // r11
  __int64 v117; // rcx
  int v118; // r9d
  int v119; // eax
  unsigned int v120; // r9d
  int v121; // r10d
  int v122; // ebx
  int v123; // eax
  __int64 v124; // r10
  __int64 v125; // r11
  char v126; // bl
  __int64 v127; // r9
  __int64 v128; // rcx
  int v129; // eax
  char v130; // dl
  unsigned __int64 v131; // rcx
  unsigned __int64 v132; // rbx
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rdi
  const GUID *v143; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v144; // r10
  unsigned int v145; // r9d
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // rax
  struct _VIDMM_GLOBAL_ALLOC *v150; // rbx
  char v151; // di
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
  unsigned int v176; // [rsp+50h] [rbp-B0h]
  int v178; // [rsp+64h] [rbp-9Ch]
  char v179; // [rsp+64h] [rbp-9Ch]
  struct _VIDMM_LOCAL_ALLOC *v180; // [rsp+68h] [rbp-98h]
  unsigned int v181; // [rsp+68h] [rbp-98h]
  __int64 v182; // [rsp+70h] [rbp-90h]
  __int64 v183; // [rsp+70h] [rbp-90h]
  bool v184; // [rsp+78h] [rbp-88h] BYREF
  VIDMM_DEVICE *v185; // [rsp+80h] [rbp-80h]
  int v186; // [rsp+88h] [rbp-78h] BYREF
  int v187; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v188; // [rsp+98h] [rbp-68h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v189; // [rsp+A0h] [rbp-60h] BYREF
  VIDMM_PROCESS_ADAPTER_INFO *v190; // [rsp+A8h] [rbp-58h]
  union _LARGE_INTEGER Interval; // [rsp+B0h] [rbp-50h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v192; // [rsp+B8h] [rbp-48h]
  struct _VIDMM_GLOBAL_ALLOC ***v193; // [rsp+C0h] [rbp-40h]
  char v194[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v195; // [rsp+D0h] [rbp-30h]
  int v196; // [rsp+D8h] [rbp-28h]
  char v197[8]; // [rsp+E0h] [rbp-20h] BYREF
  char *v198; // [rsp+E8h] [rbp-18h]
  int v199; // [rsp+F0h] [rbp-10h]
  _BYTE v200[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v201[24]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v202[24]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v203[32]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v204[18]; // [rsp+160h] [rbp+60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = a3;
  v11 = (GUID *)a8;
  v12 = (int *)a2;
  v192 = a6;
  v14 = 0LL;
  v185 = 0LL;
  *a8 = 0LL;
  v15 = *(struct _VIDMM_GLOBAL_ALLOC ****)(a2 + 16);
  v193 = v15;
  v180 = 0LL;
  if ( v15 )
  {
    v185 = (VIDMM_DEVICE *)*v15;
    v14 = *(_QWORD *)v185;
    v9 = (*(_DWORD *)(*(_QWORD *)v185 + 76LL) & 0x20000000) != 0;
    v180 = *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v185 + 104LL);
  }
  v16 = *(_QWORD *)(a2 + 8);
  v173 = 0;
  updated = 0;
  v182 = v16;
  if ( !v16 )
  {
    v16 = (__int64)v15[1];
    v182 = v16;
  }
  *v10 = 0;
  v17 = *((int *)this + 2);
  v18 = *(_DWORD *)a2;
  v178 = *(_DWORD *)a2;
  if ( (_DWORD)v17 )
  {
    v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v92[3] = 270LL;
    v92[4] = 64LL;
    v92[5] = this;
    v92[6] = v17;
    v92[7] = v178;
    WdLogEvent5_WdCriticalError(v92);
    v18 = v178;
    v8 = 0;
    v11 = (GUID *)a8;
    v10 = a3;
  }
  ++*((_QWORD *)this + 575);
  v19 = 0;
  v20 = *((_DWORD *)this + 1748) == 0;
  *((_DWORD *)this + 2) = v18;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 877) = v16;
  *((_QWORD *)this + 878) = v15;
  if ( !v20 )
  {
    do
    {
      v21 = v19;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0p((__int64)this, &EventPagingStartPreparation, v11, *((_QWORD *)this + v19 + 143));
        v8 = 0;
      }
      if ( *((_DWORD *)this + v19 + 414) != *((_DWORD *)this + v19 + 478)
        || *((_DWORD *)this + v19 + 542) != *((_DWORD *)this + v19 + 606) )
      {
        v93 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
        v93[3] = 270LL;
        v93[4] = 33LL;
        v93[5] = this;
        v93[6] = 0LL;
        v93[7] = 0LL;
        WdLogEvent5_WdCriticalError(v93);
        v8 = 0;
      }
      ++v19;
      *((_DWORD *)this + v21 + 1022) = *((_DWORD *)this + v21 + 414);
      *((_DWORD *)this + v21 + 1086) = *((_DWORD *)this + v21 + 542);
      *((_DWORD *)this + v21 + 958) = 0;
    }
    while ( v19 < *((_DWORD *)this + 1748) );
    v16 = v182;
    v11 = (GUID *)a8;
    v10 = a3;
  }
  v22 = *(_QWORD *)(v16 + 32);
  if ( *(_BYTE *)(v22 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 200), 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2502LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 777LL) )
  {
    v12[19] = -1071775232;
    *((_BYTE *)v12 + 72) = 1;
  }
  else if ( !*((_BYTE *)v12 + 72) )
  {
    goto LABEL_19;
  }
  v22 = (unsigned int)(*v12 - 203);
  if ( (unsigned int)v22 <= 0xB )
  {
    a2 = 2281LL;
    if ( _bittest((const int *)&a2, v22) )
    {
      inited = v12[19];
      goto LABEL_198;
    }
  }
  if ( *v12 == 113 )
    *((_BYTE *)v12 + 64) = 0;
LABEL_19:
  v23 = *v12;
  if ( (_DWORD)v23 == 200 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v15;
    if ( *((_DWORD *)v15 + 26) || *((_DWORD *)v15 + 39) )
    {
      v154 = *((int *)v15 + 26);
      v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, a2);
      v155[3] = 270LL;
      v155[4] = 42LL;
      v155[5] = this;
      v155[6] = v15;
      v155[7] = v154;
      WdLogEvent5_WdCriticalError(v155);
      v16 = v182;
    }
    v26 = *((_DWORD *)v15 + 7) & 3;
    if ( v26 == 2 )
    {
      VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v15, 0, 0LL, 0LL);
    }
    else if ( v26 == 1 )
    {
      a2 = (__int64)v15[7];
      v76 = v15 + 7;
      if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(a2 + 8) != v15 + 7 )
        goto LABEL_322;
      v22 = (__int64)v15[8];
      if ( *(_QWORD **)v22 != v76 )
        goto LABEL_322;
      *(_QWORD *)v22 = a2;
      *(_QWORD *)(a2 + 8) = v22;
      *((_DWORD *)v15 + 7) &= 0xFFFFFFFC;
      v15[8] = 0LL;
      *v76 = 0LL;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
      VIDMM_GLOBAL::UnpinOneAllocation(this, v15, 3LL);
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 && g_IsInternalRelease )
    {
      v156 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, a2);
      v156[5] = 0LL;
      v156[6] = 0LL;
      v156[7] = 0LL;
      v156[3] = 270LL;
      v156[4] = 9LL;
      WdLogEvent5_WdCriticalError(v156);
    }
    if ( v15 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v16 + 240) )
      *(_QWORD *)(v16 + 240) = 0LL;
    v27 = *(_QWORD *)(v16 + 16);
    v20 = v27 == -360;
    v28 = v27 + 360;
    v195 = v28;
    if ( !v20 && *(struct _KTHREAD **)(v28 + 8) == KeGetCurrentThread() )
    {
      v157 = WdLogNewEntry5_WdAssertion(v22, a2);
      *(_QWORD *)(v157 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v157);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v81 = *(_DWORD *)(v28 + 16);
        if ( v81 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v29, (const EVENT_DESCRIPTOR *)"g", v30, v81);
      }
      ExAcquirePushLockExclusiveEx(v28, 0LL);
    }
    *(_QWORD *)(v28 + 8) = KeGetCurrentThread();
    NewAllocOwner = 0LL;
    v20 = (*((_BYTE *)v15 + 25) & 1) == 0;
    v196 = 2;
    v32 = !v20;
    if ( v32 | *((_DWORD *)v15 + 38) )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16));
      if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)v15) )
        VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)v16, (__int64 **)v15);
      v34 = v15[14];
      v35 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14);
      if ( v34[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v15 + 14) )
        goto LABEL_322;
      v36 = v15[15];
      if ( *v36 != v35 )
        goto LABEL_322;
      *v36 = (struct _VIDMM_GLOBAL_ALLOC *)v34;
      v34[1] = (struct _VIDMM_GLOBAL_ALLOC *)v36;
      v37 = *(struct _VIDMM_GLOBAL_ALLOC ***)(v16 + 168);
      if ( *v37 != (struct _VIDMM_GLOBAL_ALLOC *)(v16 + 160) )
        goto LABEL_322;
      *(_QWORD *)v35 = v16 + 160;
      v15[15] = v37;
      *v37 = v35;
      *(_QWORD *)(v16 + 168) = v35;
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v16 + 16), (__int64)v37, v33);
    }
    *((_DWORD *)v15 + 38) = 0;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v194);
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 320));
    if ( *((int *)v15[12] + 2) > 0 )
    {
      memset(v204, 0, 0x88uLL);
      v158 = *(_QWORD *)(v16 + 32);
      LODWORD(v204[5]) = 3;
      v204[6] = v15;
      VidSchCancelDeviceCommand(v158, (__int64)v204, 1, 0);
    }
    v39 = 0;
    if ( (**(_DWORD **)(v14 + 504) & 0x20000000) != 0 )
    {
      v65 = (VIDMM_DEVICE *)*v15;
      v66 = (*v15)[5];
      v67 = (__int64)(*v15 + 5);
      v68 = (VIDMM_DEVICE *)*v15;
      if ( v66 == (struct _VIDMM_GLOBAL_ALLOC *)v67 )
      {
LABEL_124:
        v70 = 1;
      }
      else
      {
        while ( 1 )
        {
          v69 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v66 - 40);
          v66 = *(struct _VIDMM_GLOBAL_ALLOC **)v66;
          if ( v69 != v15 && (*((_DWORD *)v69 + 7) & 4) == 0 )
            break;
          v68 = (VIDMM_DEVICE *)*v15;
          if ( v66 == (struct _VIDMM_GLOBAL_ALLOC *)v67 )
            goto LABEL_124;
        }
        v70 = 0;
      }
      if ( !v70 )
        goto LABEL_53;
      if ( v68 != v180 )
      {
        *((_BYTE *)v65 + 32) |= 2u;
LABEL_53:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 320));
        if ( v39 )
        {
          v198 = (char *)this + 39952;
          if ( this != (VIDMM_GLOBAL *)-39952LL && *((struct _KTHREAD **)this + 4995) == KeGetCurrentThread() )
          {
            v159 = WdLogNewEntry5_WdAssertion(v41, v40);
            *(_QWORD *)(v159 + 24) = 1448LL;
            WdLogEvent5_WdAssertion(v159);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39952, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v82 = *((_DWORD *)this + 9992);
              if ( v82 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v42, (const EVENT_DESCRIPTOR *)"g", v43, v82);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 39952, 0LL);
          }
          *((_QWORD *)this + 4995) = KeGetCurrentThread();
          v44 = (__int64 *)(v14 + 416);
          v20 = *(_QWORD *)(v14 + 416) == 0LL;
          v199 = 2;
          if ( !v20 )
          {
            v160 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 208LL);
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
              v160,
              (struct _VIDMM_GLOBAL_ALLOC *)v14,
              *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v180 + 1) + 16LL) + 8LL * (_QWORD)v160));
            if ( NewAllocOwner )
            {
              v161 = *(unsigned int *)(*((_QWORD *)this + 3) + 208LL);
              v162 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v161) + 416LL;
              v163 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v161) + 424LL);
              if ( *v163 != (__int64 *)v162 )
                goto LABEL_322;
              *v44 = v162;
              *(_QWORD *)(v14 + 424) = v163;
              *v163 = v44;
              *(_QWORD *)(v162 + 8) = v44;
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v197);
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
            v46 = v180;
            LOBYTE(v171) = 1;
            (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v45 + 48LL))(
              v45,
              v14,
              0LL,
              0LL,
              v171,
              v180);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          else
          {
            v46 = v180;
          }
          if ( *(_QWORD *)(v14 + 264) )
            VIDMM_GLOBAL::EvictTemporaryAllocation(v45, (struct _VIDMM_GLOBAL_ALLOC *)v14);
          if ( (*(_DWORD *)(v14 + 84) & 2) != 0 )
          {
            VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, v46);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v14 + 8));
            *(_DWORD *)(v14 + 84) &= ~2u;
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39952, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v80 = *((_DWORD *)this + 9992);
              if ( v80 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v47, (const EVENT_DESCRIPTOR *)"g", v48, v80);
            }
            ExAcquirePushLockExclusiveEx((char *)this + 39952, 0LL);
          }
          v49 = (__int64 *)(v14 + 400);
          *((_QWORD *)this + 4995) = KeGetCurrentThread();
          v50 = *v49;
          if ( *v49 )
          {
            if ( *(__int64 **)(v50 + 8) != v49 )
              goto LABEL_322;
            v83 = (__int64 **)v49[1];
            if ( *v83 != v49 )
              goto LABEL_322;
            *v83 = (__int64 *)v50;
            *(_QWORD *)(v50 + 8) = v83;
            *v49 = 0LL;
          }
          *((_QWORD *)this + 4995) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 39952, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v15 + 7) |= 4u;
        v22 = (__int64)v15[24];
        if ( v22 && _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 32), 0xFFFFFFFF) == 1 )
          ADAPTER_RENDER::NotifyDeferredDestructionComplete(
            *((ADAPTER_RENDER **)this + 2),
            (struct DXGTERMINATIONTRACKER *)v15[24]);
        inited = 0;
        v24 = a3;
        goto LABEL_77;
      }
      v71 = WdLogNewEntry5_WdEvent(v66, v65);
      *(_QWORD *)(v71 + 24) = v14;
      *(_QWORD *)(v71 + 32) = v15;
      WdLogEvent5_WdEvent(v71);
      *((_BYTE *)v180 + 32) |= 2u;
      NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v14);
      VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v14, v180);
      v72 = VIDMM_GLOBAL::TransferAllocationOwnership(this, (struct VIDMM_ALLOC *)v15, v180, NewAllocOwner);
      v74 = *(unsigned int *)(v14 + 84);
      v173 = !v72;
      if ( (v74 & 4) != 0 )
        NewAllocOwner = *(struct _VIDMM_LOCAL_ALLOC **)(v14 + 104);
      v75 = WdLogNewEntry5_WdEvent(v74, v73);
      *(_QWORD *)(v75 + 24) = *(_QWORD *)(v14 + 104);
      WdLogEvent5_WdEvent(v75);
    }
    else
    {
      v173 = 1;
    }
    v39 = 1;
    if ( (*(_BYTE *)(v14 + 92) & 3) == 3 )
    {
      VIDMM_GLOBAL::TransferAllocationDecommit(v38, (struct _VIDMM_GLOBAL_ALLOC *)v14, v180, NewAllocOwner);
      v39 = 1;
    }
    goto LABEL_53;
  }
  if ( (_DWORD)v23 != 113 )
  {
    if ( (_DWORD)v23 != 206 )
    {
      switch ( (int)v23 )
      {
        case 119:
          updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                      this,
                      *((PVOID *)v12 + 4),
                      (struct VIDMM_ALLOC **)v11);
          inited = updated;
          if ( updated != -1073741267 )
            goto LABEL_120;
          *a3 = 1;
          goto LABEL_222;
        case 203:
          if ( g_IsInternalReleaseOrDbg )
          {
            v97 = WdLogNewEntry5_WdTrace(v22);
            v11 = (GUID *)a8;
            v10 = a3;
            *(_QWORD *)(v97 + 24) = v15;
          }
          if ( *(_BYTE *)(v14 + 96) )
          {
            inited = -1071775482;
            goto LABEL_198;
          }
          v84 = *(unsigned int *)(*(_QWORD *)(v14 + 504) + 12LL);
          if ( !(_DWORD)v84 && (**(_DWORD **)(v14 + 504) & 0x20000) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v84);
              v11 = (GUID *)a8;
              v10 = a3;
            }
            if ( *(_QWORD *)(v14 + 136) )
            {
              v85 = **(unsigned int **)(v14 + 504);
              if ( (v85 & 0x40000000) == 0 && ((v85 & 0x20000000) == 0 || (int)v85 >= 0) && (v85 & 0x80000) == 0 )
              {
                if ( g_IsInternalReleaseOrDbg )
                  WdLogNewEntry5_WdTrace(v85);
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v14);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                v11 = (GUID *)a8;
                v10 = a3;
              }
            }
          }
          v86 = 4;
          v87 = **(_DWORD **)(v14 + 504);
          if ( (v87 & 0x20000) != 0 )
          {
            v86 = v12[8];
          }
          else if ( (v87 & 0x40000000) != 0 || v87 < 0 )
          {
            v86 = 3;
          }
          v88 = *((_QWORD *)v12 + 5);
          if ( v88 != -1 )
          {
            *(_DWORD *)(v14 + 80) |= 0x800u;
            v88 = *((_QWORD *)v12 + 5);
          }
          v89 = VIDMM_GLOBAL::PageInOneAllocation(
                  (__int64)this,
                  (__int64 **)v15,
                  v86,
                  a7,
                  v10,
                  (struct VIDMM_ALLOC **)v11,
                  v12[9],
                  v88);
          *(_DWORD *)(v14 + 80) &= ~0x800u;
          inited = v89;
          updated = v89;
          if ( v89 >= 0 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 504) + 12LL));
          v90 = (VIDMM_GLOBAL *)((char *)this + 3720);
          v91 = (VIDMM_GLOBAL *)*((_QWORD *)this + 465);
          if ( v91 != (VIDMM_GLOBAL *)((char *)this + 3720) )
          {
            do
            {
              v98 = (__int64 *)*((_QWORD *)v91 - 7);
              v99 = (VIDMM_DEVICE **)((char *)v91 - 56);
              v91 = *(VIDMM_GLOBAL **)v91;
              v22 = *v98;
              v100 = *(_DWORD *)(*v98 + 128);
              if ( v100 )
              {
                if ( v100 == 1 )
                  VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v22 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v22);
                VIDMM_DEVICE::AddCommitment(v99[1], (struct VIDMM_ALLOC *)v99);
              }
            }
            while ( v91 != v90 );
            inited = updated;
          }
          v24 = a3;
          *((_QWORD *)this + 466) = (char *)this + 3720;
          *(_QWORD *)v90 = v90;
          goto LABEL_77;
        case 207:
          if ( !*((_DWORD *)v15 + 38) && (*((_BYTE *)v15 + 25) & 1) == 0 )
          {
            LOBYTE(v11) = (v12[8] & 1) != 0;
            VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)v15, v11);
          }
          _InterlockedDecrement((volatile signed __int32 *)v15 + 41);
          inited = 0;
          v24 = a3;
          goto LABEL_77;
        case 208:
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v14;
          KeEnterCriticalRegion();
          v104 = v14 + 480;
          ExAcquirePushLockExclusiveEx(v14 + 480, 0LL);
          if ( *(_QWORD *)(v14 + 264) )
          {
            VIDMM_GLOBAL::EvictTemporaryAllocation(v105, (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          VIDMM_GLOBAL::CalculateLockData(this, &v187, v15);
          if ( v187 == 4 )
          {
            v106 = a8;
            v24 = a3;
          }
          else
          {
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(**((PRKPROCESS **)v185 + 1), &ApcState);
            v106 = a8;
            v24 = a3;
            updated = VIDMM_GLOBAL::LockInternal(
                        this,
                        (struct VIDMM_LOCK2_DATA *)&v187,
                        (struct VIDMM_ALLOC *)v15,
                        *((void ***)v12 + 4),
                        v12[10],
                        a3,
                        a8);
            inited = updated;
            KeUnstackDetachProcess(&ApcState);
            if ( v187 != 4 )
              goto LABEL_237;
          }
          inited = VIDMM_GLOBAL::LockInternal(
                     this,
                     (struct VIDMM_LOCK2_DATA *)&v187,
                     (struct VIDMM_ALLOC *)v15,
                     *((void ***)v12 + 4),
                     v12[10],
                     v24,
                     v106);
          updated = inited;
LABEL_237:
          ExReleasePushLockExclusiveEx(v104, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_77;
        case 209:
          v24 = a3;
          inited = VIDMM_GLOBAL::InitContextAllocation(
                     (ADAPTER_RENDER **)this,
                     (__int64 **)v15,
                     1,
                     v10,
                     (struct VIDMM_ALLOC **)v11);
          updated = inited;
          goto LABEL_77;
        case 210:
          v22 = (*((_BYTE *)v15 + 25) & 1) != 0;
          if ( !((unsigned int)v22 | *((_DWORD *)v15 + 38)) || *(_WORD *)(*(_QWORD *)(v14 + 504) + 4LL) >= 2u )
            goto LABEL_206;
          v79 = VIDMM_GLOBAL::PageInOneAllocation(
                  (__int64)this,
                  (__int64 **)v15,
                  0,
                  a7,
                  v10,
                  (struct VIDMM_ALLOC **)v11,
                  0,
                  -1LL);
          *(_DWORD *)(v14 + 80) &= ~0x40u;
          inited = v79;
          v24 = a3;
          updated = v79;
          goto LABEL_77;
        case 211:
          v101 = (_QWORD **)(*((_QWORD *)v12 + 4) + 296LL);
          v102 = *v101;
          if ( *v101 == v101 )
            goto LABEL_206;
          do
          {
            for ( i = (_QWORD *)*(v102 - 2); i != v102 - 2; i = (_QWORD *)*i )
              VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)(i - 5), 0LL);
            v102 = (_QWORD *)*v102;
          }
          while ( v102 != v101 );
          inited = 0;
          goto LABEL_120;
        case 212:
          VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v15, v12[8]);
          inited = 0;
          goto LABEL_120;
        case 213:
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v16);
          v94 = 0;
          if ( !*(_QWORD *)(v16 + 176) )
          {
            v94 = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v200,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41240LL));
            VIDMM_GLOBAL::InsertToPenaltyBox(*(_QWORD *)v16, v16, 4);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v200);
          }
          if ( v15 )
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v16, (VIDMM_DEVICE **)v15);
          else
            VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v16);
          VIDMM_GLOBAL::EvictFromFaultedList(v95, (struct VIDMM_DEVICE *)v16);
          updated = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v16);
          VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v16);
          if ( v94 )
          {
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v201,
              (struct _KTHREAD **)(*(_QWORD *)v16 + 41240LL));
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v96, (struct _LIST_ENTRY *)(v16 + 176));
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v201);
          }
          goto LABEL_206;
        case 214:
          v107 = *(_DWORD *)(v14 + 76);
          v108 = v12[12];
          v109 = *((_QWORD *)this + 5023);
          v110 = *(_DWORD *)(v14 + 68);
          v111.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v14 + 72);
          v112 = 1560LL * (v107 & 0x3F);
          v181 = v107 & 0x3F;
          v190 = (VIDMM_PROCESS_ADAPTER_INFO *)(v107 & 0x3F);
          v113 = v112 + v109;
          v114 = v108 >> 1;
          v115 = (v107 & 0x80) != 0;
          LOBYTE(v114) = (v108 & 2) != 0;
          v116 = (v108 & 4) != 0;
          v183 = v112;
          v176 = v110;
          LODWORD(v185) = v114;
          v179 = v116;
          if ( (_BYTE)v114 )
          {
            v117 = *(_QWORD *)(v14 + 136);
            v118 = v107;
            v110 = v12[9];
            v176 = v110;
            if ( v117
              && *(_DWORD *)(v14 + 128)
              && !_bittest(&v110, (unsigned __int8)(*(_BYTE *)(v117 + 20) - *(_BYTE *)(v113 + 20))) )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v14);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
              v118 = *(_DWORD *)(v14 + 76);
              v11 = (GUID *)a8;
              v116 = v179;
              v110 = v176;
            }
            v112 = v183;
            *(_DWORD *)(v14 + 68) = v110;
            v119 = v118 ^ ((unsigned __int8)v118 ^ (unsigned __int8)(*((_BYTE *)v12 + 53) << 6)) & 0x40;
            *(_DWORD *)(v14 + 76) = v119;
            v115 = *((_BYTE *)v12 + 52);
            v107 = v119 ^ ((unsigned __int8)v119 ^ (unsigned __int8)(v115 << 7)) & 0x80;
            *(_DWORD *)(v14 + 76) = v107;
          }
          v120 = v107;
          v174 = 0;
          if ( (v12[12] & 1) != 0 )
          {
            v121 = *(_DWORD *)v15[12];
            if ( (v121 & 0x8000) == 0 )
            {
              v122 = 1 << (*(_WORD *)(v113 + 28) - *(_BYTE *)(v113 + 20));
              if ( (v12[11] & 1) != 0 )
              {
                LOBYTE(v123) = v107;
                if ( *(_DWORD *)(v14 + 128) )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v14 + 136) + 80LL) & 0x1000) != 0 )
                  {
                    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                      *(VIDMM_WORKER_THREAD **)this,
                      (struct _VIDMM_GLOBAL_ALLOC *)v14);
                    VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
                    VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                    v123 = *(_DWORD *)(v14 + 76);
                    v11 = (GUID *)a8;
                    v116 = v179;
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
              v112 = v183;
            }
            v110 = v176;
          }
          if ( !v116 )
            goto LABEL_275;
          v111.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v12[10];
          v124 = 0LL;
          v125 = 0LL;
          if ( v111.0 )
          {
            if ( (*(_BYTE *)&v111.0 & 0x1F) != 0 )
            {
              v124 = *(_QWORD *)(*((_QWORD *)this + 464)
                               + 8LL * ((v12[10] & 0x1Fu) + *(_DWORD *)(v112 + *((_QWORD *)this + 5023) + 20) - 1));
              v112 = v183;
              v115 = *(_BYTE *)(v124 + 80) & 1;
            }
            if ( ((v111.Value >> 6) & 0x1F) != 0 )
              v125 = *(_QWORD *)(*((_QWORD *)this + 464)
                               + 8LL
                               * (((v111.Value >> 6) & 0x1F) - 1 + *(_DWORD *)(v112 + *((_QWORD *)this + 5023) + 20)));
          }
          v126 = 0;
          if ( !*(_DWORD *)(v14 + 128) )
            goto LABEL_272;
          v127 = *(_QWORD *)(v14 + 136);
          if ( v124 == v127 || v125 == v127 )
          {
            if ( *(_DWORD *)(v14 + 72) == v111.0 || (v128 = *(_QWORD *)(v14 + 104)) == 0 || !*(_QWORD *)(v128 + 8) )
            {
LABEL_272:
              v129 = (*(_DWORD *)(v14 + 76) ^ (v115 << 10)) & 0x400;
              *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72) = v111;
              *(_DWORD *)(v14 + 76) ^= v129;
              v120 = *(_DWORD *)(v14 + 76);
              if ( v126 )
              {
                VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), *(_QWORD *)(v14 + 136), *(_QWORD *)(v14 + 16), 0);
                v120 = *(_DWORD *)(v14 + 76);
                v11 = (GUID *)a8;
              }
              v110 = v176;
              v116 = v179;
LABEL_275:
              v130 = (char)v185;
              v131 = v120;
              v132 = (unsigned __int8)(v120 >> 12);
              if ( v116 && (_BYTE)v185 )
              {
                v133 = v120 ^ (v120 ^ (v12[8] << 12)) & 0xF0000;
                *(_DWORD *)(v14 + 76) = v133;
                v131 = v133 ^ ((unsigned __int16)v133 ^ (unsigned __int16)((unsigned __int16)v12[8] << 12)) & 0xF000u;
                *(_DWORD *)(v14 + 76) = v131;
              }
              if ( v116 != v130 )
              {
                if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                        (VIDMM_GLOBAL *)v131,
                        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v14 + 72),
                        v110) )
                {
                  v136 = WdLogNewEntry5_WdAssertion(v135, v134);
                  *(_QWORD *)(v136 + 24) = 11158LL;
                  WdLogEvent5_WdAssertion(v136);
                  VidSchMarkDeviceAsError((__int64)v15[1][4]);
                }
                MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v181, v111, &v184);
                v186 = 0;
                if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                        (unsigned __int64)this,
                        v181,
                        v176,
                        MostPreferredSegment,
                        (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v186) )
                {
                  v140 = WdLogNewEntry5_WdAssertion(v139, v138);
                  *(_QWORD *)(v140 + 24) = 11170LL;
                  WdLogEvent5_WdAssertion(v140);
                  VidSchMarkDeviceAsError((__int64)v15[1][4]);
                }
                v11 = (GUID *)a8;
                LODWORD(v131) = *(_DWORD *)(v14 + 76) ^ (*(_DWORD *)(v14 + 76) ^ (v186 << 12)) & 0xF0000 ^ (*(_WORD *)(v14 + 76) ^ (unsigned __int16)((_WORD)v186 << 12)) & 0xF000;
                *(_DWORD *)(v14 + 76) = v131;
              }
              if ( ((unsigned int)v132 >> 4 != (WORD1(v131) & 0xF)
                 || (((unsigned __int8)v132 ^ (unsigned __int8)((unsigned int)v131 >> 12)) & 0xF) != 0)
                && *((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38) )
              {
                v141 = *(_DWORD *)(v14 + 76) & 0x3F;
                v190 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 104) + 8LL) + 16LL)
                                                      + 8LL * (_QWORD)v190);
                v142 = *((_QWORD *)v190 + 6) + 296 * v141;
                DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                  (DXGAUTOPUSHLOCKEXCLUSIVE *)v202,
                  (struct _KTHREAD **)v190 + 45);
                VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(v190);
                v145 = *(_DWORD *)(v14 + 76);
                v146 = v132;
                if ( (((unsigned __int8)v132 ^ (unsigned __int8)(v145 >> 12)) & 0xF) != 0 )
                {
                  *(_QWORD *)(v142 + 8 * (v132 & 0xF) + 136) -= *(_QWORD *)(v14 + 16);
                  v147 = (unsigned __int8)HIBYTE(*(_WORD *)(v14 + 76)) >> 4;
                  *(_QWORD *)(v142 + 8 * v147 + 136) += *(_QWORD *)(v14 + 16);
                  v145 = *(_DWORD *)(v14 + 76);
                }
                if ( (unsigned int)v132 >> 4 != (HIWORD(v145) & 0xF) )
                {
                  v146 = v132 >> 4;
                  *(_QWORD *)(v142 + 8 * (v132 >> 4) + 72) -= *(_QWORD *)(v14 + 16);
                  v148 = v142 + 8LL * (*(_WORD *)(v14 + 78) & 0xF);
                  *(_QWORD *)(v148 + 72) += *(_QWORD *)(v14 + 16);
                }
                VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v144, v146, v143);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v202);
                v11 = (GUID *)a8;
              }
              v12[12] &= 0xFFFFFFF8;
              if ( v174 && *(_QWORD *)(v14 + 136) )
              {
                VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this, (struct _VIDMM_GLOBAL_ALLOC *)v14, 1u);
                v11 = (GUID *)a8;
              }
              v22 = *((_BYTE *)v15 + 25) & 1;
              if ( (unsigned int)v22 | *((_DWORD *)v15 + 38) )
              {
                v149 = *(_QWORD *)(v14 + 504);
                v24 = a3;
                if ( *(_WORD *)(v149 + 4) >= 2u )
                {
                  inited = 0;
                }
                else
                {
                  inited = VIDMM_GLOBAL::PageInOneAllocation(
                             (__int64)this,
                             (__int64 **)v15,
                             0,
                             a7,
                             a3,
                             (struct VIDMM_ALLOC **)v11,
                             0,
                             -1LL);
                  updated = inited;
                }
                goto LABEL_77;
              }
              goto LABEL_206;
            }
            v126 = 1;
            VidMmRecordAlloc(this, v14, *(_QWORD *)(v14 + 104), v127, *(_QWORD *)(v14 + 16), 1);
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v14);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v15);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          }
          v11 = (GUID *)a8;
          goto LABEL_272;
        case 215:
          v150 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v12 + 4);
          v151 = 0;
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v203,
            (struct _KTHREAD **)this + 4994);
          if ( *((_QWORD *)v150 + 52) )
          {
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v150);
            v151 = 1;
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v203);
          if ( v151 )
            VIDMM_GLOBAL::DecommitGlobalAllocation(this, v150);
          v24 = a3;
          inited = 0;
          updated = 0;
          goto LABEL_77;
        case 217:
          Interval.QuadPart = -10000LL * (unsigned int)v12[8];
          KeDelayExecutionThread(0, 0, &Interval);
          inited = 0;
          goto LABEL_120;
        default:
          v152 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, 0x1C0000000uLL);
          v152[3] = 270LL;
          v152[4] = 5LL;
          v152[5] = v23;
          v152[6] = -1073741811LL;
          v152[7] = 0LL;
          WdLogEvent5_WdCriticalError(v152);
          v24 = a3;
          inited = 0;
          goto LABEL_77;
      }
    }
    v64 = **v15;
    if ( !*((_DWORD *)v64 + 86) )
    {
LABEL_115:
      if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
        v22 = 1LL;
      else
        v22 = v8;
      if ( (unsigned int)v22 | *((_DWORD *)v15 + 38) && *(_WORD *)(*((_QWORD *)v64 + 63) + 4LL) < 2u )
      {
        inited = VIDMM_GLOBAL::PageInOneAllocation(
                   (__int64)this,
                   (__int64 **)v15,
                   0,
                   a7,
                   v10,
                   (struct VIDMM_ALLOC **)v11,
                   v8,
                   -1LL);
        updated = inited;
LABEL_120:
        v24 = a3;
        goto LABEL_77;
      }
LABEL_206:
      inited = updated;
      goto LABEL_120;
    }
    if ( !VIDMM_GLOBAL::NeedsApertureForLock(this, **v15) || (*((_DWORD *)v64 + 19) & 0x40) != 0 )
    {
      v11 = (GUID *)a8;
      goto LABEL_115;
    }
    v153 = WdLogNewEntry5_WdWarning(v78, v77);
    *(_QWORD *)(v153 + 24) = v64;
    WdLogEvent5_WdWarning(v153);
    inited = -1073741823;
LABEL_198:
    updated = inited;
    goto LABEL_120;
  }
  v24 = a3;
  updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
              (VIDMM_GLOBAL *)v22,
              (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)(v12 + 8),
              (struct VIDMM_ALLOC **)v11);
  inited = updated;
  if ( updated == -1073741267 )
  {
    *a3 = 1;
    goto LABEL_222;
  }
LABEL_77:
  if ( !*v24 )
  {
    v51 = (int *)*((_QWORD *)v12 + 3);
    if ( v51 )
      *v51 = inited;
    v189 = v192;
    v52 = 0;
    v188 = a5;
    *((_QWORD *)this + 466) = (char *)this + 3720;
    *((_QWORD *)this + 465) = (char *)this + 3720;
    if ( *((_DWORD *)this + 1748) )
    {
      do
      {
        v53 = 0;
        v54 = 1560LL * v52;
        if ( *(_DWORD *)(v54 + *((_QWORD *)this + 5023) + 24) )
        {
          do
          {
            v55 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v53 + *(_DWORD *)(v54 + *((_QWORD *)this + 5023) + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 160LL))(v55);
            ++v53;
          }
          while ( v53 < *(_DWORD *)(v54 + *((_QWORD *)this + 5023) + 24) );
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p(v22, &EventPagingEndPreparation, v11, *((_QWORD *)this + v52 + 143));
        if ( *((_DWORD *)this + v52 + 414) != *((_DWORD *)this + v52 + 478)
          || *((_DWORD *)this + v52 + 542) != *((_DWORD *)this + v52 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v52, 0, 0LL, 0LL, 0, 0);
        }
        v22 = *((_QWORD *)this + v52 + 143);
        if ( v22 )
          *(_DWORD *)(v22 + 172) = *(_DWORD *)(v22 + 168);
        ++v52;
      }
      while ( v52 < *((_DWORD *)this + 1748) );
      v15 = v193;
    }
    v56 = (_QWORD **)((char *)this + 41424);
    if ( *v56 != v56 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      v165 = *v56;
      if ( *v56 != v56 )
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
          if ( v165 == v56 )
            goto LABEL_92;
        }
LABEL_322:
        __fastfail(3u);
      }
    }
LABEL_92:
    if ( *((_BYTE *)this + 41440) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), 0xFFFFFFFFLL);
      *((_BYTE *)this + 41440) = 0;
    }
    if ( !a4 )
      goto LABEL_100;
    v57 = 0;
    v58 = 0LL;
    v59 = 0LL;
    v60 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
    v61 = 0;
    if ( *(_BYTE *)(v60 + 55) )
    {
      v59 = *(_QWORD **)(v60 + 264);
      if ( !*v59 )
      {
        VidSchSignalSyncObjectsFromCpu(1LL, &v189, 0, (char *)&v188);
LABEL_98:
        v22 = *((unsigned int *)this + 1748);
        if ( (unsigned int)v22 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
            v189,
            v188,
            (unsigned int)((1 << v22) - 1));
LABEL_100:
        *((_QWORD *)this + 877) = 0LL;
        *((_QWORD *)this + 878) = 0LL;
        *((_DWORD *)this + 2) = 0;
        goto LABEL_101;
      }
      v61 = *(_DWORD *)(v60 + 64);
    }
    else
    {
      v57 = *(_DWORD *)(v60 + 64);
      v58 = *(_QWORD **)(v60 + 248);
    }
    VidSchSignalSyncObjectsFromGpu(v61, (__int64)v59, v57, v58, 1u, (void **)&v189, 0, &v188);
    goto LABEL_98;
  }
LABEL_222:
  VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
LABEL_101:
  if ( *v12 == 200 )
  {
    v62 = (struct _KEVENT *)(*((_QWORD *)v12 + 2) + 72LL);
LABEL_108:
    KeSetEvent(v62, 0, 0);
    goto LABEL_109;
  }
  if ( !*a3 && v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v15;
    v62 = (struct _KEVENT *)(v15 + 21);
    goto LABEL_108;
  }
LABEL_109:
  result = updated;
  v12[19] = updated;
  return result;
}
