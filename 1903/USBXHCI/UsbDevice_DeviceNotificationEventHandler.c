/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C0039B78
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001E4C4 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0014D48 (WPP_RECORDER_SF_dqd.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(_QWORD *a1, __int64 a2)
{
  char result; // al
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+38h] [rbp-10h]

  result = *(_DWORD *)a2 & 0xF0;
  if ( result == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(unsigned __int8 *)(a2 + 1);
      v5 = *((unsigned __int8 *)a1 + 135);
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xCu,
        0x44u,
        (__int64)&WPP_711f1ef54f4a3f1517afb509b5ec1830_Traceguids,
        v5,
        *a1,
        v6);
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C00576A8)(
             UcxDriverGlobals,
             *a1,
             *(unsigned __int8 *)(a2 + 1));
  }
  return result;
}
