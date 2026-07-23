/*
 * XREFs of MiGetNextPageTablePte @ 0x140070A20
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x140122868 (MiReleaseWalkLocks.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(int *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 result; // rax
  int v8; // r10d
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(int *); // rax
  __int64 BugCheckParameter4; // rbx
  int v15; // eax
  ULONG_PTR v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = (unsigned __int64)a2;
  v4 = (int)a3;
  v5 = *a2;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    a3 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( a3 )
    {
      v18 = *(_QWORD *)(a3 + 8 * ((v3 >> 3) & 0x1FF));
      a3 = v5 | 0x20;
      if ( (v18 & 0x20) == 0 )
        a3 = v5;
      v5 = a3;
      if ( (v18 & 0x42) != 0 )
        v5 = a3 | 0x42;
    }
  }
  v20 = v5;
  if ( !v5 )
    return !(_DWORD)v4 && (*a1 & 1) != 0;
  if ( (v5 & 1) != 0 && v3 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v5 & 1) == 0 )
  {
    if ( !(_DWORD)v4 )
      return 1LL;
    if ( (*a1 & 0x80u) == 0 )
    {
      v12 = *((_QWORD *)a1 + 2);
      if ( v12 )
        MiFlushTbList(v12, v5, a3, v4);
      v13 = (void (__fastcall *)(int *))*((_QWORD *)a1 + 20);
      if ( v13 )
        v13(a1);
      if ( !*((_BYTE *)a1 + 8) )
        MiReleaseWalkLocks(a1);
      BugCheckParameter4 = (__int64)(v3 << 25) >> 16;
      v15 = MmAccessFault(
              ((unsigned __int64)*((unsigned __int8 *)a1 + 9) << 57) | 0x100000000000002LL,
              BugCheckParameter4,
              0LL,
              0LL);
      v16 = v15;
      if ( v15 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v16, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
      }
      return 1LL;
    }
    return 0LL;
  }
  v8 = *a1;
  if ( (v5 & 0x80u) == 0LL )
  {
    if ( (v8 & 0x200) == 0
      || qword_14043BEE8 == (PVOID)qword_14043BEF0
      || (v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20),
          (PVOID)((v19 >> 12) & 0xFFFFFFFFFLL) != *(&qword_14043BEE8 + v4)) )
    {
      if ( (int)v4 > *((unsigned __int8 *)a1 + 10) )
        return 2LL;
      if ( (v8 & 0x40) != 0 )
      {
        v9 = *((_QWORD *)a1 + 21);
        if ( (v8 & 4) != 0 )
        {
          MiLockPageTableInternal(*((_QWORD *)a1 + 3), v3, 0);
          MiUnlockPageTableInternal(*((_QWORD *)a1 + 3), ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          *((_QWORD *)a1 + 6) = v3;
        }
        v10 = (__int64)(v3 << 25) >> 16;
        v11 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        result = 3LL;
        if ( v10 >= v11 )
          v11 = v10;
        *(_QWORD *)(v9 + 8) = v11;
        return result;
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( (v8 & 0x40) == 0 )
    return 1LL;
  v17 = *((_QWORD *)a1 + 21);
  for ( *(_DWORD *)v17 = v4; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
    v3 = (__int64)(v3 << 25) >> 16;
  if ( v3 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    v3 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 3LL;
  *(_QWORD *)(v17 + 8) = v3;
  return result;
}
