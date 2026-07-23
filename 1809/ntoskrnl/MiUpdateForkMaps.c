/*
 * XREFs of MiUpdateForkMaps @ 0x1402CADF8
 * Callers:
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiMapSinglePage @ 0x14012194C (MiMapSinglePage.c)
 *     MiBuildForkPageTable @ 0x1402C7AFC (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C9AD0 (MiDoneWithThisPageGetAnother.c)
 */

ULONG_PTR __fastcall MiUpdateForkMaps(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  int v8; // r13d
  __int64 NextPageTable; // rax
  ULONG_PTR v10; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  ULONG_PTR v15; // rax
  __int64 v16; // rax
  unsigned __int64 *v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28[3]; // [rsp+40h] [rbp-48h] BYREF
  char v29; // [rsp+58h] [rbp-30h] BYREF
  __int64 *v30; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  v8 = 4;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a6, 4, &v30);
  v27 = NextPageTable;
  v10 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  LODWORD(v12) = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
  if ( (_DWORD)v12 )
  {
    v14 = (unsigned int)v12;
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
    v10 += 8LL;
    v12 = (unsigned int)v12;
    do
    {
      v10 = (__int64)(v10 << 25) >> 16;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    if ( ((v10 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiFillPteHierarchy((__int64)(v10 << 25) >> 16, v28);
      v16 = *a1;
      v17 = (unsigned __int64 *)&v29;
      a1[6] = v10;
      v18 = *(_QWORD *)(v16 + 40) >> 12;
      v19 = 0LL;
      v20 = v18;
      v21 = 3LL;
      do
      {
        v30 = (__int64 *)(MiMapSinglePage(a1[7], v18, 1073741856, 0) + 8LL * ((*(_DWORD *)v17 >> 3) & 0x1FF));
        v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v30);
        v26 = v22;
        v23 = v22;
        if ( v22 )
        {
          if ( (v22 & 1) != 0 )
          {
            v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
          }
          else if ( qword_14043B180 )
          {
            if ( (v22 & 0x10) != 0 )
              v23 = v22 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v23 = ~qword_14043B180 & v22;
          }
          v18 = (v23 >> 12) & 0xFFFFFFFFFLL;
        }
        else
        {
          v24 = &a1[4 - v8];
          MiDoneWithThisPageGetAnother(v24 + 1, a5, *a1, a6);
          v18 = v24[1];
          MiBuildForkPageTable(*a1, v18, *v17, v30, v20, v8 - 1);
          ++*v31;
          if ( v19 )
            MiIncreaseUsedPtesCount(v19, 1LL, v25);
        }
        v19 = 48 * v18 - 0x58000000000LL;
        --v8;
        --v17;
        v20 = v18;
        --v21;
      }
      while ( v21 );
      v15 = MiMapSinglePage(a1[7], v18, 1073741856, 0);
      v10 = v27;
      a1[4] = v15;
      a1[8] = v19;
    }
    else
    {
      v15 = a1[4];
    }
    LOBYTE(v13) = a6;
    a1[5] = v15 | v10 & 0xFFF;
    MiMakeSystemAddressValid(v10, 0LL, 0, v13, 1);
  }
  return v10;
}
