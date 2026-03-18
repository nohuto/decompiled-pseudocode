/*
 * XREFs of Endpoint_GetDequeuePointer @ 0x1C0018FFC
 * Callers:
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0017B20 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_Enable @ 0x1C00182F0 (Endpoint_Enable.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019580 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0019778 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019DF0 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C001A700 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BE60 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CFA0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C003B188 (UsbDevice_InitializeEndpointContext.c)
 *     UsbDevice_SetAddress @ 0x1C003B8A0 (UsbDevice_SetAddress.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C0043DB8 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     TR_GetDequeuePointer @ 0x1C00290DC (TR_GetDequeuePointer.c)
 */

__int64 __fastcall Endpoint_GetDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  if ( *(_BYTE *)(a1 + 37) )
  {
    v2 = *(_QWORD *)(a1 + 136);
    if ( !a2 )
      return *(_QWORD *)(*(_QWORD *)(v2 + 32) + 24LL);
    v4 = *(_QWORD *)(104LL * (unsigned int)(a2 - 1) + v2 + 48);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 88);
  }
  return TR_GetDequeuePointer(v4);
}
