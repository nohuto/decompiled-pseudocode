/*
 * XREFs of HvlMapSparseGpaPages @ 0x14034D9C8
 * Callers:
 *     VmpFillSlat @ 0x140329F94 (VmpFillSlat.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v9; // esi
  _QWORD *v10; // rax
  void *v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  PHYSICAL_ADDRESS v18[4]; // [rsp+20h] [rbp-48h] BYREF

  memset(v18, 0, sizeof(v18));
  v9 = 0;
  *a5 = 0LL;
  v10 = HvlpAcquireHypercallPage(v18, 1, 0LL, 0LL);
  *((_DWORD *)v10 + 3) = 0;
  v11 = v10 + 2;
  v12 = *a5;
  *((_DWORD *)v10 + 2) = a2;
  v13 = a3;
  *v10 = a1;
  v14 = 0;
  do
  {
    if ( v13 >= 0xFF )
      v13 = 255LL;
    memmove(v11, (const void *)(a4 + 16 * v12), 16 * v13);
    v14 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v13) & 0xFFF;
    v15 = HvcallCodeVa();
    v16 = v15;
    if ( (_WORD)v15 )
      break;
    v12 = *a5 + (WORD2(v15) & 0xFFF);
    *a5 = v12;
    v13 = a3 - v12;
  }
  while ( a3 != v12 );
  HvlpReleaseHypercallPage((unsigned int *)v18);
  if ( v16 )
    return (unsigned int)HvlpHvToNtStatus(v16);
  return v9;
}
