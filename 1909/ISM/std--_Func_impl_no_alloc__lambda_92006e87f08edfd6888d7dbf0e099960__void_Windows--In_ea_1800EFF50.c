/*
 * XREFs of std::_Func_impl_no_alloc__lambda_92006e87f08edfd6888d7dbf0e099960__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Move @ 0x1800EFF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_92006e87f08edfd6888d7dbf0e099960__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_1801705A8;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  return a2;
}
