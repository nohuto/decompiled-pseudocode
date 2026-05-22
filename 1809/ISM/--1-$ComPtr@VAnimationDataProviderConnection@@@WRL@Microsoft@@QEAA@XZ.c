/*
 * XREFs of ??1?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C4E0
 * Callers:
 *     _InputSystemServerConnection::Create_::_1_::dtor$2 @ 0x18012E7DF (_InputSystemServerConnection--Create_--_1_--dtor$2.c)
 *     _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$0 @ 0x180132CDA (_AnimationDataProvider--AnimationDataProvider_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::~ComPtr<AnimationDataProviderConnection>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx
  __int64 (__fastcall ***v3)(_QWORD); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    return (_QWORD *)(**v3)(v3);
  }
  return result;
}
