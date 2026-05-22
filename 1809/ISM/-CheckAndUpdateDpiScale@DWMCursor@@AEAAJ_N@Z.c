/*
 * XREFs of ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x180108810
 * Callers:
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z @ 0x1801073A0 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z.c)
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x180107DF8 (-Initialize@DWMCursor@@QEAAJXZ.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801082E0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1801067E4 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::CheckAndUpdateDpiScale(POINT *this, char a2)
{
  int x; // edi
  POINT v4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  DWMCursorBroker *v9; // rsi
  POINT v10; // rax
  __int128 v11; // xmm0
  int v12; // eax
  int v13; // ebx
  POINT pt; // [rsp+20h] [rbp-78h] BYREF
  char v16[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v17; // [rsp+38h] [rbp-60h]
  int v18; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  x = this[12].x;
  v4 = this[4];
  if ( v4 )
  {
    x = 100;
    v6 = *(_QWORD *)(*(_QWORD *)&v4 + 392LL);
    v7 = *(_QWORD *)(*(_QWORD *)&v4 + 400LL);
    pt = this[11];
    while ( v6 != v7 )
    {
      if ( PtInRect((const RECT *)v6, pt) )
      {
        v8 = MulDiv(*(unsigned __int16 *)(v6 + 20), 100, 96);
        if ( !v8 )
          v8 = 100;
        x = v8;
        break;
      }
      v6 += 84LL;
    }
  }
  if ( this[12].x != x )
  {
    this[12].x = x;
    if ( a2 )
    {
      v9 = (DWMCursorBroker *)this[4];
      if ( !v9 )
        goto LABEL_18;
      v10 = *this;
      v16[0] = 10;
      v11 = *(_OWORD *)(*(__int64 (__fastcall **)(POINT *, POINT *))(*(_QWORD *)&v10 + 40LL))(this, &pt);
      v18 = x;
      v17 = v11;
      v12 = DWMCursorBroker::SendAndVerifyEndpoints(v9, (struct CursorMessage *)v16);
      v13 = v12;
      if ( v12 >= 0 )
        v13 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x191,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v12);
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v13);
      else
LABEL_18:
        v13 = 0;
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x14D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v13);
    }
  }
  return 0LL;
}
