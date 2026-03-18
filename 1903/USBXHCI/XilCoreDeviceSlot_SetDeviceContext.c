/*
 * XREFs of XilCoreDeviceSlot_SetDeviceContext @ 0x1C0048828
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0016B1C (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     WPP_RECORDER_SF_qdi @ 0x1C0007F8C (WPP_RECORDER_SF_qdi.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D924 (WPP_RECORDER_SF_dq.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x1C0048B14 (XilCoreUsbDevice_GetDeviceContextBufferLA.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferSize @ 0x1C0048B2C (XilCoreUsbDevice_GetDeviceContextBufferSize.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C0048B40 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall XilCoreDeviceSlot_SetDeviceContext(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 DeviceContextBufferLA)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v8; // rcx
  unsigned int v9; // edi
  char v11; // r9
  void *v12; // r10
  unsigned int DeviceContextBufferSize; // edx
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-48h]
  void *DeviceContextBufferVA; // [rsp+70h] [rbp+8h]

  v4 = a2 + 608;
  v5 = a3;
  v8 = a2 + 616;
  v9 = 0;
  if ( !*(_BYTE *)(a2 + 657) )
    v8 = a2 + 608;
  DeviceContextBufferVA = (void *)XilCoreUsbDevice_GetDeviceContextBufferVA(v8);
  if ( v11 )
  {
    Debug_FreAssertMsg(
      (__int64)"Cannot access device context directly when in secure mode",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      426);
    v12 = DeviceContextBufferVA;
    DeviceContextBufferSize = 0;
  }
  else
  {
    DeviceContextBufferSize = XilCoreUsbDevice_GetDeviceContextBufferSize(v4);
  }
  v14 = a1[7];
  v15 = *(_QWORD *)(a1[3] + 16LL);
  if ( !DeviceContextBufferLA )
  {
    v16 = v4 + 8;
    if ( !*(_BYTE *)(v4 + 49) )
      v16 = v4;
    DeviceContextBufferLA = XilCoreUsbDevice_GetDeviceContextBufferLA(v16);
  }
  memset(v12, 0, DeviceContextBufferSize);
  if ( *(_QWORD *)(v14 + 8 * v5) || *(_QWORD *)(v15 + 8 * v5) )
  {
    v9 = -1073741790;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(a1[1] + 72LL),
        2u,
        0xAu,
        0xCu,
        (__int64)&WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
        v5,
        *(_QWORD *)(v14 + 8 * v5));
  }
  else
  {
    *(_QWORD *)(v14 + 8 * v5) = a2;
    *(_QWORD *)(v15 + 8 * v5) = DeviceContextBufferLA;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdi(*(_QWORD *)(a1[1] + 72LL), 0LL, v17, v18, v20);
  }
  return v9;
}
