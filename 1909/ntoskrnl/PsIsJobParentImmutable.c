/*
 * XREFs of PsIsJobParentImmutable @ 0x14068A1A0
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x14068970C (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1408C7584 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
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
