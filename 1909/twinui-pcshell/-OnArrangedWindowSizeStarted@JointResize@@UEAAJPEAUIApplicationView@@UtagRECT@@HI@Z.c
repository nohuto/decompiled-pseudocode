/*
 * XREFs of ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1803EFCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018F144 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180191B20 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1803B37F4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1803B37F4.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803B3BE4 (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3efae7d26e0e657137d3ad3e752f20__&___lambda_2c3efae7d26e0e657137d3ad3e752f20__&_ @ 0x1803EE4AC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c3efae7d26e0.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x1803EEA88 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803EED60 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1803EEF40 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1803EF0E8 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1803EF2D0 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1803F01FC (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1803F02CC (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ?StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x1803F0430 (-StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
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
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"JointResize");
  v28[0] = &JointResizeTelemetry::JointResize::`vftable';
  JointResizeTelemetry::JointResize::StartActivity((JointResizeTelemetry::JointResize *)v28);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v29);
  v29[0] = &JointResizeTelemetry::JointResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)this + 352,
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
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(v10 + 440));
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
  v16 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3efae7d26e0e657137d3ad3e752f20______lambda_2c3efae7d26e0e657137d3ad3e752f20____(
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
  v11 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
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
