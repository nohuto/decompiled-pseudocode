/*
 * XREFs of MxZeroPageTablePfns @ 0x1409C185C
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x1409C0BA0 (MiInitializePfnsForValidMappings.c)
 *     MxZeroPageTablePfns @ 0x1409C185C (MxZeroPageTablePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MxZeroPageTablePfns @ 0x1409C185C (MxZeroPageTablePfns.c)
 */

void __fastcall MxZeroPageTablePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rdi
  char v8; // bl
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  void *v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 <= a2 )
  {
    v7 = a1;
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE(v7);
      v8 = v16;
      if ( (v16 & 1) != 0 )
      {
        v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
        v12 = (void *)(v11 + 48 * (v10 & (v9 >> 12)));
        v16 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
        memset((void *)(v15 + 48 * (v14 & (v13 >> 12))), 0, 0x30uLL);
        if ( !a3 || v8 >= 0 )
        {
          memset(v12, 0, 0x30uLL);
          if ( a3 > 1 && v7 != 0xFFFFF6FB7DBEDF68uLL )
            MxZeroPageTablePfns(
              (__int64)(v7 << 25) >> 16,
              ((__int64)(v7 << 25) >> 16) + 4088,
              (unsigned int)(a3 - 1),
              a4);
        }
      }
      v7 += 8LL;
    }
    while ( v7 <= a2 );
  }
}
