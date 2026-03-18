/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C66D4
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C00C6170 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CCDC0 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001620 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000D4F8 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8090 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00CA724 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD000 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF7E4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01569D4 (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int CddAllocations; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v39[64]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v39, 0, 0xFCuLL);
  v9 = *((_QWORD *)a1 + 216);
  v37[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *(_QWORD *)(v9 + 2560) && !a3 )
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 2552), v6);
  else
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 2552), v6, 0);
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9)
    || v12 && (*(_DWORD *)(v12 + 4) & 0x10) == 0 && *(_QWORD *)(v12 + 16) )
  {
    goto LABEL_10;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v9 + 2552), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    v29 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v29 + 24) = v6;
    *(_QWORD *)(v29 + 32) = v9;
    WdLogEvent5_WdWarning(v29);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v9 + 2552), a1, v6, CddDisplayMode, a4);
  v26 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
LABEL_10:
    v13 = *(_QWORD *)(*(_QWORD *)(v9 + 2552) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v38, v13);
    v14 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v14 + 24) = v6;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdDmmEvent(v14);
    v39[8] = 1 << v6;
    v15 = VIDPN_MGR::SetTimingsFromVidPn(v13, 0LL, 5LL);
    v16 = v15;
    if ( v15 < 0 )
    {
      v39[20] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v39, v15);
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
      v33[3] = v6;
      v33[4] = *(int *)(v9 + 280);
      v33[5] = *(unsigned int *)(v9 + 276);
      v33[6] = v16;
      WdLogEvent5_WdError(v33);
    }
    if ( v39[20] )
    {
      v37[0] |= 2u;
      if ( (int)DmmResetModeState((void *const)v9, v39[20]) < 0 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35, v34);
        WdLogEvent5_WdAssertion(v36);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40));
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
    v28[3] = v6;
    v28[4] = v9;
    v28[5] = v26;
    WdLogEvent5_WdError(v28);
    v37[0] = 2;
  }
  DmmHandleSetTimingsResult((DXGADAPTER *)v9, (struct _DMM_SET_TIMING_RESULT *)v37, a5);
  return 0LL;
}
