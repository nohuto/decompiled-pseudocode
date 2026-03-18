/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C012F244
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01711FC (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C023540C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01297D0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C01298E8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C012F2FC (MonitorGetPreferredMonitorSourceMode.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  VIDPN_MGR *v8; // rbp
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  struct HDXGMONITOR__ *v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct HDXGMONITOR__ *v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 319) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 319) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, (__int64)v8);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v8, (unsigned int)v4, &v19);
  v13 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v17 + 24) = v4;
    *(_QWORD *)(v17 + 32) = v13;
    WdLogEvent5_WdError(v17);
  }
  else
  {
    v14 = v19;
    if ( !v19 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v18);
    }
    LODWORD(v13) = MonitorGetPreferredMonitorSourceMode(v14, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v8, v14);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
  return (unsigned int)v13;
}
