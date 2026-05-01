/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1801F0478
 * Callers:
 *     ?s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1801F15E0 (-s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HICONFromBitmap@CortanaStoreAppExperienceManager@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1801DC0D4 (-HICONFromBitmap@CortanaStoreAppExperienceManager@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18042C3D0 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  int DpiForMonitor; // ebx
  __int64 v4; // rdx
  struct tagSIZE v6; // r9
  int ImmersiveIcon; // eax
  unsigned int v8; // edi
  HGDIOBJ v9; // rbx
  HICON v10; // rax
  unsigned int v11; // [rsp+28h] [rbp-28h]
  HGDIOBJ ho[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  POINT pt; // [rsp+78h] [rbp+28h] BYREF
  char v15; // [rsp+80h] [rbp+30h] BYREF
  struct tagSIZE v16; // [rsp+88h] [rbp+38h]

  ho[1] = (HGDIOBJ)-2LL;
  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( !v2 )
  {
    DpiForMonitor = -2147418113;
    v4 = 3329LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)DpiForMonitor);
    return (unsigned int)DpiForMonitor;
  }
  DpiForMonitor = GetDpiForMonitor(v2, 0LL, &pt, &v15);
  if ( DpiForMonitor < 0 )
  {
    v4 = 3332LL;
    goto LABEL_3;
  }
  v16.cx = GetSystemMetrics(11);
  v16.cy = GetSystemMetrics(12);
  LOBYTE(v11) = 0;
  ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                    *(ImmersiveIcons **)&v16,
                    v16,
                    v16,
                    v6,
                    pt.x,
                    v11,
                    (bool)L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
                    (const unsigned __int16 *)ho,
                    0LL);
  v8 = ImmersiveIcon;
  v9 = ho[0];
  if ( ImmersiveIcon >= 0 )
  {
    v10 = CortanaStoreAppExperienceManager::HICONFromBitmap((HBITMAP)ho[0]);
    if ( v10 )
      SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v10);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD08,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  if ( v9 )
    DeleteObject(v9);
  return v8;
}
