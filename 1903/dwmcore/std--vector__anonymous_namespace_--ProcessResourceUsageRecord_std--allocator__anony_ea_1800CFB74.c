/*
 * XREFs of std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Change_array @ 0x1800CFB74
 * Callers:
 *     std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Emplace_reallocate__anonymous_namespace_::ProcessResourceUsageRecord_const_&_ @ 0x1800CF9EC (std--vector__anonymous_namespace_--ProcessResourceUsageRecord_std--allocator__anonymous_namespac.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 104 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 104LL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 104 * a3;
  result = a2 + 104 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
