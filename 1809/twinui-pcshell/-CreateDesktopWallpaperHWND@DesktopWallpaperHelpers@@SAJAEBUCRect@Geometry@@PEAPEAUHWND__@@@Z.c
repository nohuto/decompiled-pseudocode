/*
 * XREFs of ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1803A29C4
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18016AF50 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(const struct Geometry::CRect *a1, HWND *a2)
{
  signed int Error; // eax
  unsigned int LastError; // ebx
  __int64 v6; // rdx
  HWND Window; // rax
  const char *v9; // r9
  int v10; // [rsp+60h] [rbp-39h] BYREF
  int *v11; // [rsp+68h] [rbp-31h]
  int v12; // [rsp+70h] [rbp-29h]
  WNDCLASSEXW v13; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v15; // [rsp+108h] [rbp+6Fh] BYREF
  HWND hWnd; // [rsp+110h] [rbp+77h]

  *a2 = 0LL;
  memset_0(&v13, 0, sizeof(v13));
  v13.lpfnWndProc = DefWindowProcW;
  v13.cbSize = 80;
  v13.style = 0x4000;
  v13.hInstance = &_ImageBase;
  v13.hCursor = 0LL;
  v13.hbrBackground = 0LL;
  v13.lpszClassName = L"DesktopWallpaperManager";
  if ( !RegisterClassExW(&v13) )
  {
    Error = ResultFromKnownLastError();
    LastError = Error;
    if ( Error < 0 )
    {
      if ( Error != -2147023486 )
      {
        v6 = 29LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
          (const char *)LastError);
        return LastError;
      }
      if ( FindWindowW(L"DesktopWallpaperManager", 0LL) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          40LL,
          (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
    }
  }
  Window = CreateWindowExW(
             0x280080u,
             L"DesktopWallpaperManager",
             0LL,
             0x80880000,
             *(_DWORD *)a1,
             *((_DWORD *)a1 + 1),
             *((_DWORD *)a1 + 2) - *(_DWORD *)a1,
             *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1),
             0LL,
             0LL,
             &_ImageBase,
             0LL);
  hWnd = Window;
  if ( !Window )
  {
    LastError = ResultFromKnownLastError();
    if ( (LastError & 0x80000000) != 0 )
    {
      v6 = 51LL;
      goto LABEL_5;
    }
    Window = hWnd;
  }
  v15 = 1;
  v11 = &v15;
  v10 = 17;
  v12 = 4;
  if ( !(unsigned int)SetWindowCompositionAttribute(Window, &v10) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3E,
                  (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
                  v9);
    DestroyWindow(hWnd);
    return LastError;
  }
  ShowWindow(hWnd, 4);
  *a2 = hWnd;
  return 0LL;
}
