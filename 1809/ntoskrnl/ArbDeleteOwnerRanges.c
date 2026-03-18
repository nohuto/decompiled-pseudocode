/*
 * XREFs of ArbDeleteOwnerRanges @ 0x1407383A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteOwnersRanges @ 0x140738D60 (RtlDeleteOwnersRanges.c)
 */

NTSTATUS __fastcall ArbDeleteOwnerRanges(__int64 a1, void *a2)
{
  return RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), a2);
}
