/*
 * XREFs of wil::details::ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___::_ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___ @ 0x1802E3550
 * Callers:
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor$8 @ 0x1802ED3E3 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SetDataS_ea_1802ED3E3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x1802E7CAC (-DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___::_ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    result = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource(*a1);
  }
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
