/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400013D0
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1400013A0 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001220 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140001800 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x140004EC0 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 */

__int64 __fastcall CDwmAppHost::NotifyWndProc(CDwmAppHost *this, HWND a2, void *a3, WPARAM a4, LPARAM a5)
{
  __int64 result; // rax
  CDwmAppHost *v6; // rcx

  if ( (unsigned int)a3 >= 0x1B && (unsigned int)a3 < 0x31A )
    return DefWindowProcW(a2, (UINT)a3, a4, a5);
  if ( (unsigned int)a3 > 0x1A )
  {
    if ( (_DWORD)a3 == 794 )
    {
      CDwmAppHost::LpcNotifySettingsChange(0LL, 4u, a3);
      return 0LL;
    }
    v6 = (CDwmAppHost *)(unsigned int)((_DWORD)a3 - 1026);
    if ( (_DWORD)a3 == 1026 )
    {
      CDwmAppHost::OnReportEvent(v6, a4, 0LL, 0);
      return 0LL;
    }
    if ( (_DWORD)a3 == 1027 )
    {
      CDwmAppHost::OnReportEvent(v6, a4, a5, 1);
      return 0LL;
    }
    return DefWindowProcW(a2, (UINT)a3, a4, a5);
  }
  switch ( (_DWORD)a3 )
  {
    case 0x1A:
      CDwmAppHost::OnSettingChange(this, a4, a5);
      return 0LL;
    case 2:
      PostQuitMessage(0);
      return 0LL;
    case 0x10:
      DestroyWindow(hWnd);
      result = 0LL;
      hWnd = 0LL;
      break;
    case 0x15:
      CDwmAppHost::LpcNotifySettingsChange(this, 8u, a3);
      return 0LL;
    default:
      return DefWindowProcW(a2, (UINT)a3, a4, a5);
  }
  return result;
}
