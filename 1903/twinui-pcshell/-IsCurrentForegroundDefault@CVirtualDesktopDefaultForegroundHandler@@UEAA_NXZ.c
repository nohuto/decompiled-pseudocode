/*
 * XREFs of ?IsCurrentForegroundDefault@CVirtualDesktopDefaultForegroundHandler@@UEAA_NXZ @ 0x1803EA0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVirtualDesktopDefaultForegroundHandler::IsCurrentForegroundDefault(
        CVirtualDesktopDefaultForegroundHandler *this)
{
  HWND ForegroundWindow; // rax

  ForegroundWindow = GetForegroundWindow();
  return GetPropW(ForegroundWindow, L"DesktopWindow") != 0LL;
}
