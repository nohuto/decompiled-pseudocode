/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x140288680
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // r9
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // ebx
  PHYSICAL_ADDRESS v16[6]; // [rsp+28h] [rbp-30h] BYREF

  memset(v16, 0, 0x20uLL);
  v8 = a2;
  v9 = 32LL * a2;
  if ( v9 > 0x1000 )
    return 3221225485LL;
  v11 = HvlpAcquireHypercallPage(v16, 1, 0LL, v9);
  if ( a2 )
  {
    v12 = v11 + 1;
    do
    {
      *(v12 - 2) = a1;
      *(v12 - 1) = 65537;
      v13 = *a3++;
      *v12 = v13;
      v12 += 8;
      v14 = *a4++;
      *((_QWORD *)v12 - 3) = v14;
      --v8;
    }
    while ( v8 );
  }
  v15 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v16);
  return v15;
}
