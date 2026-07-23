/*
 * XREFs of DbgPrompt @ 0x1800E1F80
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800ED360 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A3D70 (DebugPrompt.c)
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
