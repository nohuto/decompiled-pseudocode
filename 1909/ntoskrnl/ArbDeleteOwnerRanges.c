/*
 * XREFs of ArbDeleteOwnerRanges @ 0x140766350
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteOwnersRanges @ 0x140766D10 (RtlDeleteOwnersRanges.c)
 */

NTSTATUS __fastcall ArbDeleteOwnerRanges(__int64 a1, void *a2)
{
  return RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), a2);
}
