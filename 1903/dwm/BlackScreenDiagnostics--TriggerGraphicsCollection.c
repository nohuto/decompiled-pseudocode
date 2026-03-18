/*
 * XREFs of BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x140008230
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000892C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::TriggerGraphicsCollection(unsigned __int8 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+28h] [rbp-40h]
  int v5; // [rsp+2Ch] [rbp-3Ch]
  int *v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+40h] [rbp-28h] BYREF
  UUID v9; // [rsp+44h] [rbp-24h]
  unsigned int v10; // [rsp+54h] [rbp-14h]

  v7 = 24LL;
  v3 = 0LL;
  v5 = 0;
  v6 = &v8;
  v4 = 1031;
  v8 = 2;
  v10 = (2 * a1) | 1;
  v9 = Uuid;
  result = D3DKMTEscape(&v3);
  if ( (int)result < 0 )
    return MicrosoftTelemetryAssertTriggeredArgs(v2, (unsigned int)result, (v10 >> 1) & 1);
  return result;
}
