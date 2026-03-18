/*
 * XREFs of ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C009F6A4
 * Callers:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C003E6E0 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C003E520 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetMatchFromPalentry(struct PALETTE **this, struct tagPALETTEENTRY a2)
{
  return XEPALOBJ::ulDispatchGFPEFunction(this, *((_DWORD *)*this + 25), *(_DWORD *)&a2);
}
