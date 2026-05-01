/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18020D1B0
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18020D190 (-RemoveAt@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ?RemoveAtEnd@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18020D1A0 (-RemoveAtEnd@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEqua.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180053DCC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180053DE8 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801218CC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x180122E64 (memmove_s.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18020D12C (-Release@ReferencedGitCookie@-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 *     ?ResizeStorage@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18020D55C (-ResizeStorage@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  volatile signed __int32 *v6; // rsi
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // r9
  __m128i *v10; // rcx
  int v11; // edx
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  RTL_SRWLOCK *v14; // rcx
  __m128i v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0;
  v6 = 0LL;
  v16.m128i_i8[8] = 0;
  XWinRT::SerializingLockPolicy::Write(&v18, (RTL_SRWLOCK *)(a1 + 104), &v17);
  v7 = v17;
  if ( v17 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 72);
    if ( a3 )
      a2 = v8 - 1;
    if ( a2 >= v8 )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v7 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
      v7 = 0;
      v9 = *(_QWORD *)(a1 + 88);
      v10 = (__m128i *)(v9 + 16LL * a2);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v10, 8)) )
        --*(_DWORD *)(a1 + 80);
      v16 = *v10;
      v11 = *(_DWORD *)(a1 + 72);
      if ( a2 < v11 - 1
        && memmove_s(v10, 16LL * (v11 - a2 - 1), (const void *const)(v9 + 16LL * (a2 + 1)), 16LL * (v11 - a2 - 1)) )
      {
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        ++*(_DWORD *)(a1 + 120);
        --*(_DWORD *)(a1 + 72);
        v12 = *(_DWORD *)(a1 + 76);
        if ( *(_DWORD *)(a1 + 72) < v12 / 3 )
        {
          v13 = 1;
          if ( v12 - 1 >= v12 - v12 / 3 )
            v13 = v12 / 3;
          v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::ResizeStorage(
                 a1,
                 v12 - v13);
        }
      }
      v6 = (volatile signed __int32 *)v16.m128i_i64[0];
    }
  }
  if ( v18 )
  {
    v14 = v18 + 1;
    if ( LODWORD(v18->Ptr) == 1 )
      LODWORD(v14->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v14);
  }
  if ( v16.m128i_i8[8] )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Release(v6);
  }
  else if ( v6 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
