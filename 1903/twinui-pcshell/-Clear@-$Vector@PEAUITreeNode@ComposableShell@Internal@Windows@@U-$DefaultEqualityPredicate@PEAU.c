/*
 * XREFs of ?Clear@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18010FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005A390 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005A3AC (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18011B4B4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?_EraseAll@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAV?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@PEAI@Z @ 0x18011C114 (-_EraseAll@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@.c)
 *     ?_Free@?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@CAXPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@I@Z @ 0x18011C470 (-_Free@-$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::ITreeNode *,0,1,0>>::Clear(
        __int64 a1)
{
  bool v2; // r15
  void *v3; // rbx
  int v4; // edi
  int v5; // ebx
  int v7; // [rsp+80h] [rbp+38h] BYREF
  int v8; // [rsp+88h] [rbp+40h] BYREF
  void *v9; // [rsp+90h] [rbp+48h] BYREF
  __int64 v10; // [rsp+98h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v8 = 0;
  XWinRT::SerializingLockPolicy::Write(&v10, a1 + 104, &v7);
  v4 = v7;
  if ( v7 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v7);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 72);
    Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::_EraseAll(
      a1,
      &v9,
      &v8);
    v2 = v5 != 0;
    v3 = v9;
  }
  if ( v10 )
  {
    if ( *(_DWORD *)v10 == 1 )
      *(_DWORD *)(v10 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v10 + 8));
  }
  Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,0,1,0>>::_Free(v3);
  if ( v4 >= 0 && v2 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v4;
}
