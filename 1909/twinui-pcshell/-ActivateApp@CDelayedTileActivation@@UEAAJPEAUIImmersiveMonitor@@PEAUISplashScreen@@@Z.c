/*
 * XREFs of ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1803AF400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?8VDelayedTileActivationCallSite@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@VDelayedTileActivationCallSite@@@01@$$T@Z @ 0x1800AC8A0 (--$-8VDelayedTileActivationCallSite@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@VDelayedTileActivationCall.c)
 *     ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@@Z @ 0x1800AC8B0 (--$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAU.c)
 *     ??1?$ComPtr@VDelayedTileActivationCallSite@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ACB08 (--1-$ComPtr@VDelayedTileActivationCallSite@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AFDB4 (-IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803B0510 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x18042EE74 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
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
  struct Windows::Foundation::Collections::IPropertySet *v8; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdx
  HRESULT v13; // eax
  unsigned __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v19; // [rsp+88h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v16 = 0LL;
  if ( !a2
    || (v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v16),
        v6 = v5,
        v5 >= 0) )
  {
    punk = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    Instance = CoCreateInstance(
                 &CLSID_ApplicationActivationManager,
                 0LL,
                 1u,
                 &GUID_998d66a2_4a54_496c_9e18_268890860004,
                 (LPVOID *)&punk);
    v6 = Instance;
    if ( Instance < 0 )
    {
      v10 = 114LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_21;
    }
    if ( *((_QWORD *)this + 17)
      || !ViewSizePreferenceHelpers::IsPropertySetEmpty(*((ViewSizePreferenceHelpers **)this + 16), v8)
      || *((_BYTE *)this + 149) )
    {
      Instance = ViewSizePreferenceHelpers::SetViewValueSet(
                   (ViewSizePreferenceHelpers *)punk,
                   *((struct IUnknown **)this + 16),
                   v9);
      v6 = Instance;
      if ( Instance < 0 )
      {
        v10 = 119LL;
        goto LABEL_19;
      }
      v17[0] = *((_QWORD *)this + 16);
      Microsoft::WRL::Details::Make<DelayedTileActivationCallSite,Windows::Foundation::Collections::IPropertySet *,HWND__ * &,enum IAM_DESKTOP_SWITCH_OPTION &,std::optional<bool> &>(
        (__int64 *)&v15,
        v17,
        (_QWORD *)this + 17,
        (_DWORD *)this + 36,
        (__int16 *)this + 74);
      if ( Microsoft::WRL::operator==<DelayedTileActivationCallSite>(&v15) )
      {
        v6 = -2147024882;
        v11 = 2147942414LL;
        v12 = 123LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
          (const char *)v11);
        Microsoft::WRL::ComPtr<DelayedTileActivationCallSite>::~ComPtr<DelayedTileActivationCallSite>((__int64 *)&v15);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&punk);
        return v6;
      }
      v13 = IUnknown_SetSite(punk, (IUnknown *)((v15 + 8) & ((unsigned __int128)-(__int128)v15 >> 64)));
      v6 = v13;
      if ( v13 < 0 )
      {
        v11 = (unsigned int)v13;
        v12 = 124LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<DelayedTileActivationCallSite>::~ComPtr<DelayedTileActivationCallSite>((__int64 *)&v15);
    }
    Instance = ActivateApplicationForLaunchWithManager(
                 punk,
                 *((_QWORD *)this + 7),
                 *((_QWORD *)this + 10),
                 *((_QWORD *)this + 13),
                 *((_DWORD *)this + 12),
                 a3,
                 v16,
                 &v19);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      v6 = 0;
      goto LABEL_21;
    }
    v10 = 129LL;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6E,
    (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
