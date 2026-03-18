/*
 * XREFs of NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C0243D70
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B354 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  return SpDdNotifyFullscreenSpriteUpdate(a1, a2);
}
