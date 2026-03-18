/*
 * XREFs of HvlpStartVirtualProcessor @ 0x140287000
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x140288240 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  PHYSICAL_ADDRESS v8[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v8, 0, 0x20uLL);
  v4 = HvlpAcquireHypercallPage(v8, 1, 0LL, 240LL);
  *v4 = -1LL;
  v4[1] = a1;
  v4 += 2;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  *((_OWORD *)v4 + 6) = a2[6];
  v4 += 16;
  v5 = a2[7];
  a2 += 8;
  *((_OWORD *)v4 - 1) = v5;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  v6 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v8);
  return v6;
}
