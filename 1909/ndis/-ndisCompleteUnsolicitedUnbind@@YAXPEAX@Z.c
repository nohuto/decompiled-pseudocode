/*
 * XREFs of ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C01168E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisCompleteUnsolicitedUnbind(void *a1)
{
  __int64 v1; // rdi
  unsigned __int16 *v3; // rdx
  _QWORD *v4; // rax

  v1 = *((_QWORD *)a1 + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 5128, 0LL);
  if ( Ndis::BindState::SetBinding(*((Ndis::BindState **)a1 + 107), BindingDisabled, Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C00E677B >= 4u )
  {
    v4 = (_QWORD *)*((_QWORD *)a1 + 107);
    v3 = *(unsigned __int16 **)(v4[10] + 24LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v3,
        0x1Cu,
        0xEu,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        v3,
        *v4);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5104), (struct _NDIS_MINIPORT_BLOCK *)v3);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5104), RunSynchronous, 0);
}
