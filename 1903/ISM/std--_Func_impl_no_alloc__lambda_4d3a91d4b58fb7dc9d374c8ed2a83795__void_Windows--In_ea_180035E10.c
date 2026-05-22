/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call @ 0x180035E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  return Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSourceOnInputThread(
           *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **)(a1 + 8),
           *(_QWORD *)(a1 + 16),
           (_QWORD *)(a1 + 24),
           *a2);
}
