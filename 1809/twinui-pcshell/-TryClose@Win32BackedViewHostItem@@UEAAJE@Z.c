/*
 * XREFs of ?TryClose@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801C03D0
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801C1220 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::TryClose(HWND *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( PostMessageW(this[14], 0x112u, 0xF060uLL, 0LL) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xFB,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v1);
}
