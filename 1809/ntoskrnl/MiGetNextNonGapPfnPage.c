/*
 * XREFs of MiGetNextNonGapPfnPage @ 0x1401845A8
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 *     MiGetFileOnlyRanges @ 0x1402A6698 (MiGetFileOnlyRanges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiGetNextNonGapPfnPage(unsigned __int64 *a1, unsigned __int64 *a2, char a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  int v7; // r13d
  char *AnyMultiplexedVm; // rax
  bool v9; // cc
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 i; // rbp
  unsigned __int64 NextPageTable; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  char *v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-58h]
  unsigned int v35; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *a1;
  v5 = 0LL;
  if ( !*a1 )
    v4 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = 0xFFFFFD8000000000uLL;
  v7 = a4 != 0 ? 7 : 3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v29 = AnyMultiplexedVm;
  v9 = v4 <= 0xFFFFF6FEBFFFFFF8uLL;
  v10 = 0LL;
  v11 = 0LL;
  i = 0LL;
  while ( 2 )
  {
    if ( v9 )
    {
      if ( v10 )
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v10);
        v10 = 0LL;
      }
      NextPageTable = MiGetNextPageTable(v4, 0xFFFFF6FEBFFFFFF8uLL, 0LL, a3, v7, &v35);
      v4 = NextPageTable;
      if ( NextPageTable )
      {
        if ( !a4 )
          v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v35 )
        {
          if ( v10 && v35 )
          {
            v27 = v35;
            do
            {
              v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v27;
            }
            while ( v27 );
          }
          i = 0x200000LL;
          if ( v35 > 1 )
          {
            v28 = v35 - 1;
            do
            {
              i <<= 9;
              --v28;
            }
            while ( v28 );
          }
          v14 = (__int64)(0xFFFFF6FEBFFFFFF8uLL - NextPageTable) >> 3;
          v11 = NextPageTable;
          AnyMultiplexedVm = v29;
          if ( i >> 12 > v14 + 1 )
            i = (v14 + 1) << 12;
          break;
        }
        v17 = NextPageTable;
        while ( 1 )
        {
          v30 = MI_READ_PTE_LOCK_FREE(v17);
          if ( (v30 & 1) != 0 )
          {
            if ( qword_14043BEE8 == (PVOID)qword_14043BEF0 )
              break;
            v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30);
            if ( ((v18 >> 12) & 0xFFFFFFFFFLL) != v19 )
              break;
          }
          v17 += 8LL;
          if ( v17 > 0xFFFFF6FEBFFFFFF8uLL || (v17 & 0xFFF) == 0 )
            goto LABEL_28;
        }
        v11 = v17;
        if ( !v17 )
        {
LABEL_28:
          AnyMultiplexedVm = v29;
          v4 = v17;
          v9 = v17 <= 0xFFFFF6FEBFFFFFF8uLL;
          continue;
        }
        v20 = v17 + 8;
        for ( i = 4096LL; v20 <= 0xFFFFF6FEBFFFFFF8uLL; i += 4096LL )
        {
          if ( (v20 & 0xFFF) == 0 )
            break;
          v21 = MI_READ_PTE_LOCK_FREE(v20);
          v20 = v24 + 8;
          v30 = v21;
          if ( (v21 & 1) == 0 )
            break;
          if ( v22 != v23 )
          {
            v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30);
            if ( ((v25 >> 12) & 0xFFFFFFFFFLL) == v26 )
              break;
          }
        }
      }
      AnyMultiplexedVm = v29;
    }
    break;
  }
  if ( v10 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v10);
  if ( v11 )
  {
    v4 = v11 + 8 * (i >> 12);
    v15 = (__int64)(v11 << 25) >> 16;
    v5 = v31 - v15;
    if ( v15 + i <= v31 )
      v5 = i;
  }
  else
  {
    v15 = 0LL;
  }
  *a2 = v5;
  *a1 = v4;
  return v15;
}
