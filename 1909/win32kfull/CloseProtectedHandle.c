/*
 * XREFs of CloseProtectedHandle @ 0x1C000D284
 * Callers:
 *     _CloseDesktop @ 0x1C000CE08 (_CloseDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000D1C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000D2E0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserOpenInputDesktop @ 0x1C007CBF0 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C007D4E8 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C007D690 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01EADE0 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EB03C (xxxResolveDesktopForWOW.c)
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
