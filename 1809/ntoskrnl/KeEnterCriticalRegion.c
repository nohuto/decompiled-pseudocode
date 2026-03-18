/*
 * XREFs of KeEnterCriticalRegion @ 0x1400B9BE0
 * Callers:
 *     NtTraceEvent @ 0x1400CB490 (NtTraceEvent.c)
 *     EtwpFreeGuidEntry @ 0x1405C0920 (EtwpFreeGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1405C0A0C (EtwpAddGuidEntry.c)
 *     EtwpRegisterUMGuid @ 0x1405C3970 (EtwpRegisterUMGuid.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     NtQueryInformationToken @ 0x14062A760 (NtQueryInformationToken.c)
 *     CmpParseKey @ 0x140641370 (CmpParseKey.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     EtwpRegisterProvider @ 0x1406BE5CC (EtwpRegisterProvider.c)
 *     EtwpTrackProviderBinary @ 0x14071D4AC (EtwpTrackProviderBinary.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B50C4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B5378 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
