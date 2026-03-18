/*
 * XREFs of ControllerPreInterruptsDisableAcpiCallout @ 0x1C000D2FC
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C0013850 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int16 v5; // r9
  __int64 v6; // [rsp+30h] [rbp-39h]
  _DWORD v7[2]; // [rsp+50h] [rbp-19h] BYREF
  int v8; // [rsp+58h] [rbp-11h] BYREF
  int v9; // [rsp+5Ch] [rbp-Dh]
  int *v10; // [rsp+60h] [rbp-9h]
  int v11; // [rsp+68h] [rbp-1h]
  int v12; // [rsp+6Ch] [rbp+3h]
  int v13; // [rsp+70h] [rbp+7h] BYREF
  int v14; // [rsp+74h] [rbp+Bh]
  _DWORD *v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+84h] [rbp+1Bh]
  _BYTE v18[8]; // [rsp+88h] [rbp+1Fh] BYREF
  int v19; // [rsp+90h] [rbp+27h] BYREF
  __int128 v20; // [rsp+94h] [rbp+2Bh]

  v14 = 0;
  v17 = 0;
  v9 = 0;
  v12 = 0;
  v20 = 0LL;
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1,
             off_1C00563D8);
  v3 = *(_QWORD *)(result + 8);
  if ( (*(_QWORD *)(v3 + 336) & 0x40000000000000LL) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 4u, 4u, 0x4Eu, (__int64)&Context.Logger + 4, a1);
    v14 = 0;
    v17 = 0;
    v9 = 0;
    v12 = 0;
    v15 = v7;
    v10 = &v19;
    v13 = 1;
    v8 = 1;
    v7[0] = 1114203457;
    v7[1] = 1229804112;
    v16 = 8;
    v20 = 0LL;
    v19 = 1114596673;
    v11 = 20;
    v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 336))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a1);
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, __int64, int *, int *, _QWORD, _BYTE *))(WdfFunctions_01023 + 1488))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v4,
               0LL,
               3325956LL,
               &v13,
               &v8,
               0LL,
               v18);
    if ( (int)result >= 0 )
    {
      if ( v19 == 1114596673 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v5 = 81;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v5 = 80;
      }
      return WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 4u, 4u, v5, (__int64)&Context.Logger + 4, a1);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = result;
      return WPP_RECORDER_SF_qd(*(_QWORD *)(v3 + 72), 4u, 4u, 0x4Fu, (__int64)&Context.Logger + 4, a1, v6);
    }
  }
  return result;
}
