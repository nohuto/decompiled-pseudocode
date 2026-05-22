/*
 * XREFs of ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180053CB8
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180053A30 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x18000C52C (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall InputStateManager::NotifyForegroundChange(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  struct IInputTarget *v4; // r9
  __int64 v6; // rsi
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  struct IViewHierarchy *ViewHierarchy; // rax
  int ServerWindowForViewId; // eax
  struct Navigation::Server::IServerWindow *v17; // rbx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  struct Navigation::Server::IServerWindow *v23; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v28; // [rsp+98h] [rbp+48h] BYREF

  v24[1] = -2LL;
  v4 = a2;
  v28 = 0;
  v27 = 0;
  v6 = 0LL;
  *((_DWORD *)this + 47) = -1;
  if ( a2 )
  {
    v26 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v26);
    v8 = retaddr;
    if ( v7 < 0 )
    {
      v9 = 567LL;
      goto LABEL_4;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 32LL))(v26, &v28);
    v8 = retaddr;
    if ( v7 < 0 )
    {
      v9 = 568LL;
LABEL_4:
      wil::details::in1diag3::_Log_Hr(
        v8,
        (void *)v9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v7);
      v10 = v26;
      if ( v26 )
      {
        v26 = 0LL;
LABEL_30:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_31;
      }
      goto LABEL_31;
    }
    v11 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( !a3 )
    goto LABEL_31;
  LODWORD(v26) = 0;
  v22 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *, struct IInputTarget *))a3)(
          a3,
          &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
          &v22,
          v4);
  v13 = retaddr;
  if ( v12 < 0 )
  {
    v14 = 580LL;
LABEL_13:
    wil::details::in1diag3::_Log_Hr(
      v13,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_28;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 32LL))(v22, &v27);
  v13 = retaddr;
  if ( v12 < 0 )
  {
    v14 = 582LL;
    goto LABEL_13;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v26);
  v13 = retaddr;
  if ( v12 < 0 )
  {
    v14 = 583LL;
    goto LABEL_13;
  }
  if ( (_DWORD)v26 )
  {
    v23 = 0LL;
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(ViewHierarchy, v26, &v23);
    v17 = v23;
    if ( ServerWindowForViewId >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, _QWORD *))(*(_QWORD *)v23 + 96LL))(
              v23,
              v24);
      v19 = retaddr;
      if ( v18 < 0 )
      {
        v20 = 602LL;
LABEL_22:
        wil::details::in1diag3::_Log_Hr(
          v19,
          (void *)v20,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
          (const char *)(unsigned int)v18);
LABEL_27:
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_28;
      }
      v6 = v24[0];
      v18 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, int *))(*(_QWORD *)v17 + 120LL))(
              v17,
              &v21);
      v19 = retaddr;
      if ( v18 < 0 )
      {
        v20 = 606LL;
        goto LABEL_22;
      }
      *((_DWORD *)this + 47) = v21;
    }
    if ( !v17 )
      goto LABEL_28;
    goto LABEL_27;
  }
LABEL_28:
  v10 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    goto LABEL_30;
  }
LABEL_31:
  CompositorNotifyForegroundChanged(v28, v27, v6);
}
