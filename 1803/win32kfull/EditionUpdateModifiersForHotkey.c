/*
 * XREFs of EditionUpdateModifiersForHotkey @ 0x1C0101530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EditionUpdateModifiersForHotkey(int a1, int a2)
{
  int v2; // edx

  if ( a1 )
    v2 = gfsRawModifiersForHotKey & ~a2;
  else
    v2 = gfsRawModifiersForHotKey | a2;
  gfsRawModifiersForHotKey = v2;
}
