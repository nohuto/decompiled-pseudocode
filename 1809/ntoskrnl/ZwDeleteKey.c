/*
 * XREFs of ZwDeleteKey @ 0x1401B9B50
 * Callers:
 *     BiZwDeleteKey @ 0x1401594D4 (BiZwDeleteKey.c)
 *     NtEnableLastKnownGood @ 0x140705C40 (NtEnableLastKnownGood.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A8F4 (ExpSetCurrentUserUILanguage.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140762140 (_RegRtlDeleteKeyTransacted.c)
 *     CmDeleteKeyRecursive @ 0x1407FB204 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC000 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140807334 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x14080A19C (VrpDestroyNamespaceNode.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB1C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DABA4 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F584C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
