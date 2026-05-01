/*
 * XREFs of ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18035D720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180123320 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180123320.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801236A4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__&___ptr64_ @ 0x18035A65C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__-__.c)
 *     ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x18035AC58 (--1TMAppArrange@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18035AD18 (--4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18035C890 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18035DA38 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x18035DD88 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 */

__int64 __fastcall WindowArrangementView::Show(
        WindowArrangementView *this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  char *v4; // rbx
  int v6; // eax
  volatile int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  struct IApplicationView *v15; // rbx
  struct IAppLayout *v16; // rdi
  int v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  char *v18; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v19[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v4 = (char *)this - 24;
  v6 = WindowArrangementView::ShowView((WindowArrangementView *)((char *)this - 24), a2, a3, a4);
  v10 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v6);
    return v10;
  }
  if ( *((_DWORD *)this + 64) == 2 )
  {
    v18 = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)v4,
        v7);
    *(_QWORD *)v17 = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v4);
    v12 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc______ptr64_(
            v8,
            (__int64)v7,
            v9,
            (__int64 *)v17);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v17);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v18);
      return v13;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v17);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v18);
  }
  v14 = *((_DWORD *)this + 65);
  if ( v14 == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 216LL))(*((_QWORD *)this + 7));
    v14 = *((_DWORD *)this + 65);
  }
  v15 = (struct IApplicationView *)*((_QWORD *)this + 8);
  v16 = (struct IAppLayout *)*((_QWORD *)this + 12);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"TMAppArrange");
  v19[0] = &TabletModeTelemetry::TMAppArrange::`vftable';
  TabletModeTelemetry::TMAppArrange::StartActivity((TabletModeTelemetry::TMAppArrange *)v19, v16, v15, v14);
  TabletModeTelemetry::TMAppArrange::operator=((__int64)this + 296, (__int64)v19);
  TabletModeTelemetry::TMAppArrange::~TMAppArrange((TabletModeTelemetry::TMAppArrange *)v19);
  return 0LL;
}
