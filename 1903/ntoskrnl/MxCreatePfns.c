/*
 * XREFs of MxCreatePfns @ 0x1409FBFF4
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x1409FBB00 (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x1409FBFF4 (MxCreatePfns.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MxCreatePfns @ 0x1409FBFF4 (MxCreatePfns.c)
 *     MxCreatePfn @ 0x1409FC288 (MxCreatePfn.c)
 *     MiIsRegularMemory @ 0x1409FC40C (MiIsRegularMemory.c)
 */

void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v5; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  ULONG_PTR v10; // rbp
  unsigned __int64 v11; // rax
  char v12; // r10
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+80h] [rbp+18h]

  if ( a1 <= a2 )
  {
    v17 = a3;
    v5 = a3;
    v7 = a1;
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE(v7);
      if ( (v16 & 1) != 0 )
      {
        v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
        v10 = v9 & (v8 >> 12);
        v16 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
        *(_QWORD *)(48 * (v13 & (v11 >> 12)) - 0x58000000000LL + 24) ^= (*(_QWORD *)(48 * (v13 & (v11 >> 12))
                                                                                   - 0x58000000000LL
                                                                                   + 24) ^ (*(_QWORD *)(48 * (v13 & (v11 >> 12)) - 0x58000000000LL + 24)
                                                                                          + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v5 )
        {
          if ( v12 >= 0 )
          {
            MxCreatePfn(v10, 0);
            if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
              MxCreatePfns((__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, (unsigned int)(v5 - 1), a4);
          }
          else
          {
            MiWriteValidPteNewProtection(v7);
            v14 = (__int64)(v7 << 25) >> 16;
            v15 = v14 + 4096;
            while ( v14 < v15 )
            {
              if ( (unsigned int)MiIsRegularMemory(a4, v10) )
                MxCreatePfn(v10, 1);
              ++v10;
              v14 += 8LL;
            }
            v5 = v17;
          }
        }
        else
        {
          MiWriteValidPteNewProtection(v7);
          if ( (unsigned int)MiIsRegularMemory(a4, v10) )
            MxCreatePfn(v10, 1);
        }
      }
      v7 += 8LL;
    }
    while ( v7 <= a2 );
  }
}
