/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_ @ 0x180035620
 * Callers:
 *     std::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)_::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)___lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_ @ 0x180035670 (std--function_void___cdecl(Windows--Internal--SpatialInteractions--ISpatialInteractionSourceColl.c)
 *     std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Move @ 0x180035940 (std--_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows--In_ea_180035940.c)
 * Callees:
 *     ??$?0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@1@@Z @ 0x1800E97B8 (--$-0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@-$shared_ptr@VSp.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8

  *a1 = off_1801704B0;
  a1[1] = *a2;
  v3 = a2 + 1;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 + 1 )
  {
    a1[2] = *v3;
    *v3 = 0LL;
  }
  std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>(
    a1 + 3,
    a2 + 2);
  return v4;
}
