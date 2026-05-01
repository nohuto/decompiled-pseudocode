/*
 * XREFs of ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x18011B284
 * Callers:
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18011DCA0 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::DeliverChainLinkEventInternal(
        __int64 a1,
        int a2)
{
  char v3; // bp
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v3 = 0;
      while ( 1 )
      {
        v8 = 0LL;
        v4 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( *(_BYTE *)(a1 + 57) )
        {
          if ( !v3 )
            break;
        }
        v3 = 1;
        *(_BYTE *)(a1 + 57) = 1;
        if ( !*(_BYTE *)(a1 + 56) )
          goto LABEL_18;
        *(_BYTE *)(a1 + 56) = 0;
        if ( *(_QWORD *)(a1 + 48) )
          goto LABEL_13;
        if ( !*(_QWORD *)(a1 + 32) )
          goto LABEL_18;
        if ( *(_QWORD *)(a1 + 48) )
        {
LABEL_13:
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v8, (__int64 *)(a1 + 48));
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
          *(_BYTE *)(a1 + 56) = *(_QWORD *)(a1 + 32) != 0LL;
          v6 = 1;
        }
        else
        {
          v5 = Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 48), (__int64 *)(a1 + 32));
          Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v8, v5);
          v6 = 0;
        }
        v7 = v8;
        if ( !v8 )
        {
LABEL_18:
          *(_BYTE *)(a1 + 57) = 0;
          break;
        }
        if ( v4 )
          ReleaseSRWLockExclusive(v4);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, v7, v6);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      }
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
    else if ( a2 == 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL);
    }
  }
}
