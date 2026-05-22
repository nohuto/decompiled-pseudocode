/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800CAE60
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800CA540 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800CAFE0 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$all.c)
 *     ??1?$map@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800E0928 (--1-$map@_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@.c)
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800E0AC4 (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 *     ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800E3B00 (-OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x1800CAD80 (-_Erase@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Erase(
    (__int64)a1,
    *(_QWORD **)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
