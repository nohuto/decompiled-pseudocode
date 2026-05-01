/*
 * XREFs of ?v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x180378A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x180367FC8 (-IsDesktopInputContext@@YA_NXZ.c)
 */

LRESULT __fastcall AltEscHotkeyHandler::v_WndProc(AltEscHotkeyHandler *this, HWND a2, UINT a3, WPARAM a4, LPARAM a5)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 786 )
    return DefWindowProcW(a2, a3, a4, a5);
  if ( IsDesktopInputContext() )
  {
    v9[0] = 0LL;
    v6 = *((_QWORD *)this + 3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_23a47bb4_c26c_4ecf_a5e8_5fbeefdb55d6,
           v9);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9[0] + 32LL))(v9[0]);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  }
  return 0LL;
}
