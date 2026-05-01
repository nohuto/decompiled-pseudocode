/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::Release @ 0x1800A3D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  _QWORD *v3; // rcx

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 && a1 )
  {
    v3 = a1 + 4;
    if ( *v3 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v3);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(a1 + 2);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
