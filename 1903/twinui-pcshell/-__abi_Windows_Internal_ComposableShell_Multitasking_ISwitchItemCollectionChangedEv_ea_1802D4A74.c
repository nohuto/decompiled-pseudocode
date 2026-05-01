/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemCollectionChangedEventArgs____abi_get_EventType@?QISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@SwitchItemCollectionChangedEventArgs@2345@UE$AAAJPEAW4SwitchItemCollectionChangedEventType@2345@@Z @ 0x1802D4A74
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemCollectionChangedEventArgs____abi_get_EventType@?QISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@SwitchItemCollectionChangedEventArgs@2345@W7E$AAAJPEAW4SwitchItemCollectionChangedEventType@2345@@Z @ 0x1800BC880 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemCollectionChangedEventArgs____ab.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemCollectionChangedEventArgs____abi_get_EventType__QISwitchItemCollectionChangedEventArgs_Multitasking_ComposableShell_Internal_Windows__SwitchItemCollectionChangedEventArgs_2345_UE_AAAJPEAW4SwitchItemCollectionChangedEventType_2345__Z(
        __int64 a1,
        _DWORD *a2)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0;
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 64LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
