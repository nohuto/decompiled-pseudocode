/*
 * XREFs of MxCreatePfns @ 0x1409C108C
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x1409C0BA0 (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x1409C108C (MxCreatePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MxCreatePfns @ 0x1409C108C (MxCreatePfns.c)
 *     MxCreatePfn @ 0x1409C1310 (MxCreatePfn.c)
 *     MiIsRegularMemory @ 0x1409C144C (MiIsRegularMemory.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int16 v20; // dx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r12
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 <= a2 )
  {
    v7 = a1;
    do
    {
      v25 = MI_READ_PTE_LOCK_FREE(v7);
      if ( (v25 & 1) != 0 )
      {
        v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
        v10 = v9 & (v8 >> 12);
        v25 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25);
        v14 = v13 & (v11 >> 12);
        *(_QWORD *)(48 * v14 - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * v14 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v14 - 0x58000000000LL + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( a3 )
        {
          if ( (v12 & 0x80u) == 0LL )
          {
            MxCreatePfn(v10, v7, v14, 0LL);
            if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
              MxCreatePfns((__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), a4);
          }
          else
          {
            v19 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
            v20 = v19 | 0x800;
            if ( (v19 & 0x42) == 0 )
              v20 = v19;
            v21 = v19 | 0x800;
            v22 = ((unsigned __int16)((unsigned __int8)word_14043B26C << 8) ^ v20) & 0x100;
            if ( (v19 & 0x42) == 0 )
              v21 = v19;
            MiWriteValidPteNewProtection(v7, v21 ^ v22);
            v23 = (__int64)(v7 << 25) >> 16;
            v24 = v23 + 4096;
            while ( v23 < v24 )
            {
              if ( (unsigned int)MiIsRegularMemory(a4, v10) )
                MxCreatePfn(v10, v23, v14, 1LL);
              ++v10;
              v23 += 8LL;
            }
          }
        }
        else
        {
          v15 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
          v16 = v15 | 0x800;
          if ( (v15 & 0x42) == 0 )
            v16 = v15;
          v17 = v15 | 0x800;
          v18 = ((unsigned __int16)((unsigned __int8)word_14043B26C << 8) ^ v16) & 0x100;
          if ( (v15 & 0x42) == 0 )
            v17 = v15;
          MiWriteValidPteNewProtection(v7, v17 ^ v18);
          if ( (unsigned int)MiIsRegularMemory(a4, v10) )
            MxCreatePfn(v10, v7, v14, 1LL);
        }
      }
      v7 += 8LL;
    }
    while ( v7 <= a2 );
  }
}
