/*
 * XREFs of ndisQueuedStatusUnbindAdapter @ 0x1C00EE430
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(PVOID P, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  unsigned __int64 i; // rbx
  __int64 v7; // r14
  Ndis::BindState *v8; // rcx

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x54u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)P);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a2 + 5168, 0LL);
  v5 = *(unsigned int *)(a2 + 5044);
  for ( i = 0LL; i != v5; ++i )
  {
    if ( i >= *(unsigned int *)(a2 + 5044) )
      __fastfail(5u);
    v7 = *(_QWORD *)(a2 + 5048);
    v8 = *(Ndis::BindState **)(v7 + 8 * i);
    v4 = *((_QWORD *)v8[1].m_AdditionalContext + 5);
    if ( v4
      && *(_BYTE *)(v4 + 56) < 6u
      && Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_RebindNeeded)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      WPP_SF_Zq(
        0x55u,
        &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids,
        *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v7 + 8 * i) + 80LL) + 24LL),
        **(_QWORD **)(v7 + 8 * i));
    }
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a2 + 5144), (struct _NDIS_MINIPORT_BLOCK *)v4);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a2 + 5144), RunSynchronous, 0);
  ndisDereferenceMiniport(a2, 0x36u);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x56u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a2);
}
