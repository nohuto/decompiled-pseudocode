/*
 * XREFs of sub_180121FA4 @ 0x180121FA4
 * Callers:
 *     sub_180122DC0 @ 0x180122DC0 (sub_180122DC0.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_14 @ 0x180134AB9 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180134AB9.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall sub_180121FA4(volatile __int32 **a1)
{
  volatile __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    result = *(volatile __int32 **)result;
    _InterlockedExchange(result + 64, 0);
  }
  return result;
}
