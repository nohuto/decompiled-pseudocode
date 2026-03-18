/*
 * XREFs of NtGdiDdDestroyFullscreenSprite @ 0x1C0243D50
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B23C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 */

__int64 __fastcall NtGdiDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  return SpDdDestroyFullscreenSprite(a1, a2);
}
