/*
 * XREFs of RootHub_UcxEvtGetInfo @ 0x1C00245A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RootHub_UcxEvtGetInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _WORD *v5; // rcx
  unsigned int v6; // edi
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // r8
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+30h] [rbp-48h]
  _QWORD v13[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v13);
  v5 = (_WORD *)v13[1];
  if ( *(_DWORD *)v13[1] >= 0x10u )
  {
    v6 = 0;
    *(_DWORD *)(v13[1] + 4LL) = 0;
    v7 = *(_WORD *)(v4 + 20);
    v5[4] = v7;
    v8 = *(_WORD *)(v4 + 22);
    v5[5] = v8;
    v5[6] = *(_WORD *)(v4 + 24);
    v5[7] = *(_WORD *)(v4 + 26);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = v8;
      v11 = v7;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xBu,
        0xC0u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v11,
        v12);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(_DWORD *)v13[1];
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        2u,
        0xBu,
        0xBFu,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v10);
    }
    v6 = -1073741811;
  }
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v6);
}
