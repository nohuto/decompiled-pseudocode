/*
 * XREFs of ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C004DA04
 * Callers:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C004D83C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0103720 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0103720 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

struct _QUICKLOOKUP *__fastcall PFEOBJ::pql(struct PFE **this)
{
  struct PFE *v1; // rdx
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  if ( (*((_DWORD *)*this + 3) & 0x200) != 0 )
  {
    v4 = ghsemEUDC1;
    GreAcquireSemaphore(ghsemEUDC1);
    *((_DWORD *)*this + 3) &= ~0x200u;
    bComputeQuickLookup(0LL, *this, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v4);
    v1 = *this;
  }
  return (struct PFE *)((char *)v1 + 104);
}
