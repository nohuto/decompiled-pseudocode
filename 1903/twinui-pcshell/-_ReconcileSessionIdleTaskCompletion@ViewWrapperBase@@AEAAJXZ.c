/*
 * XREFs of ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18029BBA4
 * Callers:
 *     ?AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x180296D40 (-AddSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180298EF8 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ @ 0x1802994A0 (-RemoveSessionIdleTaskCompletion@ViewWrapperBase@@UEAAXXZ.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18029B940 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18029BAC0 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000C348 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392_____lambda_946b47fcad2e62ff0f8d349904161392___ @ 0x180293FA4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f___::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f_____lambda_9f83fe393cfdaab87baa37a27426f58f___ @ 0x18029401C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f___--CTaskW.c)
 *     ??$?0VViewWrapperBase@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase@@@Z @ 0x180294098 (--$-0VViewWrapperBase@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAA@PEAVViewWrapperBase.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180295D38 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_180295D38.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180296360 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029638C (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18029A7AC (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18029A914 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 */

__int64 __fastcall ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(ViewWrapperBase *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  void **v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rbx
  void *v9; // rax
  int v11; // edx
  unsigned int v12; // esi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-C8h] BYREF
  ViewWrapperBase *v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  void **v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h]
  _QWORD v21[40]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v2 = (*(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL))(this);
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) != 0 && *((_QWORD *)this + 34) && (unsigned int)(v2 - 3) <= 2 )
  {
    if ( (v3 & 2) == 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v22,
        (__int64)"AddSessionIdleTaskCompletion");
      v4 = *((_DWORD *)this + 37);
      v22[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::StartActivity(
        (ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22,
        v4);
      if ( !GetWindowThreadProcessId(*((HWND *)this + 34), dwProcessId) )
      {
        v5 = -2147023496;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C5,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)0x80070578LL);
LABEL_13:
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22);
        return (unsigned int)v5;
      }
      v6 = (void **)*((_QWORD *)this + 34);
      Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(&v15, (__int64)this);
      v18 = v15;
      v17 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
      LODWORD(v20) = dwProcessId[0];
      v19 = v6;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v21,
        (__int64)v22);
      v21[0] = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
      v7 = *((_DWORD *)this + 36);
      v8 = 0LL;
      v9 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9 )
        v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f___::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f_____lambda_9f83fe393cfdaab87baa37a27426f58f___(
               (__int64)v9,
               (__int64)&v17);
      v5 = SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v8, 0LL);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2DB,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v5);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        goto LABEL_13;
      }
      *((_DWORD *)this + 24) |= 2u;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)v22);
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v22,
      (__int64)"RemoveSessionIdleTaskCompletion");
    v11 = *((_DWORD *)this + 37);
    v22[0] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
      (ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22,
      v11);
    Microsoft::WRL::ComPtr<IViewWrapperInternal>::ComPtr<IViewWrapperInternal>(&v15, (__int64)this);
    v18 = v15;
    v17 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v19,
      (__int64)v22);
    v12 = *((_DWORD *)this + 36);
    v19 = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
    v13 = 0LL;
    v14 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
      v13 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392_____lambda_946b47fcad2e62ff0f8d349904161392___(
              v14,
              &v17);
    v5 = SHTaskPoolQueueTask(3LL, 2LL, v12, 0LL, v13, 0LL);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F2,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22);
      return (unsigned int)v5;
    }
    *((_DWORD *)this + 24) &= ~2u;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)v22);
  }
  return 0LL;
}
