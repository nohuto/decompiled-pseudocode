/*
 * XREFs of ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180141FF0
 * Callers:
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x18005FDE8 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1800773C0 (-UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180140C94 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 *     ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180140F10 (-DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180141178 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180143150 (-TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180141CB0 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180142574 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4Re.c)
 *     ?SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z @ 0x180142C10 (-SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1801431E4 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801435E0 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180143814 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
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
  bool IsLightweightFullScreen; // r12
  void *v11; // rdi
  void *v12; // rcx
  struct IApplicationView *v13; // rdx
  struct IApplicationViewTitlebarConfiguration **v14; // r9
  int v15; // eax
  bool v16[8]; // [rsp+20h] [rbp-59h] BYREF
  void *v17; // [rsp+28h] [rbp-51h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  ApplicationViewOperation *v19; // [rsp+38h] [rbp-41h] BYREF
  struct IApplicationView *v20; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v21[16]; // [rsp+48h] [rbp-31h] BYREF
  __m256i v22; // [rsp+58h] [rbp-21h]
  __int64 v23; // [rsp+78h] [rbp-1h]
  __int128 v24; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v23 = -2LL;
  v4 = a3;
  FullScreenPositionerLogging::TraceLoggingInfo(
    "FullScreenPositioner - Position view: %p with PositionViewShowOperation: %d and animation requested: %d",
    a2,
    a3,
    a4);
  v24 = 0uLL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 232) + 72LL))(*(_QWORD *)(a1 + 232), &v24);
  if ( (int)result >= 0 )
  {
    v20 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v19);
    v9 = v19;
    if ( v19 )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                  &v17,
                  &v24) >= 0 )
      {
        IsLightweightFullScreen = FullScreenPositioner::IsLightweightFullScreen((FullScreenPositioner *)a1, a2);
        v11 = v17;
        v12 = (void *)*((_QWORD *)v9 + 9);
        if ( v12 != v17 )
        {
          if ( v17 )
          {
            (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
            v12 = (void *)*((_QWORD *)v9 + 9);
          }
          v18 = (__int64)v12;
          *((_QWORD *)v9 + 9) = v11;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        }
        *((_DWORD *)v9 + 29) = 255;
        *((_DWORD *)v9 + 30) = 0;
        ApplicationViewOperation::SetZOrderBand(v9, IsLightweightFullScreen ? 1 : 8);
        *((_DWORD *)v9 + 50) = 0;
        *(_QWORD *)((char *)v9 + 204) = 0LL;
        *(_QWORD *)((char *)v9 + 212) = 0LL;
        *((_BYTE *)v9 + 236) = 1;
        *((_QWORD *)v9 + 30) = 0LL;
        v18 = 0x100000001LL;
        *(_QWORD *)((char *)v9 + 220) = 0x100000001LL;
        *(_QWORD *)((char *)v9 + 228) = 0LL;
        memset_0(v21, 0, 0x30uLL);
        *(__m128i *)((char *)v22.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
        *(__int64 *)((char *)&v22.m256i_i64[2] + 4) = 0LL;
        v22.m256i_i32[0] = 1;
        *((_OWORD *)v9 + 8) = 0LL;
        *(__m256i *)((char *)v9 + 144) = v22;
        *((_BYTE *)v9 + 124) = 1;
        *(_QWORD *)v16 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
        LOBYTE(v13) = *(_BYTE *)(a1 + 424);
        FullScreenPositionerHelpers::CreateTitlebarConfiguration(a2, v13, (bool)v16, v14);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v9 + 24, *(__int64 *)v16);
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
        v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, ApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                a2,
                v9);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1265LL,
            (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
            (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
    else
    {
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x48E,
        (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        v8);
    }
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v19);
    return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  return result;
}
