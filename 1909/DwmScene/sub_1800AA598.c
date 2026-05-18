/*
 * XREFs of sub_1800AA598 @ 0x1800AA598
 * Callers:
 *     sub_1800AE280 @ 0x1800AE280 (sub_1800AE280.c)
 * Callees:
 *     sub_1800AAD70 @ 0x1800AAD70 (sub_1800AAD70.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

bool __fastcall sub_1800AA598(_QWORD *a1, _QWORD *a2)
{
  char v2; // bl
  __int64 v3; // r9
  char v5; // [rsp+20h] [rbp-28h]
  char v6; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = (a2[1] - *a2) / 48LL;
  if ( (a1[1] - *a1) / 48LL == v3 )
  {
    LOBYTE(v3) = v6;
    v5 = 0;
    return (unsigned __int8)sub_1800AAD70(*a1, a1[1], *a2, v3, v5) != 0;
  }
  return v2;
}
