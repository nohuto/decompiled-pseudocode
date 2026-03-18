/*
 * XREFs of Etw_DeviceRundown @ 0x1C003E994
 * Callers:
 *     Etw_DeviceListRundown @ 0x1C0001810 (Etw_DeviceListRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     XilUsbDevice_QueryAttributes @ 0x1C0004C10 (XilUsbDevice_QueryAttributes.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32 @ 0x1C0006D64 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Etw_EndpointListRundown @ 0x1C003EEB0 (Etw_EndpointListRundown.c)
 */

__int64 __fastcall Etw_DeviceRundown(const GUID *a1, __int64 a2)
{
  int v4; // kr00_4
  int v6; // [rsp+68h] [rbp-F8h]
  __int64 v7; // [rsp+E0h] [rbp-80h] BYREF
  _OWORD v8[2]; // [rsp+E8h] [rbp-78h] BYREF
  _OWORD v9[2]; // [rsp+108h] [rbp-58h] BYREF

  LODWORD(v7) = 0;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 656) )
  {
    XilUsbDevice_QueryAttributes(a2, &v7, (_BYTE *)&v7 + 1, (_BYTE *)&v7 + 2, v9, (_BYTE *)&v7 + 3, v8);
    v4 = v7;
  }
  else
  {
    memset(v9, 0, sizeof(v9));
    memset(v8, 0, sizeof(v8));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32(
      (struct _MCGEN_TRACE_CONTEXT *)BYTE2(v4),
      &USBXHCI_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V3,
      a1,
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
      v6,
      a2 + 116,
      *(_BYTE *)(a2 + 656),
      *(_BYTE *)(a2 + 657),
      *(_BYTE *)(a2 + 658),
      *(_BYTE *)(a2 + 570),
      *(_BYTE *)(a2 + 571),
      *(_BYTE *)(a2 + 572),
      *(_DWORD *)(a2 + 576),
      v4,
      SBYTE1(v4),
      SBYTE2(v4),
      SHIBYTE(v4),
      (__int64)v9,
      (__int64)v8);
  return Etw_EndpointListRundown(a1, a2);
}
