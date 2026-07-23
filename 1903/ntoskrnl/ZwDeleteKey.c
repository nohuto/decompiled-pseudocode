/*
 * XREFs of ZwDeleteKey @ 0x1401C1AB0
 * Callers:
 *     BiZwDeleteKey @ 0x140169AA4 (BiZwDeleteKey.c)
 *     NtEnableLastKnownGood @ 0x1406990D0 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x140743A3C (ExpSetPendingUILanguage.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140789170 (_RegRtlDeleteKeyTransacted.c)
 *     CmDeleteKeyRecursive @ 0x1408345C0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140835458 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140840B98 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x140843A54 (VrpDestroyNamespaceNode.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F8708 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A1D6BC (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A22314 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3AE14 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
