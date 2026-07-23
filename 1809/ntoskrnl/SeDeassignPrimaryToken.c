/*
 * XREFs of SeDeassignPrimaryToken @ 0x14060995C
 * Callers:
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x140749D14 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 856), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
