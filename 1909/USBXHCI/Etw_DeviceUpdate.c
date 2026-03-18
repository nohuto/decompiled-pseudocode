/*
 * XREFs of Etw_DeviceUpdate @ 0x1C003EBB4
 * Callers:
 *     UsbDevice_UcxEvtHubInfo @ 0x1C003CB10 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C003D3DC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     XilUsbDevice_QueryAttributes @ 0x1C0004C10 (XilUsbDevice_QueryAttributes.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32 @ 0x1C0006D64 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32.c)
 *     memset @ 0x1C0008D80 (memset.c)
 */

void __fastcall Etw_DeviceUpdate(__int64 a1, __int64 a2)
{
  int v3; // kr00_4
  int v4; // [rsp+70h] [rbp-F8h]
  __int64 v5; // [rsp+E8h] [rbp-80h] BYREF
  _OWORD v6[2]; // [rsp+F0h] [rbp-78h] BYREF
  _OWORD v7[2]; // [rsp+110h] [rbp-58h] BYREF

  LODWORD(v5) = 0;
  v3 = 0;
  if ( *(_BYTE *)(a2 + 656) )
  {
    XilUsbDevice_QueryAttributes(a2, &v5, (_BYTE *)&v5 + 1, (_BYTE *)&v5 + 2, v7, (_BYTE *)&v5 + 3, v6);
    v3 = v5;
  }
  else
  {
    memset(v7, 0, sizeof(v7));
    memset(v6, 0, sizeof(v6));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32(
      (struct _MCGEN_TRACE_CONTEXT *)BYTE2(v3),
      &USBXHCI_ETW_EVENT_DEVICE_UPDATE_V3,
      0LL,
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)a2,
      *(_DWORD *)(a2 + 20),
      *(_DWORD *)(a2 + 36),
      a2 + 44,
      *(_BYTE *)(a2 + 135),
      *(_BYTE *)(a2 + 136) != 0,
      *(_DWORD *)(a2 + 140),
      *(_DWORD *)(a2 + 144),
      v4,
      a2 + 116,
      *(_BYTE *)(a2 + 656),
      *(_BYTE *)(a2 + 657),
      *(_BYTE *)(a2 + 658),
      *(_BYTE *)(a2 + 570),
      *(_BYTE *)(a2 + 571),
      *(_BYTE *)(a2 + 572),
      *(_DWORD *)(a2 + 576),
      v3,
      SBYTE1(v3),
      SBYTE2(v3),
      SHIBYTE(v3),
      (__int64)v7,
      (__int64)v6);
}
