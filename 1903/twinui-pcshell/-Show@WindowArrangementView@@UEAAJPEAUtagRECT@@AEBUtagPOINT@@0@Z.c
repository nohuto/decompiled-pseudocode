/*
 * XREFs of ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803C3540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016FD64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__&_ @ 0x1803C0414 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__-_.c)
 *     ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x1803C0A10 (--1TMAppArrange@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803C0AD0 (--4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803C3858 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x1803C3BA4 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 */

__int64 __fastcall WindowArrangementView::Show(
        WindowArrangementView *this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  volatile signed __int32 *v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  struct IApplicationView *v16; // rbx
  struct IAppLayout *v17; // rdi
  int v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v19; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v20[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v4 = (volatile signed __int32 *)((char *)this - 24);
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
  if ( *((_DWORD *)this + 66) == 2 )
  {
    v19 = v4;
    v12 = (__int64)v4;
    if ( v4 )
    {
      _InterlockedIncrement(v4 + 17);
      v12 = (__int64)v19;
    }
    *(_QWORD *)v18 = v12;
    if ( v4 )
      _InterlockedIncrement(v4 + 17);
    v13 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc____(
            v8,
            v7,
            v9,
            (__int64 *)v18);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v18);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v19);
      return v14;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v18);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v19);
  }
  v15 = *((_DWORD *)this + 67);
  if ( v15 == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 216LL))(*((_QWORD *)this + 7));
    v15 = *((_DWORD *)this + 67);
  }
  v16 = (struct IApplicationView *)*((_QWORD *)this + 8);
  v17 = (struct IAppLayout *)*((_QWORD *)this + 12);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"TMAppArrange");
  v20[0] = &TabletModeTelemetry::TMAppArrange::`vftable';
  TabletModeTelemetry::TMAppArrange::StartActivity((TabletModeTelemetry::TMAppArrange *)v20, v17, v16, v15);
  TabletModeTelemetry::TMAppArrange::operator=((__int64)this + 304, (__int64)v20);
  TabletModeTelemetry::TMAppArrange::~TMAppArrange((TabletModeTelemetry::TMAppArrange *)v20);
  return 0LL;
}
