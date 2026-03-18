/*
 * XREFs of ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C0085F20
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z @ 0x1C0085930 (-SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::_UsageToSpecialType(_DEVICE_USAGE_NOTIFICATION_TYPE Type)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = Type - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 )
      return 2LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 3LL;
    if ( v3 == 1 )
      return 4LL;
  }
  return 1LL;
}
