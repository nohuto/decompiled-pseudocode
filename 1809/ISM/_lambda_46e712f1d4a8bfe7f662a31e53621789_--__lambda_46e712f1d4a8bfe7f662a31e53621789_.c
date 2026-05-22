/*
 * XREFs of _lambda_46e712f1d4a8bfe7f662a31e53621789_::__lambda_46e712f1d4a8bfe7f662a31e53621789_ @ 0x1800B3804
 * Callers:
 *     ?OnSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800B34B0 (-OnSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     std::_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Delete_this @ 0x1800B7170 (std--_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows--Internal--Spati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_46e712f1d4a8bfe7f662a31e53621789_::__lambda_46e712f1d4a8bfe7f662a31e53621789_(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 24);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
