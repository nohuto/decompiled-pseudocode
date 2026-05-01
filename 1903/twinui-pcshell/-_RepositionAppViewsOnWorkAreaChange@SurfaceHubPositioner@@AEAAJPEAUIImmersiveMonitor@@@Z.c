/*
 * XREFs of ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180399FE8
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180398F40 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18014C674 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18016AEDC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D6F4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18016F0F0 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange(
        SurfaceHubPositioner *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  volatile signed __int64 *v7; // rdi
  int v8; // eax
  void *v9; // rbx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int i; // r15d
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, _QWORD, GUID *, void **); // rsi
  int v17; // eax
  void *v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-40h] BYREF
  void *v22; // [rsp+48h] [rbp-38h] BYREF
  int v23; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int64 *v24[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v25; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24[1] = (volatile signed __int64 *)-2LL;
  v25 = 0uLL;
  v4 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v25);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v24);
    v7 = v24[0];
    if ( !v24[0] )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        533LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v6);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
           &v22,
           &v25);
    if ( v7 && v8 >= 0 )
    {
      v9 = v22;
      if ( *((void **)v7 + 9) != v22 )
      {
        v19 = v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        v19 = (void *)*((_QWORD *)v7 + 9);
        *((_QWORD *)v7 + 9) = v9;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      }
      v20 = 0LL;
      v10 = *((_QWORD *)this + 23);
      v11 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v10 + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v12 = v11(v10, 2LL, a2, &v20);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 548LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_23:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v24);
        return v5;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v21);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 550LL;
        goto LABEL_13;
      }
      for ( i = 0; i < v21; ++i )
      {
        v19 = 0LL;
        v15 = v20;
        v16 = *(int (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)v20 + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        if ( v16(v15, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v19) >= 0
          && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)v19 + 216LL))(v19, &v23) >= 0 )
        {
          if ( v23 )
          {
            v17 = (*(__int64 (__fastcall **)(void *, volatile signed __int64 *))(*(_QWORD *)v19 + 320LL))(v19, v7);
            if ( v17 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x232,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
                (const char *)(unsigned int)v17);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    v5 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x213,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
