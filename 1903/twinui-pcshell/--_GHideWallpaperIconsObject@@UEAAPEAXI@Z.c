/*
 * XREFs of ??_GHideWallpaperIconsObject@@UEAAPEAXI@Z @ 0x180414240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180078A58 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

HideWallpaperIconsObject *__fastcall HideWallpaperIconsObject::`scalar deleting destructor'(
        HideWallpaperIconsObject *this,
        char a2)
{
  bool v2; // zf
  HWND ShellWindow; // rax
  void *v6; // rcx

  v2 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &HideWallpaperIconsObject::`vftable';
  if ( !v2 )
  {
    ShellWindow = GetShellWindow();
    PostMessageW(ShellWindow, 0x52Cu, 0xDuLL, 0LL);
  }
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(v6);
  return this;
}
