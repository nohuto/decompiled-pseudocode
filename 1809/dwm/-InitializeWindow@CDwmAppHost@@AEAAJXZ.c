/*
 * XREFs of ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140001FF0
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001E20 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x140003C76 (memset_0.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x140003DD0 (IsChangeWindowMessageFilterExPresent.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x140005EAC (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmAppHost::InitializeWindow(CDwmAppHost *this)
{
  signed int v1; // ebx
  signed int LastError; // eax
  signed int v4; // eax
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // r8d
  unsigned int X; // [rsp+20h] [rbp-98h]
  WNDCLASSEXW v9; // [rsp+60h] [rbp-58h] BYREF

  v1 = 0;
  memset_0(&v9, 0, sizeof(v9));
  v9.cbSize = 80;
  v9.lpfnWndProc = (WNDPROC)CDwmAppHost::s_NotifyWndProc;
  v9.hInstance = g_dwmAppHost;
  v9.lpszClassName = L"Dwm";
  SetLastError(0);
  if ( !RegisterClassExW(&v9) )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    X = 212;
    if ( v1 >= 0 )
      v1 = -2003304445;
    goto LABEL_12;
  }
  SetLastError(0);
  hWnd = CreateWindowExW(0, L"Dwm", L"DWM Notification Window", 0xA0000000, 0, 0, 0, 0, 0LL, 0LL, g_dwmAppHost, 0LL);
  if ( !hWnd )
  {
    v4 = GetLastError();
    v1 = v4;
    if ( v4 > 0 )
      v1 = (unsigned __int16)v4 | 0x80070000;
    if ( v1 >= 0 )
      v1 = CheckGUIHandleQuota(v6, v5, v7);
    X = 225;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, X);
    return (unsigned int)v1;
  }
  if ( (unsigned __int8)IsChangeWindowMessageFilterExPresent() )
  {
    ChangeWindowMessageFilterEx(hWnd, 0x1Au, 1u, 0LL);
    ChangeWindowMessageFilterEx(hWnd, 0x15u, 1u, 0LL);
    ChangeWindowMessageFilterEx(hWnd, 0x31Au, 1u, 0LL);
    ChangeWindowMessageFilterEx(hWnd, 0x31Bu, 1u, 0LL);
  }
  return (unsigned int)v1;
}
