/*
 * XREFs of sub_1800670E0 @ 0x1800670E0
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_3 @ 0x18012CE00 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012CE00.c)
 * Callees:
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800670E0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 i; // rdi
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 152LL )
  {
    sub_180069F04(i + 136, v4, **(_QWORD **)(i + 136));
    result = j_j__o_free(*(_QWORD *)(i + 136));
  }
  return result;
}
