/*
 * XREFs of ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x18036A850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180146BCC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180333C18 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag__ea_180333C18.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180334008 (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46d2ac6b30f5d317ef4bcc4e3f77555a__&___ptr64___lambda_46d2ac6b30f5d317ef4bcc4e3f77555a__&___ptr64_ @ 0x180368F8C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46d2ac6b30f5d.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x18036959C (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803698B8 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x180369A98 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x180369C40 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x180369E30 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18036AD5C (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x18036AE2C (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ?StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x18036AF90 (-StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
 */

__int64 __fastcall JointResize::OnArrangedWindowSizeStarted(
        JointResize *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct tagRECT *a3,
        int a4,
        char a5)
{
  char v7; // r14
  char *v10; // rbx
  int v11; // esi
  __int64 (__fastcall ***v12)(ApplicationViewHelpers *, GUID *, __int64 *); // r8
  JointResize *v13; // rcx
  struct tagRECT *v14; // rax
  struct tagRECT v15; // xmm0
  __int64 *v16; // rax
  volatile int *v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rcx
  DWORD CurrentThreadId; // eax
  struct tagRECT v22; // [rsp+30h] [rbp-D0h] BYREF
  char *v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+60h] [rbp-A0h]
  struct tagRECT v27; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[40]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v29[40]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v7 = 1;
  *((_BYTE *)this + 136) = 1;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"JointResize");
  v28[0] = &JointResizeTelemetry::JointResize::`vftable';
  JointResizeTelemetry::JointResize::StartActivity((JointResizeTelemetry::JointResize *)v28);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v29);
  v29[0] = &JointResizeTelemetry::JointResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)this + 344,
    (__int64)v28);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v29);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v28);
  v10 = (char *)this - 88;
  JointResize::RegisterRawInput((JointResize *)((char *)this - 88), 0);
  JointResize::RegisterViewChanges((JointResize *)((char *)this - 88), 1);
  if ( (a5 & 2) != 0 )
  {
    v11 = -2147467259;
LABEL_14:
    JointResize::DestroyGhostDivider((JointResize *)((char *)this - 88));
    JointResize::Cleanup((JointResize *)((char *)this - 88));
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(v10 + 432));
    return (unsigned int)v11;
  }
  v11 = JointResize::CalculateSecondaryView((JointResize *)((char *)this - 88), a2, a4);
  if ( v11 < 0 )
    goto LABEL_14;
  *(_QWORD *)&v22.left = (char *)this - 88;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22.left);
  v12 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 13);
  v22 = *a3;
  v14 = JointResize::ComputeExtendedViewRect(v13, &v27, v12, &v22);
  v23 = (char *)this - 88;
  v24 = (__int64)this - 88;
  *a3 = *v14;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
  v15 = *a3;
  v26 = a4;
  v25 = v15;
  v16 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46d2ac6b30f5d317ef4bcc4e3f77555a______ptr64___lambda_46d2ac6b30f5d317ef4bcc4e3f77555a______ptr64_(
          (__int64 *)&v22.left,
          (__int64)&v23);
  v18 = *v16;
  *v16 = 0LL;
  v19 = *(_QWORD *)&v22.left;
  if ( *(_QWORD *)&v22.left )
  {
    *(_QWORD *)&v22.left = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v19,
      v17);
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 0LL, v18, 0LL);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v11 >= 0 )
  {
    v7 = 0;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v11);
  }
  if ( this != (JointResize *)88 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))((char *)this - 88);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))((char *)this - 88);
  }
  if ( v7 )
    goto LABEL_14;
  return (unsigned int)v11;
}
