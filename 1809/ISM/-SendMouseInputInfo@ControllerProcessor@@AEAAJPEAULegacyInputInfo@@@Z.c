/*
 * XREFs of ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180034F24
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180034B5C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x180034DF4 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180035DBC (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180035EE0 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x180036138 (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::SendMouseInputInfo(ControllerProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rdi
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11[1] = -2LL;
  if ( *((_BYTE *)this + 6696) )
  {
    v11[0] = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 72LL))(v4, v11);
    v6 = retaddr;
    if ( v5 < 0 )
    {
LABEL_12:
      wil::details::in1diag3::FailFast_Hr(
        v6,
        (void *)0x470,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x1800350A7LL);
    }
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 836) + 40LL))(*((_QWORD *)this + 836), v12);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v11[0] + 32LL))(v11[0], v12);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x473,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_10;
    }
    *((_BYTE *)this + 6696) = 0;
    v8 = v11[0];
    if ( v11[0] )
    {
      v11[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( !*((_BYTE *)this + 5680) )
  {
LABEL_10:
    v9 = -2147418113;
    goto LABEL_11;
  }
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 1174);
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct LegacyInputInfo *))(**((_QWORD **)this + 586) + 24LL))(
         *((_QWORD *)this + 586),
         a2);
  if ( v9 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x478,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_12;
  }
  return 0LL;
}
