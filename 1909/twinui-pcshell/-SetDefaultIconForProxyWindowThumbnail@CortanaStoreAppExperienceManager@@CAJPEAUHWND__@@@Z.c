/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801DE034
 * Callers:
 *     ?CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1801DB310 (-CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     ?GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ @ 0x1801DBF88 (-GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ.c)
 *     ?HICONFromBitmap@CortanaStoreAppExperienceManager@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1801DC0D4 (-HICONFromBitmap@CortanaStoreAppExperienceManager@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18042C3D0 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  int DpiForMonitor; // ebx
  __int64 v4; // rdx
  bool *v6; // rdx
  CortanaUndockingHelpers *v7; // rcx
  struct tagSIZE v8; // r9
  int ImmersiveIcon; // eax
  unsigned int v10; // edi
  HGDIOBJ v11; // rbx
  HICON v12; // rax
  unsigned int v13; // [rsp+28h] [rbp-28h]
  HGDIOBJ ho[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  POINT pt; // [rsp+78h] [rbp+28h] BYREF
  char v17; // [rsp+80h] [rbp+30h] BYREF
  struct tagSIZE v18; // [rsp+88h] [rbp+38h]

  ho[1] = (HGDIOBJ)-2LL;
  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( !v2 )
  {
    DpiForMonitor = -2147418113;
    v4 = 1304LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)DpiForMonitor);
    return (unsigned int)DpiForMonitor;
  }
  DpiForMonitor = GetDpiForMonitor(v2, 0LL, &pt, &v17);
  if ( DpiForMonitor < 0 )
  {
    v4 = 1307LL;
    goto LABEL_3;
  }
  if ( dword_1805C3B88 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805C3B88);
    if ( dword_1805C3B88 == -1 )
    {
      *(_QWORD *)&qword_1805C3B90 = CortanaUndockingHelpers::GetStoreCortanaAumId(v7, v6);
      Init_thread_footer(&dword_1805C3B88);
    }
  }
  v18.cx = GetSystemMetrics(11);
  v18.cy = GetSystemMetrics(12);
  LOBYTE(v13) = 0;
  ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                    *(ImmersiveIcons **)&v18,
                    v18,
                    v18,
                    v8,
                    pt.x,
                    v13,
                    qword_1805C3B90,
                    (const unsigned __int16 *)ho,
                    0LL);
  v10 = ImmersiveIcon;
  v11 = ho[0];
  if ( ImmersiveIcon >= 0 )
  {
    v12 = CortanaStoreAppExperienceManager::HICONFromBitmap((HBITMAP)ho[0]);
    if ( v12 )
      SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v12);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x521,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  if ( v11 )
    DeleteObject(v11);
  return v10;
}
