/*
 * XREFs of HvlLpWritebackInvalidate @ 0x1402884E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  PHYSICAL_ADDRESS v5[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 0x20uLL);
  v2 = HvlpAcquireHypercallPage(v5, 1, 0LL, 32LL);
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  *(_DWORD *)v2 = a1;
  *((_DWORD *)v2 + 1) = 65538;
  v3 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v5);
  return v3;
}
