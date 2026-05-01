/*
 * XREFs of ??$VectorIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x1802DF894
 * Callers:
 *     ??$VectorBindableIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@@Details@Collections@Platform@@YA_NU?$integral_constant@_N$00@std@@AEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@4@PE$AAVObject@2@PEAI@Z @ 0x1802DF6E8 (--$VectorBindableIndexOf@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equ.c)
 *     ?IndexOf@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x1802E9208 (-IndexOf@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_1802E9208.c)
 *     ?IndexOf@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAI@Z @ 0x1802E9220 (-IndexOf@-Q-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Colle.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_IndexOf@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@PEAIPEA_N@Z @ 0x1802F3780 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_1802F3780.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1802DF684 (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Platform::Collections::Details::VectorIndexOf<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  bool v10; // si
  __int64 v11; // rdi
  bool v12; // bl
  __int64 v14; // [rsp+68h] [rbp+10h]

  v5 = __abi_winrt_ptr_ctor(a2);
  v14 = v5;
  v6 = *a1;
  v7 = *a1;
  v8 = a1[1];
  if ( *a1 != v8 )
  {
    do
    {
      v9 = Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(v7);
      v5 = v14;
      v10 = v9 == v14;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v5 = v14;
      }
      if ( v10 )
        break;
      v7 += 32LL;
    }
    while ( v7 != v8 );
  }
  v11 = (v7 - v6) >> 5;
  *a3 = v11;
  v12 = (unsigned int)v11 < (unsigned __int64)((a1[1] - *a1) >> 5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v12;
}
