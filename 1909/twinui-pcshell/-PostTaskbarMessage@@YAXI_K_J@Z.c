/*
 * XREFs of ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x18005FF74
 * Callers:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x18005FF50 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PostTaskbarMessage(UINT a1, WPARAM a2, LPARAM a3)
{
  HWND WindowW; // rax

  WindowW = (HWND)qword_1805C1E10;
  if ( !qword_1805C1E10 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    qword_1805C1E10 = (__int64)WindowW;
  }
  PostMessageW(WindowW, a1, a2, a3);
}
