/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01231FC
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011EBA8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0005E40 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0013C68 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CFAB4 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C011F6B4 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01446B4 (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        PERESOURCE **a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  VIDPN_MGR *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int CddAllocations; // eax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  char v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v37[64]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v37, 0, 0xF8uLL);
  v9 = *((_QWORD *)a1 + 216);
  v35[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( *(_QWORD *)(v9 + 2528) && !a3 )
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v9 + 2520), v6);
  else
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 2520), v6, 0);
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9)
    || v11 && (*(_DWORD *)(v11 + 4) & 0x10) == 0 && *(_QWORD *)(v11 + 16) )
  {
    goto LABEL_10;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v9 + 2520), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    v30 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v30 + 24) = v6;
    *(_QWORD *)(v30 + 32) = v9;
    WdLogEvent5_WdWarning(v30);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(PERESOURCE ***)(v9 + 2520), a1, v6, CddDisplayMode, a4);
  v27 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
LABEL_10:
    v12 = *(VIDPN_MGR **)(*(_QWORD *)(v9 + 2520) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v36, (__int64)v12);
    v17 = WdLogNewEntry5_WdDmmEvent(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = v6;
    *(_QWORD *)(v17 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v17);
    v37[8] = 1 << v6;
    v18 = VIDPN_MGR::SetTimingsFromVidPn(
            v12,
            0,
            5,
            0LL,
            (struct D3DKMT_VIDPN_SOURCE_MASKS *)v37,
            (struct DMMVIDPN *)v35,
            0,
            0LL,
            0LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      v37[19] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v37, v18);
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v32[3] = v6;
      v32[4] = *(int *)(v9 + 280);
      v32[5] = *(unsigned int *)(v9 + 276);
      v32[6] = v19;
      WdLogEvent5_WdError(v32);
    }
    if ( v37[19] )
    {
      v35[0] |= 2u;
      if ( (int)DmmResetModeState((void *const)v9, v37[19]) < 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v33);
        WdLogEvent5_WdAssertion(v34);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40));
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v29[3] = v6;
    v29[4] = v9;
    v29[5] = v27;
    WdLogEvent5_WdError(v29);
    v35[0] = 2;
  }
  DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v9, (struct _DMM_SET_TIMING_RESULT *)v35, a5);
  return 0LL;
}
