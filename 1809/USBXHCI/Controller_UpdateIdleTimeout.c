/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C005BA90
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C000C6B0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0057888 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C005BB94 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+28h] [rbp-40h]
  _DWORD v10[10]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x24uLL);
  v4 = *a1;
  v10[0] = 36;
  v10[5] = 2;
  v10[6] = 2;
  v10[8] = 2;
  v10[1] = 2;
  v10[2] = 5;
  v10[4] = 2;
  v10[3] = a2;
  v10[7] = 2;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _DWORD *))(WdfFunctions_01023 + 368))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v4,
         v10);
  v6 = a1[9];
  if ( v5 >= 0 )
  {
    *((_DWORD *)a1 + 112) = a2;
    v9 = a2;
    return WPP_RECORDER_SF_d(v6, 4u, 4u, 0x1Fu, (__int64)&Context.Logger + 4, v9);
  }
  else
  {
    v8 = v5;
    result = WPP_RECORDER_SF_d(v6, 4u, 4u, 0x1Eu, (__int64)&Context.Logger + 4, v8);
    *((_DWORD *)a1 + 100) = 2;
  }
  return result;
}
