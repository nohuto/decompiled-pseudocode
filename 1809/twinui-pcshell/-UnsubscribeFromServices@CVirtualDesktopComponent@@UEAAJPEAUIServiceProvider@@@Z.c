/*
 * XREFs of ?UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18037F450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v23; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v24; // [rsp+70h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), &v24);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 15) + 152LL))(*((_QWORD *)this + 15), 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      325LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      326LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      327LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17), 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      328LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v7);
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        331LL,
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
        337LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v11);
  }
  if ( *((_DWORD *)this + 52) )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
            &v23);
    v13 = retaddr;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 32LL))(v23, *((unsigned int *)this + 52));
      v13 = retaddr;
      if ( v12 >= 0 )
      {
LABEL_21:
        *((_DWORD *)this + 52) = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        goto LABEL_22;
      }
      v14 = 345LL;
    }
    else
    {
      v14 = 343LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v13,
      v14,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_21;
  }
LABEL_22:
  if ( !*((_DWORD *)this + 53) )
    goto LABEL_29;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &v23);
  v16 = retaddr;
  if ( v15 < 0 )
  {
    v17 = 353LL;
LABEL_27:
    wil::details::in1diag3::_Log_Hr(
      v16,
      v17,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_28;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, *((unsigned int *)this + 53));
  v16 = retaddr;
  if ( v15 < 0 )
  {
    v17 = 355LL;
    goto LABEL_27;
  }
LABEL_28:
  *((_DWORD *)this + 53) = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_29:
  if ( *((_DWORD *)this + 54) )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_5090de35_ed23_43be_9714_586c5041026a,
            &GUID_5090de35_ed23_43be_9714_586c5041026a,
            &v23);
    v19 = retaddr;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 32LL))(v23, *((unsigned int *)this + 54));
      v19 = retaddr;
      if ( v18 >= 0 )
      {
LABEL_35:
        *((_DWORD *)this + 54) = 0;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        goto LABEL_36;
      }
      v20 = 365LL;
    }
    else
    {
      v20 = 363LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v19,
      v20,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_35;
  }
LABEL_36:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v24);
  return 0LL;
}
