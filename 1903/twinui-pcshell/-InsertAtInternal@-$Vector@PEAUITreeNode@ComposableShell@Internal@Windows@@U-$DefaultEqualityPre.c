/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITreeNode@ComposableShell@25@_N@Z @ 0x180210380
 * Callers:
 *     ??$make_agile_vector@PEAUITreeNode@ComposableShell@Internal@Windows@@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@U?$select_from_tuple@$00@cshell@@@cshell@@YA@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@0$$QEAU?$select_from_tuple@$00@0@@Z @ 0x18020B568 (--$make_agile_vector@PEAUITreeNode@ComposableShell@Internal@Windows@@V-$_Tree_iterator@V-$_Tree_.c)
 *     ?Append@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITreeNode@ComposableShell@25@@Z @ 0x18020E540 (-Append@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PEA.c)
 *     ?InsertAt@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITreeNode@ComposableShell@25@@Z @ 0x180210370 (-InsertAt@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@P.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005A390 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005A3AC (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1800A587C (memmove_s.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1801161D0 (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 *     ?ResizeStorage@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180116BA0 (-ResizeStorage@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEq.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18011B4B4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUITreeNode@ComposableShell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITreeNode@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x180208A1C (--$-0PEAUITreeNode@ComposableShell@Internal@Windows@@@-$AutoValue@V-$GitStorageType@UITreeNode@C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::ITreeNode *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // eax
  volatile signed __int32 *v9; // rsi
  unsigned int v10; // r9d
  int v11; // edx
  unsigned int v12; // eax
  char v14[4]; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+34h] [rbp-2Ch] BYREF
  RTL_SRWLOCK *v16[2]; // [rsp+38h] [rbp-28h] BYREF
  void *v17[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF

  v18 = a3;
  v16[1] = (RTL_SRWLOCK *)-2LL;
  v15 = 0;
  XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>(
    (__int64)v17,
    &v18,
    &v15);
  v7 = v15;
  if ( v15 < 0 )
  {
    v9 = (volatile signed __int32 *)v17[0];
    goto LABEL_28;
  }
  XWinRT::SerializingLockPolicy::Write(v16, (RTL_SRWLOCK *)(a1 + 104), &v15);
  v7 = v15;
  if ( v15 >= 0 )
  {
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 72);
    v8 = *(_DWORD *)(a1 + 72);
    if ( a2 <= v8 )
    {
      if ( v8 >= 0x7FFFFFFF )
        v7 = -2147024882;
      if ( v7 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v14);
        v7 = 0;
        v10 = *(_DWORD *)(a1 + 76);
        if ( *(_DWORD *)(a1 + 72) + 1 <= v10 )
          goto LABEL_18;
        v11 = 1;
        if ( v10 + 1 <= (v10 >> 1) + v10 )
          v11 = v10 >> 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::ResizeStorage(
               a1,
               v10 + v11);
        if ( v7 >= 0 )
        {
LABEL_18:
          v12 = *(_DWORD *)(a1 + 72);
          if ( a2 < v12
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1)),
                 16LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 88) + 16LL * a2),
                 16LL * (v12 - a2)) )
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v7 >= 0 )
          {
            *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = *(_OWORD *)v17;
            v9 = 0LL;
            LOBYTE(v17[1]) = 0;
            ++*(_DWORD *)(a1 + 72);
            ++*(_DWORD *)(a1 + 120);
            if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * a2), 8)) )
              ++*(_DWORD *)(a1 + 80);
            goto LABEL_8;
          }
        }
      }
    }
    else
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  v9 = (volatile signed __int32 *)v17[0];
LABEL_8:
  if ( v16[0] )
  {
    if ( v16[0]->Ptr == (PVOID)1 )
      LODWORD(v16[0][1].Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v16[0] + 1);
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
LABEL_28:
  if ( LOBYTE(v17[1]) )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v9);
  }
  else if ( v9 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v7;
}
