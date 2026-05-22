/*
 * XREFs of _lambda_4d3a91d4b58fb7dc9d374c8ed2a83795_::__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795_ @ 0x1800356A4
 * Callers:
 *     std::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)_::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)___lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_ @ 0x180035670 (std--function_void___cdecl(Windows--Internal--SpatialInteractions--ISpatialInteractionSourceColl.c)
 *     std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Delete_this @ 0x1800358E0 (std--_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows--In_ea_1800358E0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_4d3a91d4b58fb7dc9d374c8ed2a83795_::__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
