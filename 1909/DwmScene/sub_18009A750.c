/*
 * XREFs of sub_18009A750 @ 0x18009A750
 * Callers:
 *     sub_180099F28 @ 0x180099F28 (sub_180099F28.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

bool __fastcall sub_18009A750(float *a1)
{
  float v1; // xmm0_4
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  float Px; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  v2 = 1LL;
  v3 = 15LL;
  do
  {
    v4 = v2 >> 2;
    v5 = v2++ & 3;
    v1 = v1 + a1[4 * v4 + v5];
    --v3;
  }
  while ( v3 );
  Px = v1;
  return fdtest(&Px) <= 0;
}
