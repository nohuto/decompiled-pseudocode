/*
 * XREFs of ?SubscribeToServices@VirtualDesktopDataSourceComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803355C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopDataSourceComponent::SubscribeToServices(
        VirtualDesktopDataSourceComponent *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_VirtualDesktopPinnedApps,
         &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_VirtualDesktopManager,
           &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
           &v15);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
        (const char *)(unsigned int)v6);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_16;
    }
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_VirtualDesktopNotificationService,
           &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
           &v14);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
        (const char *)(unsigned int)v7);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_15;
    }
    v12[0] = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v8, 3u);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 13) + 32LL))(
           *((_QWORD *)this + 13),
           v15,
           v14);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, __int64))(**((_QWORD **)this + 14)
                                                                                         + 24LL))(
             *((_QWORD *)this + 14),
             v16,
             v15,
             v14,
             *((_QWORD *)this + 13),
             v12[0]);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v5 = 0;
        goto LABEL_13;
      }
      v10 = 65LL;
    }
    else
    {
      v10 = 64LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
    (const char *)(unsigned int)v4);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v5;
}
