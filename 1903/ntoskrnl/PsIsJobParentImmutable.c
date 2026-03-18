/*
 * XREFs of PsIsJobParentImmutable @ 0x140696C30
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x14069619C (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1408C7CA4 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1308) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1072) )
    return 1;
  return result;
}
