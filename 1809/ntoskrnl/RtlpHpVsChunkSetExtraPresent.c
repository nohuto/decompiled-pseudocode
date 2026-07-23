/*
 * XREFs of RtlpHpVsChunkSetExtraPresent @ 0x1402FE3B8
 * Callers:
 *     RtlpHpSegSetExtraPresent @ 0x1402FD364 (RtlpHpSegSetExtraPresent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSetExtraPresent(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  int v4; // r9d
  unsigned int v5; // ecx
  __int64 result; // rax

  v2 = a2 - 16;
  v3 = a2 - 16;
  v4 = *(_DWORD *)(a1 + 176) & 1;
  if ( v4 && (a2 & 0xFFF) == 0 )
  {
    v2 = a2 - 32;
    v3 = a2 - 32;
  }
  v5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v3) ^ *(unsigned __int16 *)(v2 + 2)) - 16;
  if ( v4 && ((v3 + 32) & 0xFFF) == 0 )
    v5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v3) ^ *(unsigned __int16 *)(v2 + 2)) - 32;
  result = v5;
  *(_WORD *)(v5 + a2 - 2) |= 0x4000u;
  return result;
}
