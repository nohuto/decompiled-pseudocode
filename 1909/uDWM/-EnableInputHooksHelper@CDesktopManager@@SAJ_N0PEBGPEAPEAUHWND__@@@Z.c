/*
 * XREFs of ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x18007F188
 * Callers:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x18007F188 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18007F428 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x18007F188 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z @ 0x18007FE84 (-SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z.c)
 */

__int64 __fastcall CDesktopManager::EnableInputHooksHelper(char a1, char a2, const unsigned __int16 *a3, HWND *a4)
{
  unsigned int v7; // ebx
  HWND ForegroundWindow; // r15
  HWND WindowInBand; // rax
  HWND v10; // rbp
  bool v11; // r8
  int v12; // eax
  HCURSOR CursorW; // rax
  HWND v14; // rcx
  bool v15; // r8

  v7 = 0;
  if ( !CDesktopManager::s_pDesktopManagerInstance )
    return v7;
  if ( !a1 )
  {
    if ( !*a4 )
      return v7;
    LockSetForegroundWindow(2u);
    v14 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 85);
    if ( v14 )
    {
      if ( IsWindow(v14) )
        CDesktopManager::SetForegroundWindowAsync(*a4, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 85), v15);
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 85) = 0LL;
    }
    PostMessageW(*a4, 0x10u, 0LL, 0LL);
    *a4 = 0LL;
LABEL_18:
    if ( (v7 & 0x80000000) == 0 )
      return v7;
    goto LABEL_19;
  }
  ForegroundWindow = GetForegroundWindow();
  SendNotifyMessageW(ForegroundWindow, 0x1Fu, 0LL, 0LL);
  if ( a2 )
    WindowInBand = (HWND)CreateWindowInBand(
                           136LL,
                           L"LivePreview",
                           0LL,
                           0x80000000LL,
                           0,
                           0,
                           0,
                           0,
                           0LL,
                           0LL,
                           g_hInstance,
                           0LL,
                           2);
  else
    WindowInBand = (HWND)CreateWindowInBand(
                           136LL,
                           L"LivePreview",
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
  v10 = WindowInBand;
  if ( WindowInBand )
  {
    *a4 = WindowInBand;
    ChangeWindowMessageFilterEx(WindowInBand, 0x319u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v10, 0x112u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v10, 0x1Fu, 1u, 0LL);
    ChangeWindowMessageFilterEx(v10, 6u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v10, 0x3Du, 1u, 0LL);
    if ( a2 )
      return v7;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 85) = ForegroundWindow;
    v12 = CDesktopManager::SetForegroundWindowAsync(v10, v10, v11);
    v7 = v12;
    if ( v12 >= 0 )
    {
      CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
      SetCursor(CursorW);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CAB70, 2LL, v12, 0xAD1u);
    }
    goto LABEL_18;
  }
  v7 = -2147024890;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CAB70, 2LL, -2147024890, 0xAC0u);
LABEL_19:
  if ( a1 )
    CDesktopManager::EnableInputHooksHelper(0, 0, L"LivePreview", a4);
  return v7;
}
