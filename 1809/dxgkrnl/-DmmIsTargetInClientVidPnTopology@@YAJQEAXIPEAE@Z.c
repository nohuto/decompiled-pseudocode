/*
 * XREFs of ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C00BB48C
 * Callers:
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B4100 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0A9C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetInClientVidPnTopology(DXGADAPTER *a1, int a2, bool *a3)
{
  bool IsTargetInTopology; // bl
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  IsTargetInTopology = 0;
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = 0LL;
LABEL_12:
    WdLogEvent5_WdError(v14);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v8 = *((_QWORD *)a1 + 315);
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v15);
    v8 = *((_QWORD *)a1 + 315);
    if ( !v8 )
    {
      v14 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v14 + 24) = a1;
      goto LABEL_12;
    }
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, v9);
    v10 = *(_QWORD *)(v9 + 88);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v9 + 88);
      v17 = v11;
      if ( v11 )
        IsTargetInTopology = DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v11 + 96), a2);
    }
    else
    {
      v17 = 0LL;
    }
    *a3 = IsTargetInTopology;
    auto_rc<DMMVIDPN const>::reset(&v17, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
