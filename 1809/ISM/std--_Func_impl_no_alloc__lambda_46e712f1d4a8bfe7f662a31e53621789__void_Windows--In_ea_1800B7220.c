/*
 * XREFs of std::_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Copy @ 0x1800B7220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  *a2 = off_18013E6A0;
  a2[1] = a1[1];
  v4 = a1[2];
  a2[2] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a2[3] = 0LL;
  a2[4] = 0LL;
  v5 = a1[4];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  a2[3] = a1[3];
  a2[4] = a1[4];
  return a2;
}
