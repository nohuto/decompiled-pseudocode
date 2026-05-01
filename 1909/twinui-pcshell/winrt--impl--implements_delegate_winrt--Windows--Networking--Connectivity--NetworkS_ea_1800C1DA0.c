/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___::Release @ 0x1800C1DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 4);
  if ( !v1 )
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  return v1;
}
