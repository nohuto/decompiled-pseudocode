/*
 * XREFs of ?TrackFullscreenMode@@YAXH@Z @ 0x1C00493CC
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B9BC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062520 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackFullscreenMode(int a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( a1 )
    v1 = *((_QWORD *)gptiCurrent + 52);
  gppiFullscreen = v1;
}
