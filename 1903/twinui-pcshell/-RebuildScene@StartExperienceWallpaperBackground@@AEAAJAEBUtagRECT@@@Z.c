/*
 * XREFs of ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801C0F78
 * Callers:
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1801C0FD4 (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1801C0E20 (-InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801C1124 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-DwmUnregisterThumbnail@@YAJ0.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::RebuildScene(
        StartExperienceWallpaperBackground *this,
        const struct tagRECT *a2)
{
  int inserted; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
    (char *)this + 48,
    0LL);
  inserted = StartExperienceWallpaperBackground::InsertThumbnailVisual(this, a2);
  v5 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
    (const char *)(unsigned int)inserted);
  return v5;
}
