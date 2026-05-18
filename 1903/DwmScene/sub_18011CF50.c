/*
 * XREFs of sub_18011CF50 @ 0x18011CF50
 * Callers:
 *     unknown_libname_101 @ 0x1801341FB (unknown_libname_101.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7 @ 0x180134213 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7.c)
 *     sub_180134B2F @ 0x180134B2F (sub_180134B2F.c)
 * Callees:
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011CF50(_QWORD **a1)
{
  __int64 v3; // [rsp+28h] [rbp-10h] BYREF

  sub_18006E244(a1, &v3, (_QWORD *)**a1, *a1);
  return j_j__o_free(*a1);
}
