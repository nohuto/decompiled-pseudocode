/*
 * XREFs of ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180339BD8
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800731C0 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180338640 (-ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180338750 (-ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180338C40 (-InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180338D50 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803397C0 (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801435E0 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180339158 (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1803392A0 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180339EA0 (-_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_SetDefaultLayout(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        char a3)
{
  int MonitorForLaunch; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  struct IImmersiveMonitor *v9; // rbx
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rdi
  struct IApplicationViewTitlebarConfiguration *v14; // rax
  SurfaceHubPositioner *v15; // rcx
  int v16; // eax
  struct IApplicationViewTitlebarConfiguration *v18; // [rsp+28h] [rbp-29h] BYREF
  void *v19; // [rsp+30h] [rbp-21h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+38h] [rbp-19h] BYREF
  __int64 v21; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v22[16]; // [rsp+48h] [rbp-9h] BYREF
  __m256i v23; // [rsp+58h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+27h]
  __int128 v25; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v24 = -2LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(this, a2, &v20);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 651LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)MonitorForLaunch);
    goto LABEL_22;
  }
  v9 = v20;
  MonitorForLaunch = SurfaceHubPositioner::_SetPositionerMonitor((struct IApplicationView *)a2, v20);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 654LL;
    goto LABEL_5;
  }
  v25 = 0uLL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v9 + 88LL))(v9, &v25) >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v21);
    v11 = v21;
    if ( !v21 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        664LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v10);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v19,
            &v25);
    if ( v11 && v12 >= 0 )
    {
      v13 = v19;
      v14 = *(struct IApplicationViewTitlebarConfiguration **)(v11 + 72);
      if ( v14 != v19 )
      {
        if ( v19 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 8LL))(v19);
          v14 = *(struct IApplicationViewTitlebarConfiguration **)(v11 + 72);
        }
        v18 = v14;
        *(_QWORD *)(v11 + 72) = v13;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      }
      *(_DWORD *)(v11 + 116) = 255;
      *(_DWORD *)(v11 + 120) = 32;
      *(_DWORD *)(v11 + 176) = 1;
      if ( a3 )
        *(_WORD *)(v11 + 112) = 257;
      *(_DWORD *)(v11 + 200) = 0;
      *(_QWORD *)(v11 + 220) = 0LL;
      *(_QWORD *)(v11 + 228) = 0LL;
      *(_QWORD *)(v11 + 204) = 0LL;
      *(_QWORD *)(v11 + 212) = 0LL;
      *(_BYTE *)(v11 + 236) = 1;
      *(_QWORD *)(v11 + 240) = 0LL;
      memset_0(v22, 0, 0x30uLL);
      v23.m256i_i64[0] = 0LL;
      *(__m128i *)&v23.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
      v23.m256i_i32[6] = 0;
      *(_OWORD *)(v11 + 128) = 0LL;
      *(__m256i *)(v11 + 144) = v23;
      *(_BYTE *)(v11 + 124) = 1;
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      SurfaceHubPositioner::_CreateTitlebarConfiguration(v15, &v18);
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v11 + 192), (__int64)v18);
      v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64))(*a2)[40])(
              a2,
              v11);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          698LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v21);
  }
  v7 = 0;
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  return v7;
}
