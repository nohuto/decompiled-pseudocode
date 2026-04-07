/*
 * XREFs of ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180078EA8
 * Callers:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180078EA8 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180079140 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180078EA8 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z @ 0x180079A08 (-SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z.c)
 */

__int64 __fastcall CDesktopManager::EnableInputHooksHelper(char a1, char a2, const unsigned __int16 *a3, HWND *a4)
{
  unsigned int v8; // ebx
  HWND ForegroundWindow; // r15
  HWND WindowInBand; // rax
  HWND v11; // rbp
  bool v12; // r8
  int v13; // eax
  HCURSOR CursorW; // rax
  HWND v15; // rcx
  bool v16; // r8

  v8 = 0;
  if ( !CDesktopManager::s_pDesktopManagerInstance )
    return v8;
  if ( !a1 )
  {
    if ( !*a4 )
      return v8;
    LockSetForegroundWindow(2u);
    v15 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 85);
    if ( v15 )
    {
      if ( IsWindow(v15) )
        CDesktopManager::SetForegroundWindowAsync(*a4, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 85), v16);
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 85) = 0LL;
    }
    PostMessageW(*a4, 0x10u, 0LL, 0LL);
    *a4 = 0LL;
LABEL_18:
    if ( (v8 & 0x80000000) == 0 )
      return v8;
    goto LABEL_19;
  }
  ForegroundWindow = GetForegroundWindow();
  SendNotifyMessageW(ForegroundWindow, 0x1Fu, 0LL, 0LL);
  if ( a2 )
    WindowInBand = (HWND)CreateWindowInBand(136LL, a3, 0LL, 0x80000000LL, 0, 0, 0, 0, 0LL, 0LL, g_hInstance, 0LL, 2);
  else
    WindowInBand = (HWND)CreateWindowInBand(
                           136LL,
                           a3,
                           0LL,
                           0x80000000LL,
                           *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444),
                           HIDWORD(*(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444)),
                           *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 452),
                           HIDWORD(*(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 444)),
                           0LL,
                           0LL,
                           g_hInstance,
                           0LL,
                           2);
  v11 = WindowInBand;
  if ( WindowInBand )
  {
    *a4 = WindowInBand;
    ChangeWindowMessageFilterEx(WindowInBand, 0x319u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 0x112u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 0x1Fu, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 6u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 0x3Du, 1u, 0LL);
    if ( a2 )
      return v8;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 85) = ForegroundWindow;
    v13 = CDesktopManager::SetForegroundWindowAsync(v11, v11, v12);
    v8 = v13;
    if ( v13 >= 0 )
    {
      CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
      SetCursor(CursorW);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C4680, 2LL, v13, 0xB04u);
    }
    goto LABEL_18;
  }
  v8 = -2147024890;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C4680, 2LL, -2147024890, 0xAF3u);
LABEL_19:
  if ( a1 )
    CDesktopManager::EnableInputHooksHelper(0, 0, a3, a4);
  return v8;
}
