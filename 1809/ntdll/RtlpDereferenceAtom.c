/*
 * XREFs of RtlpDereferenceAtom @ 0x180072F08
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180072E60 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpFreeAllAtom @ 0x180072C48 (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(char *a1, char *a2, __int64 a3)
{
  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 != a1 + 12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  RtlpFreeAllAtom(a1, a3, a3);
  return 1;
}
