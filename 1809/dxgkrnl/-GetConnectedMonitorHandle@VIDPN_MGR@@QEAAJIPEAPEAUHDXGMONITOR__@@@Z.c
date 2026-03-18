/*
 * XREFs of ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00C61B0
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BAC28 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00CE078 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01382CC (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C027F620 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C0281360 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::GetConnectedMonitorHandle(VIDPN_MGR *this, unsigned int a2, struct HDXGMONITOR__ **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int MonitorHandle; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = a2;
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  *a3 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
  v6 = *((_QWORD *)this + 10);
  if ( IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v6, v3) )
  {
    v8 = *((_QWORD *)this + 1);
    if ( !v8 )
    {
      v16 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v16);
      v8 = *((_QWORD *)this + 1);
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(v8 + 16), (unsigned int)v3, 0LL, (void *)0x4E506456, a3);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = v3;
    v14 = *((_QWORD *)this + 1);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v15);
      v14 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(v14 + 16);
    WdLogEvent5_WdError(v13);
    MonitorHandle = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return MonitorHandle;
}
