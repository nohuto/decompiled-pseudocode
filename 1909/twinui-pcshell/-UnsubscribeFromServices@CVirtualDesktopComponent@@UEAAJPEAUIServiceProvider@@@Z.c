/*
 * XREFs of ?UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180404A80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopComponent::UnsubscribeFromServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v26; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v27; // [rsp+70h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), &v27);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 152LL))(*((_QWORD *)this + 15), 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x145,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x147,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17), 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v7);
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14B,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v9);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 24LL))(*((_QWORD *)this + 22));
  v10 = *((_QWORD *)this + 20);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, 0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x151,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v11);
  }
  if ( *((_DWORD *)this + 52) )
  {
    v26 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
            a2,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v26);
    v14 = retaddr;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 32LL))(v26, *((unsigned int *)this + 52));
      v14 = retaddr;
      if ( v13 >= 0 )
      {
LABEL_21:
        *((_DWORD *)this + 52) = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        goto LABEL_22;
      }
      v15 = 345LL;
    }
    else
    {
      v15 = 343LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v15,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_21;
  }
LABEL_22:
  if ( !*((_DWORD *)this + 53) )
    goto LABEL_29;
  v26 = 0LL;
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v16)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &v26);
  v18 = retaddr;
  if ( v17 < 0 )
  {
    v19 = 353LL;
LABEL_27:
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v19,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_28;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 80LL))(v26, *((unsigned int *)this + 53));
  v18 = retaddr;
  if ( v17 < 0 )
  {
    v19 = 355LL;
    goto LABEL_27;
  }
LABEL_28:
  *((_DWORD *)this + 53) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
LABEL_29:
  if ( *((_DWORD *)this + 54) )
  {
    v26 = 0LL;
    v20 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v20)(
            a2,
            &GUID_5090de35_ed23_43be_9714_586c5041026a,
            &GUID_5090de35_ed23_43be_9714_586c5041026a,
            &v26);
    v22 = retaddr;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 32LL))(v26, *((unsigned int *)this + 54));
      v22 = retaddr;
      if ( v21 >= 0 )
      {
LABEL_35:
        *((_DWORD *)this + 54) = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        goto LABEL_36;
      }
      v23 = 365LL;
    }
    else
    {
      v23 = 363LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v22,
      (void *)v23,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_35;
  }
LABEL_36:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v27);
  return 0LL;
}
