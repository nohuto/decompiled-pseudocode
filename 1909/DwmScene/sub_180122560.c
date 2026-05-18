/*
 * XREFs of sub_180122560 @ 0x180122560
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011FCBC @ 0x18011FCBC (sub_18011FCBC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180122560(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)sub_18011FCBC(a1, a2, &v5) )
    return v5;
  return a3;
}
