/*
 * XREFs of ?GetRuntimeClassName@WGIController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A96C0
 * Callers:
 *     ?GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180038520 (-GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180038530 (-GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180038540 (-GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180038550 (-GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WGIController::GetRuntimeClassName(WGIController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"WGIController", 0xDu, a2);
}
