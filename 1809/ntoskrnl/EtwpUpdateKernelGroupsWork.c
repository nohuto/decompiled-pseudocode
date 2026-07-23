/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x1406C6810
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C6838 (EtwpUpdateGlobalGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateGlobalGroupMasks(EtwpHostSiloState, 0LL, 8LL);
}
