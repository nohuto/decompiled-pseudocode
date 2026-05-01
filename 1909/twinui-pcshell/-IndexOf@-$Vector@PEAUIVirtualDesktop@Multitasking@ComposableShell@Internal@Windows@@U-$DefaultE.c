/*
 * XREFs of ?IndexOf@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAIPEAE@Z @ 0x180329D90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008AD14 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x180129BE8 (--$Destroy@UITreeNode@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18013509C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x180327DE8 (--$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTrait.c)
 *     ?IndexOfInternal@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@IPEAU67895@PEAIPEAE@Z @ 0x180329EF4 (-IndexOfInternal@-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 *v8; // r14
  __int64 v9; // rsi
  const struct std::nothrow_t *v10; // rdx
  int v11; // ecx
  int v12; // ebx
  size_t v13; // rax
  __int64 i; // rbp
  int v15; // ecx
  __int64 *v16; // rdi
  int v18; // [rsp+80h] [rbp+8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+90h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v19, (RTL_SRWLOCK *)(a1 + 72), &v18);
  v12 = v18;
  if ( v18 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v13 = 8LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
        v13 = -1LL;
      v8 = (__int64 *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
        {
          v12 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
                  &v8[i],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i));
          if ( v12 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      else
      {
        v12 = -2147024882;
      }
    }
    else
    {
      v12 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::IndexOfInternal(
              v11,
              *(_QWORD *)(a1 + 56),
              *(_DWORD *)(a1 + 40),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  v15 = (int)v19;
  if ( v19 )
  {
    if ( LODWORD(v19->Ptr) == 1 )
      --LODWORD(v19[1].Ptr);
    else
      ReleaseSRWLockShared(v19 + 1);
  }
  if ( v12 >= 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_21;
    v12 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::IndexOfInternal(
            v15,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  }
  if ( (_DWORD)v9 )
  {
    v16 = v8;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::ITreeNode>(v16++);
      --v9;
    }
    while ( v9 );
  }
LABEL_21:
  operator delete(v8, v10);
  return (unsigned int)v12;
}
