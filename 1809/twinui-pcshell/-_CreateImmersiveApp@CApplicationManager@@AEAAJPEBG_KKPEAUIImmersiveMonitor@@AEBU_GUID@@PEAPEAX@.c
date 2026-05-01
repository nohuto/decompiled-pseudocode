/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B724
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18004BF34 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800ECE10 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1800ED220 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 * Callees:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800296E0 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1800467D8 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004AD20 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x18004B0C0 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x18004BA1C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe0.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18004BAD0 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ??$CreateRefCountedObj@UPER_APPLICATION_DATA@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@XZ @ 0x18004BE94 (--$CreateRefCountedObj@UPER_APPLICATION_DATA@@@@YA-AV-$ComPtr@V-$CRefCountedObject@UPER_APPLICAT.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x180073C84 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
  void **v9; // r15
  int PackageFullNameFromAppId; // esi
  unsigned __int16 *v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdi
  __int64 (__fastcall ***v21)(_QWORD, GUID *, const struct _GUID **); // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-49h] BYREF
  CallerIdentity *v25; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-39h] BYREF
  struct IIAMServiceProvider *v27; // [rsp+78h] [rbp-31h] BYREF
  struct PER_APPLICATION_DATA *v28; // [rsp+80h] [rbp-29h] BYREF
  struct IImmersiveMonitor *v29; // [rsp+88h] [rbp-21h] BYREF
  char *v30; // [rsp+90h] [rbp-19h] BYREF
  LPVOID pv[10]; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v32; // [rsp+108h] [rbp+5Fh] BYREF
  int v33; // [rsp+110h] [rbp+67h]

  v33 = a4;
  v32 = (unsigned __int64)a3;
  pv[3] = (LPVOID)-2LL;
  v9 = a7;
  *a7 = 0LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (unsigned __int16 *)pv, a3);
  v11 = (unsigned __int16 *)pv[0];
  if ( PackageFullNameFromAppId >= 0 )
  {
    v12 = 0LL;
    v24 = 0LL;
    v22 = 0LL;
    if ( (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
                (char *)this + 992,
                &v32,
                &v22) >= 0 )
    {
      v19 = v22;
    }
    else
    {
      v13 = (unsigned __int64 *)CreateRefCountedObj<PER_APPLICATION_DATA>(&v23);
      if ( &v21 != (__int64 (__fastcall ****)(_QWORD, GUID *, const struct _GUID **))v13 )
      {
        v12 = *v13;
        *v13 = 0LL;
      }
      v21 = 0LL;
      v24 = v12;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      if ( v11 )
        CApplicationManager::s_LoadQuirksForApp(
          v11,
          (struct PER_APPLICATION_DATA *)((v12 + 8) & ((unsigned __int128)-(__int128)v12 >> 64)));
      wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(v14, 3u, v15);
      v25 = a2;
      v26 = v12;
      if ( v12 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))(v12);
      v16 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___(
                         &v21,
                         &v25);
      v17 = *v16;
      *v16 = 0LL;
      v18 = v12;
      if ( v21 )
      {
        v21 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
      }
      SHTaskPoolQueueTask(0LL, 32LL, 0LL, 0LL, v17, 0LL);
      if ( v17 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v18 = v12;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      v19 = v22;
      if ( v22 != v12 )
      {
        if ( v18 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))(v12);
        v23 = v19;
        v19 = v12;
        v22 = v12;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      }
      v9 = a7;
    }
    a6 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a6);
    v27 = (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & -(__int64)(this != 0LL));
    v28 = (struct PER_APPLICATION_DATA *)((v19 + 8) & -(__int64)(v19 != 0));
    v29 = a5;
    LODWORD(a7) = v33;
    v30 = (char *)v11;
    v23 = v32;
    v25 = a2;
    a6 = 0LL;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    PackageFullNameFromAppId = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
                                 &v21,
                                 (const unsigned __int16 **)&v25,
                                 &v30,
                                 (int *)&a7,
                                 &v29,
                                 &v28,
                                 &v27,
                                 &v23);
    if ( PackageFullNameFromAppId >= 0 )
      PackageFullNameFromAppId = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &a6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( PackageFullNameFromAppId >= 0 )
    {
      if ( v19 == v12 )
        PackageFullNameFromAppId = CApplicationManager::_AddApplicationData(this, a2, &v32, &v24);
      if ( PackageFullNameFromAppId >= 0 )
        PackageFullNameFromAppId = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&a6->Data1)(
                                     a6,
                                     &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                     v9);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  }
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)PackageFullNameFromAppId;
}
