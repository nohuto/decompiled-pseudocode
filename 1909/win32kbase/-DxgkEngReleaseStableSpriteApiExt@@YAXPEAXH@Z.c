/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C011FE30
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
