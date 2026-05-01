/*
 * XREFs of ?value@?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@QEGAAAEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@XZ @ 0x18013FD1C
 * Callers:
 *     _lambda_6c7f1af74cf45db94091666f28e782cd_::operator() @ 0x18005A590 (_lambda_6c7f1af74cf45db94091666f28e782cd_--operator().c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013CCB4 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<APPLICATION_FRAME_CHROME_CHANGE_DATA>::value(__int64 a1)
{
  void **v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 40) )
  {
    v3 = 0uLL;
    v2 = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&v2;
  }
  return a1;
}
