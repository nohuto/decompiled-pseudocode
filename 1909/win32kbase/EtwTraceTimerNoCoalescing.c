/*
 * XREFs of EtwTraceTimerNoCoalescing @ 0x1C010BC30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0szzqqq @ 0x1C010F314 (McTemplateK0szzqqq.c)
 */

__int64 __fastcall EtwTraceTimerNoCoalescing(int a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    return McTemplateK0szzqqq(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
