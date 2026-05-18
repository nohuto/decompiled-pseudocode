/*
 * XREFs of sub_1800D5028 @ 0x1800D5028
 * Callers:
 *     sub_1800D50B4 @ 0x1800D50B4 (sub_1800D50B4.c)
 * Callees:
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     sub_1800D6070 @ 0x1800D6070 (sub_1800D6070.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5028(__int64 a1)
{
  __int64 *v3; // [rsp+28h] [rbp-10h] BYREF

  `eh vector destructor iterator'((void *)(a1 + 64), 0x10uLL, 5uLL, (void (*)(void *))unknown_libname_110);
  sub_180026554((__int64 ***)(a1 + 48), &v3, **(__int64 ***)(a1 + 48), *(__int64 **)(a1 + 48));
  j_j__o_free(*(_QWORD *)(a1 + 48));
  sub_1800D6070(a1 + 8);
  j_j__o_free(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return sub_18011E090(a1);
}
