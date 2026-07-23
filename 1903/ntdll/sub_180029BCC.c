/*
 * XREFs of sub_180029BCC @ 0x180029BCC
 * Callers:
 *     sub_180029C14 @ 0x180029C14 (sub_180029C14.c)
 *     sub_180076A04 @ 0x180076A04 (sub_180076A04.c)
 *     sub_1800D0D7C @ 0x1800D0D7C (sub_1800D0D7C.c)
 * Callees:
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 */

__int64 __fastcall sub_180029BCC(
        char a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING *a5,
        _UNICODE_STRING **a6)
{
  return sub_1800276A8(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
