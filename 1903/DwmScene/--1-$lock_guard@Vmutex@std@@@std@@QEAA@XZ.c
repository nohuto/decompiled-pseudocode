/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x18000E7DC
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA @ 0x180127914 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHA.c)
 *     sub_18012847C @ 0x18012847C (sub_18012847C.c)
 *     sub_1801286D7 @ 0x1801286D7 (sub_1801286D7.c)
 *     sub_180130143 @ 0x180130143 (sub_180130143.c)
 *     sub_18013014F @ 0x18013014F (sub_18013014F.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12 @ 0x180131114 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_12.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_8 @ 0x1801333AD (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1801333AD.c)
 *     sub_1801333B9 @ 0x1801333B9 (sub_1801333B9.c)
 *     unknown_libname_100 @ 0x1801333C5 (unknown_libname_100.c)
 *     sub_180134207 @ 0x180134207 (sub_180134207.c)
 *     unknown_libname_170 @ 0x180134431 (unknown_libname_170.c)
 *     sub_180134888 @ 0x180134888 (sub_180134888.c)
 *     sub_1801348D2 @ 0x1801348D2 (sub_1801348D2.c)
 *     sub_1801348DE @ 0x1801348DE (sub_1801348DE.c)
 *     unknown_libname_107 @ 0x180134B3B (unknown_libname_107.c)
 * Callees:
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
