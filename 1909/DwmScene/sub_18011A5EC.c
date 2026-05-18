/*
 * XREFs of sub_18011A5EC @ 0x18011A5EC
 * Callers:
 *     sub_180118C00 @ 0x180118C00 (sub_180118C00.c)
 *     sub_180118D80 @ 0x180118D80 (sub_180118D80.c)
 *     sub_180118F10 @ 0x180118F10 (sub_180118F10.c)
 *     sub_180119130 @ 0x180119130 (sub_180119130.c)
 *     sub_180119420 @ 0x180119420 (sub_180119420.c)
 *     sub_180119610 @ 0x180119610 (sub_180119610.c)
 *     sub_1801199D0 @ 0x1801199D0 (sub_1801199D0.c)
 *     sub_180119DC0 @ 0x180119DC0 (sub_180119DC0.c)
 *     sub_180119FB0 @ 0x180119FB0 (sub_180119FB0.c)
 *     sub_18011A360 @ 0x18011A360 (sub_18011A360.c)
 *     sub_18011A690 @ 0x18011A690 (sub_18011A690.c)
 *     sub_18011A840 @ 0x18011A840 (sub_18011A840.c)
 *     sub_18011AB90 @ 0x18011AB90 (sub_18011AB90.c)
 *     sub_18011AD90 @ 0x18011AD90 (sub_18011AD90.c)
 *     sub_18011B290 @ 0x18011B290 (sub_18011B290.c)
 *     sub_18011B440 @ 0x18011B440 (sub_18011B440.c)
 *     sub_18011B6B0 @ 0x18011B6B0 (sub_18011B6B0.c)
 *     sub_18011BC20 @ 0x18011BC20 (sub_18011BC20.c)
 *     sub_18011BDE0 @ 0x18011BDE0 (sub_18011BDE0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18011A5EC(__int64 a1)
{
  unsigned __int64 v1; // rdx
  signed __int64 v2; // rdx
  unsigned __int64 result; // rax

  while ( 1 )
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), 0LL);
    if ( (unsigned int)result == 0x7FFFFFFFLL )
      break;
    v1 = HIDWORD(result);
    if ( (unsigned int)result == 9LL
      || (unsigned int)result == 99LL
      || (unsigned int)result == 999LL
      || (unsigned int)result == 9999LL
      || (unsigned int)result == 99999LL
      || (unsigned int)result == 999999LL
      || (unsigned int)result == 9999999LL
      || (unsigned int)result == 99999999LL
      || (unsigned int)result == 999999999LL )
    {
      ++v1;
    }
    if ( v1 > *(_QWORD *)(a1 + 152) )
      break;
    v2 = ((unsigned int)result + 1LL) | (v1 << 32);
    if ( result == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 144), v2, result) )
      return v2;
  }
  return result;
}
