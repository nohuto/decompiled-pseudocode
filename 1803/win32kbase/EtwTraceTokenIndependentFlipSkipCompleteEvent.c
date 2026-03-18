/*
 * XREFs of EtwTraceTokenIndependentFlipSkipCompleteEvent @ 0x1C00AC970
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqxx @ 0x1C00AFDE8 (McTemplateK0qqxx.c)
 */

__int64 __fastcall EtwTraceTokenIndependentFlipSkipCompleteEvent(int a1, char a2, int a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qqxx(a1, (unsigned int)&TokenIndependentFlipSkipCompleteEvent, a3, a1, a2, a3, a4);
  return result;
}
