/*
 * XREFs of ?GetDefaultIconDpi@DefaultIconManager@@CAHXZ @ 0x1802522E0
 * Callers:
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x180253BDC (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 *     ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180253F2C (-UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@Win.c)
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
      (MONITORENUMPROC)lambda_80d81248c4f1ac47f03bb7cac4f71e8c_::_lambda_invoker_cdecl_,
      (LPARAM)&dwData);
  return (unsigned int)dwData;
}
