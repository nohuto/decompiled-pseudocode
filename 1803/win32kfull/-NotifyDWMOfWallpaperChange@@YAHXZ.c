/*
 * XREFs of ?NotifyDWMOfWallpaperChange@@YAHXZ @ 0x1C010D174
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C010CF94 (xxxSetDeskWallpaper.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0066CF8 (IsThreadDesktopComposed.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C010D1BC (DwmAsyncNotifyWallpaperChange.c)
 */

__int64 NotifyDWMOfWallpaperChange(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // r8
  void *v5; // rax

  v0 = 0;
  v3 = IsThreadDesktopComposed(gptiCurrent);
  if ( v3 )
  {
    v5 = (void *)ReferenceDwmApiPort(v2, v1, v4);
    DwmAsyncNotifyWallpaperChange(v5);
  }
  LOBYTE(v0) = v3 != 0;
  return v0;
}
