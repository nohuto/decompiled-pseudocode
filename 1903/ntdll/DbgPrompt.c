/*
 * XREFs of DbgPrompt @ 0x1800DFB10
 * Callers:
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 * Callees:
 *     sub_1800A0170 @ 0x1800A0170 (sub_1800A0170.c)
 */

__int64 __fastcall DbgPrompt(__int64 a1)
{
  __int64 v1; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( *(_BYTE *)(a1 + v1) );
  return sub_1800A0170();
}
