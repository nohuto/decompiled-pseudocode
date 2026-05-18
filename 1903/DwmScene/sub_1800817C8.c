/*
 * XREFs of sub_1800817C8 @ 0x1800817C8
 * Callers:
 *     sub_18012E354 @ 0x18012E354 (sub_18012E354.c)
 *     sub_18012E384 @ 0x18012E384 (sub_18012E384.c)
 *     sub_18012E390 @ 0x18012E390 (sub_18012E390.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_10 @ 0x18012E39C (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012E39C.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 */

__int64 __fastcall sub_1800817C8(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
    result = unknown_libname_115(i, 0);
  return result;
}
