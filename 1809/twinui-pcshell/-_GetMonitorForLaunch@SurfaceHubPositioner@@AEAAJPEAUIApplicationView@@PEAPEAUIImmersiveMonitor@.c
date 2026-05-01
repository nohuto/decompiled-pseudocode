/*
 * XREFs of ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1803392A0
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800731C0 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180339BD8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003DE50 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_GetMonitorForLaunch(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IImmersiveApplication **v10; // r8
  int ApplicationFromView; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v17[2]; // [rsp+30h] [rbp-30h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v22; // [rsp+90h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v23; // [rsp+A0h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v24; // [rsp+A8h] [rbp+48h] BYREF

  v17[1] = -2LL;
  *a3 = 0LL;
  v23 = 0LL;
  v6 = *((_QWORD *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v6 + 72LL))(
         v6,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v23);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v22 = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 20) + 32LL))(
           *((_QWORD *)this + 20),
           &v22);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 487LL;
      goto LABEL_5;
    }
    if ( v22 > 1 )
    {
      v17[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
      ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)v17, v10);
      v8 = ApplicationFromView;
      if ( ApplicationFromView < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EB,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)ApplicationFromView);
LABEL_17:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
        goto LABEL_20;
      }
      lpString1 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v12 = v17[0];
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      v19 = -1LL;
      v20 = -1LL;
      v13 = (*(__int64 (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v12 + 32LL))(v12, &lpString1);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EE,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v13);
LABEL_16:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        goto LABEL_17;
      }
      if ( CompareStringOrdinal(
             lpString1,
             -1,
             L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel",
             -1,
             1) != 2 )
      {
        v24 = 0LL;
        v14 = *((_QWORD *)this + 20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v14 + 104LL))(
                v14,
                1LL,
                v23,
                &v24);
        v8 = v15;
        if ( v15 >= 0 )
        {
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
          *a3 = v24;
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F3,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v15);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        goto LABEL_16;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    *a3 = v23;
    v8 = 0;
    goto LABEL_20;
  }
  v9 = 485LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return v8;
}
