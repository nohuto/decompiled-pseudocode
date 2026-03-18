/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x1C003C094
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0015C18 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C003BCF0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C003C550 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C0015C68 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C00161D0 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00165C0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 */

unsigned __int8 __fastcall UsbDevice_SetDeviceDisabled(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 **v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 result; // al
  __int64 v13; // rdx
  __int64 v14; // [rsp+30h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(a1 + 135);
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v3,
      12,
      58,
      (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
      *(_BYTE *)(a1 + 135),
      *(_QWORD *)a1);
  }
  LOBYTE(a2) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable(*(__int64 **)(a1 + 176), a2);
  v6 = (__int64 **)(a1 + 184);
  v7 = 30LL;
  do
  {
    if ( *v6 )
    {
      LOBYTE(v5) = 1;
      Endpoint_Disable(*v6, v5);
      *v6 = 0LL;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = *(unsigned __int8 *)(a1 + 135);
  if ( *(_BYTE *)(v4 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((_QWORD *)(v4 + 16), a1);
    *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(*(_QWORD *)(v4 + 88)) + 8 * v8) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v4 + 88));
    v10 = *(_QWORD *)(XilCoreDeviceSlotData[3] + 16LL);
    *(_QWORD *)(XilCoreDeviceSlotData[7] + 8 * v8) = 0LL;
    *(_QWORD *)(v10 + 8 * v8) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v8;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(XilCoreDeviceSlotData[1] + 72LL),
        4u,
        0xAu,
        0xAu,
        (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
        a1,
        v14);
    }
  }
  v11 = *(_QWORD *)(a1 + 424);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  result = *(_BYTE *)(a1 + 432);
  if ( v11 )
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v11,
               result != 0 ? 0 : 0xC0000001);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v13 = 1LL;
    if ( *(int *)(a1 + 448) < 0 )
      v13 = 2LL;
    return (unsigned __int8)UsbDevice_QueueConfigureEndpointEvent(a1, v13);
  }
  return result;
}
