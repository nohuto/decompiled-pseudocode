/*
 * XREFs of ?InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801C0E20
 * Callers:
 *     ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801C0F78 (-RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801C1124 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-DwmUnregisterThumbnail@@YAJ0.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::InsertThumbnailVisual(
        StartExperienceWallpaperBackground *this,
        const struct tagRECT *a2)
{
  HWND ShellWindow; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  int SystemMetrics; // ebx
  int v9; // eax
  LONG bottom; // edx
  LONG right; // r8d
  int v12; // ecx
  LONG v13; // ecx
  int v14; // r8d
  __int128 v15; // [rsp+40h] [rbp-9h]
  int v16; // [rsp+50h] [rbp+7h] BYREF
  __int128 v17; // [rsp+54h] [rbp+Bh]
  int v18; // [rsp+64h] [rbp+1Bh]
  int v19; // [rsp+68h] [rbp+1Fh]
  int v20; // [rsp+6Ch] [rbp+23h]
  int v21; // [rsp+70h] [rbp+27h]
  int v22; // [rsp+75h] [rbp+2Ch]
  int v23; // [rsp+79h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  ShellWindow = GetShellWindow();
  if ( !ShellWindow )
  {
    v5 = -2147023496;
    v6 = 95LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  memset_0(&v16, 0, 0x2DuLL);
  v16 = 2;
  SystemMetrics = GetSystemMetrics(76);
  v9 = GetSystemMetrics(77);
  bottom = a2->bottom;
  right = a2->right;
  v12 = a2->left - SystemMetrics;
  *(_QWORD *)&v15 = 0LL;
  v16 |= 0x19u;
  v18 = v12;
  v13 = right;
  v14 = right - a2->left;
  v20 = v13 - SystemMetrics;
  DWORD2(v15) = v14;
  v19 = a2->top - v9;
  HIDWORD(v15) = bottom - a2->top;
  v21 = bottom - v9;
  v22 = 1;
  v17 = v15;
  v23 = 1;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
    (char *)this + 48,
    0LL);
  v5 = DwmpCreateSharedThumbnailVisual(
         *((_QWORD *)this + 3),
         ShellWindow,
         0LL,
         &v16,
         *((_QWORD *)this + 4),
         (char *)this + 40,
         (char *)this + 48);
  if ( v5 < 0 )
  {
    v6 = 128LL;
    goto LABEL_3;
  }
  return 0LL;
}
