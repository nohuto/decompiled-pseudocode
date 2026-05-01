/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::Release @ 0x180397B00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::Release(char *a1)
{
  unsigned __int32 v2; // edi
  __int64 *v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 6);
  if ( !v2 && a1 )
  {
    v3 = (__int64 *)(a1 + 16);
    if ( *v3 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v3);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)a1 + 1);
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
