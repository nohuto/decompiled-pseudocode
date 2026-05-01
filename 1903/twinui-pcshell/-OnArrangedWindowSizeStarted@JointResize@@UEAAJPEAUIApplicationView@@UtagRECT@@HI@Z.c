/*
 * XREFs of ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1803D0710
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016FD64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180172720 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180393EC4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_180393EC4.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803942B4 (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3efae7d26e0e657137d3ad3e752f20__&___lambda_2c3efae7d26e0e657137d3ad3e752f20__&_ @ 0x1803CEECC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c3efae7d26e0.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x1803CF4A8 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803CF780 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1803CF960 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1803CFB08 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1803CFCF0 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1803D0C1C (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1803D0CEC (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ?StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x1803D0E50 (-StartActivity@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
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
  volatile signed __int32 **v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rcx
  DWORD CurrentThreadId; // eax
  struct tagRECT v21; // [rsp+30h] [rbp-D0h] BYREF
  char *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v24; // [rsp+50h] [rbp-B0h]
  int v25; // [rsp+60h] [rbp-A0h]
  struct tagRECT v26; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v27[40]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[40]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v7 = 1;
  *((_BYTE *)this + 136) = 1;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"JointResize");
  v27[0] = &JointResizeTelemetry::JointResize::`vftable';
  JointResizeTelemetry::JointResize::StartActivity((JointResizeTelemetry::JointResize *)v27);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v28);
  v28[0] = &JointResizeTelemetry::JointResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)this + 352,
    (__int64)v27);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v28);
  JointResizeTelemetry::JointResize::~JointResize((JointResizeTelemetry::JointResize *)v27);
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
  *(_QWORD *)&v21.left = (char *)this - 88;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21.left);
  v12 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 13);
  v21 = *a3;
  v14 = JointResize::ComputeExtendedViewRect(v13, &v26, v12, &v21);
  v22 = (char *)this - 88;
  v23 = (__int64)this - 88;
  *a3 = *v14;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
  v15 = *a3;
  v25 = a4;
  v24 = v15;
  v16 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3efae7d26e0e657137d3ad3e752f20______lambda_2c3efae7d26e0e657137d3ad3e752f20____(
          (volatile signed __int32 **)&v21,
          (__int64)&v22);
  v17 = *v16;
  *v16 = 0LL;
  v18 = *(volatile signed __int32 **)&v21.left;
  if ( *(_QWORD *)&v21.left )
  {
    *(_QWORD *)&v21.left = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v18);
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 0LL, v17, 0LL);
  if ( v17 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
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
