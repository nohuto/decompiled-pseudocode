/*
 * XREFs of ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0125090
 * Callers:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C007B4D0 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00547C0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetMatchFromPalentry(struct PALETTE **this, struct tagPALETTEENTRY a2)
{
  return XEPALOBJ::ulDispatchGFPEFunction(this, *((_DWORD *)*this + 25), *(_DWORD *)&a2);
}
