/*
 * XREFs of sub_18011A4DC @ 0x18011A4DC
 * Callers:
 *     sub_180118AF0 @ 0x180118AF0 (sub_180118AF0.c)
 *     sub_180118C70 @ 0x180118C70 (sub_180118C70.c)
 *     sub_180118E00 @ 0x180118E00 (sub_180118E00.c)
 *     sub_180119020 @ 0x180119020 (sub_180119020.c)
 *     sub_180119310 @ 0x180119310 (sub_180119310.c)
 *     sub_180119500 @ 0x180119500 (sub_180119500.c)
 *     sub_1801198C0 @ 0x1801198C0 (sub_1801198C0.c)
 *     sub_180119CB0 @ 0x180119CB0 (sub_180119CB0.c)
 *     sub_180119EA0 @ 0x180119EA0 (sub_180119EA0.c)
 *     sub_18011A250 @ 0x18011A250 (sub_18011A250.c)
 *     sub_18011A580 @ 0x18011A580 (sub_18011A580.c)
 *     sub_18011A730 @ 0x18011A730 (sub_18011A730.c)
 *     sub_18011AA80 @ 0x18011AA80 (sub_18011AA80.c)
 *     sub_18011AC80 @ 0x18011AC80 (sub_18011AC80.c)
 *     sub_18011B180 @ 0x18011B180 (sub_18011B180.c)
 *     sub_18011B330 @ 0x18011B330 (sub_18011B330.c)
 *     sub_18011B5A0 @ 0x18011B5A0 (sub_18011B5A0.c)
 *     sub_18011BB10 @ 0x18011BB10 (sub_18011BB10.c)
 *     sub_18011BCD0 @ 0x18011BCD0 (sub_18011BCD0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18011A4DC(__int64 a1)
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
