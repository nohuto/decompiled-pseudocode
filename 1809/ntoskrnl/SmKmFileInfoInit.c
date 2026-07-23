/*
 * XREFs of SmKmFileInfoInit @ 0x1408ADE88
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400E36E8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall SmKmFileInfoInit(void *a1)
{
  return memset(a1, 0, 0x40uLL);
}
