/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4HandJointKind@People@Perception@Windows@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4HandJointKind@People@Perception@Windows@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F2AE0
 * Callers:
 *     ??$_Try_emplace@AEBW4HandJointKind@People@Perception@Windows@@$$V@?$map@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@@std@@_N@1@AEBW4HandJointKind@People@Perception@Windows@@@Z @ 0x1800F33FC (--$_Try_emplace@AEBW4HandJointKind@People@Perception@Windows@@$$V@-$map@W4HandJointKind@People@P.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@PEAX@2@XZ @ 0x1800F7528 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointH.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper,std::less<enum Windows::Perception::People::HandJointKind>,std::allocator<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<enum Windows::Perception::People::HandJointKind const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        _DWORD **a3)
{
  __int64 v5; // [rsp+58h] [rbp+20h]

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper,std::less<enum Windows::Perception::People::HandJointKind>,std::allocator<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>,0>>::_Buynode0(a1);
  *(_WORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 32) = **a3;
  memset_0((void *)(v5 + 40), 0, 0x38uLL);
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 68) = 0;
  *(_DWORD *)(v5 + 72) = 1065353216;
  *(_DWORD *)(v5 + 76) = 0;
  *(_DWORD *)(v5 + 80) = 0;
  return v5;
}
