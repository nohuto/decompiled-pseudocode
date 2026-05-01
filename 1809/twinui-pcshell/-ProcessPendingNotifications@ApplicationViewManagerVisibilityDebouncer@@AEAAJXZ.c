/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18003CE00
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003CC60 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x18012F330 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2F0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180123320 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180123320.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801236A4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x18012E888 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b0.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18012F014 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18012F30C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  struct IObjectArray *v2; // rdi
  ULONGLONG TickCount64; // r14
  __int64 v4; // rbx
  struct IApplicationView *v5; // r15
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  ApplicationViewManagerVisibilityDebouncer **v11; // rcx
  ApplicationViewManagerVisibilityDebouncer *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rcx
  ApplicationViewManagerVisibilityDebouncer *v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  ApplicationViewManagerVisibilityDebouncer *v23; // rcx
  __int64 *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // esi
  __int64 *v29; // rax
  __int64 v30; // rbx
  DWORD CurrentThreadId; // eax
  int v32; // esi
  int v34; // [rsp+20h] [rbp-59h]
  int v35; // [rsp+20h] [rbp-59h]
  ApplicationViewManagerVisibilityDebouncer *v36; // [rsp+38h] [rbp-41h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v37; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-31h]
  __int64 v39; // [rsp+50h] [rbp-29h] BYREF
  ApplicationViewManagerVisibilityDebouncer **v40; // [rsp+58h] [rbp-21h]
  int v41; // [rsp+60h] [rbp-19h]
  __int64 v42; // [rsp+68h] [rbp-11h]
  ApplicationViewManagerVisibilityDebouncer **v43; // [rsp+70h] [rbp-9h]
  struct IApplicationView *v44; // [rsp+78h] [rbp-1h] BYREF
  int v45; // [rsp+80h] [rbp+7h]
  _QWORD v46[9]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v48; // [rsp+E0h] [rbp+67h] BYREF
  struct IObjectArray *v49; // [rsp+E8h] [rbp+6Fh] BYREF
  ApplicationViewManagerVisibilityDebouncer *v50; // [rsp+F0h] [rbp+77h] BYREF

  v49 = 0LL;
  AgileRegistrationList::GetCallbackArray((ApplicationViewManagerVisibilityDebouncer *)((char *)this + 120), &v49);
  v2 = v49;
  while ( *((_QWORD *)this + 10) )
  {
    TickCount64 = GetTickCount64();
    v4 = *((_QWORD *)this + 9);
    v5 = *(struct IApplicationView **)v4;
    v44 = v5;
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *(_DWORD *)(v4 + 8);
    LODWORD(v48) = v6;
    v45 = v6;
    v7 = *(_QWORD *)(v4 + 16);
    v46[0] = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v6 = v48;
    }
    v8 = *(_QWORD *)(v4 + 24);
    v46[1] = v8;
    if ( v6 == 1 )
    {
      if ( TickCount64 < v8 + 50 )
      {
        if ( !*((_QWORD *)this + 22) )
        {
          v28 = v8 - TickCount64;
          v50 = this;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(this);
          v36 = this;
          v37 = this;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef(this);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 176);
          v29 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                             &v48,
                             &v36);
          v30 = *v29;
          *v29 = 0LL;
          if ( v48 )
          {
            v48 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
          }
          CurrentThreadId = GetCurrentThreadId();
          v32 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, (unsigned int)(v28 + 50), v30, (char *)this + 176);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v37);
          if ( v32 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x128,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
              (const char *)(unsigned int)v32,
              v35);
            Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v50);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v46);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
            goto LABEL_62;
          }
          Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v50);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v46);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
        break;
      }
      ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(this, v5);
    }
    v36 = (ApplicationViewManagerVisibilityDebouncer *)v2;
    if ( v2 )
      ((void (__fastcall *)(struct IObjectArray *))v2->lpVtbl->AddRef)(v2);
    LODWORD(v37) = 0;
    v9 = ((__int64 (__fastcall *)(struct IObjectArray *, ApplicationViewManagerVisibilityDebouncer **))v2->lpVtbl->GetCount)(
           v2,
           &v37);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v9,
        v34);
    v10 = 0LL;
    v38 = 0;
    v39 = 0LL;
    v11 = &v36;
    v40 = &v36;
    if ( (_DWORD)v37 )
    {
      while ( 1 )
      {
        v12 = *v11;
        v13 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v10 = v38;
        }
        v14 = (*(__int64 (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 32LL))(
                v12,
                v10,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v39);
        if ( v14 >= 0 )
          break;
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
          (const char *)(unsigned int)v14,
          v34);
        v10 = v38 + 1;
        v38 = v10;
        v11 = v40;
        if ( (unsigned int)v10 >= *((_DWORD *)v40 + 2) )
          goto LABEL_21;
      }
      v11 = v40;
      LODWORD(v10) = v38;
    }
LABEL_21:
    v41 = (int)v37;
    v42 = 0LL;
    v43 = &v36;
    v15 = v48;
LABEL_22:
    while ( (_DWORD)v10 != v41 || v11 != v43 )
    {
      v16 = v39;
      v48 = v39;
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)v16 + 24LL))(
        v16,
        v5,
        v15,
        v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v10 = ++v38;
      v17 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v10 = v38;
      }
      while ( 1 )
      {
        v11 = v40;
        if ( (unsigned int)v10 >= *((_DWORD *)v40 + 2) )
          break;
        v18 = *v40;
        v19 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v10 = v38;
        }
        v20 = (*(__int64 (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *, __int64, GUID *, __int64 *))(*(_QWORD *)v18 + 32LL))(
                v18,
                v10,
                &GUID_727f9e97_76ee_497b_a942_b6371328485c,
                &v39);
        if ( v20 >= 0 )
        {
          v11 = v40;
          LODWORD(v10) = v38;
          goto LABEL_22;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (unsigned int)"internal\\shell\\private\\inc\\objectarrayadapter.h",
          (const char *)(unsigned int)v20,
          v34);
        v10 = ++v38;
      }
    }
    v21 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    if ( *((_QWORD *)this + 10) )
    {
      v24 = (__int64 *)*((_QWORD *)this + 9);
      v25 = v24[2];
      if ( v25 )
      {
        v24[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v26 = *v24;
      if ( *v24 )
      {
        *v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = *((_QWORD *)this + 10);
      if ( v27 != 1 )
      {
        memmove_0(*((void **)this + 9), (const void *)(*((_QWORD *)this + 9) + 32LL), 32 * (v27 - 1));
        v27 = *((_QWORD *)this + 10);
      }
      *((_QWORD *)this + 10) = v27 - 1;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v32 = 0;
LABEL_62:
  if ( v2 )
    ((void (__fastcall *)(struct IObjectArray *))v2->lpVtbl->Release)(v2);
  return (unsigned int)v32;
}
