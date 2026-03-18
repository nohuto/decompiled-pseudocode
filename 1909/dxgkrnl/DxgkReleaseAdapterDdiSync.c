/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1C0157B64
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00519E4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0051C00 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0051DA0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchPnp @ 0x1C0148F60 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0154F5C (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01577C0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C0157F20 (DpiPdoSetDevicePower.c)
 *     DpiPdoIsChildConnected @ 0x1C015B218 (DpiPdoIsChildConnected.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C015BE0C (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0175624 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1C01794F4 (DpiGetMonitorDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02A2334 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C02AC8A4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterDdiSync(DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseDdiSync(a1);
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
