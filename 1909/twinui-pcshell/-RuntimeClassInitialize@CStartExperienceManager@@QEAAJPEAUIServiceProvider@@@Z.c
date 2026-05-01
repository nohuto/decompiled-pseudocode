/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B832C
 * Callers:
 *     ??$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801B52A8 (--$MakeAndInitialize@VCStartExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@.c)
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801B6B80 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180015838 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x18007ADD8 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA-AW4Vari.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B4A8C (--$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@-$ComPtr@VPrior.c)
 *     ??$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B4B38 (--$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@VPriorityBoostHelper@.c)
 *     ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x1801B51B8 (--$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClo_ea_1801B8290.c)
 *     ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801DFC58 (-RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18042FF64 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180430EE8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2,
        __int64 a3)
{
  HSTRING Reserved1; // r9
  int v6; // ebx
  __int64 v7; // rdx
  HSTRING v9; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  PriorityBoostHelper **v15; // rax
  PriorityBoostHelper **v16; // rbx
  struct CSingleViewShellExperience *v17; // rdx
  PriorityBoostHelper *v18; // rcx
  PriorityBoostHelper *v19; // rcx
  int started; // edi
  __int64 v21; // rdx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  PriorityBoostHelper *v24; // rbx
  __int64 (__fastcall *v25)(PriorityBoostHelper *, HSTRING, struct CSingleViewShellExperience **); // rdi
  int v26; // eax
  __int64 v27; // rdx
  HRESULT (__stdcall *v28)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  struct CSingleViewShellExperience *v29; // [rsp+38h] [rbp-29h] BYREF
  PriorityBoostHelper *v30[2]; // [rsp+40h] [rbp-21h] BYREF
  HSTRING_HEADER v31; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v32; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING v34; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v30[1] = (PriorityBoostHelper *)-2LL;
  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService((__int64)this, (__int64)a2, a3);
  v34 = 0LL;
  if ( wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 5 )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.StartMenu",
      0x2Bu,
      0x2Au);
    v32 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v31,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v6 = CSingleViewShellExperience::RuntimeClassInitialize(
           (CStartExperienceManager *)((char *)this + 312),
           (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
           a2,
           v32,
           v34);
    if ( v6 < 0 )
    {
      v7 = 229LL;
      goto LABEL_4;
    }
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.StartMenu",
      0x2Bu,
      0x2Au);
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v31,
                           (const WCHAR **)off_180487B98)[1].Reserved.Reserved1;
    v6 = CSingleViewShellExperience::RuntimeClassInitialize(
           (CStartExperienceManager *)((char *)this + 312),
           (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
           a2,
           Reserved1,
           v34);
    if ( v6 < 0 )
    {
      v7 = 223LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  v9 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)off_180487BA0)[1].Reserved.Reserved1;
  v6 = CSingleViewShellExperience::AddTestAumid((CStartExperienceManager *)((char *)this + 312), v9);
  if ( v6 < 0 )
  {
    v7 = 231LL;
    goto LABEL_4;
  }
  *((_DWORD *)this + 93) = 6;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 63, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  v11 = (_QWORD *)((char *)this + 528);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         (char *)this + 528);
  if ( v6 < 0 )
  {
    v7 = 237LL;
    goto LABEL_4;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v11 + 24LL))(
         *v11,
         26LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 512);
  if ( v6 < 0 )
  {
    v7 = 238LL;
    goto LABEL_4;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v11 + 24LL))(
         *v11,
         1025LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 516);
  if ( v6 < 0 )
  {
    v7 = 239LL;
    goto LABEL_4;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v11 + 24LL))(
         *v11,
         798LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 520);
  if ( v6 < 0 )
  {
    v7 = 240LL;
    goto LABEL_4;
  }
  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService(v13, v12, v14);
  if ( wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 5 )
  {
    v30[0] = 0LL;
    v22 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v30);
    v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, PriorityBoostHelper **))v22)(
            a2,
            &unk_180513800,
            &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
            v30);
    v6 = v23;
    if ( v23 >= 0 )
    {
      v29 = 0LL;
      v24 = v30[0];
      v25 = *(__int64 (__fastcall **)(PriorityBoostHelper *, HSTRING, struct CSingleViewShellExperience **))(*(_QWORD *)v30[0] + 48LL);
      v32 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &v31,
        L"Windows.Internal.ShellExperience.Host",
        0x26u,
        0x25u);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      v26 = v25(v24, v32, &v29);
      v6 = v26;
      if ( v26 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
        v26 = (**(__int64 (__fastcall ***)(struct CSingleViewShellExperience *, GUID *, char *))v29)(
                v29,
                &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef,
                (char *)this + 288);
        v6 = v26;
        if ( v26 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
          v26 = (**(__int64 (__fastcall ***)(struct CSingleViewShellExperience *, GUID *, char *))v29)(
                  v29,
                  &GUID_fdae1e57_9570_4461_bab5_532c0f899149,
                  (char *)this + 296);
          v6 = v26;
          if ( v26 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v30);
            goto LABEL_45;
          }
          v27 = 257LL;
        }
        else
        {
          v27 = 256LL;
        }
      }
      else
      {
        v27 = 255LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v30);
    return (unsigned int)v6;
  }
  v29 = (CStartExperienceManager *)((char *)this + 312);
  v15 = Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(v30, &v29);
  v16 = (PriorityBoostHelper **)((char *)this + 304);
  v17 = 0LL;
  if ( &v29 != v15 )
  {
    v17 = *v15;
    *v15 = 0LL;
  }
  v18 = *v16;
  *v16 = v17;
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release((__int64)v18);
  v19 = v30[0];
  if ( v30[0] )
  {
    v30[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release((__int64)v19);
  }
  if ( !*v16 )
  {
    v6 = -2147024882;
    v7 = 245LL;
    goto LABEL_4;
  }
  started = PriorityBoostHelper::RegisterForStartReady(*v16, a2);
  if ( started < 0 )
  {
    v21 = 246LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IHostExperienceManager>(
              (__int64 *)this + 38,
              (__int64 *)this + 36);
  if ( started < 0 )
  {
    v21 = 247LL;
    goto LABEL_29;
  }
  v6 = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator>(
         (__int64 *)this + 38,
         (__int64 *)this + 37);
  if ( v6 < 0 )
  {
    v7 = 248LL;
    goto LABEL_4;
  }
LABEL_45:
  v28 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 67);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v28)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 536);
  if ( v6 < 0 )
  {
    v7 = 259LL;
    goto LABEL_4;
  }
  return 0LL;
}
