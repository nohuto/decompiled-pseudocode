/*
 * XREFs of sub_1801184A0 @ 0x1801184A0
 * Callers:
 *     sub_1801188D8 @ 0x1801188D8 (sub_1801188D8.c)
 *     sub_180119B30 @ 0x180119B30 (sub_180119B30.c)
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 * Callees:
 *     sub_1801182A0 @ 0x1801182A0 (sub_1801182A0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

char __fastcall sub_1801184A0(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 17LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1300000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_1801182A0((unsigned __int8 *)&v5, 0xCuLL, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
