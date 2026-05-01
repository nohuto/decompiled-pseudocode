/*
 * XREFs of ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x180142FA0
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x180145360 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180114568 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132300 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     ??$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@12@$$QEAW4ChainLinkEventType@Chaining@Shell@Internal@Windows@@@Z @ 0x180140704 (--$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180147E00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ?erase@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x18014BC04 (-erase@-$vector@V-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V-$alloca.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ClearNextIfMatch(
        __int64 a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct IUnknown **v8; // rbp
  struct IUnknown **i; // rdi
  unsigned int v10; // edi
  __int64 v11; // rdi
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v16 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(v6, v5, v7);
  v8 = *(struct IUnknown ***)(a1 + 48);
  for ( i = *(struct IUnknown ***)(a1 + 40); i != v8 && !(unsigned int)SHIsSameObject(*i, a2); ++i )
    ;
  if ( i == *(struct IUnknown ***)(a1 + 48) )
  {
    v10 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29D,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  else
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::erase(a1 + 40, &v15, i);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v16, (__int64 *)(a1 + 64));
    ++*(_DWORD *)(a1 + 72);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    v11 = v16;
    if ( v16 )
    {
      v15 = 2;
      Microsoft::WRL::Details::Make<Windows::Internal::Shell::Chaining::ChainLinkEventArgs,enum Windows::Internal::Shell::Chaining::ChainLinkEventType>(
        &v17,
        &v15);
      v12 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 80LL))(v11, a1, v17);
      else
        wil::details::in1diag3::Log_Hr(
          retaddr,
          697LL,
          (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
          (const char *)0x8007000ELL);
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v12);
    }
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v10;
}
