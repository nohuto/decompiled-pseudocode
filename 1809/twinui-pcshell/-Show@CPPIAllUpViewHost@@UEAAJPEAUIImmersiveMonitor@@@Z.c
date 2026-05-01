/*
 * XREFs of ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802F13B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180146BCC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802F07DC (--1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1802F0AE0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x1802F0E78 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802F0E78.c)
 *     ?StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1802F1608 (-StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ.c)
 */

__int64 __fastcall CPPIAllUpViewHost::Show(CPPIAllUpViewHost *this, IUnknown *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  IUnknown v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  void *ppvOut; // [rsp+20h] [rbp-E0h] BYREF
  signed __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  int v15; // [rsp+30h] [rbp-D0h]
  _QWORD v16[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v17[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v14 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v15 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v14, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"ShowPPIAllUpView");
  v17[0] = &MultitaskingViewTelemetry::ShowPPIAllUpView::`vftable';
  MultitaskingViewTelemetry::ShowPPIAllUpView::StartActivity((MultitaskingViewTelemetry::ShowPPIAllUpView *)v17);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1(
           (_QWORD *)this + 12,
           (__int64)ppvOut);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_6;
    v6 = 81LL;
  }
  else
  {
    v6 = 80LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\BaseViewHost.h",
    (const char *)(unsigned int)v4);
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 140LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)v7);
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 20, (__int64)a2);
  v9.lpVtbl = a2->lpVtbl;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v10 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *))v9.lpVtbl[3].QueryInterface)(a2, v16);
  v5 = v10;
  if ( v10 < 0 )
  {
    v8 = 145LL;
LABEL_18:
    v7 = (unsigned int)v10;
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)this + 19) + 24LL))(
          *((_QWORD *)this + 19),
          v16,
          3LL);
  v5 = v10;
  if ( v10 < 0 )
  {
    v8 = 148LL;
    goto LABEL_18;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 136LL))(*((_QWORD *)this + 19)) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
    v5 = v10;
    if ( v10 >= 0 )
    {
      v11 = *((_QWORD *)this + 19);
      *((_BYTE *)this + 112) = 1;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
      v5 = v10;
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
          *((_QWORD *)this + 11),
          *((unsigned int *)this + 18));
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17);
        v5 = 0;
        goto LABEL_22;
      }
      v8 = 163LL;
    }
    else
    {
      v8 = 159LL;
    }
    goto LABEL_18;
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17);
  v5 = -2147019873;
LABEL_20:
  CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
LABEL_22:
  MultitaskingViewTelemetry::ShowPPIAllUpView::~ShowPPIAllUpView((MultitaskingViewTelemetry::ShowPPIAllUpView *)v17);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v14);
  return (unsigned int)v5;
}
