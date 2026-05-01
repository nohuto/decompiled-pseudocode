/*
 * XREFs of ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803A5CB4
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_9c95a24de225faff4ccd4c58ae45f41a__&_::Run @ 0x18007EDB0 (wil--details--functor_wrapper_void__lambda_9c95a24de225faff4ccd4c58ae45f41a__-_--Run.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180039338 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18014C674 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1803A50FC (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetLaunchPositionForPeoplePane(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationViewPosition **a3)
{
  struct IImmersiveApplication **v6; // r8
  int ApplicationFromView; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, GUID *, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, LPVOID *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  struct IApplicationViewPosition *v18; // rax
  void *v20; // [rsp+38h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-41h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-31h] BYREF
  int v24; // [rsp+58h] [rbp-29h] BYREF
  struct tagSIZE v25; // [rsp+60h] [rbp-21h] BYREF
  __int64 v26; // [rsp+68h] [rbp-19h]
  RECT rc; // [rsp+78h] [rbp-9h] BYREF
  RECT v28; // [rsp+88h] [rbp+7h] BYREF
  struct tagRECT v29; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v26 = -2LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v23, v6);
  v8 = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v22 = 0LL;
    v9 = v23;
    v10 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v11 = v10(v9, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v22);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x689,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_26;
    }
    v12 = 0;
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 32LL))(v22, &v24) < 0 )
      goto LABEL_12;
    v12 = ~v24;
    v13 = *((_QWORD *)this + 38);
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v13 + 96LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v15 = v14(v13, v12, &pv);
    v8 = v15;
    if ( v15 < 0 )
    {
      v16 = 1681LL;
      goto LABEL_18;
    }
    if ( v12 && pv )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, RECT *))(**((_QWORD **)this + 38) + 112LL))(
              *((_QWORD *)this + 38),
              pv,
              &v28);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 1693LL;
        goto LABEL_18;
      }
    }
    else
    {
LABEL_12:
      v15 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 38) + 120LL))(*((_QWORD *)this + 38), &v28);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 1689LL;
        goto LABEL_18;
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagSIZE *))(**((_QWORD **)this + 38) + 104LL))(
            *((_QWORD *)this + 38),
            v12,
            &v25);
    v8 = v15;
    if ( v15 >= 0 )
    {
      rc = v28;
      v15 = CDesktopPositioner::_CalculateTaskbarFlyoutPosition(this, &rc, v25, &v29);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v20 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        v17 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                &v20,
                &v29);
        v8 = v17;
        if ( v17 >= 0 )
        {
          v18 = (struct IApplicationViewPosition *)v20;
          v20 = 0LL;
          *a3 = v18;
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6A7,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        goto LABEL_23;
      }
      v16 = 1700LL;
    }
    else
    {
      v16 = 1697LL;
    }
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v15);
LABEL_23:
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x686,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v8;
}
