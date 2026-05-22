/*
 * XREFs of ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180097A08
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180097370 (--$_Callback_once@V-$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x18001F9B0 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18001FB40 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18001FD14 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18007C348 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800977EC (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x180097B30 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800980B8 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUevent_watcher_state@23@@Z @ 0x1800984F0 (-reset@-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHeadUpdateListener::Initialize(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rbx
  void *v2; // rdx
  wil::details::event_watcher_state *v3; // rcx
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  RTL_SRWLOCK *v5; // rax
  char v6; // [rsp+28h] [rbp-59h]
  wil::details::event_watcher_state *v7[3]; // [rsp+30h] [rbp-51h] BYREF
  void **v8; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+50h] [rbp-31h] BYREF
  char v10; // [rsp+58h] [rbp-29h]
  MPCHeadUpdateListener *v11; // [rsp+60h] [rbp-21h]
  void ***v12; // [rsp+80h] [rbp-1h]
  __int64 (__fastcall ***v13)(); // [rsp+B8h] [rbp+37h]

  v7[1] = (wil::details::event_watcher_state *)-2LL;
  v1 = MPCHeadUpdateListener::s_instance;
  v9 = off_1801702E0;
  v13 = &v9;
  v7[0] = 0LL;
  wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
    v7,
    &v8);
  if ( (wil::details::event_watcher_state **)((char *)v1 + 72) == v7 )
  {
    v3 = v7[0];
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::reset(
      (char *)v1 + 72,
      v7[0]);
    v3 = 0LL;
  }
  if ( v3 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v3, v2);
  wistd::function<void (void)>::~function<void (void)>((__int64)&v8);
  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  v8 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,void,bool>::`vftable';
  v9 = (__int64 (__fastcall **)())MPCHeadUpdateListener::On3DCompositorRunningChanged;
  v10 = v6;
  v11 = v1;
  v12 = &v8;
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(InstanceOffInputThread, (__int64)&v8, (unsigned int *)v1 + 49);
  v5 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v5) )
    MPCHeadUpdateListener::On3DCompositorRunningChanged(v1, 1);
}
