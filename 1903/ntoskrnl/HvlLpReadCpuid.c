/*
 * XREFs of HvlLpReadCpuid @ 0x140288400
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v10; // rbx
  _QWORD *v11; // rax
  _DWORD *v12; // rdi
  __int16 v13; // ax
  PHYSICAL_ADDRESS v15[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v16[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v10 = HvlpAcquireHypercallPage(v16, 1, 0LL, 16LL);
  v11 = HvlpAcquireHypercallPage(v15, 2, 0LL, 16LL);
  v10[3] = 0;
  v12 = v11;
  *v10 = a1;
  v10[1] = 0x10000;
  v10[2] = a2;
  v13 = HvcallCodeVa();
  *a3 = *v12;
  *a4 = v12[1];
  LODWORD(v10) = v13 != 0 ? 0xC0000001 : 0;
  *a5 = v12[2];
  *a6 = v12[3];
  HvlpReleaseHypercallPage((unsigned int *)v15);
  HvlpReleaseHypercallPage((unsigned int *)v16);
  return (unsigned int)v10;
}
