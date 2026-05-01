/*
 * XREFs of ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x18026FCA4
 * Callers:
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x1800A4580 (-First@-Q-$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_1800A4580.c)
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x18026DC28 (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwi_ea_18026DC28.c)
 *     ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@@Z @ 0x18027A1F4 (-__abi_Windows_Foundation_Collections_-$IIterable@PE$AAUISwitchItem@Multitasking@Co_ea_18027A1F4.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@5@@Z @ 0x180268B78 (--0-$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Det.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x180276818 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _First__Q__IIterable_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IIterator_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ(
        __int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi

  Platform::Collections::Details::ValidateCounter(a1 + 64, *(unsigned int *)(a1 + 96));
  v2 = Platform::Details::Heap::Allocate(0x58uLL, 0x70uLL);
  v3 = Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
         v2,
         (unsigned int **)(a1 + 64),
         (_QWORD *)(a1 + 80));
  v4 = __abi_winrt_ptr_ctor((__int64)v3);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return v4;
}
