/*
 * XREFs of ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x180010948
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800103E4 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180027E60 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDpiScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z @ 0x180143C0C (-OnDpiScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z.c)
 *     ?UpdateDpiScale@Cursor@InputTraceLogging@@SAX_KH@Z @ 0x180144D38 (-UpdateDpiScale@Cursor@InputTraceLogging@@SAX_KH@Z.c)
 */

__int64 __fastcall DWMCursor::CheckAndUpdateDpiScale(DWMCursor *this, char a2)
{
  int v2; // edi
  __int64 v4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v10; // rcx
  DWMCursorBroker *v11; // rcx
  int v12; // eax
  int v13; // ebx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  POINT pt; // [rsp+40h] [rbp+8h]

  v2 = *((_DWORD *)this + 24);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v2 = 100;
    v6 = *(_QWORD *)(v4 + 480);
    v7 = *(_QWORD *)(v4 + 488);
    pt = (POINT)*((_QWORD *)this + 11);
    while ( v6 != v7 )
    {
      if ( PtInRect((const RECT *)v6, pt) )
      {
        v8 = MulDiv(*(unsigned __int16 *)(v6 + 20), 100, 96);
        if ( !v8 )
          v8 = 100;
        v2 = v8;
        break;
      }
      v6 += 84LL;
    }
  }
  if ( *((_DWORD *)this + 24) != v2 )
  {
    v10 = *((unsigned int *)this + 10);
    *((_DWORD *)this + 24) = v2;
    InputTraceLogging::Cursor::UpdateDpiScale(v10, v2);
    if ( a2 )
    {
      v11 = (DWMCursorBroker *)*((_QWORD *)this + 4);
      if ( v11 && (v12 = DWMCursorBroker::OnDpiScaleChanged(v11, this, *((_DWORD *)this + 24)), v13 = v12, v12 < 0) )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v12,
          v14);
      else
        v13 = 0;
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v13,
          v14);
    }
  }
  return 0LL;
}
