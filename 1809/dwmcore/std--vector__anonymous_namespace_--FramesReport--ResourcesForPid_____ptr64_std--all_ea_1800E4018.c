/*
 * XREFs of std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Change_array @ 0x1800E4018
 * Callers:
 *     std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Emplace_reallocate__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_&___ptr64_ @ 0x1800E3CBC (std--vector__anonymous_namespace_--FramesReport--ResourcesForPid_____ptr64_std--allocator__anony.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
