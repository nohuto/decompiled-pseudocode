/*
 * XREFs of ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18034ADF8
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18034ACDC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801226FC (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D63C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B26C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4Reporti.c)
 *     ?XamlAllUpViewHost_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0A18 (-XamlAllUpViewHost_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$As@UIMultitaskingViewHost@@@?$ComPtr@UIXamlViewHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x180348FB0 (--$As@UIMultitaskingViewHost@@@-$ComPtr@UIXamlViewHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180349DA0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall CMultitaskingViewManager::_CreateXamlMTVHost(
        __int64 a1,
        __int64 a2,
        void *a3,
        const char *a4,
        void *a5)
{
  void *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  void *v10; // r14
  int v11; // esi
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // esi
  int v21; // esi
  int v22; // esi
  const char *v23; // r9
  const struct _GUID *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 *v29; // rbx
  int v30; // eax
  const char *v32; // r9
  int v33[4]; // [rsp+20h] [rbp-91h] BYREF
  __int64 v34; // [rsp+30h] [rbp-81h] BYREF
  __int64 v35; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v36[20]; // [rsp+40h] [rbp-71h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]
  __int64 v38; // [rsp+110h] [rbp+5Fh] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  *(_QWORD *)a5 = 0LL;
  v10 = a3;
  v11 = a2;
  if ( *(_QWORD *)(a1 + 248) && *(_QWORD *)(a1 + 256) && *(_QWORD *)(a1 + 264) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 248))(
            *(_QWORD *)(a1 + 248),
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v35);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 494LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_35:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      return v14;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 256))(
            *(_QWORD *)(a1 + 256),
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v34);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 495LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
    v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 264))(
            *(_QWORD *)(a1 + 264),
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v38);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 496LL;
      goto LABEL_8;
    }
    v6 = v35;
    v7 = v34;
    v8 = v38;
  }
  v36[1] = *(_QWORD *)(a1 + 88);
  v36[0] = a1;
  if ( !v10 )
    v10 = *(void **)(a1 + 96);
  v36[3] = *(_QWORD *)(a1 + 112);
  v36[4] = *(_QWORD *)(a1 + 152);
  v36[5] = *(_QWORD *)(a1 + 240);
  v36[6] = *(_QWORD *)(a1 + 160);
  v36[7] = *(_QWORD *)(a1 + 232);
  v36[8] = *(_QWORD *)(a1 + 208);
  v36[9] = *(_QWORD *)(a1 + 200);
  v36[10] = *(_QWORD *)(a1 + 216);
  v36[11] = *(_QWORD *)(a1 + 224);
  v16 = *(_QWORD *)(a1 + 120);
  v36[14] = v6;
  v17 = *(_QWORD *)(a1 + 176);
  v36[12] = v16;
  v18 = *(_QWORD *)(a1 + 144);
  v36[17] = v17;
  v19 = *(_QWORD *)(a1 + 168);
  v36[13] = v18;
  v36[2] = v10;
  v36[15] = v7;
  v36[16] = v8;
  v36[18] = v19;
  *(_OWORD *)v33 = 0LL;
  v20 = v11 - 1;
  if ( !v20 )
  {
    wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::ReportUsageToService(v18, 3u, (__int64)a3);
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      553LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      v32);
    JUMPOUT(0x18034B1E6LL);
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v18, 3u, (__int64)a3);
    a5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    v25 = XamlAllUpViewHost_CreateInstance(v24, &a5);
    v14 = v25;
    if ( v25 >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)a5 + 24LL))(a5, v36);
      v14 = v25;
      if ( v25 >= 0 )
      {
        v25 = Microsoft::WRL::ComPtr<IXamlViewHost>::As<IMultitaskingViewHost>(&a5, (__int64 *)v33);
        v14 = v25;
        if ( v25 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
          goto LABEL_28;
        }
        v26 = 563LL;
      }
      else
      {
        v26 = 562LL;
      }
    }
    else
    {
      v26 = 561LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
LABEL_34:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33[2]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v33);
    goto LABEL_35;
  }
  v22 = v21 - 2;
  if ( !v22 )
  {
    wil::Feature<__WilFeatureTraits_Feature_XamlSnapAssistView>::ReportUsageToService(v18, a2, (__int64)a3);
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      582LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      v23);
    __debugbreak();
  }
  if ( v22 == 4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      587LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      a4);
    __debugbreak();
  }
LABEL_28:
  v27 = (_QWORD *)(a1 + 280);
  v28 = v27[1];
  if ( v28 != v27[3]
    || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)v27,
              v28 + 1,
              a3) >= 0 )
  {
    ++v27[1];
    v29 = (__int64 *)(16LL * v27[1] + *v27 - 16LL);
    if ( v29 )
    {
      *v29 = *(_QWORD *)v33;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
      v29[1] = *(_QWORD *)&v33[2];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29 + 1);
    }
  }
  v30 = (***(__int64 (__fastcall ****)(_QWORD, const char *, void *))v33)(*(_QWORD *)v33, a4, v5);
  v14 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_34;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33[2]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  return 0LL;
}
