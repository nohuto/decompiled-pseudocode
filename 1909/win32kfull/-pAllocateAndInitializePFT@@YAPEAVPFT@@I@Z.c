/*
 * XREFs of ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C0113A6C
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C026F9A8 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1C037FDC0 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 */

struct PFT *__fastcall pAllocateAndInitializePFT(int a1)
{
  struct PFT *result; // rax

  result = (struct PFT *)PALLOCMEM2((unsigned int)(8 * a1 + 40), 1952870471LL, 1);
  if ( result )
  {
    *((_DWORD *)result + 7) = 0;
    *((_DWORD *)result + 8) = 0;
    *((_DWORD *)result + 6) = a1;
  }
  return result;
}
