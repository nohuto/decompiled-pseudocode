/*
 * XREFs of ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C011F6B4
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0120094 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01231FC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015668 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

struct DXGADAPTERALLOCATION *__fastcall ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
        DXGADAPTER **this,
        unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  struct DXGADAPTERALLOCATION *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 1589LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 1590LL;
    WdLogEvent5_WdAssertion(v11);
  }
  result = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v3, 0);
  if ( !result )
  {
    v8 = *((_QWORD *)this[14] + 470 * v3 + 86);
    if ( !v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdWarning(3760 * v3, v6, v7);
      v9[3] = v3;
      v9[4] = this[2];
LABEL_8:
      WdLogEvent5_WdWarning(v9);
      return 0LL;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL)) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v13 + 24) = 1615LL;
      WdLogEvent5_WdAssertion(v13);
    }
    DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)v8, v3);
    if ( !DisplayedPrimary )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v9[3] = v8;
      v9[4] = v3;
      v9[5] = this[2];
      goto LABEL_8;
    }
    return (struct DXGADAPTERALLOCATION *)*((_QWORD *)DisplayedPrimary + 6);
  }
  return result;
}
