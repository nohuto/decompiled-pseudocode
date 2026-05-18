/*
 * XREFs of sub_18000D71C @ 0x18000D71C
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA @ 0x1801279BE (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA.c)
 *     sub_1801282A9 @ 0x1801282A9 (sub_1801282A9.c)
 *     sub_1801282CD @ 0x1801282CD (sub_1801282CD.c)
 *     sub_180128DAB @ 0x180128DAB (sub_180128DAB.c)
 *     unknown_libname_33 @ 0x180128DD1 (unknown_libname_33.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_7 @ 0x18012D2C8 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012D2C8.c)
 *     sub_18012F56E @ 0x18012F56E (sub_18012F56E.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_6 @ 0x180134196 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_6.c)
 *     sub_1801341A6 @ 0x1801341A6 (sub_1801341A6.c)
 *     sub_1801341B6 @ 0x1801341B6 (sub_1801341B6.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18000D71C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j__o_free(v1);
  return result;
}
