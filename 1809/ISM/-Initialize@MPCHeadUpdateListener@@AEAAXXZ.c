/*
 * XREFs of ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x18005AC54
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18005B9D0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002698 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004D78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A9E4 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18003AFA0 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003B008 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18005AAC8 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x18005B490 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18005B6F8 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHeadUpdateListener::Initialize(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // r14
  void *v2; // rbx
  wil::details *v3; // rcx
  HANDLE Event; // rdi
  int LastErrorFailHr; // eax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::event_watcher_state **v8; // rdi
  wil::details::event_watcher_state *v9; // rsi
  DWORD LastError; // ebx
  __int64 v11; // rdx
  wil::details::event_watcher_state *v12; // rcx
  void ***v13; // rdx
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  RTL_SRWLOCK *v15; // rax
  wil::details::event_watcher_state *v16; // [rsp+28h] [rbp-59h] BYREF
  void *v17; // [rsp+30h] [rbp-51h] BYREF
  __int128 v18; // [rsp+38h] [rbp-49h]
  MPCHeadUpdateListener *v19; // [rsp+48h] [rbp-39h]
  __int64 v20; // [rsp+50h] [rbp-31h]
  void **v21; // [rsp+58h] [rbp-29h] BYREF
  __int128 v22; // [rsp+60h] [rbp-21h]
  MPCHeadUpdateListener *v23; // [rsp+70h] [rbp-11h]
  void ***v24; // [rsp+90h] [rbp+Fh]
  void ***v25; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v20 = -2LL;
  v1 = MPCHeadUpdateListener::s_instance;
  v21 = (void **)off_18013BC58;
  v25 = &v21;
  v16 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &v17,
      Event);
    LastErrorFailHr = 0;
    v2 = v17;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3);
  }
  if ( LastErrorFailHr < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)LastErrorFailHr);
    JUMPOUT(0x18005AE36LL);
  }
  v17 = 0LL;
  v6 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create_take_hevent_ownership(
         &v16,
         v2,
         &v21);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = (wil::details::event_watcher_state **)((char *)v1 + 72);
  if ( (wil::details::event_watcher_state **)((char *)v1 + 72) == &v16 )
  {
    v12 = v16;
  }
  else
  {
    v9 = *v8;
    if ( *v8 )
    {
      LastError = GetLastError();
      wil::details::event_watcher_state::`scalar deleting destructor'(v9, v11);
      SetLastError(LastError);
    }
    *v8 = v16;
    v12 = 0LL;
  }
  if ( v12 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v12, v7);
  if ( v25 )
  {
    v13 = &v21;
    LOBYTE(v13) = v25 != &v21;
    ((void (__fastcall *)(void ***, void ***))(*v25)[3])(v25, v13);
  }
  *(_QWORD *)&v18 = MPCHeadUpdateListener::On3DCompositorRunningChanged;
  v19 = v1;
  v21 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,void,bool>::`vftable';
  v22 = v18;
  v23 = v1;
  v24 = &v21;
  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(
    InstanceOffInputThread,
    (__int64)&v21,
    (unsigned int *)v1 + 49);
  v15 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v15) )
    MPCHeadUpdateListener::On3DCompositorRunningChanged(v1, 1);
}
