/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180128EA8
 * Callers:
 *     ?Add@?$GitEventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18012932C (-Add@-$GitEventSource@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x18011F738 (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180129118 (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rax
  void *v5; // rbx
  _DWORD *v6; // rdi
  signed int v7; // ebx

  *a2 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    memset_0(v4, 0, 0x40uLL);
    v6 = (_DWORD *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>(v5);
  }
  v7 = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    v7 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke((__int64)(v6 + 12));
    if ( v7 >= 0 && a1 )
    {
      v7 = v6[15];
      if ( v7 < 0 )
        goto LABEL_10;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18050FEF8 + 24LL))(
             qword_18050FEF8,
             a1,
             &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
             v6 + 14);
    }
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
             a2);
  }
LABEL_10:
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
