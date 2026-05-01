/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Release @ 0x1800A3CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  __int64 *v3; // rcx

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 && a1 )
  {
    v3 = (__int64 *)(a1 + 4);
    if ( *v3 )
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(v3);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
