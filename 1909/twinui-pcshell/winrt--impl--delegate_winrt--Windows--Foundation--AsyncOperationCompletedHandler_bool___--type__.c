/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___::type__lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Invoke @ 0x1800A2060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___::type__lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Invoke(
        __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 result; // rax
  int v4; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64)))(*(_QWORD *)v1 + 24LL))(
           v1,
           lambda_9aa7f21a0778b1dbcaaa156ae9198e2c_::_lambda_invoker_cdecl_);
    if ( v2 < 0 )
      winrt::throw_hresult((unsigned int)v2);
    result = 0LL;
  }
  catch ( ... )
  {
    winrt::to_hresult(&v4);
  }
  return result;
}
