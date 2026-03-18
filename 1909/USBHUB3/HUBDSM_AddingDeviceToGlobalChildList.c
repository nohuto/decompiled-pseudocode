/*
 * XREFs of HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001FB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002FFA0 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x1C0030174 (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_GetConnectorMapNodeForPort @ 0x1C0078F38 (HUBCONNECTOR_GetConnectorMapNodeForPort.c)
 */

__int64 __fastcall HUBDSM_AddingDeviceToGlobalChildList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 ConnectorMapNodeForPort; // rax
  int v5; // eax
  int v6; // eax
  __int16 v7; // [rsp+20h] [rbp-28h]
  __int16 v8; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 8);
  if ( !*(_QWORD *)(v1 + 2152) )
  {
    if ( (*(_DWORD *)(v2 + 204) & 0x200) != 0 )
    {
      if ( (unsigned __int8)HUBMISC_TypeCCompanionHasIdenticalDeviceAttached(v1) )
        return 4073LL;
      _InterlockedOr((volatile signed __int32 *)(v2 + 1336), 0x40u);
    }
    return 4077LL;
  }
  ConnectorMapNodeForPort = HUBCONNECTOR_GetConnectorMapNodeForPort(*(_QWORD *)(v1 + 8));
  v8 = *(_WORD *)(v1 + 1998);
  v7 = *(_WORD *)(v1 + 1996);
  v5 = USBD_AddDeviceToGlobalList(
         v1,
         *(_QWORD *)v1,
         *(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 200LL),
         ConnectorMapNodeForPort,
         v7,
         v8,
         v1 + 2144)
     - 1;
  if ( !v5 )
    return 4077LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4073LL;
  if ( v6 == 1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_1C0064130);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x25u,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
    HUBMISC_LogDescriptorValidationErrorForDevice(v1, 234LL);
  }
  return 4065LL;
}
