/*
 * XREFs of ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x180056E28
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180056770 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800570E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCApplicationViewBase@@UIWin32Applicat.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

CWin32ApplicationView *__fastcall CWin32ApplicationView::CWin32ApplicationView(
        CWin32ApplicationView *this,
        struct IClassicWindowExternal *a2)
{
  CWin32ApplicationView *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &CWin32ApplicationView::`vftable'{for `IApplicationView'};
  *((_QWORD *)this + 1) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationView2,IApplicationViewBase,IApplicationViewWithEnterpriseId>'};
  *((_QWORD *)this + 2) = &CWin32ApplicationView::`vftable'{for `IApplicationViewBase'};
  *((_QWORD *)this + 3) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewWithEnterpriseId>'};
  *((_QWORD *)this + 18) = &CWin32ApplicationView::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 19) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 20) = &CWin32ApplicationView::`vftable'{for `IAppSizeConstraintsCallback'};
  *((_QWORD *)this + 21) = &CWin32ApplicationView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 27) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IClassicWindowExternal *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 28) = 0LL;
  result = this;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  return result;
}
