/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180048250
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x18004B0C0 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800107DC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180029DC0 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B6C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B810 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x180045694 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18004A79C (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004AD20 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x18004B044 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x180118BA4 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        CImmersiveApp *this,
        const unsigned __int16 *a2,
        char *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7,
        unsigned __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r15d
  struct IImmersiveMonitor *v15; // rax
  PCWSTR StringRawBuffer; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  char *v20; // rcx
  signed __int64 v21; // r14
  __int16 v22; // ax
  char *v23; // rax
  enum ORIENTATION_PREFERENCE *v24; // r8
  int v25; // r14d
  int v26; // ebx
  __int64 v27; // rbx
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  char *v30; // rcx
  char *v31; // r13
  __int16 v32; // ax
  char *v33; // rax
  int v35; // eax
  __int64 *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rbx
  struct IIAMServiceProvider *v40; // rcx
  __int64 fPending; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  struct IIAMServiceProvider *v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v47[4]; // [rsp+68h] [rbp-A0h] BYREF
  void **v48; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v49[3]; // [rsp+90h] [rbp-78h] BYREF
  int v50; // [rsp+A8h] [rbp-60h]
  LPVOID *v51; // [rsp+B0h] [rbp-58h]
  int *v52; // [rsp+B8h] [rbp-50h]
  int v53; // [rsp+C0h] [rbp-48h] BYREF
  char v54; // [rsp+C4h] [rbp-44h]
  char v55[32]; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v56[3]; // [rsp+E8h] [rbp-20h] BYREF
  char v57; // [rsp+100h] [rbp-8h]
  __int64 v58; // [rsp+108h] [rbp+0h]
  char v59[144]; // [rsp+110h] [rbp+8h] BYREF
  LPVOID v60[3]; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v61; // [rsp+1B8h] [rbp+B0h] BYREF

  v47[3] = (unsigned __int16 *)-2LL;
  v44 = a7;
  v48 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v49[0] = 0LL;
  v49[1] = &v48;
  v49[2] = 0LL;
  v50 = 0;
  v51 = v56;
  v52 = &v53;
  v53 = 0;
  v54 = 0;
  v57 = 0;
  LODWORD(v56[0]) = 0;
  v56[1] = "Initialization";
  v56[2] = 0LL;
  v58 = 1LL;
  v60[0] = 0LL;
  memset_0(v59, 0, sizeof(v59));
  v60[1] = 0LL;
  v60[2] = 0LL;
  v61 = 0LL;
  v48 = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)&v48, a2);
  v14 = SHStrDupW(a2, (LPWSTR *)this + 70);
  if ( v14 >= 0 )
  {
    *((_DWORD *)this + 142) = a4;
    v15 = (struct IImmersiveMonitor *)*((_QWORD *)this + 93);
    if ( v15 != a5 )
    {
      if ( a5 )
      {
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a5 + 8LL))(a5);
        v15 = (struct IImmersiveMonitor *)*((_QWORD *)this + 93);
      }
      Context = v15;
      *((_QWORD *)this + 93) = a5;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    }
    *((_BYTE *)this + 724) = *((_BYTE *)a6 + 28);
    *((_BYTE *)this + 725) = *((_BYTE *)a6 + 29);
    *((_BYTE *)this + 726) = *((_BYTE *)a6 + 30);
    *((_BYTE *)this + 727) = *((_BYTE *)a6 + 31);
    *((_BYTE *)this + 728) = *((_BYTE *)a6 + 32);
    *((_BYTE *)this + 729) = *((_BYTE *)a6 + 33);
    *((_BYTE *)this + 730) = *((_BYTE *)a6 + 34);
    *((_BYTE *)this + 731) = *((_BYTE *)a6 + 35);
    *((_BYTE *)this + 732) = *((_BYTE *)a6 + 36);
    *((_BYTE *)this + 733) = *((_BYTE *)a6 + 37);
    LOBYTE(v12) = 3;
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsageToService(v13, v12);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a6, 0LL);
    v17 = -1LL;
    if ( StringRawBuffer )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( StringRawBuffer[v18] );
      if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
                  (__int64)this + 576,
                  v18) >= 0 )
      {
        v19 = v18 + 1;
        v20 = (char *)*((_QWORD *)this + 72);
        if ( v18 > 0x7FFFFFFE )
        {
          if ( v18 != -1LL )
            *(_WORD *)v20 = 0;
        }
        else
        {
          v21 = (char *)StringRawBuffer - v20;
          do
          {
            if ( v19 == 1 )
              break;
            v22 = *(_WORD *)&v20[v21];
            if ( !v22 )
              break;
            *(_WORD *)v20 = v22;
            v20 += 2;
            --v19;
          }
          while ( v19 );
          v23 = v20 - 2;
          if ( v19 )
            v23 = v20;
          *(_WORD *)v23 = 0;
        }
        *((_QWORD *)this + 73) = v18;
      }
    }
    else
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 576);
    }
    v14 = CImmersiveApp::CImmersiveWindowCollection::Initialize((CImmersiveApp *)((char *)this + 264), v44);
    if ( v14 >= 0 )
    {
      v25 = 500;
      v42 = 0x300000001F4LL;
      if ( (int)CallerIdentity::GetManifestedOrientationPreference(
                  *((LPCWSTR *)this + 70),
                  (unsigned __int16 *)this + 368,
                  v24) < 0 )
        *((_DWORD *)this + 184) = 0;
      if ( *((_BYTE *)this + 724) )
      {
        v26 = 320;
        LODWORD(v42) = 320;
      }
      else if ( *((_BYTE *)this + 730) )
      {
        memset(v47, 0, 24);
        v26 = 320;
        if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                    v47,
                    L"%s\\%s",
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                    *((_QWORD *)this + 70)) >= 0
          && SHRegGetDWORD(HKEY_CURRENT_USER, v47[0], L"MinWidth", (unsigned int *)&fPending) >= 0 )
        {
          v35 = v42;
          if ( (_DWORD)fPending == 1 )
            v35 = 320;
          LODWORD(v42) = v35;
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v47);
      }
      else
      {
        v42 = 0x140000001F4LL;
        v26 = 320;
      }
      if ( *((_BYTE *)this + 726) )
        v42 = 0x30000000C0LL;
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 52) + 184LL))(*((_QWORD *)this + 52), &v42);
      Context = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
      if ( (*(int (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, LPVOID *))(*(_QWORD *)v44 + 24LL))(
             v44,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &Context) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)Context + 56LL))(
             Context,
             *((_QWORD *)this + 70),
             &fPending) >= 0 )
      {
        if ( (int)fPending < 500 )
          v25 = fPending;
        LODWORD(v42) = v25;
        if ( SHIDWORD(fPending) < 320 )
          v26 = HIDWORD(fPending);
        HIDWORD(v42) = v26;
      }
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 52) + 176LL))(*((_QWORD *)this + 52), &v42);
      CImmersiveApp::_UpdateWindowTitleAndButtons(this);
      v45 = 0LL;
      v27 = *((_QWORD *)this + 52);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 136LL))(v27, &v45) >= 0
        && *((_BYTE *)this + 727) )
      {
        fPending = v45;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&fPending);
        CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___(&v44, &fPending);
        v39 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
        v46 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
        *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = 0LL;
        v40 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
            v40,
            v37,
            v38);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&fPending);
        if ( v39 )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 52) + 208LL))(*((_QWORD *)this + 52), v39);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
      }
      LOBYTE(v28) = *((_BYTE *)a6 + 26);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 52) + 304LL))(*((_QWORD *)this + 52), v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
      if ( a3 )
      {
        do
          ++v17;
        while ( *(_WORD *)&a3[2 * v17] );
        v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
                (__int64)this + 616,
                v17);
        if ( v14 >= 0 )
        {
          v29 = v17 + 1;
          v30 = (char *)*((_QWORD *)this + 77);
          if ( v17 > 0x7FFFFFFE )
          {
            if ( v17 != -1LL )
              *(_WORD *)v30 = 0;
          }
          else
          {
            v31 = (char *)(a3 - v30);
            do
            {
              if ( v29 == 1 )
                break;
              v32 = *(_WORD *)&v31[(_QWORD)v30];
              if ( !v32 )
                break;
              *(_WORD *)v30 = v32;
              v30 += 2;
              --v29;
            }
            while ( v29 );
            v33 = v30 - 2;
            if ( v29 )
              v33 = v30;
            *(_WORD *)v33 = 0;
          }
          *((_QWORD *)this + 78) = v17;
        }
      }
    }
  }
  *((_QWORD *)this + 109) = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v48, (unsigned int)v14);
  v48 = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v48);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v61);
  wil::details::shared_buffer::reset(v60);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v56);
  if ( v53 == 1 )
  {
    v53 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v55);
  }
  v53 = 3;
  if ( v50 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v49);
  return (unsigned int)v14;
}
