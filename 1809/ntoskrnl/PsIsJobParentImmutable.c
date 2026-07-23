/*
 * XREFs of PsIsJobParentImmutable @ 0x1406074A4
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x140606BD4 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x14088AFD4 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x1409071B0 (ObCreateSiloRootDirectory.c)
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
