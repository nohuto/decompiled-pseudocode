/*
 * XREFs of RtlpStackDbRefCountIncrement @ 0x180116320
 * Callers:
 *     RtlStackDbStackAdd @ 0x18011588C (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801163BC (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpStackDbRefCountIncrement(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // edx

  v1 = *a1;
  v2 = v1 ^ (v1 ^ (v1 + 1)) & 0xFFFFFF;
  if ( (v2 & 0xFFFFFFu) < (*a1 & 0xFFFFFFu) )
    return 0LL;
  while ( 1 )
  {
    v1 = _InterlockedCompareExchange(a1, v2, v1);
    if ( v1 == (v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF) )
      break;
    v2 = v1 ^ (v1 ^ (v1 + 1)) & 0xFFFFFF;
    if ( (v2 & 0xFFFFFFu) < (v1 & 0xFFFFFFu) )
      return 0LL;
  }
  return 1LL;
}
