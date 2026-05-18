/*
 * XREFs of ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x18012484C
 * Callers:
 *     sub_18011F568 @ 0x18011F568 (sub_18011F568.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 * Callees:
 *     <none>
 */

bool __fastcall __crt_strtox::is_zero(__crt_strtox *this, const struct __crt_strtox::big_integer *a2)
{
  return *(_DWORD *)this == 0;
}
