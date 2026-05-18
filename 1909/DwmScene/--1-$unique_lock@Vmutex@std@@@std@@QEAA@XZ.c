/*
 * XREFs of ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x1800205F8
 * Callers:
 *     sub_1801286EB @ 0x1801286EB (sub_1801286EB.c)
 *     sub_18012876F @ 0x18012876F (sub_18012876F.c)
 *     sub_180128B80 @ 0x180128B80 (sub_180128B80.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_2 @ 0x180128BEE (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180128BEE.c)
 *     unknown_libname_146 @ 0x18012DEDA (unknown_libname_146.c)
 *     sub_18012E1CB @ 0x18012E1CB (sub_18012E1CB.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_11 @ 0x180130247 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180130247.c)
 * Callees:
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

void __fastcall std::unique_lock<std::mutex>::~unique_lock<std::mutex>(__int64 a1)
{
  int v1; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = Mtx_unlock(*(_Mtx_t *)a1);
    if ( v1 )
      std::_Throw_C_error(v1);
  }
}
