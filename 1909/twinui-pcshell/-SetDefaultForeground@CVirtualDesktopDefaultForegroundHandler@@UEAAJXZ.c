/*
 * XREFs of ?SetDefaultForeground@CVirtualDesktopDefaultForegroundHandler@@UEAAJXZ @ 0x1804098C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 */

HWND __fastcall CVirtualDesktopDefaultForegroundHandler::SetDefaultForeground(
        CVirtualDesktopDefaultForegroundHandler *this)
{
  HWND result; // rax
  unsigned int v2; // ebx

  result = GetShellWindow();
  v2 = 0;
  if ( result )
  {
    if ( !SetForegroundWindow(result) )
      return (HWND)(unsigned int)ResultFromKnownLastError();
    return (HWND)v2;
  }
  return result;
}
