/*
 * XREFs of DbgPrompt @ 0x1800DFBD0
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800D5908 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800EA560 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A0920 (DebugPrompt.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
