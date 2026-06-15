/*
 * XREFs of _lambda_5e14c2903f19bc99334c762d192b5b2b_::operator() @ 0x1800E42CC
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_5e14c2903f19bc99334c762d192b5b2b___ @ 0x1800E3EB8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_5e14c2903f19bc99334c762d192b5b2b_::operator()(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *result; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v12);
  v5 = *v4 - *a1;
  if ( *v4 == *a1 )
    v5 = v4[1] - a1[1];
  v6 = (__int64 **)(a1 + 2);
  if ( !v5 && !**v6
    || (v7 = **v6,
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2),
        result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7),
        v8 < (__int64)result) )
  {
    result = *v6;
    v10 = *a2;
    v11 = **v6;
    **v6 = *a2;
    if ( v10 )
      result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v11 )
      return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return result;
}
