/*
 * XREFs of DbgPrompt @ 0x1800DFB10
 * Callers:
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 * Callees:
 *     sub_1800A0170 @ 0x1800A0170 (sub_1800A0170.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return sub_1800A0170();
}
