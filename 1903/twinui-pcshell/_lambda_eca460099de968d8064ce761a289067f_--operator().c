/*
 * XREFs of _lambda_eca460099de968d8064ce761a289067f_::operator() @ 0x1803A0E88
 * Callers:
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803A1220 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180036A6C (-_UpdateViewTabState@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18003BDA8 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1803A2E98 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_eca460099de968d8064ce761a289067f_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, GUID *, struct IUnknown **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CDesktopPositioner *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int updated; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, struct IUnknown *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  struct IUnknown *v17; // [rsp+30h] [rbp-40h] BYREF
  struct IApplicationViewOperation *v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  int v20; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v22[1] = -2LL;
  v17 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v2 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v4 = v3(v2, *(unsigned int *)a1[1], &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v17->lpVtbl[9].QueryInterface)(v17, &v20);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 892LL;
      goto LABEL_5;
    }
    v18 = 0LL;
    v7 = (CDesktopPositioner *)a1[2];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v8 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
           v7,
           (struct IApplicationView *)v17,
           &v18);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37F,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_29:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      goto LABEL_30;
    }
    v22[0] = 0LL;
    v21 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v9, 3u);
    if ( (unsigned int)SHIsSameObject(v17, v21) )
    {
      updated = CDesktopPositioner::PositionViewForPositionerHandoff(a1[2], v17, v18, *(unsigned int *)a1[4]);
      v5 = updated;
      if ( updated < 0 )
      {
        v11 = 912LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)updated);
        goto LABEL_28;
      }
      if ( v20 )
      {
        updated = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v18 + 96LL))(
                    v18,
                    1LL);
        v5 = updated;
        if ( updated < 0 )
        {
          v11 = 918LL;
          goto LABEL_26;
        }
      }
LABEL_22:
      updated = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationViewOperation *))v17->lpVtbl[13].AddRef)(
                  v17,
                  v18);
      v5 = updated;
      if ( updated >= 0 )
      {
        updated = CDesktopPositioner::_UpdateViewTabState((CDesktopPositioner *)a1[2], (struct IApplicationView *)v17);
        v5 = updated;
        if ( updated >= 0 )
        {
          v5 = 0;
          goto LABEL_28;
        }
        v11 = 941LL;
      }
      else
      {
        v11 = 938LL;
      }
      goto LABEL_26;
    }
    (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v18 + 96LL))(v18, 0LL);
    if ( !v22[0] )
      goto LABEL_22;
    v19 = 0LL;
    v12 = a1[2][39];
    v13 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)v12 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v14 = v13(v12, v17, &v19);
    v5 = v14;
    if ( v14 >= 0 )
    {
      if ( !v19
        || (v14 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, _QWORD))(*(_QWORD *)v22[0] + 40LL))(
                    v22[0],
                    v17,
                    0LL),
            v5 = v14,
            v14 >= 0) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_22;
      }
      v15 = 933LL;
    }
    else
    {
      v15 = 930LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
LABEL_28:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
    goto LABEL_29;
  }
  v6 = 889LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v5;
}
