/*
 * XREFs of GetPreparsedData @ 0x1C013CFD0
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C013EF90 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01401A0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = 0;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 736), 19);
  v10 = v6;
  if ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 464);
    if ( !*(_QWORD *)(v11 + 16) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      v11 = *(_QWORD *)(v10 + 464);
    }
    v12 = *(_QWORD *)(v11 + 16);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 880);
    if ( !v12 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      v12 = *(_QWORD *)(a1 + 880);
    }
  }
  *a2 = v12;
  LOBYTE(v3) = v12 != 0;
  return v3;
}
