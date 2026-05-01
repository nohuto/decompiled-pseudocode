/*
 * XREFs of ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18018CE00
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180065C20 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x180065FB0 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18007D840 (-UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18018BA14 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18018BD40 (-DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18018BFA8 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x18018DFF0 (-TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800153D8 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18016B8E4 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18018A27C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18018CA84 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18018CAA8 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018D414 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4Re.c)
 *     ?SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z @ 0x18018DAA0 (-SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18018E084 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018E480 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18018E6B4 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall FullScreenPositioner::PositionView(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 result; // rax
  const char *v8; // r9
  ApplicationViewOperation *v9; // rbx
  bool IsLightweightFullScreen; // r15
  void *v11; // rsi
  struct IApplicationView *v12; // rdx
  struct IApplicationViewTitlebarConfiguration **v13; // r9
  int v14; // eax
  bool v15[8]; // [rsp+20h] [rbp-69h] BYREF
  void *v16[2]; // [rsp+28h] [rbp-61h] BYREF
  ApplicationViewOperation *v17; // [rsp+38h] [rbp-51h] BYREF
  __int64 v18[3]; // [rsp+40h] [rbp-49h] BYREF
  __m256i v19; // [rsp+58h] [rbp-31h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  __int128 v21; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v20 = -2LL;
  v4 = a3;
  FullScreenPositionerLogging::TraceLoggingInfo(
    "FullScreenPositioner - Position view: %p with PositionViewShowOperation: %d and animation requested: %d",
    a2,
    a3,
    a4);
  v21 = 0uLL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 232) + 72LL))(*(_QWORD *)(a1 + 232), &v21);
  if ( (int)result >= 0 )
  {
    v18[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v17);
    v9 = v17;
    if ( v17 )
    {
      v16[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                  v16,
                  &v21) >= 0 )
      {
        IsLightweightFullScreen = FullScreenPositioner::IsLightweightFullScreen((FullScreenPositioner *)a1, a2);
        v11 = v16[0];
        if ( *((void **)v9 + 9) != v16[0] )
        {
          *(void **)v15 = v16[0];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v15);
          *(_QWORD *)v15 = *((_QWORD *)v9 + 9);
          *((_QWORD *)v9 + 9) = v11;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
        }
        *(_QWORD *)((char *)v9 + 116) = 4095LL;
        ApplicationViewOperation::SetZOrderBand(v9, IsLightweightFullScreen ? 1 : 8);
        *((_DWORD *)v9 + 50) = 0;
        *(_QWORD *)((char *)v9 + 204) = 0LL;
        *(_QWORD *)((char *)v9 + 212) = 0LL;
        *((_BYTE *)v9 + 236) = 1;
        *((_QWORD *)v9 + 30) = 0LL;
        v16[1] = (void *)0x100000001LL;
        *(_QWORD *)((char *)v9 + 220) = 0x100000001LL;
        *(_QWORD *)((char *)v9 + 228) = 0LL;
        v19.m256i_i64[3] = 0LL;
        *(__m128i *)((char *)v19.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
        v19.m256i_i32[5] = 0;
        v19.m256i_i32[0] = 1;
        *(_OWORD *)((char *)v9 + 132) = 0LL;
        *(__m256i *)((char *)v9 + 148) = v19;
        *((_BYTE *)v9 + 128) = 1;
        *(_QWORD *)v15 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
        LOBYTE(v12) = *(_BYTE *)(a1 + 424);
        FullScreenPositionerHelpers::CreateTitlebarConfiguration(a2, v12, (bool)v15, v13);
        Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)v9 + 24, *(__int64 *)v15);
        *((_DWORD *)v9 + 31) = 1;
        if ( v4 )
        {
          *((_BYTE *)v9 + 112) = 1;
          *((_BYTE *)v9 + 113) = v4 == 1;
        }
        wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::ReportUsageToService();
        FullScreenPositionerLogging::TraceLoggingInfo(
          "FullScreenPositioner - Applying positioning operation: %p for view: %p",
          v9,
          a2);
        v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, ApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                a2,
                v9);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x542,
            (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
            (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
    }
    else
    {
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x4DC,
        (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        v8);
    }
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v17);
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  }
  return result;
}
