/*
 * XREFs of sub_1800E23C0 @ 0x1800E23C0
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_13 @ 0x1801311A1 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1801311A1.c)
 *     sub_1801311CD @ 0x1801311CD (sub_1801311CD.c)
 * Callees:
 *     sub_18010BB94 @ 0x18010BB94 (sub_18010BB94.c)
 */

__int64 __fastcall sub_1800E23C0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 128LL )
    result = sub_18010BB94(i);
  return result;
}
