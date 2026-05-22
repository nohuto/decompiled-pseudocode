/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18008BBB0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180006460 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180006508 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x18000C52C (-GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Naviga.c)
 *     ?OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z @ 0x18002A300 (-OnTargetWithFocusChanged@InputDeliveryServer@@QEAAXPEAUIInputTarget@@@Z.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x1800869C0 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  int ServerWindowForViewId; // r15d
  struct Navigation::Server::IServerWindow *v5; // rbx
  struct IInputTarget *v6; // rcx
  char v7; // cl
  __int64 v8; // r13
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  struct Navigation::Server::IServerWindow *v13; // rdi
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // edi
  unsigned int v28; // [rsp+28h] [rbp-69h] BYREF
  __int64 v29; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-59h] BYREF
  __int64 v31; // [rsp+40h] [rbp-51h] BYREF
  struct Navigation::Server::IServerWindow *v32[3]; // [rsp+48h] [rbp-49h] BYREF
  _OWORD v33[2]; // [rsp+60h] [rbp-31h] BYREF
  __int64 v34; // [rsp+80h] [rbp-11h]
  _BYTE v35[40]; // [rsp+88h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v32[1] = (struct Navigation::Server::IServerWindow *)-2LL;
  ServerWindowForViewId = 0;
  v5 = (struct Navigation::Server::IServerWindow *)*((_QWORD *)this + 40);
  v32[2] = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (struct IInputTarget *)*((_QWORD *)this + 40);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IInputTarget *)*((_QWORD *)this + 40);
    }
    *((_QWORD *)this + 40) = a2;
    if ( v6 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x1DDA1) != 0 )
  {
    v8 = 0LL;
    memset_0(v33, 0, 0x28uLL);
    if ( !a2 )
    {
LABEL_25:
      MITSetForegroundRoutingInfo(v8, v33);
      v7 = gdwDeviceFamily;
      goto LABEL_26;
    }
    v31 = 0LL;
    ServerWindowForViewId = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
                              a2,
                              &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
                              &v31);
    if ( ServerWindowForViewId < 0 )
    {
      ServerWindowForViewId = 0;
LABEL_23:
      v18 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_25;
    }
    v29 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v29);
    v10 = retaddr;
    if ( v9 < 0 )
      goto LABEL_42;
    v28 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 48LL))(v29, &v28);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x724,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v11);
    }
    else
    {
      if ( !v28 )
      {
LABEL_21:
        v17 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        goto LABEL_23;
      }
      v32[0] = 0LL;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(ViewHierarchy, v28, v32);
      v13 = v32[0];
      if ( ServerWindowForViewId < 0 )
      {
        ServerWindowForViewId = 0;
        goto LABEL_19;
      }
      v14 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v32[0]
                                                                                                  + 24LL))(
              v32[0],
              &v30);
      v15 = retaddr;
      if ( v14 >= 0 )
      {
        v8 = (int)v30;
        v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 72LL))(v31, v35);
        v33[0] = *(_OWORD *)v16;
        v33[1] = *(_OWORD *)(v16 + 16);
        v34 = *(_QWORD *)(v16 + 32);
LABEL_19:
        if ( v13 )
          (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v13 + 16LL))(v13);
        goto LABEL_21;
      }
    }
    wil::details::in1diag3::FailFast_Hr(
      v15,
      (void *)0x739,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_45;
  }
LABEL_26:
  if ( ((1LL << v7) & 0xA) != 0 )
  {
    v30 = 0;
    v28 = 0;
    if ( !a2 )
    {
LABEL_33:
      MITSetInputDelegationMode(v30, v28);
      goto LABEL_34;
    }
    v29 = 0LL;
    v19 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
            a2,
            &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
            &v29);
    v20 = retaddr;
    if ( v19 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 72LL))(v29, &v30);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x751,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v21);
        JUMPOUT(0x18008BFA9LL);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 80LL))(v29, &v28);
      if ( v22 >= 0 )
      {
        v23 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        goto LABEL_33;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x752,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v22);
LABEL_42:
      wil::details::in1diag3::FailFast_Hr(
        v10,
        (void *)0x721,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
LABEL_45:
    wil::details::in1diag3::FailFast_Hr(
      v20,
      (void *)0x750,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
LABEL_34:
  InputETW::InputRouter::OnFocusChanged(a2);
  v24 = *((_QWORD *)this + 41);
  if ( v24
    && (v25 = (*(__int64 (__fastcall **)(__int64, struct Navigation::Server::IServerWindow *, struct IInputTarget *))(*(_QWORD *)v24 + 24LL))(
                v24,
                v5,
                a2),
        v26 = v25,
        v25 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v25);
  }
  else
  {
    InputDeliveryServer::OnTargetWithFocusChanged(*((InputDeliveryServer **)this + 49), a2);
    v26 = ServerWindowForViewId;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v5 + 16LL))(v5);
  return v26;
}
