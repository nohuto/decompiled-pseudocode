/*
 * XREFs of ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x1800204E8
 * Callers:
 *     sub_1801285DB @ 0x1801285DB (sub_1801285DB.c)
 *     sub_18012865F @ 0x18012865F (sub_18012865F.c)
 *     sub_180128A70 @ 0x180128A70 (sub_180128A70.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_2 @ 0x180128ADE (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180128ADE.c)
 *     unknown_libname_146 @ 0x18012DDCA (unknown_libname_146.c)
 *     sub_18012E0BB @ 0x18012E0BB (sub_18012E0BB.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_11 @ 0x180130137 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180130137.c)
 * Callees:
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
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
