/*
 * XREFs of ??0CopyToViewValueSetWithWindow@@QEAA@PEAUIUnknown@@PEAUHWND__@@@Z @ 0x18032F4B4
 * Callers:
 *     ??$Make@VCopyToViewValueSetWithWindow@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCopyToViewValueSetWithWindow@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@@Z @ 0x18032EFA4 (--$Make@VCopyToViewValueSetWithWindow@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUH.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x18032F338 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@.c)
 */

// Hidden C++ exception states: #wind=1
CopyToViewValueSetWithWindow *__fastcall CopyToViewValueSetWithWindow::CopyToViewValueSetWithWindow(
        CopyToViewValueSetWithWindow *this,
        struct IUnknown *a2,
        HWND a3)
{
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow>((__int64)this);
  *(_QWORD *)this = &CopyToViewValueSetWithWindow::`vftable'{for `IObjectWithSite'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CopyToViewValueSetBase,IOleWindow>::`vftable'{for `IUpdateViewValueSet'};
  *((_QWORD *)this + 3) = &CopyToViewValueSetWithWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = &CopyToViewValueSetWithWindow::`vftable';
  *((_QWORD *)this + 12) = a3;
  if ( a2 )
  {
    v6 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
           (char *)this + 72);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        94LL,
        (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
        (const char *)(unsigned int)v7);
  }
  return this;
}
