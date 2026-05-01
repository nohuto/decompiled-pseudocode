/*
 * XREFs of ??_GStartExperienceWallpaperBackground@@UEAAPEAXI@Z @ 0x180169EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801877A4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-DwmUnregisterThumbnail@@YAJ0.c)
 */

// Hidden C++ exception states: #wind=1
StartExperienceWallpaperBackground *__fastcall StartExperienceWallpaperBackground::`scalar deleting destructor'(
        StartExperienceWallpaperBackground *this,
        char a2)
{
  char *v4; // rcx

  *(_QWORD *)this = &StartExperienceWallpaperBackground::`vftable';
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
    (char *)this + 48,
    0LL);
  if ( *((_BYTE *)this + 16) )
    UpdateWallpaperTransition(13LL);
  v4 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    DwmUnregisterThumbnail(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
