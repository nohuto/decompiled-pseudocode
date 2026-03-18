/*
 * XREFs of KeUnstackDetachProcess @ 0x14003A6B0
 * Callers:
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140106174 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140107C6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9640 (NtSetInformationVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1406921D8 (MmInitializeProcessAddressSpace.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140698B48 (CmpStartCLFSLog.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406EBA24 (SmProcessStoreMemoryPriorityRequest.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140760BCC (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x14077B960 (PsStartSiloMonitor.c)
 *     DbgkpPostFakeThreadMessages @ 0x140848684 (DbgkpPostFakeThreadMessages.c)
 *     PspShutdownCsrProcess @ 0x1408C5984 (PspShutdownCsrProcess.c)
 *     PspApplyWorkingSetLimits @ 0x1408C7744 (PspApplyWorkingSetLimits.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9F50 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KiDetachProcess @ 0x14003A6F0 (KiDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess(ApcState, 0LL);
  }
}
