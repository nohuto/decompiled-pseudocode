/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C0034AC8
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001B0B0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0012348 (WPP_RECORDER_SF_dqd.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(_QWORD *a1, __int64 a2)
{
  char result; // al

  result = *(_DWORD *)a2 & 0xF0;
  if ( result == 16 )
  {
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xCu,
      0x44u,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *((unsigned __int8 *)a1 + 135),
      *a1,
      BYTE1(*(_DWORD *)a2));
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0050668)(
             UcxDriverGlobals,
             *a1,
             *(unsigned __int8 *)(a2 + 1));
  }
  return result;
}
