/*
 * XREFs of ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1801C0FD4
 * Callers:
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x1801963E0 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 * Callees:
 *     McTemplateU0q @ 0x18003152C (McTemplateU0q.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     McTemplateU0dddd @ 0x180128580 (McTemplateU0dddd.c)
 *     ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801C0F78 (-RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::RuntimeClassInitialize(
        StartExperienceWallpaperBackground *this,
        HWND a2,
        struct IDCompositionDevice *a3)
{
  struct IDCompositionDevice *v4; // rax
  int updated; // eax
  HWND v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  signed int Error; // ebx
  LONG right; // [rsp+20h] [rbp-40h]
  LONG bottom; // [rsp+28h] [rbp-38h]
  struct IDCompositionDevice *v14; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *((_QWORD *)this + 3) = a2;
  v4 = (struct IDCompositionDevice *)*((_QWORD *)this + 4);
  if ( v4 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)a3 + 8LL))(a3);
      v4 = (struct IDCompositionDevice *)*((_QWORD *)this + 4);
    }
    v14 = v4;
    *((_QWORD *)this + 4) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  updated = UpdateWallpaperTransition(13LL);
  v7 = (HWND)*((_QWORD *)this + 3);
  v8 = updated;
  Rect = 0LL;
  if ( GetWindowRect(v7, &Rect) )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    bottom = Rect.bottom;
    right = Rect.right;
    McTemplateU0dddd(
      v9,
      &WallpaperBackground_SceneInitialization_Start,
      (unsigned int)Rect.left,
      Rect.top,
      right,
      bottom);
  }
  if ( Error >= 0 )
  {
    *((_BYTE *)this + 16) = v8 >= 0;
    if ( v8 >= 0 )
      v8 = StartExperienceWallpaperBackground::RebuildScene(this, &Rect);
    Error = v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)Error);
    v8 = Error;
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0q(v9, (__int64)&WallpaperBackground_SceneInitialization_Stop, (unsigned int)v8);
  return (unsigned int)Error;
}
