/*
 * XREFs of UsbhFlushPortChangeQueue @ 0x1C000AA88
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0001610 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0009E00 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A410 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000A9A0 (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000B3E8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C0013140 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C00157D0 (Usbh_PCE_wDone_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0045AA4 (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0045CB4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C004603C (Usbh_PCE_ResumeTimeout_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0046234 (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0046388 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x1C000AB44 (UsbhFreePortChangeQueueObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFlushPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdx
  _QWORD **v7; // rsi
  _QWORD *v8; // r8
  _QWORD *v9; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      55,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
      __fastfail(3u);
    *v7 = v9;
    LOBYTE(a4) = 1;
    v9[1] = v7;
    UsbhFreePortChangeQueueObject(a1, a2, v8 - 2, a4);
  }
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
}
