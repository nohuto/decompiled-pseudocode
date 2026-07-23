/*
 * XREFs of WdipSemGetLoggerIds @ 0x140718B9C
 * Callers:
 *     WdipSemDisableScenario @ 0x140718764 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407189EC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140744684 (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140718C1C (EtwQueryTraceHandleByLoggerName.c)
 */

__int64 WdipSemGetLoggerIds()
{
  int v0; // ebx
  __int32 v1; // ecx
  __int64 result; // rax
  __int32 v3; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 v5; // [rsp+40h] [rbp+8h] BYREF

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
