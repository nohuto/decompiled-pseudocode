/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x1C0023EF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r11
  unsigned __int16 i; // dx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // eax
  int v15; // ecx
  int v17; // [rsp+28h] [rbp-50h]
  _QWORD v18[5]; // [rsp+30h] [rbp-48h] BYREF

  memset(v18, 0, sizeof(v18));
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v18);
  v5 = v18[1];
  v6 = *(_QWORD *)(v18[1] + 8LL);
  if ( *(_DWORD *)v18[1] < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v8 = 3221225485LL;
      return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               a2,
               v8);
    }
    v7 = 197;
    v17 = *(_DWORD *)v18[1];
LABEL_4:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      v7,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v17);
    goto LABEL_5;
  }
  v9 = *(_WORD *)(v18[1] + 4LL);
  if ( v9 != *(_WORD *)(v4 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v7 = 198;
    goto LABEL_9;
  }
  v9 = *(_WORD *)(v18[1] + 6LL);
  if ( v9 < 0x14u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v7 = 199;
LABEL_9:
    v17 = v9;
    goto LABEL_4;
  }
  v8 = 0LL;
  v10 = 0;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(v4 + 16); ++i )
  {
    if ( v10 >= *(_WORD *)(v5 + 4) )
      break;
    v12 = 88LL * i;
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 13) == 2 )
    {
      v13 = v10;
      **(_WORD **)(v6 + 8LL * v10) = i + 1;
      v14 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 17) != 1 )
        v14 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 4LL) = v14;
      v15 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 16) != 1 )
        v15 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 8LL) = v15;
      if ( (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 336LL) & 0x400000LL) == 0 )
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v10) + 16LL) = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 19);
      ++v10;
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v13) + 2LL) = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 12);
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v13) + 3LL) = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 14);
    }
  }
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v8);
}
