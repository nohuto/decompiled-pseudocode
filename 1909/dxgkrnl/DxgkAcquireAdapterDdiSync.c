/*
 * XREFs of DxgkAcquireAdapterDdiSync @ 0x1C0157B30
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
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterDdiSync(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (int)a2;
  if ( a1 )
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
    {
      DXGADAPTER::AcquireDdiSync(a1, a2);
      return 0LL;
    }
    v5 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v5 + 24) = v3;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v5);
  return 3221225485LL;
}
