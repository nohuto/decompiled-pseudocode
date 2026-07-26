/*
 * XREFs of ndisMSetMiniportReadyForBinding @ 0x1C00C87C0
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003DA98 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003E02C (ndisPnPPortDeactivation.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C0042598 (ndisIfDeregisterInterfaceEx.c)
 *     NdisWdfMiniportStarted @ 0x1C0065320 (NdisWdfMiniportStarted.c)
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C8330 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00EB6F8 (ndisIMInitializeDeviceInstance_ea_1C00EB6F8.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00F1980 (NdisLWMStartNetworkInterface.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C0119C48 (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisInitialBindCompleted @ 0x1C001DC88 (ndisInitialBindCompleted.c)
 *     WPP_SF_DZq @ 0x1C0061574 (WPP_SF_DZq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        __int64 a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  Ndis::BindState *v8; // rcx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  const wchar_t *v10; // r9
  unsigned __int16 v11; // cx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5168, 0LL);
  v8 = (Ndis::BindState *)(a1 + 5072);
  if ( a2 )
  {
    if ( Ndis::BindState::SetBinding(v8, BindingEnabled, a3) && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      if ( a1 )
        v10 = *(const wchar_t **)(a1 + 3888);
      else
        v10 = 0LL;
      v11 = 271;
LABEL_19:
      WPP_SF_DZq(v11, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a3, v10, a1);
    }
  }
  else if ( Ndis::BindState::SetBinding(v8, BindingDisabled, a3) && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    if ( a1 )
      v10 = *(const wchar_t **)(a1 + 3888);
    else
      v10 = 0LL;
    v11 = 272;
    goto LABEL_19;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5144), v9);
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5144), a4, 0);
  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted(a1);
  }
}
