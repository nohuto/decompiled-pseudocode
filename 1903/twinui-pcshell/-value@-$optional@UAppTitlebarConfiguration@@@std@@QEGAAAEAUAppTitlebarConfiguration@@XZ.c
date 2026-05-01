/*
 * XREFs of ?value@?$optional@UAppTitlebarConfiguration@@@std@@QEGAAAEAUAppTitlebarConfiguration@@XZ @ 0x1801208C8
 * Callers:
 *     _lambda_6c7f1af74cf45db94091666f28e782cd_::operator() @ 0x18005B560 (_lambda_6c7f1af74cf45db94091666f28e782cd_--operator().c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011DB1C (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<AppTitlebarConfiguration>::value(__int64 a1)
{
  void **v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 2) )
  {
    v3 = 0uLL;
    v2 = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&v2;
  }
  return a1;
}
