/*
 * XREFs of EtwTraceTimerNoCoalescing @ 0x1C00AC920
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0szzqqq @ 0x1C00B01CC (McTemplateK0szzqqq.c)
 */

__int64 __fastcall EtwTraceTimerNoCoalescing(int a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000) != 0 )
    return McTemplateK0szzqqq(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
