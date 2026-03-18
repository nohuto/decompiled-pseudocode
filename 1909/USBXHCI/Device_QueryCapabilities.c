/*
 * XREFs of Device_QueryCapabilities @ 0x1C000273C
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C005F94C (Controller_CreateWdfDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall Device_QueryCapabilities(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx
  int v5; // r9d
  char v6; // bl
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+58h] [rbp-B0h]
  _QWORD v13[9]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+B8h] [rbp-50h]
  _OWORD v16[4]; // [rsp+C8h] [rbp-40h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  v12 = 0uLL;
  memset(v13, 0, sizeof(v13));
  memset(v16, 0, sizeof(v16));
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 336))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(a1 + 88));
  result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(WdfFunctions_01023 + 1976))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             0LL,
             v2,
             &v10);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v5 = 260;
    goto LABEL_9;
  }
  v12 = 0xC00000BBuLL;
  v11 = 24LL;
  (*(void (__fastcall **)(unsigned __int64, __int64, __int64 *))(WdfFunctions_01023 + 1992))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v10,
    &v11);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[0]) = 65600;
  *((_QWORD *)&v16[0] + 1) = -1LL;
  memset(v13, 0, sizeof(v13));
  v13[1] = v16;
  LOWORD(v13[0]) = 2331;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2016))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v10,
    v13);
  v15 = 0LL;
  v14 = 0x200000010LL;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64 *))(WdfFunctions_01023 + 2024))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v10,
         v2,
         &v14);
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2032))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v10);
  if ( v6 && (int)result >= 0 )
  {
    v7 = v16[1];
    *(_OWORD *)(a1 + 24) = v16[0];
    v8 = v16[2];
    *(_OWORD *)(a1 + 40) = v7;
    v9 = v16[3];
    *(_OWORD *)(a1 + 56) = v8;
    *(_OWORD *)(a1 + 72) = v9;
    goto LABEL_10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 261;
LABEL_9:
    LOBYTE(v4) = 2;
    result = WPP_RECORDER_SF_qd(
               *(_QWORD *)(a1 + 16),
               v4,
               4,
               v5,
               (__int64)&Context.Logger + 4,
               *(_QWORD *)(a1 + 88),
               result);
  }
LABEL_10:
  if ( v10 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
