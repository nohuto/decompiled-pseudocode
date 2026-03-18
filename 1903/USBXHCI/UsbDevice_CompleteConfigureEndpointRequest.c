/*
 * XREFs of UsbDevice_CompleteConfigureEndpointRequest @ 0x1C0004F18
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0005D34 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     McTemplateK0ppqqqq @ 0x1C0006FA8 (McTemplateK0ppqqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C003E090 (WPP_RECORDER_SF_dqqd.c)
 */

__int64 __fastcall UsbDevice_CompleteConfigureEndpointRequest(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rbp
  unsigned int v7; // edi
  _BYTE *v8; // rcx
  unsigned int v9; // esi
  bool v10; // zf

  LOBYTE(a2) = *(_QWORD *)(a1 + 440) != 0LL;
  Debug_FreAssertMsg(
    "Unexpected WdfRequest value",
    a2,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
    2248LL);
  v6 = *(_QWORD *)(a1 + 440);
  v7 = *(_DWORD *)(a1 + 448);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqqd(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), *(unsigned __int8 *)(a1 + 135), v4, v5);
  v8 = *(_BYTE **)(a1 + 592);
  if ( v8 )
  {
    *(_BYTE *)(a1 + 570) = v8[80];
    *(_BYTE *)(a1 + 571) = v8[81];
    *(_BYTE *)(a1 + 572) = v8[82];
  }
  v9 = 0;
  *(_DWORD *)(a1 + 576) = v7;
  v10 = *(_BYTE *)(a1 + 432) == 0;
  *(_DWORD *)(a1 + 448) = -1073741823;
  if ( v10 )
    v9 = v7;
  *(_BYTE *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_BYTE *)(a1 + 452) = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0ppqqqq(
      *(unsigned __int8 *)(a1 + 571),
      v3,
      v4,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
      *(_QWORD *)a1,
      *(_BYTE *)(a1 + 570),
      *(_BYTE *)(a1 + 571),
      *(_BYTE *)(a1 + 572),
      v7);
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v6,
           v9);
}
