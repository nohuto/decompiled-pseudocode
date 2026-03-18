/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C00DCEB8
 * Callers:
 *     GreReferenceObject @ 0x1C00C5604 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00DC69C (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00FF55C (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vUnlinkEudcRFONTs @ 0x1C02689D4 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0268AC0 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *(_QWORD *)this != 0LL;
}
