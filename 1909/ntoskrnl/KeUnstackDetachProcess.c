/*
 * XREFs of KeUnstackDetachProcess @ 0x1400437D0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SepRmCallLsa @ 0x140133120 (SepRmCallLsa.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x140685748 (MmInitializeProcessAddressSpace.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14068BA6C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1406BC550 (CmpStartCLFSLog.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406ECCE4 (SmProcessStoreMemoryPriorityRequest.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x14077E230 (PsStartSiloMonitor.c)
 *     DbgkpPostFakeThreadMessages @ 0x140847D84 (DbgkpPostFakeThreadMessages.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     PspApplyWorkingSetLimits @ 0x1408C7024 (PspApplyWorkingSetLimits.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9830 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
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
