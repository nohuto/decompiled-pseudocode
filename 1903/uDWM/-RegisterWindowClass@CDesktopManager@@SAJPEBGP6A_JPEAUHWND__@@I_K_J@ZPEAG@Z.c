/*
 * XREFs of ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180041148
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800412D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x18004E4AC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004E51C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::RegisterWindowClass(
        const unsigned __int16 *a1,
        __int64 (*a2)(HWND, unsigned int, unsigned __int64, __int64),
        unsigned __int16 *a3)
{
  unsigned int v4; // edi
  signed int v5; // ebx
  ATOM v6; // ax
  signed int LastError; // eax
  void *v9; // [rsp+28h] [rbp-60h]
  WNDCLASSW WndClass; // [rsp+30h] [rbp-58h] BYREF

  if ( dword_1800DEBEC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800DEBEC);
    if ( dword_1800DEBEC == -1 )
    {
      dword_1800DC068 = -2147023486;
      Init_thread_footer(&dword_1800DEBEC);
    }
  }
  v4 = 0;
  v5 = 0;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpszClassName = L"LivePreview";
  WndClass.lpfnWndProc = (WNDPROC)CDesktopManager::DwmLivePreviewWndProc;
  WndClass.hInstance = g_hInstance;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  SetLastError(0);
  v6 = RegisterClassW(&WndClass);
  *a3 = v6;
  if ( !v6 )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800DC068, 1u, v5, 0x79Bu, v9);
  }
  if ( v5 != -2147023486 )
    return (unsigned int)v5;
  return v4;
}
