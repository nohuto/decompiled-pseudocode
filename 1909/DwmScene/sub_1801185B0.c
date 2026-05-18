/*
 * XREFs of sub_1801185B0 @ 0x1801185B0
 * Callers:
 *     sub_1801189E8 @ 0x1801189E8 (sub_1801189E8.c)
 *     sub_180119C40 @ 0x180119C40 (sub_180119C40.c)
 *     sub_18011B8A8 @ 0x18011B8A8 (sub_18011B8A8.c)
 * Callees:
 *     sub_1801183B0 @ 0x1801183B0 (sub_1801183B0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

char __fastcall sub_1801185B0(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_QWORD *)(a1 + 136) = 17LL;
  v5 = v2;
  *(_QWORD *)(a1 + 144) = 0x1300000000LL;
  memset((void *)a1, 0, 0x81uLL);
  result = sub_1801183B0((unsigned __int8 *)&v5, 0xCuLL, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
