/*
 * XREFs of Interrupter_D0Entry @ 0x1C001E020
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     Controller_IsControllerAccessible @ 0x1C000F3A4 (Controller_IsControllerAccessible.c)
 *     Interrupter_Initialize @ 0x1C001EF0C (Interrupter_Initialize.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C001F140 (Interrupter_InterrupterRegisterIntialize.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      9u,
      0x20u,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
      a1,
      a2);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( !a3 )
      Interrupter_Initialize(a1);
    Interrupter_InterrupterRegisterIntialize(a1);
  }
  return 0LL;
}
