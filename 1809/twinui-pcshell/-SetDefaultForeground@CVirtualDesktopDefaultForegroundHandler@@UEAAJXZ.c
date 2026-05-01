/*
 * XREFs of ?SetDefaultForeground@CVirtualDesktopDefaultForegroundHandler@@UEAAJXZ @ 0x180384280
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopDefaultForegroundHandler::SetDefaultForeground(
        CVirtualDesktopDefaultForegroundHandler *this)
{
  HWND ShellWindow; // rax
  BOOL v2; // eax
  unsigned int v3; // ecx

  ShellWindow = GetShellWindow();
  v2 = SetForegroundWindow(ShellWindow);
  v3 = 0;
  if ( !v2 )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
