/*
 * XREFs of ??1?$map@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800B666C
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$16 @ 0x1801337EE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1801337EE.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x180092F7C (-_Erase@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::map<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>::~map<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Erase(
    (__int64)a1,
    *((_QWORD **)*a1 + 1));
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  operator delete(*a1, (const struct std::nothrow_t *)0x38);
}
