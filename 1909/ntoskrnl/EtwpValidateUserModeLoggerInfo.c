/*
 * XREFs of EtwpValidateUserModeLoggerInfo @ 0x1406A9728
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     EtwpValidateLoggerInfo @ 0x1406A975C (EtwpValidateLoggerInfo.c)
 */

__int64 __fastcall EtwpValidateUserModeLoggerInfo(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned int *v5; // rcx

  if ( a2 < 0xB0 || a3 < 0xB0 )
    return 3221225990LL;
  result = EtwpValidateLoggerInfo(a1);
  if ( (int)result < 0 )
    return result;
  if ( *v5 > v4 )
    return 3221225990LL;
  return 0LL;
}
