/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1C00E7E8C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0032CF4 (DestroyProcessInfo.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00E945C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &ScreenSaverProcessEvent, a3, (unsigned int)a1);
  return result;
}
