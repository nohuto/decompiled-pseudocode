/*
 * XREFs of sub_1405CA880 @ 0x1405CA880
 * Callers:
 *     sub_1405B378C @ 0x1405B378C (sub_1405B378C.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405B3AD0 (WbValidateEncryptionSegmentArguments.c)
 *     sub_1405CA63C @ 0x1405CA63C (sub_1405CA63C.c)
 *     WbDispatchOperation @ 0x1405CA8A0 (WbDispatchOperation.c)
 *     WbFreeWarbirdProcess @ 0x1406ADB40 (WbFreeWarbirdProcess.c)
 *     WbCreateHeapExecutedBlock @ 0x1406ADFB0 (WbCreateHeapExecutedBlock.c)
 *     WbProcessModuleUnload @ 0x1406D5B04 (WbProcessModuleUnload.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405CA880(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x42524157u);
}
