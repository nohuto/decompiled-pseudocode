/*
 * XREFs of EditionHandleAltTabCancel @ 0x1C0101500
 * Callers:
 *     <none>
 * Callees:
 *     xxxCancelCoolSwitch @ 0x1C0104D04 (xxxCancelCoolSwitch.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessibleExplicit @ 0x1C0198290 (IsGpqForegroundAccessibleExplicit.c)
 */

_BOOL8 __fastcall EditionHandleAltTabCancel(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6,
        char a7)
{
  int v10; // ecx
  __int64 v11; // rcx

  if ( !gspwndAltTab )
    return 0LL;
  if ( a4 )
    return 0LL;
  if ( a5 <= 0x12u )
  {
    v10 = 328192;
    if ( _bittest(&v10, a5) )
      return 0LL;
  }
  xxxCancelCoolSwitch();
  if ( (unsigned int)IsGpqForegroundAccessibleExplicit(a6, a1, a2) )
    return a5 == 27 && (a7 & 2) == 0;
  MSGLUA_GPQFOREGROUND(v11);
  return 1LL;
}
