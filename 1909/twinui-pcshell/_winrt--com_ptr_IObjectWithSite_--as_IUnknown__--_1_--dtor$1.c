/*
 * XREFs of _winrt::com_ptr_IObjectWithSite_::as_IUnknown__::_1_::dtor$1 @ 0x1800BFB3D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x1800A1994 (--1-$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::com_ptr_IObjectWithSite_::as_IUnknown__::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(*(__int64 **)(a2 + 72));
  }
  return result;
}
