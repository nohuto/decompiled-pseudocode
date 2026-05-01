/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000B9C8
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001198C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18012F4F0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x18012F830 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 * Callees:
 *     ??$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@XZ @ 0x18000B654 (--$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@UPER_APPLI.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18000B6CC (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x18000BCB8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe0.c)
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x18000C2DC (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18000EBEC (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800248E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x18003EF24 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800791C8 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_CreateImmersiveApp(
        CApplicationManager *this,
        CallerIdentity *a2,
        unsigned __int16 **a3,
        int a4,
        struct IImmersiveMonitor *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v9; // r12
  int PackageFullNameFromAppId; // ebx
  unsigned __int16 *v11; // r14
  void **v12; // rsi
  void ***v13; // rax
  void **v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdi
  void **v19; // rdi
  __int64 (__fastcall ***v21)(_QWORD, GUID *, const struct _GUID **); // [rsp+48h] [rbp-61h] BYREF
  void **v22; // [rsp+50h] [rbp-59h] BYREF
  void **v23; // [rsp+58h] [rbp-51h] BYREF
  CallerIdentity *v24; // [rsp+60h] [rbp-49h] BYREF
  void **v25; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int16 **v26; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-31h] BYREF
  __int64 v28; // [rsp+80h] [rbp-29h] BYREF
  struct IImmersiveMonitor *v29; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int16 *v30; // [rsp+90h] [rbp-19h] BYREF
  LPVOID pv[10]; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int16 **v32; // [rsp+108h] [rbp+5Fh] BYREF
  int v33; // [rsp+110h] [rbp+67h]

  v33 = a4;
  v32 = a3;
  pv[3] = (LPVOID)-2LL;
  v9 = a7;
  *a7 = 0LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)pv, a3);
  v11 = (unsigned __int16 *)pv[0];
  if ( PackageFullNameFromAppId >= 0 )
  {
    v23 = 0LL;
    v22 = 0LL;
    v12 = 0LL;
    if ( (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
                (char *)this + 1000,
                &v32,
                &v22) >= 0 )
    {
      v19 = v22;
    }
    else
    {
      v13 = (void ***)CreateRefCountedObj<PER_APPLICATION_DATA,>(&v21);
      v14 = 0LL;
      if ( &a7 != v13 )
      {
        v14 = *v13;
        *v13 = 0LL;
      }
      a7 = 0LL;
      v23 = v14;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      if ( v11 )
        CApplicationManager::s_LoadQuirksForApp(
          v11,
          (struct PER_APPLICATION_DATA *)((unsigned __int64)(v14 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64)));
      v12 = v14;
      LOBYTE(v15) = 3;
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(v16, v15);
      v24 = a2;
      v25 = v14;
      if ( v14 )
        (*((void (__fastcall **)(void **))*v14 + 1))(v14);
      v17 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___(
                         &a7,
                         &v24);
      v18 = *v17;
      *v17 = 0LL;
      if ( a7 )
      {
        a7 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
      }
      SHTaskPoolQueueTask(0LL, 32LL, 0LL);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      v19 = v22;
      if ( v22 != v14 )
      {
        if ( v14 )
          (*((void (__fastcall **)(void **))*v14 + 1))(v14);
        a7 = v19;
        v19 = v14;
        v22 = v14;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a7);
      }
    }
    a6 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a6);
    v27 = ((unsigned __int64)this + 192) & -(__int64)(this != 0LL);
    v28 = (unsigned __int64)(v19 + 1) & -(__int64)(v19 != 0LL);
    v29 = a5;
    LODWORD(a7) = v33;
    v30 = v11;
    v26 = v32;
    v24 = a2;
    a6 = 0LL;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    PackageFullNameFromAppId = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
                                 (unsigned int)&v21,
                                 (unsigned int)&v24,
                                 (unsigned int)&v30,
                                 (unsigned int)&a7,
                                 (__int64)&v29,
                                 (__int64)&v28,
                                 (__int64)&v27,
                                 (__int64)&v26);
    if ( PackageFullNameFromAppId >= 0 )
      PackageFullNameFromAppId = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &a6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( PackageFullNameFromAppId >= 0 )
    {
      if ( v19 == v12 )
        PackageFullNameFromAppId = CApplicationManager::_AddApplicationData(
                                     (__int64)this,
                                     (const WCHAR *)a2,
                                     &v32,
                                     (__int64 *)&v23);
      if ( PackageFullNameFromAppId >= 0 )
        PackageFullNameFromAppId = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&a6->Data1)(
                                     a6,
                                     &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                     v9);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  }
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)PackageFullNameFromAppId;
}
