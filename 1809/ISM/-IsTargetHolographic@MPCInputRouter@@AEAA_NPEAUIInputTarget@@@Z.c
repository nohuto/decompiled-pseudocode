/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x180007624
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180006508 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x180009A38 (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18000C778 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall MPCInputRouter::IsTargetHolographic(MPCInputRouter *this, struct IInputTarget *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned int ViewIdFromWindowId; // ebx
  int v7; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  bool v9; // di
  struct IViewHierarchy *v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  __int64 v17; // rcx
  unsigned int v19; // [rsp+38h] [rbp-9h] BYREF
  __int64 v20; // [rsp+40h] [rbp-1h] BYREF
  __int64 v21; // [rsp+48h] [rbp+7h] BYREF
  unsigned __int64 v22[2]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v23[32]; // [rsp+60h] [rbp+1Fh] BYREF
  int v24; // [rsp+80h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v22[1] = -2LL;
  v20 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v20);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x244,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v19 = 0;
  v22[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v20 + 64LL))(v20, v22);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 56LL))(v20, &v19);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x1800078F0LL);
  }
  ViewIdFromWindowId = v19;
  if ( !v19 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 48LL))(v20, &v19);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x252,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    ViewIdFromWindowId = v19;
    if ( !v19 )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v22[0]);
      v19 = ViewIdFromWindowId;
    }
  }
  v9 = 0;
  if ( ViewIdFromWindowId )
  {
    memset_0(v23, 0, 0x2CuLL);
    if ( ((1LL << gdwDeviceFamily) & 0x400) != 0 )
      goto LABEL_20;
    v10 = ISMStatics::GetViewHierarchy();
    (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _QWORD))(*(_QWORD *)v10 + 32LL))(
      v10,
      &v21,
      ViewIdFromWindowId);
    if ( v21 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 168LL))(v21, v23);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v14 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
LABEL_18:
        if ( v24 != 1 )
          goto LABEL_19;
LABEL_20:
        v9 = 1;
        goto LABEL_24;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v11);
      v13 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    else
    {
      v12 = -2147467259;
    }
    if ( v12 < 0 )
    {
LABEL_19:
      v9 = 0;
      goto LABEL_24;
    }
    goto LABEL_18;
  }
  if ( v22[0] && ((1LL << gdwDeviceFamily) & 0x400) == 0 )
    v9 = GetPropW((HWND)SLODWORD(v22[0]), L"Windows.Graphics.Holographic.HolographicSpace") != 0LL;
LABEL_24:
  v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v15 && *v15 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_IsTargetHolographic_(v16, a2, v19, v22[0], v9);
  }
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v9;
}
