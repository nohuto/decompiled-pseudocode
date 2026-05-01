/*
 * XREFs of ?Clear@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXXZ @ 0x18026E0EC
 * Callers:
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAXXZ @ 0x1800A4540 (-Clear@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections.c)
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@WCI@E$AAAXXZ @ 0x1800A4550 (-Clear@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@_ea_1800A4550.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Clear@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@UE$AAAJXZ @ 0x18027A628 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Clear@-QIBindableVector@Inter_ea_18027A628.c)
 * Callees:
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x18026ADE0 (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x180270A38 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x1802731AC (-Notify@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _Clear__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXXZ(
        __int64 a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax
  void *Exception; // rax
  void *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h]
  __int64 v11; // [rsp+50h] [rbp+8h]

  v9[1] = -2LL;
  try
  {
    Platform::Collections::Details::IncrementCounter();
    v2 = *(__int64 ***)(a1 + 96);
    v3 = v2[1];
    v4 = *v2;
    if ( *v2 != v3 )
    {
      do
      {
        Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(v4);
        v4 += 4;
      }
      while ( v4 != v3 );
      v4 = *v2;
    }
    v2[1] = v4;
    result = Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Notify(
               a1,
               0LL,
               0LL);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v10 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v8 = __abi_winrt_ptr_ctor(v10);
    throw (Platform::OutOfMemoryException **)&v8;
  }
  catch ( std::exception )
  {
    v7 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v11 = Platform::FailureException::FailureException(v7);
    v9[0] = __abi_winrt_ptr_ctor(v11);
    throw (Platform::FailureException **)v9;
  }
  return result;
}
