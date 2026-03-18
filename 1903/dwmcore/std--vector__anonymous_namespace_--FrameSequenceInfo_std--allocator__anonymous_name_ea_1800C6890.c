/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800C6890
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800C671C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 * Callees:
 *     std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800726C4 (std--_Destroy_range1_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void **v6; // rcx
  __int64 result; // rax

  v6 = *(void ***)a1;
  if ( v6 )
  {
    std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v6, *(void ***)(a1 + 8), a3);
    std::_Deallocate<16,0>(*(void **)a1, 480 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 480LL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 480 * a3;
  result = a2 + 480 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
