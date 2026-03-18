/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0010DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rbx
  __int16 Ulong; // ax

  v2 = 0LL;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  if ( *(_BYTE *)(v3 + 473) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      2680LL);
  v4 = *(_QWORD *)(v3 + 152);
  result = WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 4u, 4u, 0x56u, (__int64)&Context.Logger + 4, a1);
  v6 = (*(_QWORD *)(v3 + 272) & 0x20000000LL) == 0;
  *(_BYTE *)(v3 + 404) = 0;
  if ( v6 && *(_DWORD *)(v4 + 16) )
  {
    do
    {
      DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 80 * v2 + 24));
      v7 = *(_QWORD *)(v4 + 40) + 16LL * (unsigned int)v2;
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v7);
      XilRegister_WriteUlong(*(_QWORD *)(v3 + 88), v7, Ulong & 0xC200);
      result = DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 80 * v2 + 24));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(v4 + 16) );
  }
  return result;
}
