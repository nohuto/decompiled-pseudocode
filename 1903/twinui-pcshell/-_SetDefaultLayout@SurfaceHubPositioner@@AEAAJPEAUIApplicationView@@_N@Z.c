/*
 * XREFs of ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039A28C
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180076260 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180398CA0 (-ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180398DC0 (-ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803992B0 (-InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803993D0 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180399E78 (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180056444 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18014C674 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18016AEDC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18016F0F0 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803997E8 (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180399930 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18039A534 (-_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_SetDefaultLayout(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        char a3)
{
  int MonitorForLaunch; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  const char *v9; // r9
  volatile signed __int64 *v10; // rbx
  int v11; // eax
  void *v12; // rdi
  SurfaceHubPositioner *v13; // rcx
  int v14; // eax
  struct IImmersiveMonitor *v16; // [rsp+28h] [rbp-49h] BYREF
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+30h] [rbp-41h] BYREF
  void *v18; // [rsp+38h] [rbp-39h] BYREF
  void *v19; // [rsp+40h] [rbp-31h] BYREF
  volatile signed __int64 *v20[3]; // [rsp+48h] [rbp-29h] BYREF
  __m256i v21; // [rsp+60h] [rbp-11h]
  __int64 v22; // [rsp+80h] [rbp+Fh]
  __int128 v23; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v22 = -2LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(this, a2, &v16);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 661LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)MonitorForLaunch);
    goto LABEL_20;
  }
  MonitorForLaunch = SurfaceHubPositioner::_SetPositionerMonitor((struct IApplicationView *)a2, v16);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 664LL;
    goto LABEL_5;
  }
  v23 = 0uLL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v16 + 88LL))(v16, &v23) >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v20);
    v10 = v20[0];
    if ( !v20[0] )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        674LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v9);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v18,
            &v23);
    if ( v10 && v11 >= 0 )
    {
      v12 = v18;
      if ( *((void **)v10 + 9) != v18 )
      {
        v19 = v18;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        v19 = (void *)*((_QWORD *)v10 + 9);
        *((_QWORD *)v10 + 9) = v12;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      }
      *((_DWORD *)v10 + 29) = 4095;
      *((_DWORD *)v10 + 30) = 32;
      *((_DWORD *)v10 + 45) = 1;
      if ( a3 )
        *((_WORD *)v10 + 56) = 257;
      *((_DWORD *)v10 + 50) = 0;
      *(volatile signed __int64 *)((char *)v10 + 220) = 0LL;
      *(volatile signed __int64 *)((char *)v10 + 228) = 0LL;
      *(volatile signed __int64 *)((char *)v10 + 204) = 0LL;
      *(volatile signed __int64 *)((char *)v10 + 212) = 0LL;
      *((_BYTE *)v10 + 236) = 1;
      *((_QWORD *)v10 + 30) = 0LL;
      v21.m256i_i64[3] = 0LL;
      v21.m256i_i64[0] = 0LL;
      *(__m128i *)&v21.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
      *(_OWORD *)((char *)v10 + 132) = 0LL;
      *(__m256i *)((char *)v10 + 148) = v21;
      *((_BYTE *)v10 + 128) = 1;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      SurfaceHubPositioner::_CreateTitlebarConfiguration(v13, &v17);
      Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)v10 + 24, (__int64)v17);
      *((_DWORD *)v10 + 31) = 0;
      v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), volatile signed __int64 *))(*a2)[40])(
              a2,
              v10);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2C5,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v20);
  }
  v7 = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v7;
}
