/*
 * XREFs of EtwpGetMaxLogger @ 0x180085190
 * Callers:
 *     EtwGetTraceEnableLevel @ 0x1800850D0 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180085110 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180085150 (EtwGetTraceLoggerHandle.c)
 * Callees:
 *     NtTraceControl @ 0x1800A3A50 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)EtwpMaxLoggers;
  if ( !EtwpMaxLoggers )
  {
    if ( (unsigned int)NtTraceControl(42LL, 0LL, 0LL, &EtwpMaxLoggers, 4, &v1) || v1 != 4 )
    {
      result = 64LL;
      EtwpMaxLoggers = 64;
    }
    else
    {
      return (unsigned int)EtwpMaxLoggers;
    }
  }
  return result;
}
