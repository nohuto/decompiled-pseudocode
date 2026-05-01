/*
 * XREFs of _winrt::impl::as_winrt::impl::IWeakReferenceSource_winrt::impl::abi_winrt::Windows::Foundation::IUnknown_::type__::_1_::dtor$0 @ 0x18041C3ED
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::as_winrt::impl::IWeakReferenceSource_winrt::impl::abi_winrt::Windows::Foundation::IUnknown_::type__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
