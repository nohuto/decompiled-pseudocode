/*
 * XREFs of sub_18005B0C8 @ 0x18005B0C8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18005B020 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005C06C @ 0x18005C06C (sub_18005C06C.c)
 */

char __fastcall sub_18005B0C8(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != a1 + 12 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2);
  sub_18005C06C(a1, a3);
  return 1;
}
