/*
 * XREFs of _lambda_8cf7bed277b840ea59cbc6a15c16d068_::operator() @ 0x1C005DC58
 * Callers:
 *     _lambda_8cf7bed277b840ea59cbc6a15c16d068_::_lambda_invoker_cdecl_ @ 0x1C005DC40 (_lambda_8cf7bed277b840ea59cbc6a15c16d068_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01075F8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall lambda_8cf7bed277b840ea59cbc6a15c16d068_::operator()(__int64 a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  Ndis::BindEngine *p_BindEngine; // rbx
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  p_BindEngine = &a2->BindState.Miniport->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  if ( Ndis::BindState::SetBinding(
         &a2->BindState,
         BindingEnabled,
         Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v4);
    WPP_SF_Zq(0x20u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)v4[1], v4[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
}
