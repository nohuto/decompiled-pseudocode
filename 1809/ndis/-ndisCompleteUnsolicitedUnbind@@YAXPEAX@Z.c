/*
 * XREFs of ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x1C00EC250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisCompleteUnsolicitedUnbind(void *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx

  v1 = *((_QWORD *)a1 + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 5168, 0LL);
  if ( Ndis::BindState::SetBinding(*((Ndis::BindState **)a1 + 107), BindingDisabled, Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    WPP_SF_Zq(
      0xEu,
      &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids,
      *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)a1 + 107) + 80LL) + 24LL),
      **((_QWORD **)a1 + 107));
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v1 + 5144), v3);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v1 + 5144), RunSynchronous, 0);
}
