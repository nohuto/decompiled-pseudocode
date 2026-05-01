/*
 * XREFs of ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x180187654
 * Callers:
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x18016971C (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 * Callees:
 *     McTemplateU0q @ 0x18002BDE4 (McTemplateU0q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     McTemplateU0dddd @ 0x1801026D0 (McTemplateU0dddd.c)
 *     ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801875F8 (-RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
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
