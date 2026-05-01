/*
 * XREFs of ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180340C34
 * Callers:
 *     ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x18033FE70 (-PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180043BB8 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D63C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D642C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4Repor.c)
 *     ??0INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18033F884 (--0INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x18033FD00 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18033FD28 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18033FD28.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::_StartMTVThread(CMultitaskingViewServiceProvider *this)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v2; // rax
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v3; // rbx
  __int64 *v4; // rsi
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA *v5; // rbx
  unsigned int LastError; // edi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  HANDLE EventW; // rax
  const char *v52; // r9
  char *v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rdx
  void *v57; // [rsp+20h] [rbp-69h] BYREF
  void *v58; // [rsp+28h] [rbp-61h] BYREF
  void *v59; // [rsp+30h] [rbp-59h] BYREF
  void *v60; // [rsp+38h] [rbp-51h] BYREF
  void *v61; // [rsp+40h] [rbp-49h] BYREF
  void *v62; // [rsp+48h] [rbp-41h] BYREF
  void *v63; // [rsp+50h] [rbp-39h] BYREF
  void *v64; // [rsp+58h] [rbp-31h] BYREF
  void *v65; // [rsp+60h] [rbp-29h] BYREF
  void *v66; // [rsp+68h] [rbp-21h] BYREF
  void *v67; // [rsp+70h] [rbp-19h] BYREF
  void *v68; // [rsp+78h] [rbp-11h] BYREF
  void *v69; // [rsp+80h] [rbp-9h] BYREF
  void *v70; // [rsp+88h] [rbp-1h] BYREF
  void *v71; // [rsp+90h] [rbp+7h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+Fh] BYREF
  _QWORD v73[8]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int v75; // [rsp+F8h] [rbp+6Fh] BYREF
  CMultitaskingViewServiceProvider *v76; // [rsp+100h] [rbp+77h] BYREF
  void *v77; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)operator new(
                                                               0xC0uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0xC0uLL);
    v4 = (__int64 *)CMultitaskingViewServiceProvider::INIT_THREAD_DATA::INIT_THREAD_DATA(v3);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = (CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v4;
  if ( !v4 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_128;
  }
  v76 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
  v76 = 0LL;
  if ( InlineIsEqualGUID(&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v76 = this;
    v7 = *(_QWORD *)this;
  }
  else
  {
    if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::CanCastTo(
                (__int64)this,
                &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                &v76) < 0 )
      goto LABEL_11;
    v7 = *(_QWORD *)v76;
  }
  (*(void (**)(void))(v7 + 8))();
LABEL_11:
  v75 = 2;
  v77 = v76;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         v4,
         (__int64)&GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
         &v77,
         &v75);
  LastError = v8;
  if ( v8 >= 0 )
  {
    v77 = (void *)*((_QWORD *)this + 28);
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 1);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           v4 + 1,
           (__int64)&GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &v77,
           &v75);
    LastError = v8;
    if ( v8 < 0 )
    {
      v9 = 262LL;
      goto LABEL_15;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v10 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            &ppvOut);
    LastError = v10;
    if ( v10 < 0 )
    {
      v11 = 265LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v10);
LABEL_126:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_127;
    }
    v77 = ppvOut;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 3);
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 3,
            (__int64)&GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
            &v77,
            &v75);
    LastError = v10;
    if ( v10 < 0 )
    {
      v11 = 266LL;
      goto LABEL_20;
    }
    v71 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
    v12 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v71);
    LastError = v12;
    if ( v12 < 0 )
    {
      v13 = 269LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12);
LABEL_125:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
      goto LABEL_126;
    }
    v77 = v71;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 2);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 2,
            (__int64)&GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v77,
            &v75);
    LastError = v12;
    if ( v12 < 0 )
    {
      v13 = 270LL;
      goto LABEL_25;
    }
    v70 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    v14 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopManager,
            &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            &v70);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = 273LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
LABEL_124:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
      goto LABEL_125;
    }
    v77 = v70;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 4);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 4,
            (__int64)&GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            &v77,
            &v75);
    LastError = v14;
    if ( v14 < 0 )
    {
      v15 = 274LL;
      goto LABEL_30;
    }
    v69 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
    v16 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopPinnedApps,
            &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
            &v69);
    LastError = v16;
    if ( v16 < 0 )
    {
      v17 = 277LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v16);
LABEL_123:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
      goto LABEL_124;
    }
    v77 = v69;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 5);
    v16 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 5,
            (__int64)&GUID_4ce81583_1e4c_4632_a621_07a53543148f,
            &v77,
            &v75);
    LastError = v16;
    if ( v16 < 0 )
    {
      v17 = 278LL;
      goto LABEL_35;
    }
    v68 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v68);
    v18 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v68);
    LastError = v18;
    if ( v18 < 0 )
    {
      v19 = 281LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v18);
LABEL_122:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v68);
      goto LABEL_123;
    }
    v77 = v68;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 6);
    v18 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 6,
            (__int64)&GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v77,
            &v75);
    LastError = v18;
    if ( v18 < 0 )
    {
      v19 = 282LL;
      goto LABEL_40;
    }
    v67 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
    v20 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopNotificationService,
            &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            &v67);
    LastError = v20;
    if ( v20 < 0 )
    {
      v21 = 285LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v20);
LABEL_121:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
      goto LABEL_122;
    }
    v77 = v67;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 7);
    v20 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 7,
            (__int64)&GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            &v77,
            &v75);
    LastError = v20;
    if ( v20 < 0 )
    {
      v21 = 286LL;
      goto LABEL_45;
    }
    v66 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
    v22 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &stru_1804FCB78,
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v66);
    LastError = v22;
    if ( v22 < 0 )
    {
      v23 = 289LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v22);
LABEL_120:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
      goto LABEL_121;
    }
    v77 = v66;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 8);
    v22 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 8,
            (__int64)&GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v77,
            &v75);
    LastError = v22;
    if ( v22 < 0 )
    {
      v23 = 290LL;
      goto LABEL_50;
    }
    v65 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v65);
    (***((void (__fastcall ****)(_QWORD, GUID *, void **))this + 25))(
      *((_QWORD *)this + 25),
      &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
      &v65);
    v77 = v65;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 9);
    v24 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 9,
            (__int64)&GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
            &v77,
            &v75);
    LastError = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v24);
LABEL_119:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v65);
      goto LABEL_120;
    }
    v25 = *((_QWORD *)this + 22);
    v64 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
    v26 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v25 + 48LL))(v25, &v64);
    LastError = v26;
    if ( v26 < 0 )
    {
      v27 = 297LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v26);
LABEL_118:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v64);
      goto LABEL_119;
    }
    v77 = v64;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 10);
    v26 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 10,
            (__int64)&GUID_4639c886_cffe_492c_915a_1e3f02d22434,
            &v77,
            &v75);
    LastError = v26;
    if ( v26 < 0 )
    {
      v27 = 298LL;
      goto LABEL_57;
    }
    v63 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
    v28 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &stru_1804FCB68,
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            &v63);
    LastError = v28;
    if ( v28 < 0 )
    {
      v29 = 301LL;
LABEL_62:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v28);
LABEL_117:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
      goto LABEL_118;
    }
    v77 = v63;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 11);
    v28 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 11,
            (__int64)&GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            &v77,
            &v75);
    LastError = v28;
    if ( v28 < 0 )
    {
      v29 = 302LL;
      goto LABEL_62;
    }
    v62 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
    v30 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, void **))this + 26))(
            *((_QWORD *)this + 26),
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &v62);
    LastError = v30;
    if ( v30 < 0 )
    {
      v31 = 305LL;
LABEL_67:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v30);
LABEL_116:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
      goto LABEL_117;
    }
    v77 = v62;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 12);
    v30 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 12,
            (__int64)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &v77,
            &v75);
    LastError = v30;
    if ( v30 < 0 )
    {
      v31 = 306LL;
      goto LABEL_67;
    }
    v61 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
    v32 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_ShellTargetingTracker,
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v61);
    LastError = v32;
    if ( v32 < 0 )
    {
      v33 = 309LL;
LABEL_72:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v32);
LABEL_115:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
      goto LABEL_116;
    }
    v77 = v61;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 13);
    v32 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 13,
            (__int64)&GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            &v77,
            &v75);
    LastError = v32;
    if ( v32 < 0 )
    {
      v33 = 310LL;
      goto LABEL_72;
    }
    v60 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
    v34 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v60);
    LastError = v34;
    if ( v34 < 0 )
    {
      v35 = 313LL;
LABEL_77:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v34);
LABEL_114:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
      goto LABEL_115;
    }
    v77 = v60;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 14);
    v34 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 14,
            (__int64)&GUID_fff59320_db70_4865_8fed_8b502d692f12,
            &v77,
            &v75);
    LastError = v34;
    if ( v34 < 0 )
    {
      v35 = 314LL;
      goto LABEL_77;
    }
    v59 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
    v36 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_ApplicationViewIconLoaderService,
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v59);
    LastError = v36;
    if ( v36 < 0 )
    {
      v37 = 317LL;
LABEL_82:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v36);
LABEL_113:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
      goto LABEL_114;
    }
    v77 = v59;
    v75 = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 15);
    v36 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 15,
            (__int64)&GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            &v77,
            &v75);
    LastError = v36;
    if ( v36 < 0 )
    {
      v37 = 318LL;
      goto LABEL_82;
    }
    v58 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v58);
    v38 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v58);
    LastError = v38;
    if ( v38 < 0 )
    {
      v39 = 321LL;
LABEL_87:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v39,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v38);
      goto LABEL_112;
    }
    v75 = 2;
    v77 = v58;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 18);
    v38 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 18,
            (__int64)&GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v77,
            &v75);
    LastError = v38;
    if ( v38 < 0 )
    {
      v39 = 322LL;
      goto LABEL_87;
    }
    wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(v40, 3u, v41);
    v77 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
    v42 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &v77);
    LastError = v42;
    if ( v42 < 0 )
    {
      v43 = 327LL;
LABEL_92:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v42);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
      goto LABEL_112;
    }
    v75 = 2;
    v57 = v77;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 19);
    v42 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            v4 + 19,
            (__int64)&GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            &v57,
            &v75);
    LastError = v42;
    if ( v42 < 0 )
    {
      v43 = 328LL;
      goto LABEL_92;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
    wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v44, 3u, v45);
    v57 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
    v46 = IUnknown_QueryService(
            *((IUnknown **)this + 2),
            (const GUID *const)&SID_VirtualDesktopDataSource,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v57);
    LastError = v46;
    if ( v46 >= 0 )
    {
      v75 = 2;
      v73[0] = v57;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 16);
      v46 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v4 + 16,
              (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v73,
              &v75);
      LastError = v46;
      if ( v46 >= 0 )
      {
        v77 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
        v48 = IUnknown_QueryService(
                *((IUnknown **)this + 2),
                (const GUID *const)&SID_VirtualDesktopController,
                &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                &v77);
        LastError = v48;
        if ( v48 >= 0 )
        {
          v75 = 2;
          v73[0] = v77;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 17);
          v48 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
                  v4 + 17,
                  (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  v73,
                  &v75);
          LastError = v48;
          if ( v48 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
            wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v50, 3u);
            EventW = CreateEventW(0LL, 1, 0, 0LL);
            v53 = (char *)*((_QWORD *)this + 29);
            v54 = (__int64)EventW;
            *((_QWORD *)this + 29) = 0LL;
            if ( (unsigned __int64)(v53 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v53);
            *((_QWORD *)this + 29) = v54;
            if ( v54 )
            {
              v4[23] = v54;
              v5 = 0LL;
              if ( SHCreateThread(
                     CMultitaskingViewServiceProvider::s_RunMTVThread,
                     v4,
                     8u,
                     (LPTHREAD_START_ROUTINE)CActionCenterExperienceManager::IsHintSupported) )
              {
                LastError = 0;
                goto LABEL_112;
              }
              CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'((CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)v4);
              v55 = 369LL;
            }
            else
            {
              v55 = 360LL;
            }
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)v55,
                          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
                          v52);
LABEL_112:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v58);
            goto LABEL_113;
          }
          v49 = 339LL;
        }
        else
        {
          v49 = 338LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v49,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v48);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v77);
LABEL_103:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v57);
        goto LABEL_112;
      }
      v47 = 335LL;
    }
    else
    {
      v47 = 334LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v46);
    goto LABEL_103;
  }
  v9 = 260LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v8);
LABEL_127:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v76);
LABEL_128:
  if ( v5 )
    CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(v5);
  return LastError;
}
