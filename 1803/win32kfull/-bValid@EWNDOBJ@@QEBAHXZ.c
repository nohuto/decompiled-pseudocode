/*
 * XREFs of ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0257BAC
 * Callers:
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0258000 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreDeleteWnd @ 0x1C0258760 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1C02588F0 (GreSetClientRgn.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02768D4 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EWNDOBJ::bValid(EWNDOBJ *this)
{
  return *((_DWORD *)this + 38) == 1145984837 && **((_DWORD **)this + 21) == 1128354388;
}
