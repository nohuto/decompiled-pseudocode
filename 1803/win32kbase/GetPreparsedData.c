/*
 * XREFs of GetPreparsedData @ 0x1C004DD54
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C004D5E0 (RIMGetPointerDeviceProperties.c)
 *     RIMExtractPointerPropertyValues @ 0x1C00EBBB0 (RIMExtractPointerPropertyValues.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0;
  v3 = a2;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  LOBYTE(a2) = 19;
  v5 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 696), a2);
  v8 = v5;
  if ( v5 )
  {
    v9 = *(_QWORD *)(v5 + 464);
    if ( !*(_QWORD *)(v9 + 16) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      v9 = *(_QWORD *)(v8 + 464);
    }
    v10 = *(_QWORD *)(v9 + 16);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 840);
    if ( !v10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      v10 = *(_QWORD *)(a1 + 840);
    }
  }
  *v3 = v10;
  LOBYTE(v2) = v10 != 0;
  return v2;
}
