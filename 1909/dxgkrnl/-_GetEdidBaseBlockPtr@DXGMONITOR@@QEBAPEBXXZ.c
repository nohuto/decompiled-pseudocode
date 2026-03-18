/*
 * XREFs of ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00ED380
 * Callers:
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C00068C0 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01291C0 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorIsMonitorEdidless @ 0x1C0147790 (MonitorIsMonitorEdidless.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C014CD98 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C017467C (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02C9648 (MonitorGetEdidBaseBlockPtr.c)
 * Callees:
 *     <none>
 */

const void *__fastcall DXGMONITOR::_GetEdidBaseBlockPtr(DXGMONITOR *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 18);
  if ( v1 && *(_QWORD *)(v1 + 16) >= 0x80uLL )
    return (const void *)(v1 + 24);
  else
    return 0LL;
}
