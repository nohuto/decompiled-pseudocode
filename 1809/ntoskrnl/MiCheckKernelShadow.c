/*
 * XREFs of MiCheckKernelShadow @ 0x14012B2E8
 * Callers:
 *     MiCheckRelevantKernelShadows @ 0x14012B1AC (MiCheckRelevantKernelShadows.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfn @ 0x140098F50 (MiVaToPfn.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14012B3CC (MiReadWriteAnyLevelShadowPte.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckKernelShadow(char a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rsi
  ULONG_PTR v9; // rax
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  ULONG_PTR v14; // [rsp+68h] [rbp+10h] BYREF

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0xFFFFFFFFLL;
  v8 = 0LL;
  while ( v5 <= v6 )
  {
    v9 = MiReadWriteAnyLevelShadowPte(v5, 0LL, 0LL, ZeroPte);
    v14 = v9;
    BugCheckParameter4 = v9;
    if ( (v9 & 1) == 0 )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3602uLL, v5, v9, v9);
      return v8 + a2;
    }
    MiVaToPfn(v8 + a2);
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14);
    if ( v12 != ((v11 >> 12) & 0xFFFFFFFFFLL) )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3603uLL, v5, BugCheckParameter4, BugCheckParameter4);
      return v8 + a2;
    }
    v5 += 8LL;
    v8 += 4096LL;
  }
  return v7;
}
