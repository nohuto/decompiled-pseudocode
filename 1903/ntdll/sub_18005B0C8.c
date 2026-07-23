/*
 * XREFs of sub_18005B0C8 @ 0x18005B0C8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18005B020 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005C06C @ 0x18005C06C (sub_18005C06C.c)
 */

char __fastcall sub_18005B0C8(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != (_BYTE *)(a1 + 12) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  sub_18005C06C(a1, a3);
  return 1;
}
