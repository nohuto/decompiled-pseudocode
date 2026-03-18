/*
 * XREFs of ?IsAddapterSessionized@DXGADAPTER@@QEAA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C00205AC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01C2938 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C48B4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4A00 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01C6278 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0212020 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0222DF4 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsAddapterSessionized(
        DXGADAPTER *this,
        struct _LUID *a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  bool v4; // dl
  unsigned __int64 v5; // rax

  v4 = *((_DWORD *)this + 1074) || *((_DWORD *)this + 1075);
  if ( a3 )
    *a3 = *((_DWORD *)this + 1076);
  if ( a4 )
  {
    if ( v4 )
      v5 = *((unsigned int *)this + 1076);
    else
      v5 = 0x200000000LL;
    *a4 = v5;
  }
  return v4;
}
