/*
 * XREFs of Controller_D0Exit @ 0x1C000B914
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Register_ControllerStop @ 0x1C001CAAC (Register_ControllerStop.c)
 */

__int64 __fastcall Controller_D0Exit(__int64 *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2560))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a1[37],
    a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = a2;
    WPP_RECORDER_SF_qd(a1[9], 5u, 4u, 0x77u, (__int64)&Context.Logger + 4, a1, v7);
  }
  result = Register_ControllerStop(a1[11]);
  if ( (int)result < 0 )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(a1[9], 2u, 4u, 0x78u, (__int64)&Context.Logger + 4, v6);
  }
  return result;
}
