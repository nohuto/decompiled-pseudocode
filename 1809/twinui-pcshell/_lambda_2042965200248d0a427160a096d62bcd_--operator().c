/*
 * XREFs of _lambda_2042965200248d0a427160a096d62bcd_::operator() @ 0x180212210
 * Callers:
 *     ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1802164C0 (-PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180211B2C (--1RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1802189AC (-StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180220080 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2042965200248d0a427160a096d62bcd_::operator()(__int64 a1)
{
  ViewEventDispatcher *v2; // r13
  char v3; // r15
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int *v6; // rbx
  int v7; // ebx
  unsigned int v8; // r12d
  ViewEventDispatcher *v9; // rdx
  __int64 v10; // rsi
  __int64 *v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  struct IViewWrapperInternal *v17; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-B0h]
  _QWORD v20[3]; // [rsp+60h] [rbp-A8h]
  char v21; // [rsp+78h] [rbp-90h]
  _QWORD v22[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v20[0] = -2LL;
  v19 = *(_QWORD **)(a1 + 8);
  v2 = *(ViewEventDispatcher **)a1;
  *(_QWORD *)&v18 = v2;
  *((_QWORD *)&v18 + 1) = v19;
  *(_OWORD *)&v20[1] = v18;
  v3 = 1;
  v21 = 1;
  v4 = *(_QWORD *)(*((_QWORD *)v2 + 46) + 8LL * *v19);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 672LL))(v4);
  v6 = *(unsigned int **)(a1 + 16);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"RecoverComponentHostRelationship");
  v22[0] = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::StartActivity(
    (ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *)v22,
    v5,
    *v6);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v7 = ViewEventDispatcher::_ViewFromViewInstanceId(*(ViewEventDispatcher **)a1, **(_DWORD **)(a1 + 16), &v17);
  if ( v7 >= 0 )
  {
    *(_QWORD *)&v18 = 0LL;
    DWORD1(v18) = **(_DWORD **)(a1 + 16);
    v8 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v17 + 744LL))(v17);
    if ( v8 )
    {
      v9 = *(ViewEventDispatcher **)a1;
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL * **(_QWORD **)(a1 + 8));
      DWORD2(v18) = 0;
      v11 = (__int64 *)*((_QWORD *)v9 + 66);
      v12 = *v11;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 672LL))(v10);
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD, __int64))(v12 + 48))(
              v11,
              &v18,
              v8,
              v13,
              v10);
      v7 = v14;
      if ( v14 >= 0 )
      {
        ViewEventDispatcher::_PropagateNewRegistration(
          *(ViewEventDispatcher **)a1,
          v17,
          *(struct IViewWrapperInternal **)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL * **(_QWORD **)(a1 + 8)));
        v3 = 0;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v22, 0);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39D,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      }
    }
    else
    {
      v7 = -2147024809;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::~RecoverComponentHostRelationship((ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *)v22);
  if ( v3 )
  {
    v15 = *(_QWORD *)(*((_QWORD *)v2 + 46) + 8LL * *v19);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 872LL))(v15, 0LL);
  }
  return (unsigned int)v7;
}
