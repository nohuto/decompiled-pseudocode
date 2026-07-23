/*
 * XREFs of RtlpStdGetSpaceForTrace @ 0x1800FE0D8
 * Callers:
 *     RtlpStdLogCapturedStackTrace @ 0x1800FE1CC (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1800A3DB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FDE54 (RtlpStdExtendLowerWatermark.c)
 */

__int64 __fastcall RtlpStdGetSpaceForTrace(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned int i; // ebx
  PSLIST_ENTRY v6; // rax
  unsigned int v7; // ecx

  if ( !a2 )
    return 0LL;
  for ( i = a2 - 1; i < 0x20; ++i )
  {
    v6 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16 * (i + 13LL)));
    if ( v6 )
    {
      result = (__int64)&v6[-1];
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 196));
      return result;
    }
  }
  result = RtlpStdExtendLowerWatermark(a1, (8LL * a2 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( result )
  {
    v7 = ((((8 * a2 + 31) & 0xFFFFFFF0) - 16) >> 3) - 1;
    if ( v7 > 0x1F )
      LOWORD(v7) = 31;
    *(_WORD *)(result + 8) &= 0x7FFu;
    *(_WORD *)(result + 8) |= (_WORD)v7 << 11;
  }
  return result;
}
