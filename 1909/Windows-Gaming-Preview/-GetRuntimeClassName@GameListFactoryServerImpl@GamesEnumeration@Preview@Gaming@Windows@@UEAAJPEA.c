/*
 * XREFs of ?GetRuntimeClassName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180024A90
 * Callers:
 *     ?GetRuntimeClassName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800245D0 (-GetRuntimeClassName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameListFactoryServerImpl", 0x41u, a2);
}
