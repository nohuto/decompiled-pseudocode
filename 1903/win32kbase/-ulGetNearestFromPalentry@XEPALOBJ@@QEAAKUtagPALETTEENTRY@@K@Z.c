/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C008D774
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x1C0132D70 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00547C0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C007B4D0 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(struct PALETTE **this, struct tagPALETTEENTRY a2, int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *((_DWORD *)*this + 24), *(_DWORD *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)this, a2);
}
