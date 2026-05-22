/*
 * XREFs of ?OnDpiScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z @ 0x180143C0C
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071E0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x180010948 (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x180143E1C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall DWMCursorBroker::OnDpiScaleChanged(DWMCursorBroker *this, struct DWMCursor *a2, int a3)
{
  __int64 v3; // rax
  __int128 v6; // xmm0
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-78h] BYREF
  char v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+38h] [rbp-60h]
  int v13; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = *(_QWORD *)a2;
  v11[0] = 9;
  v6 = *(_OWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, _BYTE *))(v3 + 40))(a2, v10);
  v13 = a3;
  v12 = v6;
  v7 = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v11);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
