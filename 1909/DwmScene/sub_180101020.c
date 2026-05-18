/*
 * XREFs of sub_180101020 @ 0x180101020
 * Callers:
 *     sub_180100440 @ 0x180100440 (sub_180100440.c)
 * Callees:
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char __fastcall sub_180101020(__int64 a1)
{
  _QWORD *v1; // rcx
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+34h] [rbp-34h]
  int v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+50h] [rbp-18h]

  v4 = 0;
  v8 = 0;
  v5 = 0;
  v1 = *(_QWORD **)(a1 + 1896);
  v7 = xmmword_18025F030;
  v6 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18020D020);
  v9 = 2139095039;
  return sub_18009F6C0(v1, &si128, 0LL);
}
