/*
 * XREFs of ?Invoke@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x180307960
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_BecameEmptyEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x180309210 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_BecameEmptyEventHandler___abi_IDeleg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (*)(void))(*a1)[3])();
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
