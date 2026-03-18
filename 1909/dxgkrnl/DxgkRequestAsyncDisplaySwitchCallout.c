/*
 * XREFs of DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0246EB0
 * Callers:
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C00C30E0 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkSessionConnected @ 0x1C01409D0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C015A690 (DxgkSessionReconnected.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01F5474 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C024649C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C02A0380 (DpiFdoExcludeAdapterAccess.c)
 *     DpiIndirectCbForceDisplaySwitch @ 0x1C02ABFE0 (DpiIndirectCbForceDisplaySwitch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0240C98 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C02467DC (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall DxgkRequestAsyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  DISPLAY_CALLOUT_ENTRY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DISPLAY_CALLOUT_ENTRY *v11; // rbx
  __int64 v12; // rax
  struct DXGGLOBAL *Global; // rax

  v6 = (DISPLAY_CALLOUT_ENTRY *)operator new[](0x88uLL, 0x4B677844u, PagedPool);
  if ( v6 )
    v11 = DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v6, a1, a2);
  else
    v11 = 0LL;
  if ( v11 )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7);
    return DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((DXGDISPLAYCALLOUTQUEUE ***)Global + 177, v11, a3);
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = 751LL;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
}
