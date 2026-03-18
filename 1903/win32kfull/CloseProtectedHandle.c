/*
 * XREFs of CloseProtectedHandle @ 0x1C000DE14
 * Callers:
 *     _CloseDesktop @ 0x1C000D998 (_CloseDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000DD50 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E920 (xxxSetCsrssThreadDesktop.c)
 *     NtUserOpenInputDesktop @ 0x1C00DCF00 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C00DD7F8 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00DD9A0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01EAF60 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EB1BC (xxxResolveDesktopForWOW.c)
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
