/*
 * XREFs of TabletModeHelpers::QueryTabletModeCallback @ 0x180072720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabletModeHelpers::QueryTabletModeCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6)
{
  int v6; // eax

  v6 = 0;
  if ( a5 && a6 == 4 )
  {
    LOBYTE(v6) = *a5 != 0;
    *a4 = v6;
  }
  return 0LL;
}
