/*
 * XREFs of ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18011CA10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18011AEA0 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18011F088 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::HandleChainLinkEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ClearNextIfMatch(a1, a2);
      }
      else if ( v11 == 2 )
      {
        v12 = 0LL;
        v9 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v12, (__int64 *)(a1 + 32));
        ++*(_DWORD *)(a1 + 40);
        if ( v9 )
          ReleaseSRWLockExclusive(v9);
        if ( v12 )
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 72LL))(v12, a2, a3);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      }
    }
    else
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainIfPreviousMatches(a1, a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
