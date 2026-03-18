/*
 * XREFs of Controller_ConfigureSxWakeSettings @ 0x1C005EC30
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_ConfigureSxWakeSettings(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-30h]
  _DWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-18h]

  v1 = *a1;
  v7 = 257;
  v5[0] = 20;
  v5[1] = 5;
  v6 = 1LL;
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _DWORD *))(WdfFunctions_01023 + 376))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v1,
             v5);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(a1[9], 2u, 4u, 0x20u, (__int64)&Context.Logger + 4, v4);
  }
  return result;
}
