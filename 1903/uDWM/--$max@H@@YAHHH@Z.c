/*
 * XREFs of ??$max@H@@YAHHH@Z @ 0x18003A558
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D9C0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall max<int>(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  return a1;
}
