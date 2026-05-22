/*
 * XREFs of std::_Sort_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B29DC
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B2B74 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800B2878 (std--_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

unsigned __int64 __fastcall std::_Sort_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int128 i; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 result; // rax

  v2 = a2;
  for ( i = (a2 - a1) * (__int128)0xE38E38E38E38E39LL; ; i = (v2 - a1) * (__int128)0xE38E38E38E38E39LL )
  {
    v5 = *((__int64 *)&i + 1) >> 2;
    result = v5 >> 63;
    if ( (__int64)((v5 >> 63) + v5) < 2 )
      break;
    std::_Pop_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(a1, v2);
    v2 -= 72LL;
  }
  return result;
}
