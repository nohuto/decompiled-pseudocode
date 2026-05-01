/*
 * XREFs of ?__abi_GetRuntimeClassName@RoutedEventHandler@Xaml@UI@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802D1C74
 * Callers:
 *     ?__abi_GetRuntimeClassName@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBF30 (-__abi_GetRuntimeClassName@RoutedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?__abi_GetRuntimeClassName@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBF40 (-__abi_GetRuntimeClassName@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Xaml::RoutedEventHandler::__abi_GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return __winRT::__windowsCreateString(L"Windows.UI.Xaml.RoutedEventHandler", 0x22u, a2);
}
