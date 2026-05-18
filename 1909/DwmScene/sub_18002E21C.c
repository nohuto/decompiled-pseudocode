/*
 * XREFs of sub_18002E21C @ 0x18002E21C
 * Callers:
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_180128EF1 @ 0x180128EF1 (sub_180128EF1.c)
 *     unknown_libname_37 @ 0x180128FA5 (unknown_libname_37.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x18012904D (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     sub_180131F9F @ 0x180131F9F (sub_180131F9F.c)
 *     sub_18013211E @ 0x18013211E (sub_18013211E.c)
 *     sub_18013212A @ 0x18013212A (sub_18013212A.c)
 *     unknown_libname_85 @ 0x180132136 (unknown_libname_85.c)
 *     sub_180132142 @ 0x180132142 (sub_180132142.c)
 *     sub_1801326F9 @ 0x1801326F9 (sub_1801326F9.c)
 *     sub_180132705 @ 0x180132705 (sub_180132705.c)
 *     sub_180132711 @ 0x180132711 (sub_180132711.c)
 *     ?dtor$2@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180132A5A (-dtor$2@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_180132F9B @ 0x180132F9B (sub_180132F9B.c)
 *     unknown_libname_95 @ 0x180132FFF (unknown_libname_95.c)
 *     sub_180133087 @ 0x180133087 (sub_180133087.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E21C(__int64 *a1)
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
        JUMPOUT(0x18002E278LL);
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
