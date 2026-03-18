/*
 * XREFs of ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129DD0
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CA428 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01284EC (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C014B824 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmSetTimingsOnAdapter(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  VIDPN_MGR *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DMMVIDPN *v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rsi
  unsigned int v26; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v30);
  }
  v14 = a7;
  if ( a7 && (*(_DWORD *)(a7 + 328) != 2 || *(_QWORD *)(a7 + 1728) != a1) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v31);
  }
  ++*(_DWORD *)(*(_QWORD *)(a1 + 2552) + 344LL);
  v15 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 2552) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a7, (__int64)v15);
  v16 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  v20 = (struct DMMVIDPN *)v16;
  if ( v16 && *(VIDPN_MGR **)(v16 + 48) == v15 )
  {
    v21 = VIDPN_MGR::SetTimingsFromVidPn(v15, a3, a4, v16, a5, a6, 0, v14, a8);
    v25 = v21;
    if ( v21 < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v23, v22, v24);
      *(_QWORD *)(v33 + 24) = v20;
      *(_QWORD *)(v33 + 32) = v25;
      WdLogEvent5_WdError(v33);
      v26 = v25;
    }
    else
    {
      if ( a5[2] | a5[10] | a5[3] | a5[12] | a5[20] && (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v15, v20) < 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v29, v28);
        WdLogEvent5_WdAssertion(v34);
      }
      a5[2] |= a5[10];
      v26 = 0;
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v18, v17, v19);
    v26 = -1073741811;
    *(_QWORD *)(v32 + 24) = a2;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a7 + 40));
  return v26;
}
