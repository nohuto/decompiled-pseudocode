/*
 * XREFs of ?GetRuntimeClassName@WGIController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18006C7B0
 * Callers:
 *     ?GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18006FE70 (-GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18006FF50 (-GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180070040 (-GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180070110 (-GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WGIController::GetRuntimeClassName(WGIController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"WGIController", 0xDu, a2);
}
