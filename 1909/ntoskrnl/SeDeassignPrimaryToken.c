/*
 * XREFs of SeDeassignPrimaryToken @ 0x140652A00
 * Callers:
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x14074AEAC (SeAssignPrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 864), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
