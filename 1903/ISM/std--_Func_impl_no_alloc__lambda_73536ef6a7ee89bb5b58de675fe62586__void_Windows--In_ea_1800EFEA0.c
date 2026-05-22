/*
 * XREFs of std::_Func_impl_no_alloc__lambda_73536ef6a7ee89bb5b58de675fe62586__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Delete_this @ 0x1800EFEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_73536ef6a7ee89bb5b58de675fe62586__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Delete_this(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[5];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
}
