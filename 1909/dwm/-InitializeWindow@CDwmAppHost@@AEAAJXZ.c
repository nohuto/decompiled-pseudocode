/*
 * XREFs of ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140002200
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001F30 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x140004298 (IsChangeWindowMessageFilterExPresent.c)
 */

__int64 __fastcall CDwmAppHost::InitializeWindow(CDwmAppHost *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax
  signed int LastError; // eax
  unsigned int X; // [rsp+20h] [rbp-98h]
  WNDCLASSEXW v6; // [rsp+60h] [rbp-58h] BYREF

  *(_QWORD *)&v6.cbSize = 80LL;
  v6.lpfnWndProc = (WNDPROC)CDwmAppHost::s_NotifyWndProc;
  v1 = 0;
  v6.hInstance = g_dwmAppHost;
  *(_QWORD *)&v6.cbClsExtra = 0LL;
  memset(&v6.hIcon, 0, 32);
  v6.hIconSm = 0LL;
  v6.lpszClassName = L"Dwm";
  SetLastError(0);
  if ( RegisterClassExW(&v6) )
  {
    SetLastError(0);
    hwnd = CreateWindowExW(0, L"Dwm", L"DWM Notification Window", 0xA0000000, 0, 0, 0, 0, 0LL, 0LL, g_dwmAppHost, 0LL);
    if ( hwnd )
    {
      if ( (unsigned __int8)IsChangeWindowMessageFilterExPresent() )
      {
        ChangeWindowMessageFilterEx(hwnd, 0x1Au, 1u, 0LL);
        ChangeWindowMessageFilterEx(hwnd, 0x15u, 1u, 0LL);
        ChangeWindowMessageFilterEx(hwnd, 0x31Au, 1u, 0LL);
        ChangeWindowMessageFilterEx(hwnd, 0x31Bu, 1u, 0LL);
      }
      return v1;
    }
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    X = 242;
  }
  else
  {
    v3 = GetLastError();
    v1 = v3;
    if ( v3 > 0 )
      v1 = (unsigned __int16)v3 | 0x80070000;
    X = 229;
  }
  if ( (v1 & 0x80000000) == 0 )
    v1 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, X);
  return v1;
}
