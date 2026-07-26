/*
 * XREFs of ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1C01174F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMQueuedPromoteMiniport(char *a1)
{
  bool v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rdx
  unsigned __int16 *v4; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5128, 0LL);
  v2 = Ndis::BindState::SetBinding((Ndis::BindState *)(a1 + 5032), BindingEnabled, Reason_SecondaryMiniport);
  v4 = 0LL;
  if ( v2 && (unsigned __int8)byte_1C00E677B >= 4u )
  {
    if ( a1 )
      v4 = (unsigned __int16 *)*((_QWORD *)a1 + 482);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v3,
        0x1Cu,
        0x6Cu,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        v4,
        a1);
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5104), v3);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5104), RunSynchronous, 0);
  IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), 1u);
  ndisDereferenceMiniport((__int64)a1, 0x21u);
}
