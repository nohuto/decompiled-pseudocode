/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00FD0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( (int)IsDxgkEngReleaseStableSpriteSupported() >= 0 )
    DxgkEngReleaseStableSprite(a1, a2);
}
