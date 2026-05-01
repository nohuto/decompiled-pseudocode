/*
 * XREFs of _lambda_b3d78add5ab39fa35b8b9bbae7ca3aad_::operator() @ 0x1802C4FE8
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_b3d78add5ab39fa35b8b9bbae7ca3aad__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::Invoke @ 0x1802CB2B0 (Platform--Details--__abi_FunctorCapture__lambda_b3d78add5ab39fa35b8b9bbae7ca3aad__v_ea_1802CB2B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1802B6394 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x1802D609C (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_b3d78add5ab39fa35b8b9bbae7ca3aad_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  v9 = a2;
  v5 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(a1[1]);
  v6 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a3);
  v10 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, v6, v5, &v9);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  result = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)a3 + 64LL))(a3, (_BYTE)v9 == 0);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return result;
}
