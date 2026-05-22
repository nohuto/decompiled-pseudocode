/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@EEAAXXZ @ 0x1800E6190
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>::_Destroy(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v3 = a1 + 32;
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  v5 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
