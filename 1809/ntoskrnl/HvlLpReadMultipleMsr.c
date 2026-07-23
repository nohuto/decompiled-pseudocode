/*
 * XREFs of HvlLpReadMultipleMsr @ 0x140274700
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // r15
  _QWORD *v9; // r13
  __int64 *v10; // r14
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  PHYSICAL_ADDRESS v17[3]; // [rsp+28h] [rbp-70h] BYREF
  PHYSICAL_ADDRESS v18[3]; // [rsp+48h] [rbp-50h] BYREF

  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  v8 = a2;
  v9 = HvlpAcquireHypercallPage(v18, 1, 0LL, 16LL * a2);
  v10 = HvlpAcquireHypercallPage(v17, 2, 0LL, 16LL * a2);
  if ( a2 )
  {
    v11 = v9 + 1;
    v12 = a2;
    do
    {
      *(v11 - 2) = a1;
      *(v11 - 1) = 65537;
      v13 = *a3++;
      *v11 = v13;
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  v14 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  if ( a2 )
  {
    do
    {
      v15 = *v10;
      v10 += 2;
      *a4++ = v15;
      --v8;
    }
    while ( v8 );
  }
  HvlpReleaseHypercallPage((unsigned int *)v17);
  HvlpReleaseHypercallPage((unsigned int *)v18);
  return v14;
}
