/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1C0145088
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C004A5B4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C004A7C0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C004A980 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C013E690 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoIsChildConnected @ 0x1C0144E00 (DpiPdoIsChildConnected.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C0266664 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C026FF04 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C027196C (DpiPdoHandleOpmIoctls.c)
 *     DpiGetMonitorDescriptor @ 0x1C02742DC (DpiGetMonitorDescriptor.c)
 *     DpiPdoDispatchPnp @ 0x1C0274F20 (DpiPdoDispatchPnp.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C027556C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0275A2C (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoSetDevicePower @ 0x1C027766C (DpiPdoSetDevicePower.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterDdiSync(DXGADAPTER *a1)
{
  __int64 v2; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseDdiSync(a1);
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
