/*
 * XREFs of CloseProtectedHandle @ 0x1C000E77C
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000E570 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C000E67C (_CloseDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E7C0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserOpenInputDesktop @ 0x1C00B7B00 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C00B84B4 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00B8640 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01B30DC (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01B32EC (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL, 0LL);
  return ObCloseHandle(Handle, a2);
}
