/*
 * XREFs of ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00D0748
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D0304 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C012AAFC (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C012BA78 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02B7660 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C02B93A0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     MonitorGetMonitorHandle @ 0x1C00E8044 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::GetConnectedMonitorHandle(VIDPN_MGR *this, __int64 a2, struct HDXGMONITOR__ **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int MonitorHandle; // edi
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v3 = (unsigned int)a2;
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  *a3 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
  v6 = *((_QWORD *)this + 10);
  if ( IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v6, v3) )
  {
    v10 = *((_QWORD *)this + 1);
    if ( !v10 )
    {
      v21 = WdLogNewEntry5_WdAssertion(0LL, v7);
      WdLogEvent5_WdAssertion(v21);
      v10 = *((_QWORD *)this + 1);
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(v10 + 16), v3, 0, (void *)0x4E506456, (__int64)a3);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v18 + 24) = v3;
    v19 = *((_QWORD *)this + 1);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v20);
      v19 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v18 + 32) = *(_QWORD *)(v19 + 16);
    WdLogEvent5_WdError(v18);
    MonitorHandle = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64), v11, v13);
  return MonitorHandle;
}
