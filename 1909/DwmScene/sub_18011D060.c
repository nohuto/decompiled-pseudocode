/*
 * XREFs of sub_18011D060 @ 0x18011D060
 * Callers:
 *     unknown_libname_101 @ 0x18013430B (unknown_libname_101.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7 @ 0x180134323 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7.c)
 *     sub_180134C3F @ 0x180134C3F (sub_180134C3F.c)
 * Callees:
 *     sub_18006E354 @ 0x18006E354 (sub_18006E354.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011D060(_QWORD **a1)
{
  __int64 v3; // [rsp+28h] [rbp-10h] BYREF

  sub_18006E354(a1, &v3, (_QWORD *)**a1, *a1);
  return j_j__o_free(*a1);
}
