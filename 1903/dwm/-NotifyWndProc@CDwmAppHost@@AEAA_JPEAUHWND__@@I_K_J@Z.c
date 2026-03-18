/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001410
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1400013E0 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001260 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140001920 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140002C50 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x14000579C (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140008088 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 */

LRESULT __fastcall CDwmAppHost::NotifyWndProc(CDwmAppHost *this, HWND a2, void *a3, unsigned __int64 a4, LPARAM lParam)
{
  __int64 v5; // rbx

  v5 = 0LL;
  if ( (unsigned int)((_DWORD)a3 - 27) > 0x2F6 )
  {
    if ( (unsigned int)a3 > 0x312 )
    {
      switch ( (_DWORD)a3 )
      {
        case 0x31A:
          CDwmAppHost::LpcNotifySettingsChange(this, 4u, a3);
          return 0LL;
        case 0x402:
          CDwmAppHost::OnReportEvent(this, a4, 0LL, 0);
          return 0LL;
        case 0x403:
          CDwmAppHost::OnReportEvent(this, a4, lParam, 1);
          return 0LL;
      }
    }
    else
    {
      switch ( (_DWORD)a3 )
      {
        case 0x312:
          if ( !a4 )
          {
            Beep(0x1EEu, 0xC8u);
            BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(0LL, 1LL);
            return 0LL;
          }
          return v5;
        case 2:
          PostQuitMessage(0);
          return 0LL;
        case 0x10:
          CDwmAppHost::OnClose(this);
          return 0LL;
        case 0x15:
          CDwmAppHost::LpcNotifySettingsChange(this, 8u, a3);
          return 0LL;
        case 0x1A:
          CDwmAppHost::OnSettingChange(this, a4, lParam);
          return 0LL;
      }
    }
  }
  return DefWindowProcW(a2, (UINT)a3, a4, lParam);
}
