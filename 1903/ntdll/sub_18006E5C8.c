/*
 * XREFs of sub_18006E5C8 @ 0x18006E5C8
 * Callers:
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

unsigned __int8 *__fastcall sub_18006E5C8(int a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx

  if ( (a2 & 0xF) != 0 )
  {
    v3 = a2;
    v4 = a1;
    v5 = 9;
    goto LABEL_7;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    v3 = (int)v2;
    v4 = a1;
    v5 = 8;
LABEL_7:
    sub_18010A694(v5, v4, v3, 0, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
