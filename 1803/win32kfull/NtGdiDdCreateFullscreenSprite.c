/*
 * XREFs of NtGdiDdCreateFullscreenSprite @ 0x1C0243BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C023AC68 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  return SpDdCreateFullscreenSprite(a1, a2, a3, a4);
}
