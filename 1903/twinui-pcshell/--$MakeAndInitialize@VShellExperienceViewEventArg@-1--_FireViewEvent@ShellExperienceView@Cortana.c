/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceViewEventArg@?1??_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAU6@AEAPEAU789Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@AEAPEAUHSTRING__@@AEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18005E7A4
 * Callers:
 *     ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005E658 (-_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collect.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E8E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Experience::UIShellExperienceViewEventArg::Z::MakeAndInitialize<`TwinUI::Cortana::ShellExperienceView::_FireViewEvent'::`2'::ShellExperienceViewEventArg,AJPEAUHSTRING__ &,Windows::Foundation::Collections::IPropertySet *>(
        HSTRING **a1,
        HSTRING *a2,
        HSTRING *a3)
{
  HSTRING *v6; // rax
  HSTRING *v7; // rbx
  HSTRING *v8; // rdi
  HSTRING v9; // rbp
  HSTRING v10; // rsi
  HRESULT v11; // eax
  int v12; // edi
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING v16; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (HSTRING *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = (HSTRING)1;
    *v6 = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperienceViewEventArg'};
    v6[1] = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = (HSTRING)off_180429D70;
    v8 = v7 + 4;
    v7[1] = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    v7[4] = 0LL;
    v7[5] = 0LL;
    v9 = *a2;
    v10 = *a3;
    if ( v9 && v9 == *v8
      || (WindowsDeleteString(*v8), *v8 = 0LL, v11 = WindowsDuplicateString(v9, v8), v12 = v11, v11 >= 0) )
    {
      if ( v7[5] != v10 )
      {
        v16 = v10;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
        v16 = v7[5];
        v7[5] = v10;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      }
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v11,
        v14);
    }
    if ( v12 >= 0 )
    {
      *a1 = v7;
      (*((void (__fastcall **)(HSTRING *))*v7 + 1))(v7);
      v12 = 0;
    }
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
