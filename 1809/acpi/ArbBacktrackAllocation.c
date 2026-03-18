/*
 * XREFs of ArbBacktrackAllocation @ 0x1C00B3A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange_0 @ 0x1C0030B4D (RtlDeleteRange_0.c)
 */

NTSTATUS __fastcall ArbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  return RtlDeleteRange_0(*(PRTL_RANGE_LIST *)(a1 + 48), *a2, a2[1], *(PVOID *)(a2[4] + 32));
}
