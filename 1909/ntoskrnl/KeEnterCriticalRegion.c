/*
 * XREFs of KeEnterCriticalRegion @ 0x140043D20
 * Callers:
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x140693DF0 (EtwpAddGuidEntry.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpFreeGuidEntry @ 0x1406E19DC (EtwpFreeGuidEntry.c)
 *     EtwpTrackProviderBinary @ 0x1406EE98C (EtwpTrackProviderBinary.c)
 *     EtwpRegisterProvider @ 0x14071A39C (EtwpRegisterProvider.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1864 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F1B18 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
