/*
 * XREFs of EtwTraceTimerDelayStatistics @ 0x1C010BBD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqNR1qNR3 @ 0x1C010E4B4 (McTemplateK0qqNR1qNR3.c)
 */

__int64 __fastcall EtwTraceTimerDelayStatistics(int a1, int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    return McTemplateK0qqNR1qNR3(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7);
  return result;
}
