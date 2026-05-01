/*
 * XREFs of ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18034EBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180056494 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016FD64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180172720 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802D8DC0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18034DD9C (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x18034E438 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18034E438.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18034EFC4 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ @ 0x18034F500 (-SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ.c)
 */

__int64 __fastcall CAltTabViewHost::Show(__int64 a1, IUnknown *a2, char a3, __int64 a4)
{
  char v7; // si
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  IUnknown v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  int v18; // eax
  char v19; // bl
  void *v20; // rbx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h]
  _QWORD v31[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v32[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v7 = 1;
  v29 = (a1 + 24) & -(__int64)(a1 != 0);
  v30 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v29, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"ShowAltTab");
  v32[0] = &MultitaskingViewTelemetry::ShowAltTab::`vftable';
  MultitaskingViewTelemetry::ShowAltTab::StartActivity((MultitaskingViewTelemetry::ShowAltTab *)v32);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v9 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &ppvOut);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0(
           (_QWORD *)(a1 + 96),
           (__int64)ppvOut);
    v10 = v9;
    if ( v9 >= 0 )
      goto LABEL_6;
    v11 = 81LL;
  }
  else
  {
    v11 = 80LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\BaseViewHost.h",
    (const char *)(unsigned int)v9);
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 171LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v12);
LABEL_35:
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
    goto LABEL_36;
  }
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(a1 + 168), (__int64)a2);
  v14.lpVtbl = a2->lpVtbl;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v15 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *))v14.lpVtbl[3].Release)(a2, v31);
  v10 = v15;
  if ( v15 < 0 )
  {
    v13 = 175LL;
LABEL_12:
    v12 = (unsigned int)v15;
    goto LABEL_13;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 152) + 24LL))(
          *(_QWORD *)(a1 + 152),
          v31,
          3LL);
  v10 = v15;
  if ( v15 < 0 )
  {
    v13 = 178LL;
    goto LABEL_12;
  }
  v27 = 0LL;
  if ( !a4 )
    goto LABEL_23;
  v16 = *(_QWORD *)(a1 + 136);
  ppvOut = 0LL;
  v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v18 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, void **))*v17)(
          *v17,
          &GUID_ab2611a6_5a19_4261_a11a_5f77866165e6,
          &ppvOut);
  if ( v18 >= 0 )
  {
    v19 = 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v18);
    v19 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  if ( v19 )
  {
    v20 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    (*(void (__fastcall **)(void *, __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 24LL))(
      v20,
      a4,
      &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
      &v27);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( v27
    && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 104LL))(*(_QWORD *)(a1 + 152), 1LL) >= 0 )
  {
    v21 = (unsigned int)((a3 & 2) != 0) + 5;
  }
  else
  {
LABEL_23:
    v21 = (unsigned int)((a3 & 2) != 0) + 7;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 152) + 96LL))(*(_QWORD *)(a1 + 152), 1LL, v21);
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 56LL))(*(_QWORD *)(a1 + 152));
  v10 = v22;
  if ( v22 < 0 )
  {
    v23 = 208LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_34;
  }
  v24 = *(_QWORD *)(a1 + 152);
  *(_BYTE *)(a1 + 112) = 1;
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 88LL))(v24);
  v10 = v22;
  if ( v22 < 0 )
  {
    v23 = 212LL;
    goto LABEL_28;
  }
  *(_BYTE *)(a1 + 192) = a3 & 1;
  if ( (a3 & 4) == 0 )
  {
    if ( (a3 & 1) != 0 || GetAsyncKeyState(18) < 0 )
      goto LABEL_32;
LABEL_38:
    CAltTabViewHost::SwitchToSelectedItemAndDismiss((CAltTabViewHost *)a1);
    goto LABEL_33;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 24LL))(*(_QWORD *)(a1 + 160)) )
    goto LABEL_38;
LABEL_32:
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
LABEL_33:
  v7 = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v32);
  v10 = 0;
LABEL_34:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  if ( v7 )
    goto LABEL_35;
LABEL_36:
  MultitaskingViewTelemetry::ShowAltTab::~ShowAltTab((MultitaskingViewTelemetry::ShowAltTab *)v32);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v29);
  return (unsigned int)v10;
}
