/*
 * XREFs of ?remove@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@BecameEmpty@SwitcherViewModelBase@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180290960
 * Callers:
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::operator() @ 0x18028E780 (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _remove__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__BecameEmpty_SwitcherViewModelBase_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  v5 = __abi_winrt_cast_to(
         0,
         a1,
         (__int64)&_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 200LL))(v5, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return result;
}
