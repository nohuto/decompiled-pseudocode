/*
 * XREFs of ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803B41D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D08C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::SubscribeToServices(TabletModePositioner *this, struct IServiceProvider *a2)
{
  char *v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r15
  char *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-59h] BYREF
  __int64 v24; // [rsp+38h] [rbp-51h] BYREF
  int v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-41h] BYREF
  __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-31h] BYREF
  char *v29; // [rsp+70h] [rbp-19h]
  __int128 v30; // [rsp+80h] [rbp-9h] BYREF
  __int128 v31; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v27 = 0LL;
  v2 = (char *)this + 312;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 339LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_73;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
         (char *)this + 320);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 340LL;
    goto LABEL_71;
  }
  v8 = (_QWORD *)((char *)this + 328);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 328);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 341LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 336);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 342LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
         &GUID_2010122c_468a_480f_8cd1_b85e76f5882e,
         (char *)this + 344);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 343LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopManager,
         &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
         (char *)this + 352);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 344LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
         (char *)this + 360);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 345LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &unk_1804FFF58,
         &GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714,
         (char *)this + 368);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 346LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v27);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 347LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         (char *)this + 376);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 348LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_MultitaskingViewVisibilityService,
         &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
         (char *)this + 384);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 349LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_ShellTargetingTracker,
         &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
         &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 350LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         (char *)this + 392);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 351LL;
    goto LABEL_71;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
         (char *)this + 416);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 352LL;
    goto LABEL_71;
  }
  v9 = (char *)this - 24;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 40) + 24LL))(
         *((_QWORD *)this + 40),
         ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
         (char *)this + 460);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 354LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v8 + 72LL))(
         *v8,
         ((unsigned __int64)this + 120) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 464);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 356LL;
    goto LABEL_71;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(*v8, (char *)this + 212);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 408);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 359LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 51) + 24LL))(
         *((_QWORD *)this + 51),
         ((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 484);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 360LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
         *((_QWORD *)this + 47),
         &unk_1804FFF50,
         1LL,
         ((unsigned __int64)this + 144) & -(__int64)(this != (TabletModePositioner *)24),
         (char *)this + 472);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 366LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 48) + 32LL))(
         *((_QWORD *)this + 48),
         ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 476);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 367LL;
    goto LABEL_71;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v26 + 24LL))(
         v26,
         ((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
         (char *)this + 480);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 368LL;
    goto LABEL_71;
  }
  v28[0] = *((_QWORD *)this + 39);
  v28[1] = *v8;
  v28[2] = *((_QWORD *)this + 43);
  if ( this == (TabletModePositioner *)24 )
    v29 = 0LL;
  else
    v29 = (char *)this + 64;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35), v28);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 377LL;
    goto LABEL_71;
  }
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService(v11, v10, v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         (char *)this + 424);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 388LL;
    goto LABEL_71;
  }
  v13 = *((_QWORD *)this + 53);
  if ( !v13 )
  {
LABEL_69:
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v27 + 24LL))(
           v27,
           ((unsigned __int64)this + 128) & -(__int64)(this != (TabletModePositioner *)24),
           (char *)this + 468);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_73;
    }
    v7 = 422LL;
    goto LABEL_71;
  }
  v24 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, 2LL, &v24);
  v6 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_65;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  if ( ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v23) >= 0 )
  {
    v25 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v25);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v15);
    if ( v25 )
    {
      v31 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23 + 88LL))(v23, &v31);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x197,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v16);
      v30 = v31;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v24 + 56LL))(
              v24,
              v23,
              &v30,
              1LL);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x198,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v17);
    }
  }
  v18 = 3LL;
  if ( *((_DWORD *)this + 53) != 1 )
    v18 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 40LL))(v24, v18);
  v6 = v19;
  if ( v19 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    v21 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_69;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A1,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
LABEL_65:
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_73:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  return v6;
}
