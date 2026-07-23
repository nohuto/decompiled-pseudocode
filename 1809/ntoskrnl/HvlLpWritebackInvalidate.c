/*
 * XREFs of HvlLpWritebackInvalidate @ 0x140274920
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  _DWORD *v2; // rbx
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-28h] BYREF

  v2 = HvlpAcquireHypercallPage(v4, 1, 0LL, 32LL);
  memset(v2, 0, 0x20uLL);
  *v2 = a1;
  v2[1] = 65538;
  LODWORD(v2) = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v4);
  return (unsigned int)v2;
}
