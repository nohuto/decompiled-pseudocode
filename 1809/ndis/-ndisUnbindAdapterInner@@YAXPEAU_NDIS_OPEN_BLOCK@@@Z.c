/*
 * XREFs of ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C005DE88
 * Callers:
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C005DF70 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     NdisUnbindAdapter @ 0x1C005E4B0 (NdisUnbindAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01075F8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisUnbindAdapterInner(struct _NDIS_OPEN_BLOCK *a1)
{
  _QWORD v2[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x34u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)a1);
  Ndis::BindEngine::BeginPolicyUpdates(&a1->MiniportHandle->BindEngine);
  if ( Ndis::BindState::SetBinding(&a1->Bind->BindState, BindingDisabled, Reason_DriverRejectedBinding)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v2);
    WPP_SF_Zq(0x35u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)v2[1], v2[0]);
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->MiniportHandle->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->MiniportHandle->BindEngine, RunAsynchronous, 0);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x36u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)a1);
}
