/*
 * XREFs of Device_CheckIsSecureDevice @ 0x1C0011314
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C00587E0 (Controller_CreateWdfDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall Device_CheckIsSecureDevice(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int16 v5; // r9
  char v6; // bl
  int v7; // [rsp+30h] [rbp-D0h]
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v9[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v10[9]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v11[3]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v12[16]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = 0LL;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 336))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(a1 + 32));
  LODWORD(result) = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(WdfFunctions_01023 + 1976))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      0LL,
                      v3,
                      &v8);
  if ( (int)result >= 0 )
  {
    v9[2] = 0LL;
    v9[0] = 24LL;
    v9[1] = 3221225659LL;
    (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 1992))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v8,
      v9);
    memset(v12, 0, sizeof(v12));
    v12[0] = 65600;
    v12[2] = -1;
    v12[3] = -1;
    memset(v10, 0, sizeof(v10));
    v10[1] = v12;
    LOWORD(v10[0]) = 2331;
    (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2016))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v8,
      v10);
    v11[1] = 0LL;
    v11[0] = 0x200000010LL;
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2024))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v8,
           v3,
           v11);
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2032))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v8);
    if ( v6 && (int)result >= 0 )
    {
      v2 = (v12[1] & 0x100000) != 0;
      goto LABEL_8;
    }
    v5 = 258;
  }
  else
  {
    v5 = 257;
  }
  v7 = result;
  result = WPP_RECORDER_SF_qd(*(_QWORD *)(a1 + 16), 2u, 4u, v5, (__int64)&Context.Logger + 4, *(_QWORD *)(a1 + 32), v7);
LABEL_8:
  if ( v8 )
    result = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  *(_BYTE *)(a1 + 24) = v2;
  return result;
}
