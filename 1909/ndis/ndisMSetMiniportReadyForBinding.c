/*
 * XREFs of ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C002F158 (ndisStartDeviceSynchronous.c)
 *     ndisPnPPortActivation @ 0x1C0062234 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C00628FC (ndisPnPPortDeactivation.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00638AC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisIMInitializeDeviceInstanceInternal @ 0x1C0080470 (ndisIMInitializeDeviceInstanceInternal.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DC20 (NdisLWMStartNetworkInterface.c)
 *     NdisWdfMiniportStarted @ 0x1C009F010 (NdisWdfMiniportStarted.c)
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00FD250 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C013B334 (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisInitialBindCompleted @ 0x1C003F1B4 (ndisInitialBindCompleted.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C0098EA4 (WPP_RECORDER_SF_LZq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        __int64 a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  Ndis::BindState *v8; // rcx
  int v9; // edx
  int v10; // r8d
  unsigned __int16 *v11; // rcx
  unsigned __int16 v12; // r9

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 5128, 0LL);
  v8 = (Ndis::BindState *)(a1 + 5032);
  if ( a2 )
  {
    if ( !Ndis::BindState::SetBinding(v8, BindingEnabled, a3) || (unsigned __int8)byte_1C00E677B < 4u )
      goto LABEL_3;
    v11 = a1 ? *(unsigned __int16 **)(a1 + 3856) : 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_3;
    v12 = 272;
  }
  else
  {
    if ( !Ndis::BindState::SetBinding(v8, BindingDisabled, a3) || (unsigned __int8)byte_1C00E677B < 4u )
      goto LABEL_3;
    v11 = a1 ? *(unsigned __int16 **)(a1 + 3856) : 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_3;
    v12 = 273;
  }
  WPP_RECORDER_SF_LZq(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v9,
    v10,
    v12,
    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
    a3,
    v11,
    a1);
LABEL_3:
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5104));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5104), a4, 0);
  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted(a1);
  }
}
