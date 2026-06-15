/*
 * XREFs of _lambda_2c59ef132d6a4717c9cbd171e794a48a_::operator() @ 0x1800D8C30
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_2c59ef132d6a4717c9cbd171e794a48a___ @ 0x1800D8828 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800D8828.c)
 * Callees:
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F0AC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_2c59ef132d6a4717c9cbd171e794a48a_::operator()(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 *result; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v10);
  v5 = *v4 - *a1;
  if ( *v4 == *a1 )
    v5 = v4[1] - a1[1];
  v6 = (__int64 **)(a1 + 2);
  if ( !v5 && !**v6 )
    return Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(*v6, a2);
  v7 = **v6;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  if ( v8 < (__int64)result )
    return Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(*v6, a2);
  return result;
}
