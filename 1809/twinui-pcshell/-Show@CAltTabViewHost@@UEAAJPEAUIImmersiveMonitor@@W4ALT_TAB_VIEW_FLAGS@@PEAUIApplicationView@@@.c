/*
 * XREFs of ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802EE150
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180146BCC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18027F7E0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802ED2C4 (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x1802ED988 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802ED988.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1802EE540 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ @ 0x1802EEA10 (-SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ.c)
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
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h]
  _QWORD v32[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v33[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v7 = 1;
  v30 = (a1 + 24) & -(__int64)(a1 != 0);
  v31 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v30, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"ShowAltTab");
  v33[0] = &MultitaskingViewTelemetry::ShowAltTab::`vftable';
  MultitaskingViewTelemetry::ShowAltTab::StartActivity((MultitaskingViewTelemetry::ShowAltTab *)v33);
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
LABEL_36:
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
    goto LABEL_37;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 168), (__int64)a2);
  v14.lpVtbl = a2->lpVtbl;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v15 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *))v14.lpVtbl[3].Release)(a2, v32);
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
          v32,
          3LL);
  v10 = v15;
  if ( v15 < 0 )
  {
    v13 = 178LL;
    goto LABEL_12;
  }
  v28 = 0LL;
  if ( !a4 )
    goto LABEL_23;
  v16 = *(_QWORD *)(a1 + 136);
  ppvOut = 0LL;
  v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v29);
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
      187LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v18);
    v19 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  if ( v19 )
  {
    v20 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    (*(void (__fastcall **)(void *, __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 24LL))(
      v20,
      a4,
      &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
      &v28);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( !v28 )
    goto LABEL_23;
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 104LL))(*(_QWORD *)(a1 + 152), 1LL);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      194LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v21);
LABEL_23:
    v22 = (unsigned int)((a3 & 2) != 0) + 7;
    goto LABEL_24;
  }
  v22 = (unsigned int)((a3 & 2) != 0) + 5;
LABEL_24:
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 152) + 96LL))(*(_QWORD *)(a1 + 152), 1LL, v22);
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 56LL))(*(_QWORD *)(a1 + 152));
  v10 = v23;
  if ( v23 < 0 )
  {
    v24 = 208LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_35;
  }
  v25 = *(_QWORD *)(a1 + 152);
  *(_BYTE *)(a1 + 112) = 1;
  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 88LL))(v25);
  v10 = v23;
  if ( v23 < 0 )
  {
    v24 = 212LL;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 192) = a3 & 1;
  if ( (a3 & 4) == 0 )
  {
    if ( (a3 & 1) != 0 || GetAsyncKeyState(18) < 0 )
      goto LABEL_33;
LABEL_39:
    CAltTabViewHost::SwitchToSelectedItemAndDismiss((CAltTabViewHost *)a1);
    goto LABEL_34;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 24LL))(*(_QWORD *)(a1 + 160)) )
    goto LABEL_39;
LABEL_33:
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
LABEL_34:
  v7 = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v33);
  v10 = 0;
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  if ( v7 )
    goto LABEL_36;
LABEL_37:
  MultitaskingViewTelemetry::ShowAltTab::~ShowAltTab((MultitaskingViewTelemetry::ShowAltTab *)v33);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v30);
  return (unsigned int)v10;
}
