/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0013980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

_UNKNOWN **__fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // r14
  _UNKNOWN **result; // rax
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int16 Ulong; // ax

  v2 = 0;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  if ( *(_BYTE *)(v3 + 537) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      2751LL);
  v4 = *(_QWORD *)(v3 + 152);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 4u, 4u, 0x58u, (__int64)&Context.Logger + 4, a1);
  v6 = (*(_QWORD *)(v3 + 336) & 0x20000000LL) == 0;
  *(_BYTE *)(v3 + 468) = 0;
  if ( v6 && *(_DWORD *)(v4 + 16) )
  {
    do
    {
      v7 = 88LL * v2;
      DynamicLock_Acquire(*(_QWORD *)(v7 + *(_QWORD *)(v4 + 48) + 24));
      v8 = *(_QWORD *)(v4 + 40) + 16LL * v2;
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v8);
      XilRegister_WriteUlong(*(_QWORD *)(v3 + 88), v8, Ulong & 0xC200);
      result = (_UNKNOWN **)DynamicLock_Release(*(_QWORD *)(v7 + *(_QWORD *)(v4 + 48) + 24));
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v4 + 16) );
  }
  return result;
}
