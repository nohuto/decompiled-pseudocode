/*
 * XREFs of sub_1405CAD80 @ 0x1405CAD80
 * Callers:
 *     sub_1405B3B68 @ 0x1405B3B68 (sub_1405B3B68.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405B3EAC (WbValidateEncryptionSegmentArguments.c)
 *     sub_1405CAB3C @ 0x1405CAB3C (sub_1405CAB3C.c)
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 *     WbFreeWarbirdProcess @ 0x1406AFA70 (WbFreeWarbirdProcess.c)
 *     WbCreateHeapExecutedBlock @ 0x1406AFEE0 (WbCreateHeapExecutedBlock.c)
 *     WbProcessModuleUnload @ 0x1406D5338 (WbProcessModuleUnload.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405CAD80(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x42524157u);
}
