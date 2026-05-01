/*
 * XREFs of _winrt::capture_Windows::Internal::Shell::Experience::IShellExperienceManagerFactory_long_(__cdecl_)(IUnknown____GUID_const_&__GUID_const_&_void____)_IUnknown____GUID_const_&__::_1_::dtor$0 @ 0x1800BFED7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x1800A1994 (--1-$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::capture_Windows::Internal::Shell::Experience::IShellExperienceManagerFactory_long____cdecl___IUnknown____GUID_const____GUID_const___void______IUnknown____GUID_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(*(__int64 **)(a2 + 80));
  }
  return result;
}
