/*
 * XREFs of ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C015E3BC
 * Callers:
 *     SpbCheckPwnd @ 0x1C01F30E4 (SpbCheckPwnd.c)
 *     SpbCheckRect @ 0x1C01F3180 (SpbCheckRect.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSpbPresentOrNull(struct tagSPB *a1)
{
  struct tagSPB *i; // rax

  if ( a1 )
  {
    for ( i = *(struct tagSPB **)(gpDispInfo + 32LL); i; i = *(struct tagSPB **)i )
    {
      if ( i == a1 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LOBYTE(i) = 1;
  }
  return (char)i;
}
