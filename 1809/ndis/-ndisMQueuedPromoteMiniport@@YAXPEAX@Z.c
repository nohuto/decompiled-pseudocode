/*
 * XREFs of ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C00EF2A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMQueuedPromoteMiniport(char *a1)
{
  bool v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  const wchar_t *v4; // r8

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5168, 0LL);
  v2 = Ndis::BindState::SetBinding((Ndis::BindState *)(a1 + 5072), BindingEnabled, Reason_SecondaryMiniport);
  v4 = 0LL;
  if ( v2 && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    if ( a1 )
      v4 = (const wchar_t *)*((_QWORD *)a1 + 486);
    WPP_SF_Zq(0x6Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v4, a1);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5144), v3);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5144), RunSynchronous, 0);
  IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), 1u);
  ndisDereferenceMiniport((__int64)a1, 0x21u);
}
