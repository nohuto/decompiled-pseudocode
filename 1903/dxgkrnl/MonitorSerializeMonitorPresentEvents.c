/*
 * XREFs of MonitorSerializeMonitorPresentEvents @ 0x1C02C9DFC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B15F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x1C02C8C4C (-_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZA.c)
 */

__int64 __fastcall MonitorSerializeMonitorPresentEvents(
        DXGADAPTER *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  MONITOR_MGR *v13; // rcx
  __int64 v14; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a1 + 319);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3221225659LL;
  }
  v13 = *(MONITOR_MGR **)(v10 + 96);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, v6, v8);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  return MONITOR_MGR::_SerializeMonitorPresentEvent(v13, a2, a3);
}
