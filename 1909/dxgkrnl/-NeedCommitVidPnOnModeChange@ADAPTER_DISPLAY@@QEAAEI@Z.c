/*
 * XREFs of ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C000D860
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CA428 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C012B8B4 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 5334LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 5335LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return *((_BYTE *)this[14] + 3968 * v3 + 723);
}
