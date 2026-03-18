/*
 * XREFs of EditionShouldSwapMouseButton @ 0x1C0125D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EditionShouldSwapMouseButton(int a1, int a2)
{
  int v2; // r11d
  BOOL v3; // r8d

  v2 = *(_DWORD *)(gpsi + 1988LL);
  v3 = v2 != 0;
  if ( gbMouseButtonsRecentlySwapped )
  {
    if ( (a1 == 0) == (((unsigned __int8)(1 << (2 * ((a2 == 2) + 1))) & gafAsyncKeyState[0]) != 0)
      && a1 == (((unsigned __int8)(1 << (2 * ((a2 != 2) + 1))) & gafAsyncKeyState[0]) != 0) )
    {
      v3 = v2 == 0;
    }
    gbMouseButtonsRecentlySwapped = 0;
  }
  return v3;
}
