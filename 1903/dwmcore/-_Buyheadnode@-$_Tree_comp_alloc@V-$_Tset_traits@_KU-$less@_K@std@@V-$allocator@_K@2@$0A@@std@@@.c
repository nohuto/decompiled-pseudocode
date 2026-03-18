/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@XZ @ 0x1800782EC
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180075728 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180077E8C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??0?$set@_KU?$less@_K@std@@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800D78DC (--0-$set@_KU-$less@_K@std@@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x180172778 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 std::_Tree_comp_alloc<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Buyheadnode()
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
