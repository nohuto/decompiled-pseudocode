/*
 * XREFs of SeDeassignPrimaryToken @ 0x140671BD0
 * Callers:
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x140780318 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObFastReplaceObject @ 0x14007FAD4 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 864), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
