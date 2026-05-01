/*
 * XREFs of ?GetDefaultIconDpi@DefaultIconManager@@CAHXZ @ 0x1801FF078
 * Callers:
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x180200A54 (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 *     ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180200D94 (-UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@Win.c)
 * Callees:
 *     <none>
 */

__int64 DefaultIconManager::GetDefaultIconDpi(void)
{
  LPARAM dwData; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(dwData) = GetDpiForSystem();
  if ( GetSystemMetrics(80) > 1 )
    EnumDisplayMonitors(
      0LL,
      0LL,
      (MONITORENUMPROC)lambda_7667551ab70ce4aba18b1d343772bed9_::_lambda_invoker_cdecl_,
      (LPARAM)&dwData);
  return (unsigned int)dwData;
}
