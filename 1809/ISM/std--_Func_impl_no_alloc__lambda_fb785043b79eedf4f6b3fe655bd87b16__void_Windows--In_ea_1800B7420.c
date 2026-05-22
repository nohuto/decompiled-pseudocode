/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fb785043b79eedf4f6b3fe655bd87b16__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Move @ 0x1800B7420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_fb785043b79eedf4f6b3fe655bd87b16__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_18013E3B0;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  return a2;
}
