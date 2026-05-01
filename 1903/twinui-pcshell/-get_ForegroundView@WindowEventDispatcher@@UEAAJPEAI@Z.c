/*
 * XREFs of ?get_ForegroundView@WindowEventDispatcher@@UEAAJPEAI@Z @ 0x1802829C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::get_ForegroundView(WindowEventDispatcher *this, unsigned int *a2)
{
  HWND ForegroundWindow; // rax

  ForegroundWindow = GetForegroundWindow();
  *a2 = (unsigned int)GetPropW(ForegroundWindow, L"Microsoft.Windows.WindowFactory.ViewId");
  return 0LL;
}
