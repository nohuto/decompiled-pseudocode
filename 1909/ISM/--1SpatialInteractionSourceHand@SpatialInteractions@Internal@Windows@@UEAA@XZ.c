/*
 * XREFs of ??1SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800F3634
 * Callers:
 *     ??_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800F3790 (--_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@@2@0@Z @ 0x1800F7524 (-erase@-$_Tree@V-$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialIn.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::~SpatialInteractionSourceHand(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  void *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  void *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 44);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(1328 * ((*((_QWORD *)this + 46) - (_QWORD)v2) / 1328LL)));
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
  }
  std::_Tree<std::_Tmap_traits<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper,std::less<enum Windows::Perception::People::HandJointKind>,std::allocator<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>,0>>::erase(
    (char *)this + 336,
    &v5,
    **((_QWORD **)this + 42));
  std::_Deallocate<16,0>(*((void **)this + 42), (const struct std::nothrow_t *)0x60);
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
    operator delete(v4, v3);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::~SpatialInteractionSourceObject(this);
}
