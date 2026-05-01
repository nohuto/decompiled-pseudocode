/*
 * XREFs of ?ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXXZ @ 0x1802CCDAC
 * Callers:
 *     ?ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAXXZ @ 0x1800BB4F0 (-ReevaluateAll@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDa.c)
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJXZ @ 0x1802D4DF8 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_Ree_ea_1802D4DF8.c)
 * Callees:
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x1802CFF8C (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _ReevaluateAll__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAXXZ(
        RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState(a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
