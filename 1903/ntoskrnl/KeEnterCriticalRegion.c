/*
 * XREFs of KeEnterCriticalRegion @ 0x140043920
 * Callers:
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwpFreeGuidEntry @ 0x1406E02A8 (EtwpFreeGuidEntry.c)
 *     EtwpTrackProviderBinary @ 0x1406ED48C (EtwpTrackProviderBinary.c)
 *     EtwpRegisterProvider @ 0x1407185AC (EtwpRegisterProvider.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1F54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F2208 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
