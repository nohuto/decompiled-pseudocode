/*
 * XREFs of Controller_TelemetryOkToGenerateReport @ 0x1C0062B4C
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0010A5C (Controller_TelemetryReport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

char __fastcall Controller_TelemetryOkToGenerateReport(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // bl
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r8d
  int v8; // ecx
  unsigned __int16 v9; // r9
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  char v17; // [rsp+80h] [rbp+30h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0;
  v16 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = a1[47];
  if ( !_bittest64(&v5, a3 & 0x3F) )
  {
    v6 = a3 - 4109;
    if ( !v6 )
    {
      v12 = *(_DWORD *)(a2 + 84);
      if ( (v12 & 1) == 0 )
      {
        v3 = 1;
        *(_DWORD *)(a2 + 84) = v12 | 1;
        return v3;
      }
      v3 = 0;
      goto LABEL_28;
    }
    v7 = v6 - 2;
    if ( v7 )
    {
      if ( v7 != 3 )
        return 1;
      v8 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *a1,
             1LL,
             131078LL,
             0LL,
             &v16);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_28;
        v9 = 218;
        goto LABEL_18;
      }
      RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
      v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, char *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v16,
              &DestinationString,
              4LL,
              &v17,
              0LL,
              0LL);
      v8 = v10;
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_28;
        v9 = 219;
        goto LABEL_18;
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             *a1,
             1LL,
             131078LL,
             0LL,
             &v16);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_28;
        v9 = 216;
        goto LABEL_18;
      }
      RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
      v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v16,
              &DestinationString,
              8LL,
              &v18,
              0LL,
              0LL);
      v8 = v11;
      if ( v11 >= 0 )
      {
        if ( a1[41] == v18 )
          goto LABEL_28;
      }
      else if ( v11 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_28;
        v9 = 217;
LABEL_18:
        LODWORD(v14) = v8;
        WPP_RECORDER_SF_d(a1[9], 3u, 4u, v9, (__int64)&Context.Logger + 4, v14);
        goto LABEL_28;
      }
    }
    v3 = 1;
    goto LABEL_28;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v3;
  WPP_RECORDER_SF_d(a1[9], 4u, 4u, 0xD7u, (__int64)&Context.Logger + 4, a3);
LABEL_28:
  if ( v16 )
    (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return v3;
}
