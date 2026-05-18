/*
 * XREFs of ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA @ 0x180127A24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `__acrt_get_current_directory<__crt_win32_buffer_internal_dynamic_resizing>'::`1'::dtor$0(
        __int64 a1,
        __int64 a2)
{
  std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 32));
}
