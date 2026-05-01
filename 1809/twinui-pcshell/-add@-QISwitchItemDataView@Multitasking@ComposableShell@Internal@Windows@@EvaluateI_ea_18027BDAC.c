/*
 * XREFs of ?add@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@95@@Z @ 0x18027BDAC
 * Callers:
 *     ?add@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@W7E$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@95@@Z @ 0x1800A5C60 (-add@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchIte.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x18027662C (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall _add__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__EvaluateItem_SwitchItemDataViewImpl_2345_UE_AAA_AVEventRegistrationToken_Foundation_5_PE_AAV__TypedEventHandler_PE_AAUISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__PE_AAUIEvaluateItemEventArgs_2345__95__Z(
        RTL_SRWLOCK *a1,
        __int64 *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h]

  v4 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  if ( a1[9].Ptr )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      138LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\switchitemdataview.h",
      (const char *)0x8007139FLL);
    __debugbreak();
  }
  v9 = Platform::Details::EventSourceAdd(&a1[8], &a1[17]);
  v5 = __abi_winrt_ptr_ctor((__int64)a1);
  v6 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState((__int64)a1);
  a1[9].Ptr = (PVOID)v9;
  *a2 = v9;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return a2;
}
