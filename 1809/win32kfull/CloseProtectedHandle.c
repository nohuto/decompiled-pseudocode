/*
 * XREFs of CloseProtectedHandle @ 0x1C00BB984
 * Callers:
 *     _CloseDesktop @ 0x1C00BB508 (_CloseDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BB8C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BC5C0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserOpenInputDesktop @ 0x1C00EE570 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C00EEE38 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00EF100 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01D5860 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01D5AB4 (xxxResolveDesktopForWOW.c)
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
