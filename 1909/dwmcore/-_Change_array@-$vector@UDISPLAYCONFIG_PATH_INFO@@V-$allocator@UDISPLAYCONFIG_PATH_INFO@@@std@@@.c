/*
 * XREFs of ?_Change_array@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_PATH_INFO@@_K1@Z @ 0x1801B6958
 * Callers:
 *     std::vector_DISPLAYCONFIG_PATH_INFO_std::allocator_DISPLAYCONFIG_PATH_INFO___::_Resize__lambda_de503bca2ec23f17d3532137bfe816e6___ @ 0x1801B4F3C (std--vector_DISPLAYCONFIG_PATH_INFO_std--allocator_DISPLAYCONFIG_PATH_INFO___--_Resize__lambda_d.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 72 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 72LL));
  *(_QWORD *)a1 = a2;
  result = 9 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 72 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 72 * a4;
  return result;
}
