/*
 * XREFs of sub_1800E22B0 @ 0x1800E22B0
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_13 @ 0x180131091 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180131091.c)
 *     sub_1801310BD @ 0x1801310BD (sub_1801310BD.c)
 * Callees:
 *     sub_18010BA84 @ 0x18010BA84 (sub_18010BA84.c)
 */

__int64 __fastcall sub_1800E22B0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 128LL )
    result = sub_18010BA84(i);
  return result;
}
