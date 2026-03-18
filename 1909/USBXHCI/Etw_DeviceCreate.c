/*
 * XREFs of Etw_DeviceCreate @ 0x1C003E65C
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0069E40 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32 @ 0x1C0006D64 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32.c)
 *     memset @ 0x1C0008D80 (memset.c)
 */

ULONG __fastcall Etw_DeviceCreate(__int64 a1, __int64 a2)
{
  ULONG result; // eax
  int v4; // [rsp+68h] [rbp-D0h]
  _BYTE v5[32]; // [rsp+E0h] [rbp-58h] BYREF
  _BYTE v6[32]; // [rsp+100h] [rbp-38h] BYREF

  memset(v6, 0, sizeof(v6));
  result = (unsigned int)memset(v5, 0, sizeof(v5));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32(
             (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int8 *)(a2 + 658),
             &USBXHCI_ETW_EVENT_DEVICE_CREATE_V3,
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
             0,
             0,
             0,
             0,
             (__int64)v6,
             (__int64)v5);
  return result;
}
