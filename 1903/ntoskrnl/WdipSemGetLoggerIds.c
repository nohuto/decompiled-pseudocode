/*
 * XREFs of WdipSemGetLoggerIds @ 0x1407166C0
 * Callers:
 *     WdipSemDisableScenario @ 0x1407164A4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407448AC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x14076B3F4 (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14071674C (EtwQueryTraceHandleByLoggerName.c)
 */

__int64 WdipSemGetLoggerIds()
{
  int v0; // ebx
  __int32 v1; // ecx
  __int64 result; // rax
  __int32 v3; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 v5; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DiagLog");
  v0 = EtwQueryTraceHandleByLoggerName(&DestinationString, &v5);
  if ( v0 < 0 )
    v1 = 0;
  else
    v1 = v5;
  _InterlockedExchange(&WdipDiagLoggerId, v1);
  RtlInitUnicodeString(&DestinationString, L"WdiContextLog");
  result = EtwQueryTraceHandleByLoggerName(&DestinationString, &v5);
  if ( (int)result < 0 )
    v3 = 0;
  else
    v3 = v5;
  _InterlockedExchange(&WdipContextLoggerId, v3);
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
