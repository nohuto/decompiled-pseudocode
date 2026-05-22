/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18002867C
 * Callers:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180010E04 (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z @ 0x180146F00 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801495CC (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800250FC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x18002874C (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800287EC (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 */

void __fastcall GetDesktopUniqueName(const wchar_t *a1, wchar_t *a2)
{
  unsigned __int64 v4; // rdx
  int v5; // ebx
  int v6; // [rsp+28h] [rbp-280h]
  ULONG ReturnLength; // [rsp+30h] [rbp-278h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+38h] [rbp-270h] BYREF
  __int64 v9; // [rsp+40h] [rbp-268h]
  wchar_t v10[264]; // [rsp+70h] [rbp-238h] BYREF

  v10[0] = 0;
  if ( NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasicInformation,
         ProcessInformation,
         0x30u,
         &ReturnLength) )
  {
    v5 = -1;
  }
  else
  {
    v5 = *(_DWORD *)(v9 + 704);
  }
  if ( v5 == -1 || !(unsigned int)GetThreadDesktopName(v10, v4) )
  {
    StringCchCopyW(a2, v4, a1);
  }
  else
  {
    v6 = v5;
    StringCchPrintfW(a2, 260LL, L"%s%s%d", a1, v10, v6);
  }
}
