/*
 * XREFs of sub_180107294 @ 0x180107294
 * Callers:
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 * Callees:
 *     sub_18008935C @ 0x18008935C (sub_18008935C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180107294(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_18015F5C8 > 5 )
    return sub_18008935C(
             (__int64)&dword_18015F5C8,
             (unsigned __int8 *)dword_18012BE1E,
             a3,
             a4,
             2u,
             (PEVENT_DATA_DESCRIPTOR)v5);
  return result;
}
