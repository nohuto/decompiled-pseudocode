/*
 * XREFs of ??$?0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@1@@Z @ 0x1800E97B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_ @ 0x180035620 (std--_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows--Internal--Spati.c)
 *     ?RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800356F0 (-RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Copy @ 0x180035880 (std--_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows--In_ea_180035880.c)
 *     ?OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800ECD40 (-OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
