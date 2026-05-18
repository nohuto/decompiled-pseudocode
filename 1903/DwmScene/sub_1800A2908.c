/*
 * XREFs of sub_1800A2908 @ 0x1800A2908
 * Callers:
 *     sub_18012F82A @ 0x18012F82A (sub_18012F82A.c)
 *     sub_18012F836 @ 0x18012F836 (sub_18012F836.c)
 *     ?dtor$0@?0??do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z@4HA @ 0x18012F868 (-dtor$0@-0--do_transform@-$collate@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 *     sub_18012FA55 @ 0x18012FA55 (sub_18012FA55.c)
 *     sub_18012FEFF @ 0x18012FEFF (sub_18012FEFF.c)
 *     sub_18013041F @ 0x18013041F (sub_18013041F.c)
 *     sub_180130580 @ 0x180130580 (sub_180130580.c)
 *     sub_1801305B9 @ 0x1801305B9 (sub_1801305B9.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10 @ 0x180130B1F (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10.c)
 *     sub_180131FEA @ 0x180131FEA (sub_180131FEA.c)
 *     sub_18013221A @ 0x18013221A (sub_18013221A.c)
 *     sub_180132253 @ 0x180132253 (sub_180132253.c)
 *     sub_18013228C @ 0x18013228C (sub_18013228C.c)
 *     sub_1801322DD @ 0x1801322DD (sub_1801322DD.c)
 *     sub_180132316 @ 0x180132316 (sub_180132316.c)
 *     unknown_libname_86 @ 0x18013234C (unknown_libname_86.c)
 *     sub_180132391 @ 0x180132391 (sub_180132391.c)
 *     sub_1801323D6 @ 0x1801323D6 (sub_1801323D6.c)
 *     sub_18013240F @ 0x18013240F (sub_18013240F.c)
 *     sub_180132454 @ 0x180132454 (sub_180132454.c)
 *     sub_18013248D @ 0x18013248D (sub_18013248D.c)
 *     sub_1801324D2 @ 0x1801324D2 (sub_1801324D2.c)
 *     sub_18013252F @ 0x18013252F (sub_18013252F.c)
 *     sub_180132580 @ 0x180132580 (sub_180132580.c)
 *     sub_1801325B9 @ 0x1801325B9 (sub_1801325B9.c)
 *     sub_180132A1E @ 0x180132A1E (sub_180132A1E.c)
 *     sub_180132D1D @ 0x180132D1D (sub_180132D1D.c)
 *     sub_180132D56 @ 0x180132D56 (sub_180132D56.c)
 *     sub_180132D8F @ 0x180132D8F (sub_180132D8F.c)
 *     sub_180133519 @ 0x180133519 (sub_180133519.c)
 *     sub_180133552 @ 0x180133552 (sub_180133552.c)
 *     sub_180133597 @ 0x180133597 (sub_180133597.c)
 *     sub_1801335DC @ 0x1801335DC (sub_1801335DC.c)
 *     sub_180133621 @ 0x180133621 (sub_180133621.c)
 *     sub_18013365A @ 0x18013365A (sub_18013365A.c)
 *     sub_18013369F @ 0x18013369F (sub_18013369F.c)
 *     sub_1801336D8 @ 0x1801336D8 (sub_1801336D8.c)
 *     sub_18013371D @ 0x18013371D (sub_18013371D.c)
 *     sub_18013376E @ 0x18013376E (sub_18013376E.c)
 *     sub_1801337BF @ 0x1801337BF (sub_1801337BF.c)
 *     sub_18013381C @ 0x18013381C (sub_18013381C.c)
 *     sub_180133861 @ 0x180133861 (sub_180133861.c)
 *     sub_18013389A @ 0x18013389A (sub_18013389A.c)
 * Callees:
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 */

__int64 __fastcall sub_1800A2908(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800A6058(a1, v3, **a1, *a1);
  return j_j__o_free(*a1);
}
