/*
 * XREFs of MxMovePageTables @ 0x1409C0EB0
 * Callers:
 *     MxRelocatePageTables @ 0x1409C0C44 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x1409C0EB0 (MxMovePageTables.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MxMovePageTables @ 0x1409C0EB0 (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x1409C144C (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 */

unsigned __int64 __fastcall MxMovePageTables(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v16 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
  v11 = (result >> 12) & 0xFFFFFFFFFLL;
  if ( v5 <= a2 )
  {
    v12 = a5;
    while ( 1 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        v16 = MI_READ_PTE_LOCK_FREE((v10 & (v5 >> 9)) - 0x98000000000LL);
        v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
      }
      result = MI_READ_PTE_LOCK_FREE(v5);
      v16 = result;
      if ( (result & 1) == 0 || v5 == 0xFFFFF6FB7DBEDF68uLL || a3 && (result & 0x80u) != 0LL )
        goto LABEL_12;
      v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
      if ( a3 )
        break;
      result = MiIsRegularMemory(a4, (v13 >> 12) & 0xFFFFFFFFFLL);
      if ( (_DWORD)result )
        goto LABEL_10;
LABEL_11:
      v10 = 0x7FFFFFFFF8LL;
LABEL_12:
      v5 += 8LL;
      if ( v5 > a2 )
        return result;
    }
    MxSwapPages(v12, v5);
    MxMovePageTables((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1, a4, v12);
    v16 = MI_READ_PTE_LOCK_FREE(v5);
    v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
LABEL_10:
    v15 = 48 * v14 - 0x58000000000LL;
    result = (v11 ^ *(_QWORD *)(v15 + 40)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v15 + 40) ^= result;
    goto LABEL_11;
  }
  return result;
}
