/*
 * XREFs of Interrupter_D0Entry @ 0x1C001AC60
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Controller_IsControllerAccessible @ 0x1C000CF04 (Controller_IsControllerAccessible.c)
 *     Interrupter_Initialize @ 0x1C001BA08 (Interrupter_Initialize.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C001BC1C (Interrupter_InterrupterRegisterIntialize.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      9u,
      0x20u,
      (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
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
