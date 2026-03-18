/*
 * XREFs of EditionHandleAltTabCancel @ 0x1C0121C90
 * Callers:
 *     <none>
 * Callees:
 *     EditionIsGpqForegroundInaccessibleExplicit @ 0x1C011B940 (EditionIsGpqForegroundInaccessibleExplicit.c)
 *     xxxCancelCoolSwitch @ 0x1C0124534 (xxxCancelCoolSwitch.c)
 */

_BOOL8 __fastcall EditionHandleAltTabCancel(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        int a6,
        char a7)
{
  int v10; // ecx
  _BOOL8 result; // rax

  result = 0;
  if ( gspwndAltTab )
  {
    if ( !a4 )
    {
      if ( a5 > 0x12u || (v10 = 328192, !_bittest(&v10, a5)) )
      {
        xxxCancelCoolSwitch();
        if ( (unsigned int)EditionIsGpqForegroundInaccessibleExplicit(a6, a3, a1, a2) || a5 == 27 && (a7 & 2) == 0 )
          return 1;
      }
    }
  }
  return result;
}
