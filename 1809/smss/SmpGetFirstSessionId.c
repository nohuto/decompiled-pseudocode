/*
 * XREFs of SmpGetFirstSessionId @ 0x1400026CC
 * Callers:
 *     SmscpParseArgs @ 0x140002444 (SmscpParseArgs.c)
 *     wmain @ 0x1400031DC (wmain.c)
 * Callees:
 *     <none>
 */

__int64 SmpGetFirstSessionId()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -2500000LL;
  while ( 1 )
  {
    result = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result != -1 )
      break;
    NtDelayExecution(0, &Interval);
  }
  return result;
}
