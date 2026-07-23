/*
 * XREFs of HvlMapSparseGpaPages @ 0x14032C320
 * Callers:
 *     VmpProcessUpdateSlat @ 0x14030D44C (VmpProcessUpdateSlat.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // esi
  _QWORD *v10; // rax
  int v11; // r15d
  void *v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  PHYSICAL_ADDRESS v18[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  *a5 = 0LL;
  v10 = HvlpAcquireHypercallPage(v18, 1, 0LL, 0LL);
  v11 = 0;
  v10[1] = 0LL;
  v12 = v10 + 2;
  v13 = *a5;
  *((_DWORD *)v10 + 2) = a2;
  v14 = a3;
  *v10 = a1;
  do
  {
    if ( v14 >= 0xFF )
      v14 = 255LL;
    memmove(v12, (const void *)(a4 + 16 * v13), 16 * v14);
    v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)v14) & 0xFFF;
    v15 = HvcallCodeVa();
    v16 = v15;
    if ( (_WORD)v15 )
      break;
    v13 = *a5 + (WORD2(v15) & 0xFFF);
    *a5 = v13;
    v14 = a3 - v13;
  }
  while ( a3 != v13 );
  HvlpReleaseHypercallPage((unsigned int *)v18);
  if ( v16 )
    return (unsigned int)HvlpHvToNtStatus(v16);
  return v5;
}
