/*
 * XREFs of ?Invoke@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@3@W4SwitchItemProperty@5673@@Z @ 0x1802CB080
 * Callers:
 *     ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@234@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@W4SwitchItemProperty@6784@@Z @ 0x1802D3AA0 (-__abi_Windows_Foundation_-$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Int.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,enum Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty>::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
