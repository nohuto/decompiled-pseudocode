/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18000E82C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA @ 0x180127A24 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHA.c)
 *     sub_18012858C @ 0x18012858C (sub_18012858C.c)
 *     sub_1801287E7 @ 0x1801287E7 (sub_1801287E7.c)
 *     sub_180130253 @ 0x180130253 (sub_180130253.c)
 *     sub_18013025F @ 0x18013025F (sub_18013025F.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12 @ 0x180131224 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_8 @ 0x1801334BD (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1801334BD.c)
 *     sub_1801334C9 @ 0x1801334C9 (sub_1801334C9.c)
 *     unknown_libname_100 @ 0x1801334D5 (unknown_libname_100.c)
 *     sub_180134317 @ 0x180134317 (sub_180134317.c)
 *     unknown_libname_170 @ 0x180134541 (unknown_libname_170.c)
 *     sub_180134998 @ 0x180134998 (sub_180134998.c)
 *     sub_1801349E2 @ 0x1801349E2 (sub_1801349E2.c)
 *     sub_1801349EE @ 0x1801349EE (sub_1801349EE.c)
 *     unknown_libname_107 @ 0x180134C4B (unknown_libname_107.c)
 * Callees:
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
