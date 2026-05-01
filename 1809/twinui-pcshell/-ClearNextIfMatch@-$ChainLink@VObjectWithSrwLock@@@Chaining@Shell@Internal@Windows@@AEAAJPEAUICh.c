/*
 * XREFs of ?ClearNextIfMatch@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801BD5D4
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x1801BE540 (-HandleChainLinkEvent@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800608D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@12@$$QEAW4ChainLinkEventType@Chaining@Shell@Internal@Windows@@@Z @ 0x180118C94 (--$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::ClearNextIfMatch(
        __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rax
  RTL_SRWLOCK *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
  AcquireSRWLockExclusive(v4);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v6 = (RTL_SRWLOCK *)(*(int *)(v5 + 4) + a1 + 16);
  AcquireSRWLockExclusive(v6);
  if ( *(_QWORD *)(a1 + 24) == a2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v13, (__int64 *)(a1 + 32));
    ++*(_DWORD *)(a1 + 40);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    v8 = v13;
    if ( v13 )
    {
      v12 = 2;
      Microsoft::WRL::Details::Make<Windows::Internal::Shell::Chaining::ChainLinkEventArgs,enum Windows::Internal::Shell::Chaining::ChainLinkEventType>(
        &v14,
        &v12);
      v9 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 72LL))(v8, a1, v14);
      else
        wil::details::in1diag3::Log_Hr(
          retaddr,
          558LL,
          (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
          (const char *)0x8007000ELL);
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v9);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v7;
}
