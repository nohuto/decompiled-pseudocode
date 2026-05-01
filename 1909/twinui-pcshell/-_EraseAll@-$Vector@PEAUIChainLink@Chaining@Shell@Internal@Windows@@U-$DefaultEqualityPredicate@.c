/*
 * XREFs of ?_EraseAll@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAV?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@PEAI@Z @ 0x18013B5B4
 * Callers:
 *     ??_E?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x18012E750 (--_E-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEqualityPredi.c)
 *     ?Clear@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18012EE80 (-Clear@-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAU.c)
 *     ??_E?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x1801612E0 (--_E-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAUICh.c)
 *     ??_E?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x18020FD40 (--_E-$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U-$.c)
 *     ??_G?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x18022D130 (--_G-$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAUITr.c)
 *     ??_G?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x180282AC0 (--_G-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@PEA.c)
 * Callees:
 *     <none>
 */

void *__fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::_EraseAll(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  void *result; // rax
  int v5; // edx

  ++*(_DWORD *)(a1 + 120);
  result = *(void **)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( !a2 )
    return (void *)Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,0,1,0>>::_Free(result);
  *a2 = result;
  *a3 = v5;
  return result;
}
