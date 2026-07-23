/*
 * XREFs of ArbAddAllocation @ 0x140739890
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 */

NTSTATUS __fastcall ArbAddAllocation(__int64 a1, __int64 a2)
{
  return RtlAddRange(
           *(PRTL_RANGE_LIST *)(a1 + 48),
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 8),
           *(_BYTE *)(a2 + 66),
           2 * (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 1) + 1,
           0LL,
           *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL));
}
