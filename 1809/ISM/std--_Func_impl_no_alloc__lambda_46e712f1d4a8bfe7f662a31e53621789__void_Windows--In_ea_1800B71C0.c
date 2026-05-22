/*
 * XREFs of std::_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Move @ 0x1800B71C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax

  *a2 = off_18013E6A0;
  v2 = a1 + 2;
  a2[1] = a1[1];
  a2[2] = 0LL;
  if ( a2 + 2 != a1 + 2 )
  {
    a2[2] = *v2;
    *v2 = 0LL;
  }
  a2[3] = 0LL;
  a2[4] = 0LL;
  v3 = a1[4];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  a2[3] = a1[3];
  a2[4] = a1[4];
  return a2;
}
