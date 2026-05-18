/*
 * XREFs of sub_18007B178 @ 0x18007B178
 * Callers:
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_180082530 @ 0x180082530 (sub_180082530.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 *     sub_18009F5B0 @ 0x18009F5B0 (sub_18009F5B0.c)
 *     sub_18009F8B0 @ 0x18009F8B0 (sub_18009F8B0.c)
 *     sub_1800A3068 @ 0x1800A3068 (sub_1800A3068.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     sub_1800CE4E8 @ 0x1800CE4E8 (sub_1800CE4E8.c)
 *     sub_1800D0348 @ 0x1800D0348 (sub_1800D0348.c)
 *     sub_1800D1CB0 @ 0x1800D1CB0 (sub_1800D1CB0.c)
 *     sub_1800D27B0 @ 0x1800D27B0 (sub_1800D27B0.c)
 *     sub_1800F09C8 @ 0x1800F09C8 (sub_1800F09C8.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 * Callees:
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     sub_1800738A4 @ 0x1800738A4 (sub_1800738A4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007B178(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  sub_180063358(a1 + 112, &v5);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_1800738A4(a2, (_QWORD *)(a1 + 88));
  if ( (_BYTE)v6 )
    sub_180063670(v5);
  return a2;
}
