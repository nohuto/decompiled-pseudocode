/*
 * XREFs of ??0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800F3484
 * Callers:
 *     ??$make_shared@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@PEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@0@$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800F33A0 (--$make_shared@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@PEAUISpatialO.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18002A59C (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ??0SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@623@@Z @ 0x1800EA6D4 (--0SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@PEAU.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@U?$less@W4HandJointKind@People@Perception@Windows@@@std@@V?$allocator@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@PEAX@2@XZ @ 0x1800F7294 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@W4HandJointKind@People@Perception@Windows@@UJoi.c)
 */

// Hidden C++ exception states: #wind=2
Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::SpatialInteractionSourceHand(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::Holographic::ISpatialObjectDevice *a2,
        struct Windows::Internal::Holographic::ISpatialObject *a3)
{
  RegistryHelpers *v4; // rcx
  RegistryHelpers *v5; // rcx

  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::SpatialInteractionSourceObject(
    (__int64)this,
    (__int64)a2,
    (__int64)a3,
    512,
    (__int64)a2,
    (__int64)a3);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::`vftable';
  *((_DWORD *)this + 38) = 0;
  *((_WORD *)this + 78) = 0;
  *((_BYTE *)this + 158) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_BYTE *)this + 264) = 0;
  *(_QWORD *)((char *)this + 268) = 0LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *(_QWORD *)((char *)this + 284) = 0LL;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *(_QWORD *)((char *)this + 324) = 1065353216LL;
  *((_DWORD *)this + 83) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 42) = std::_Tree_comp_alloc<std::_Tmap_traits<enum Windows::Perception::People::HandJointKind,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper,std::less<enum Windows::Perception::People::HandJointKind>,std::allocator<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_WORD *)this + 188) = 1;
  *((_BYTE *)this + 376) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                           v4,
                                           (const WCHAR *)&stru_1801AA350,
                                           L"DisableArticulatedHands",
                                           0LL) == 0;
  *((_BYTE *)this + 377) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                           v5,
                                           (const WCHAR *)&stru_1801AA400,
                                           L"DisableHomeGesture",
                                           0LL) == 1;
  return this;
}
