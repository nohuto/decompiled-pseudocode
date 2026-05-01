/*
 * XREFs of _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$33 @ 0x1803FDE84
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094690 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor_33(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 232) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 232) &= ~8u;
    return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((_QWORD *)(a2 + 64));
  }
  return result;
}
