/*
 * XREFs of ?_Free@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@CAXPEAV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@I@Z @ 0x18020E328
 * Callers:
 *     ?Clear@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18020B640 (-Clear@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicate@.c)
 *     ?_EraseAll@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@PEAI@Z @ 0x18020E2F0 (-_EraseAll@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEquali.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18020D12C (-Release@ReferencedGitCookie@-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::_Free(
        volatile signed __int32 **Block,
        unsigned int a2)
{
  volatile signed __int32 **v3; // rbx
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rcx

  if ( Block )
  {
    if ( a2 )
    {
      v3 = Block;
      v4 = a2;
      do
      {
        v5 = *v3;
        if ( *((_BYTE *)v3 + 8) )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::Tabs::IShellTab>::ReferencedGitCookie::Release(v5);
        }
        else if ( v5 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
        }
        *v3 = 0LL;
        *((_BYTE *)v3 + 8) = 0;
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
    free(Block);
  }
}
