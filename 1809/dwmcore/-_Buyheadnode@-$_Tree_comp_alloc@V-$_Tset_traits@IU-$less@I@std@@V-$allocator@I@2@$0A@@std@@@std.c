/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x1800C531C
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180062CE8 (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0?$set@IU?$less@I@std@@V?$allocator@I@2@@std@@QEAA@XZ @ 0x18007AEF8 (--0-$set@IU-$less@I@std@@V-$allocator@I@2@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800C3D90 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800C4BAC (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x180148360 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode()
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
