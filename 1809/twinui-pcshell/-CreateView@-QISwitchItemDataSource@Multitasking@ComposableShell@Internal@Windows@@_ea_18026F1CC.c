/*
 * XREFs of ?CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAPE$AAVSwitchItemDataView@2345@XZ @ 0x18026F1CC
 * Callers:
 *     ?CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAVSwitchItemDataView@2345@XZ @ 0x1800A4560 (-CreateView@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDat.c)
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPEAPE$AAVSwitchItemDataView@2345@@Z @ 0x18027B118 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_C_ea_18027B118.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn _CreateView__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAPE_AAVSwitchItemDataView_2345_XZ()
{
  __int64 pExceptionObject; // [rsp+48h] [rbp+10h] BYREF
  void *Exception; // [rsp+50h] [rbp+18h]

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  Exception = (void *)Platform::NotImplementedException::NotImplementedException(Exception);
  pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
  throw (Platform::NotImplementedException **)&pExceptionObject;
}
