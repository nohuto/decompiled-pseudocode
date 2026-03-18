/*
 * XREFs of Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0062E28
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0010A5C (Controller_TelemetryReport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_TelemetryUpdateSubmitReportSuccess(_QWORD *a1, int a2)
{
  __int64 result; // rax
  int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v7; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+30h] BYREF
  int v10; // [rsp+88h] [rbp+38h] BYREF

  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (a2 & 0xFFFFEFC0) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(a1[9], 2u, 4u, 0xE9u, (__int64)&Context.Logger + 4, a2);
  result = a1[47] | (1LL << (a2 & 0x3F));
  a1[47] = result;
  v5 = a2 - 4111;
  if ( v5 )
  {
    if ( v5 != 3 )
      goto LABEL_19;
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *a1,
               1LL,
               131078LL,
               0LL,
               &v9);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
      v10 = 1;
      result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, int, int *))(WdfFunctions_01023 + 1928))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v9,
                 &DestinationString,
                 4LL,
                 4,
                 &v10);
      if ( (int)result >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v6 = 237;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v6 = 236;
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *a1,
               1LL,
               131078LL,
               0LL,
               &v9);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
      result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, int, _QWORD *))(WdfFunctions_01023 + 1928))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v9,
                 &DestinationString,
                 3LL,
                 8,
                 a1 + 41);
      if ( (int)result >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v6 = 235;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v6 = 234;
    }
  }
  LODWORD(v7) = result;
  result = WPP_RECORDER_SF_d(a1[9], 3u, 4u, v6, (__int64)&Context.Logger + 4, v7);
LABEL_19:
  if ( v9 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
