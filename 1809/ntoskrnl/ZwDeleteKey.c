/*
 * XREFs of ZwDeleteKey @ 0x1401B9CB0
 * Callers:
 *     BiZwDeleteKey @ 0x1401595D4 (BiZwDeleteKey.c)
 *     NtEnableLastKnownGood @ 0x140706EE0 (NtEnableLastKnownGood.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071BB94 (ExpSetCurrentUserUILanguage.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     CmDeleteKeyRecursive @ 0x1407FC404 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407FD200 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140808534 (CmpDoReDoRecord.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BCDDC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DBBA4 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x1409E010C (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F684C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
