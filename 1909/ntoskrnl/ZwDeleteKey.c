/*
 * XREFs of ZwDeleteKey @ 0x1401C2630
 * Callers:
 *     BiZwDeleteKey @ 0x1401694F4 (BiZwDeleteKey.c)
 *     NtEnableLastKnownGood @ 0x1406DA230 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14078B5D0 (_RegRtlDeleteKeyTransacted.c)
 *     CmDeleteKeyRecursive @ 0x140833C20 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140834AB8 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1408401F8 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x1408430C8 (VrpDestroyNamespaceNode.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F80EC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A1D898 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A223F4 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3ABE4 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
