/*
 * XREFs of DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C011F1C4 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0137AD0 (-DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01C2530 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C01D2660 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00CEE64 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkGetCddDeviceAndContextForCurrentSession(
        struct _LUID *a1,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v13; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx

  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v19 = PsGetCurrentProcessSessionId(v18);
    v17[5] = 1LL;
LABEL_12:
    v17[4] = -1073741811LL;
    v17[3] = v19;
    v16 = v17;
    goto LABEL_8;
  }
  if ( !*((_QWORD *)SessionDataForSpecifiedSession + 2329) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v19 = PsGetCurrentProcessSessionId(v20);
    v17[5] = 2LL;
    goto LABEL_12;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
  if ( SessionAdapterFromLuid )
    return SESSION_ADAPTER::GetCddDeviceAndContext(SessionAdapterFromLuid, a2, a3, a4);
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  v15[3] = a1->HighPart;
  v15[4] = a1->LowPart;
  v16 = v15;
  v15[5] = -1073741811LL;
LABEL_8:
  WdLogEvent5_WdError(v16);
  return 3221225485LL;
}
