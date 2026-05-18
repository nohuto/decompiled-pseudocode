/*
 * XREFs of ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x18012473C
 * Callers:
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 *     sub_180120040 @ 0x180120040 (sub_180120040.c)
 * Callees:
 *     <none>
 */

bool __fastcall __crt_strtox::is_zero(__crt_strtox *this, const struct __crt_strtox::big_integer *a2)
{
  return *(_DWORD *)this == 0;
}
