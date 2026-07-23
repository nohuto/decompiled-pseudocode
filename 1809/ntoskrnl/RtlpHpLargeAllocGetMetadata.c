/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x1400081A8
 * Callers:
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocSize @ 0x1400080E4 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1402FE228 (RtlpHpLargeAllocSetExtraPresent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocGetMetadata(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 *v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  v3 = (unsigned __int64 *)(a1 + 72);
  result = *v3;
  if ( (v2 & 1) != 0 && result )
    result ^= (unsigned __int64)v3;
  while ( result )
  {
    v5 = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v5 )
    {
      v6 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 <= v5 )
        return result;
      v6 = *(_QWORD *)(result + 8);
    }
    if ( (v2 & 1) != 0 && v6 )
      result ^= v6;
    else
      result = v6;
  }
  return result;
}
