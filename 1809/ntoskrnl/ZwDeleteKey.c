/*
 * XREFs of ZwDeleteKey @ 0x1401B9B30
 * Callers:
 *     BiZwDeleteKey @ 0x1401594B4 (BiZwDeleteKey.c)
 *     NtEnableLastKnownGood @ 0x140705C60 (NtEnableLastKnownGood.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A914 (ExpSetCurrentUserUILanguage.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140762160 (_RegRtlDeleteKeyTransacted.c)
 *     CmDeleteKeyRecursive @ 0x1407FB224 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC020 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140807354 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x14080A1BC (VrpDestroyNamespaceNode.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB3C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DABA4 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F583C (PiLastGoodRevertLastKnownDirectory.c)
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
