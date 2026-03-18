/*
 * XREFs of ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9914
 * Callers:
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall AreDockTargetsActive(struct _MOVESIZEDATA *a1)
{
  unsigned __int8 result; // al

  if ( (*((_DWORD *)a1 + 49) & 0x100000) == 0 )
    return 1;
  result = 0;
  if ( gWinArrGlobal[0] )
  {
    if ( dword_1C03203A4 )
      return 1;
  }
  return result;
}
