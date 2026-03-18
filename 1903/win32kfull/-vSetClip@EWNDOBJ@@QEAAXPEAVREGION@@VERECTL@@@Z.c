/*
 * XREFs of ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0283E14
 * Callers:
 *     GreClientRgnUpdated @ 0x1C00C6368 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02839B4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0283E64 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C02840C0 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C028487C (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 */

_BOOL8 __fastcall EWNDOBJ::vSetClip(__int64 a1, struct REGION *a2, _OWORD *a3)
{
  _BOOL8 result; // rax

  XCLIPOBJ::vSetup((XCLIPOBJ *)a1, a2, (struct ERECTL *)&grclMax, 0);
  *(_OWORD *)(a1 + 32) = *a3;
  result = ERECTL::bEmpty((ERECTL *)(a1 + 4));
  if ( result )
    *(_BYTE *)(a1 + 20) = 1;
  return result;
}
