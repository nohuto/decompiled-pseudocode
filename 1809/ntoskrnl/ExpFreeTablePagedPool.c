/*
 * XREFs of ExpFreeTablePagedPool @ 0x14060790C
 * Callers:
 *     ExpFreeHandleTable @ 0x1406077F8 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1406078CC (ExpFreeLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x140697690 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140697D34 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1408CF41C (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400901D0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
