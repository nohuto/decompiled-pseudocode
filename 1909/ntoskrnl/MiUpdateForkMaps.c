/*
 * XREFs of MiUpdateForkMaps @ 0x1402E4DC0
 * Callers:
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapSinglePage @ 0x140155170 (MiMapSinglePage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiBuildForkPageTable @ 0x1402E18F0 (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3994 (MiDoneWithThisPageGetAnother.c)
 */

ULONG_PTR __fastcall MiUpdateForkMaps(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  int v9; // r13d
  __int64 NextPageTable; // rax
  ULONG_PTR v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG_PTR v15; // rax
  __int64 v16; // rax
  unsigned __int64 *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 *v24; // rbx
  unsigned __int8 v25; // r9
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28[4]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v29; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v30; // [rsp+A8h] [rbp+20h]

  v30 = a4;
  memset(v28, 0, sizeof(v28));
  v9 = 4;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a6, 4, &v29);
  v27 = NextPageTable;
  v11 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  LODWORD(v13) = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned int)v13;
    do
    {
      v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
    v11 += 8LL;
    v13 = (unsigned int)v13;
    do
    {
      v11 = (__int64)(v11 << 25) >> 16;
      --v13;
    }
    while ( v13 );
  }
  else
  {
    if ( ((v11 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiFillPteHierarchy((__int64)(v11 << 25) >> 16, v28);
      v16 = *a1;
      v17 = &v28[3];
      a1[6] = v11;
      v18 = *(_QWORD *)(v16 + 40) >> 12;
      v19 = 0LL;
      v20 = v18;
      v21 = 3LL;
      do
      {
        v29 = (_QWORD *)(MiMapSinglePage(a1[7], v18, 1073741856, 0) + 8LL * ((*(_DWORD *)v17 >> 3) & 0x1FF));
        v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v29);
        v26 = v22;
        v23 = v22;
        if ( v22 )
        {
          if ( (v22 & 1) != 0 )
          {
            v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
          }
          else if ( qword_140465800 )
          {
            if ( (v22 & 0x10) != 0 )
              v23 = v22 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v23 = ~qword_140465800 & v22;
          }
          v18 = (v23 >> 12) & 0xFFFFFFFFFLL;
        }
        else
        {
          v24 = &a1[4 - v9];
          MiDoneWithThisPageGetAnother(v24 + 1, a5, *a1, a6);
          v18 = v24[1];
          MiBuildForkPageTable(*a1, v18, *v17, v29, v20, v9 - 1);
          ++*v30;
          if ( v19 )
            MiIncreaseUsedPtesCount(v19, 1u);
        }
        v19 = 48 * v18 - 0x58000000000LL;
        --v9;
        --v17;
        v20 = v18;
        --v21;
      }
      while ( v21 );
      v15 = MiMapSinglePage(a1[7], v18, 1073741856, 0);
      v11 = v27;
      a1[4] = v15;
      a1[8] = v19;
    }
    else
    {
      v15 = a1[4];
    }
    v25 = a6;
    a1[5] = v15 | v11 & 0xFFF;
    MiMakeSystemAddressValid(v11, 0LL, 0, v25, 1);
  }
  return v11;
}
