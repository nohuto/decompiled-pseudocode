/*
 * XREFs of ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18032F930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueS.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCopyToViewValueSetWithWindow@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCopyToViewValueSetWithWindow@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@@Z @ 0x18032EFA4 (--$Make@VCopyToViewValueSetWithWindow@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUH.c)
 *     ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18033035C (-IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180330A70 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1803AD5A4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation::ActivateApp(
        CDelayedTileActivation *this,
        struct IImmersiveMonitor *a2,
        struct ISplashScreen *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT Instance; // eax
  struct Windows::Foundation::Collections::IPropertySet *v9; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r9
  HRESULT v15; // eax
  volatile int *v16; // rdx
  volatile int *v17; // rdx
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v22; // [rsp+88h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+38h] BYREF

  v20[1] = -2LL;
  v18 = 0LL;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_998d66a2_4a54_496c_9e18_268890860004,
               (LPVOID *)&punk);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 75LL;
LABEL_17:
    v14 = (unsigned int)Instance;
    goto LABEL_18;
  }
  if ( !*((_QWORD *)this + 17)
    && ViewSizePreferenceHelpers::IsPropertySetEmpty(*((ViewSizePreferenceHelpers **)this + 16), v9) )
  {
LABEL_15:
    Instance = ActivateApplicationForLaunchWithManager(
                 punk,
                 *((_QWORD *)this + 7),
                 *((_QWORD *)this + 10),
                 *((_QWORD *)this + 13),
                 *((_DWORD *)this + 12),
                 a3,
                 v18,
                 &v22);
    v11 = Instance;
    if ( Instance >= 0 )
    {
      v11 = 0;
      goto LABEL_20;
    }
    v12 = 90LL;
    goto LABEL_17;
  }
  Instance = ViewSizePreferenceHelpers::SetViewValueSet(
               (ViewSizePreferenceHelpers *)punk,
               *((struct IUnknown **)this + 16),
               v10);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 80LL;
    goto LABEL_17;
  }
  v19 = (struct IUnknown *)*((_QWORD *)this + 16);
  Microsoft::WRL::Details::Make<CopyToViewValueSetWithWindow,Windows::Foundation::Collections::IPropertySet *,HWND__ * &>(
    v20,
    &v19,
    (HWND *)this + 17);
  v13 = v20[0];
  if ( !v20[0] )
  {
    v11 = -2147024882;
    v14 = 2147942414LL;
    v12 = 84LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)v14);
    goto LABEL_20;
  }
  v15 = IUnknown_SetSite(punk, (IUnknown *)(v20[0] + 8));
  v11 = v15;
  if ( v15 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow>::Release(
      v13,
      v16);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55,
    (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
    (const char *)(unsigned int)v15);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow>::Release(
    v13,
    v17);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v11;
}
