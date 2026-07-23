/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x140274830
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  unsigned __int64 v7; // r9
  __int64 v9; // rsi
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // ebx
  PHYSICAL_ADDRESS v16[3]; // [rsp+28h] [rbp-30h] BYREF

  v7 = 32LL * a2;
  v9 = a2;
  if ( v7 > 0x1000 )
    return 3221225485LL;
  v11 = HvlpAcquireHypercallPage(v16, 1, 0LL, v7);
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
      --v9;
    }
    while ( v9 );
  }
  v15 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v16);
  return v15;
}
