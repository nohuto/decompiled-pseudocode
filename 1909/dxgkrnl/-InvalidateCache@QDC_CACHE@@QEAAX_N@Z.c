/*
 * XREFs of ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CF96C
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD270 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CE2F0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0142E78 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015C7D0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 *     DpiPnpEnableVga @ 0x1C015E428 (DpiPnpEnableVga.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C029E630 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C029E7DC (DpiEnableMsBddFallbackDriver.c)
 *     DpiFdoStopAdapter @ 0x1C02A2A90 (DpiFdoStopAdapter.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02BA6C0 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall QDC_CACHE::InvalidateCache(struct DXGFASTMUTEX *const *this, __int64 a2)
{
  char v2; // di
  char *v4; // rcx
  __int64 v5; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 197LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this[1], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    v4 = (char *)(this + 2);
    v5 = 18LL;
    do
    {
      if ( !v2 || (*((_DWORD *)v4 + 1) & 4) != 0 )
        *v4 = 0;
      v4 += 32;
      --v5;
    }
    while ( v5 );
    ++*((_DWORD *)this + 148);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, 0LL) + 24) = 223LL;
    if ( v6[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  }
}
