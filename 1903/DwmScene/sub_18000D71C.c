/*
 * XREFs of sub_18000D71C @ 0x18000D71C
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA @ 0x1801278AE (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA.c)
 *     sub_180128199 @ 0x180128199 (sub_180128199.c)
 *     sub_1801281BD @ 0x1801281BD (sub_1801281BD.c)
 *     sub_180128C9B @ 0x180128C9B (sub_180128C9B.c)
 *     unknown_libname_33 @ 0x180128CC1 (unknown_libname_33.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_7 @ 0x18012D1B8 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012D1B8.c)
 *     sub_18012F45E @ 0x18012F45E (sub_18012F45E.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_6 @ 0x180134086 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_6.c)
 *     sub_180134096 @ 0x180134096 (sub_180134096.c)
 *     sub_1801340A6 @ 0x1801340A6 (sub_1801340A6.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
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
