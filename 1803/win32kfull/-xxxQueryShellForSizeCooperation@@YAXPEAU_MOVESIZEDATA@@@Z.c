/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C4114
 * Callers:
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 * Callees:
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01A5528 (xxxCallShellWindowSizeStartingHandler.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01C57A0 (IsWindowSubjectToShellSizingPolicy.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct _MOVESIZEDATA *a1)
{
  if ( (unsigned int)(*((_DWORD *)a1 + 44) - 1) <= 1
    && (*((_DWORD *)a1 + 49) & 2) == 0
    && (unsigned int)IsWindowSubjectToShellSizingPolicy(*((_QWORD *)a1 + 2)) )
  {
    if ( (unsigned int)xxxCallShellWindowSizeStartingHandler(*((_QWORD **)a1 + 2), *((_DWORD *)a1 + 44) + 9) )
      *((_DWORD *)a1 + 70) |= 4u;
  }
}
