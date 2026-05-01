/*
 * XREFs of ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x180142A18
 * Callers:
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x180142800 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180142900 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132300 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801408F8 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1801424CC (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::AppendChainLinkInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct IUnknown *v4; // rbp
  struct IUnknown **v6; // rbx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  struct IUnknown **v11; // r14
  char *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IUnknown *v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = (struct IUnknown *)a2;
  v4 = (struct IUnknown *)a2;
  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService(a1, a2, a3);
  v6 = *(struct IUnknown ***)(a1 + 40);
  v7 = (__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v6) >> 3;
  if ( v7 )
  {
    v17 = 0;
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v6[v7 - 1]->lpVtbl[2].QueryInterface)(v6[v7 - 1], &v17);
    if ( v8 < 0 )
    {
      v9 = 317LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    if ( !v17 )
    {
      v8 = -2147024811;
      v9 = 318LL;
      goto LABEL_4;
    }
    v6 = *(struct IUnknown ***)(a1 + 40);
  }
  v11 = *(struct IUnknown ***)(a1 + 48);
  while ( v6 != v11 && !(unsigned int)SHIsSameObject(*v6, v4) )
    ++v6;
  if ( v6 != *(struct IUnknown ***)(a1 + 48) )
  {
    v8 = -2147024811;
    v9 = 327LL;
    goto LABEL_4;
  }
  v12 = *(char **)(a1 + 48);
  if ( *(char **)(a1 + 56) == v12 )
  {
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
      (char **)(a1 + 40),
      v12,
      (__int64 *)&v16);
    v4 = v16;
  }
  else
  {
    v13 = *(__int64 **)(a1 + 48);
    *(_QWORD *)v12 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    *(_QWORD *)(a1 + 48) += 8LL;
  }
  v14 = *(_QWORD *)(a1 + 64);
  if ( v14 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a3,
      a1,
      v14,
      (__int64)v4,
      2u);
  ++*(_DWORD *)(a1 + 72);
  return 0LL;
}
