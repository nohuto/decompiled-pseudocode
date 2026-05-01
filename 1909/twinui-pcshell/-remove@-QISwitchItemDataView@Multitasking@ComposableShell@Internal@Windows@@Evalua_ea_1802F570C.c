/*
 * XREFs of ?remove@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x1802F570C
 * Callers:
 *     ?remove@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@W7E$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x1800DF530 (-remove@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@Switch.c)
 * Callees:
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x1802EF47C (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _remove__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__EvaluateItem_SwitchItemDataViewImpl_2345_UE_AAAXVEventRegistrationToken_Foundation_5__Z(
        RTL_SRWLOCK *a1,
        struct Platform::Details::EventLock *a2)
{
  RTL_SRWLOCK *v4; // rsi
  struct EventRegistrationToken v5; // r9

  v4 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  Platform::Details::EventSourceRemove((Platform::Details *)&a1[8], &a1[17].Ptr, a2, v5);
  a1[9].Ptr = 0LL;
  Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState((__int64)a1);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
