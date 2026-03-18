/*
 * XREFs of MonitorQueryDmmSourceModeSetInterface @ 0x1C02C9ADC
 * Callers:
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02B7A70 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorQueryDmmSourceModeSetInterface(DXGADAPTER *this, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = this;
  *(_QWORD *)(v4 + 32) = a2;
  if ( this && a2 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v13);
    }
    if ( *((_QWORD *)this + 319) )
    {
      *a2 = &DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DmmMonitorSourceModeSetInterfaceV1;
      return 0LL;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = this;
      WdLogEvent5_WdError(v14);
      return 3221225659LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
