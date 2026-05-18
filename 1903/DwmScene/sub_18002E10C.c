/*
 * XREFs of sub_18002E10C @ 0x18002E10C
 * Callers:
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_1800311C4 @ 0x1800311C4 (sub_1800311C4.c)
 *     sub_180128DE1 @ 0x180128DE1 (sub_180128DE1.c)
 *     unknown_libname_37 @ 0x180128E95 (unknown_libname_37.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x180128F3D (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     sub_180131E8F @ 0x180131E8F (sub_180131E8F.c)
 *     sub_18013200E @ 0x18013200E (sub_18013200E.c)
 *     sub_18013201A @ 0x18013201A (sub_18013201A.c)
 *     unknown_libname_85 @ 0x180132026 (unknown_libname_85.c)
 *     sub_180132032 @ 0x180132032 (sub_180132032.c)
 *     sub_1801325E9 @ 0x1801325E9 (sub_1801325E9.c)
 *     sub_1801325F5 @ 0x1801325F5 (sub_1801325F5.c)
 *     sub_180132601 @ 0x180132601 (sub_180132601.c)
 *     ?dtor$2@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18013294A (-dtor$2@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_180132E8B @ 0x180132E8B (sub_180132E8B.c)
 *     unknown_libname_95 @ 0x180132EEF (unknown_libname_95.c)
 *     sub_180132F77 @ 0x180132F77 (sub_180132F77.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E10C(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x18002E168LL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
