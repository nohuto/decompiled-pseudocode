/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00129C0
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

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromS0(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
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
      2702LL);
  v4 = *(_QWORD *)(v3 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 4u, 4u, 0x57u, (__int64)&Context.Logger + 4, a1);
  *(_BYTE *)(v3 + 468) = 1;
  if ( *(_DWORD *)(v4 + 16) )
  {
    do
    {
      v5 = 88LL * v2;
      DynamicLock_Acquire(*(_QWORD *)(v5 + *(_QWORD *)(v4 + 48) + 24));
      v6 = *(_QWORD *)(v4 + 40) + 16LL * v2;
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v6);
      XilRegister_WriteUlong(*(_QWORD *)(v3 + 88), v6, Ulong & 0xC200 | 0xE000000u);
      DynamicLock_Release(*(_QWORD *)(v5 + *(_QWORD *)(v4 + 48) + 24));
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v4 + 16) );
  }
  return 0LL;
}
