/*
 * XREFs of sub_1800801D0 @ 0x1800801D0
 * Callers:
 *     EtwGetTraceEnableLevel @ 0x180080110 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180080150 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180080190 (EtwGetTraceLoggerHandle.c)
 * Callees:
 *     ZwTraceControl @ 0x18009FE70 (ZwTraceControl.c)
 */

__int64 sub_1800801D0()
{
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)dword_180163530;
  if ( !dword_180163530 )
  {
    if ( ZwTraceControl(EtwMaxLoggers, 0LL, 0, &dword_180163530, 4u, &ReturnLength) || ReturnLength != 4 )
    {
      result = 64LL;
      dword_180163530 = 64;
    }
    else
    {
      return (unsigned int)dword_180163530;
    }
  }
  return result;
}
