/*
 * XREFs of sub_1800A2A18 @ 0x1800A2A18
 * Callers:
 *     sub_18012F93A @ 0x18012F93A (sub_18012F93A.c)
 *     sub_18012F946 @ 0x18012F946 (sub_18012F946.c)
 *     ?dtor$0@?0??do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z@4HA @ 0x18012F978 (-dtor$0@-0--do_transform@-$collate@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 *     sub_18012FB65 @ 0x18012FB65 (sub_18012FB65.c)
 *     sub_18013000F @ 0x18013000F (sub_18013000F.c)
 *     sub_18013052F @ 0x18013052F (sub_18013052F.c)
 *     sub_180130690 @ 0x180130690 (sub_180130690.c)
 *     sub_1801306C9 @ 0x1801306C9 (sub_1801306C9.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10 @ 0x180130C2F (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_10.c)
 *     sub_1801320FA @ 0x1801320FA (sub_1801320FA.c)
 *     sub_18013232A @ 0x18013232A (sub_18013232A.c)
 *     sub_180132363 @ 0x180132363 (sub_180132363.c)
 *     sub_18013239C @ 0x18013239C (sub_18013239C.c)
 *     sub_1801323ED @ 0x1801323ED (sub_1801323ED.c)
 *     sub_180132426 @ 0x180132426 (sub_180132426.c)
 *     unknown_libname_86 @ 0x18013245C (unknown_libname_86.c)
 *     sub_1801324A1 @ 0x1801324A1 (sub_1801324A1.c)
 *     sub_1801324E6 @ 0x1801324E6 (sub_1801324E6.c)
 *     sub_18013251F @ 0x18013251F (sub_18013251F.c)
 *     sub_180132564 @ 0x180132564 (sub_180132564.c)
 *     sub_18013259D @ 0x18013259D (sub_18013259D.c)
 *     sub_1801325E2 @ 0x1801325E2 (sub_1801325E2.c)
 *     sub_18013263F @ 0x18013263F (sub_18013263F.c)
 *     sub_180132690 @ 0x180132690 (sub_180132690.c)
 *     sub_1801326C9 @ 0x1801326C9 (sub_1801326C9.c)
 *     sub_180132B2E @ 0x180132B2E (sub_180132B2E.c)
 *     sub_180132E2D @ 0x180132E2D (sub_180132E2D.c)
 *     sub_180132E66 @ 0x180132E66 (sub_180132E66.c)
 *     sub_180132E9F @ 0x180132E9F (sub_180132E9F.c)
 *     sub_180133629 @ 0x180133629 (sub_180133629.c)
 *     sub_180133662 @ 0x180133662 (sub_180133662.c)
 *     sub_1801336A7 @ 0x1801336A7 (sub_1801336A7.c)
 *     sub_1801336EC @ 0x1801336EC (sub_1801336EC.c)
 *     sub_180133731 @ 0x180133731 (sub_180133731.c)
 *     sub_18013376A @ 0x18013376A (sub_18013376A.c)
 *     sub_1801337AF @ 0x1801337AF (sub_1801337AF.c)
 *     sub_1801337E8 @ 0x1801337E8 (sub_1801337E8.c)
 *     sub_18013382D @ 0x18013382D (sub_18013382D.c)
 *     sub_18013387E @ 0x18013387E (sub_18013387E.c)
 *     sub_1801338CF @ 0x1801338CF (sub_1801338CF.c)
 *     sub_18013392C @ 0x18013392C (sub_18013392C.c)
 *     sub_180133971 @ 0x180133971 (sub_180133971.c)
 *     sub_1801339AA @ 0x1801339AA (sub_1801339AA.c)
 * Callees:
 *     sub_1800A6168 @ 0x1800A6168 (sub_1800A6168.c)
 */

__int64 __fastcall sub_1800A2A18(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800A6168(a1, v3, **a1, *a1);
  return j_j__o_free(*a1);
}
