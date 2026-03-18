/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C00630D0
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C000EA80 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C005E938 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C00631E8 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-40h]
  int v7; // [rsp+28h] [rbp-40h]
  _DWORD v8[10]; // [rsp+30h] [rbp-38h] BYREF

  v8[3] = a2;
  v8[0] = 36;
  v3 = *a1;
  v8[5] = 2;
  v8[6] = 2;
  v8[8] = 2;
  v8[1] = 2;
  v8[2] = 5;
  v8[4] = 2;
  v8[7] = 2;
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _DWORD *))(WdfFunctions_01023 + 368))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v3,
             v8);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 128) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = a2;
      return WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0x1Fu, (__int64)&Context.Logger + 4, v7);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = result;
      result = WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0x1Eu, (__int64)&Context.Logger + 4, v6);
    }
    *((_DWORD *)a1 + 116) = 2;
  }
  return result;
}
