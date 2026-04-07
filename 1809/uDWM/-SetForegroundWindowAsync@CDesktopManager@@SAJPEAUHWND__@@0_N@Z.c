/*
 * XREFs of ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z @ 0x180079A08
 * Callers:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180078EA8 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::SetForegroundWindowAsync(HWND hWnd, WPARAM wParam)
{
  unsigned int v2; // ebx
  signed int LastError; // eax

  v2 = 0;
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 83) )
    {
      if ( hWnd )
      {
        SetLastError(0);
        if ( !PostMessageW(hWnd, 0x404u, wParam, 1LL) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          v2 = LastError;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0xBD6u);
        }
      }
    }
  }
  return v2;
}
