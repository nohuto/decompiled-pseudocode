/*
 * XREFs of EditionShouldSwapMouseButton @ 0x1C0105F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EditionShouldSwapMouseButton(int a1, int a2)
{
  int v2; // edi
  BOOL v3; // r9d
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // bl

  v2 = *(_DWORD *)(gpsi + 1988LL);
  v3 = v2 != 0;
  if ( gbMouseButtonsRecentlySwapped )
  {
    v5 = 2;
    if ( a2 == 2 )
    {
      v6 = 2;
      v5 = 1;
    }
    else
    {
      v6 = 1;
    }
    if ( (a1 == 0) == (((unsigned __int8)(1 << (2 * (v6 & 3))) & gafAsyncKeyState[(unsigned __int64)v6 >> 2]) != 0)
      && a1 == (((unsigned __int8)(1 << (2 * (v5 & 3))) & gafAsyncKeyState[(unsigned __int64)v5 >> 2]) != 0) )
    {
      v3 = v2 == 0;
    }
    gbMouseButtonsRecentlySwapped = 0;
  }
  return v3;
}
