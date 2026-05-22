/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Copy @ 0x1801217F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x180118364 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  *a2 = off_1801707C0;
  a2[1] = a1[1];
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    a2 + 2,
    a1 + 2);
  a2[4] = a1[4];
  return a2;
}
