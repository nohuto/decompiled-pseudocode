/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___1_IInspectable_____ptr64_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___ @ 0x180063B08
 * Callers:
 *     ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x180063A44 (-EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180063B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler@PEAUIInspectable@@@Fo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::___IInspectable_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___1_IInspectable_____ptr64_IInspectable_____ptr64___lambda_0892b5d6e8bbbb5224cd765ab176e94b___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>(v4);
    v5[2] = 0LL;
    if ( v5 + 2 != a2 )
    {
      v5[2] = *a2;
      *a2 = 0LL;
    }
    v5[3] = a2[1];
    *v5 = off_1803C7E10;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
