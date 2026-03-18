/*
 * XREFs of MiGetNextPageTablePte @ 0x14004A9F0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x140119A60 (MiReleaseWalkLocks.c)
 *     MiIsPdeOrAboveAccessible @ 0x14011F3A0 (MiIsPdeOrAboveAccessible.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(unsigned __int16 *a1, unsigned __int64 DeepFreezeStartTime, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(unsigned __int16 *); // rax
  ULONG_PTR BugCheckParameter4; // rbx
  int v15; // eax
  ULONG_PTR v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)DeepFreezeStartTime;
  v4 = DeepFreezeStartTime;
  LODWORD(v5) = a3;
  if ( (_DWORD)a3 == 3
    && DeepFreezeStartTime >= 0xFFFFF6FB7DBED000uLL
    && DeepFreezeStartTime <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v18 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v4 >> 3) & 0x1FF));
      DeepFreezeStartTime = v3 | 0x20;
      if ( (v18 & 0x20) == 0 )
        DeepFreezeStartTime = v3;
      v3 = DeepFreezeStartTime;
      if ( (v18 & 0x42) != 0 )
        v3 = DeepFreezeStartTime | 0x42;
    }
  }
  v20 = v3;
  if ( !v3 )
    return !(_DWORD)a3 && (*(_BYTE *)a1 & 1) != 0;
  if ( (v3 & 1) == 0 )
  {
    if ( (int)a3 < 1 || (unsigned int)MiIsPdeOrAboveAccessible(v4) )
    {
      if ( (_DWORD)v5 )
      {
        if ( *(char *)a1 >= 0 )
        {
          v12 = *((_QWORD *)a1 + 1);
          if ( v12 )
            MiFlushTbList(v12, DeepFreezeStartTime, a3, v3);
          v13 = (void (__fastcall *)(unsigned __int16 *))*((_QWORD *)a1 + 19);
          if ( v13 )
            v13(a1);
          if ( (a1[1] & 1) == 0 )
            MiReleaseWalkLocks(a1);
          BugCheckParameter4 = (__int64)(v4 << 25) >> 16;
          v15 = MmAccessFault(
                  ((unsigned __int64)*((unsigned __int8 *)a1 + 7) << 57) | 0x100000000000002LL,
                  BugCheckParameter4);
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
      return 1LL;
    }
LABEL_40:
    if ( (*(_BYTE *)a1 & 0x40) != 0 )
    {
      v17 = *((_QWORD *)a1 + 20);
      for ( *(_DWORD *)v17 = v5; (_DWORD)v5; LODWORD(v5) = v5 - 1 )
        v4 = (__int64)(v4 << 25) >> 16;
      if ( v4 < ((*((_QWORD *)a1 + 3) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
        v4 = ((*((_QWORD *)a1 + 3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      result = 3LL;
      *(_QWORD *)(v17 + 8) = v4;
      return result;
    }
    return 1LL;
  }
  if ( v4 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v3 & 0x80u) != 0LL )
    goto LABEL_40;
  v8 = *a1;
  if ( (v8 & 0x200) != 0 && qword_1404668A8 != (PVOID)qword_1404668B0 )
  {
    v19 = MI_READ_PTE_LOCK_FREE(&v20);
    if ( (PVOID)((v19 >> 12) & 0xFFFFFFFFFLL) == *(&qword_1404668A8 + v5) )
      return 0LL;
  }
  if ( (int)v5 > ((*((unsigned __int8 *)a1 + 2) >> 2) & 7) )
    return 2LL;
  if ( (v8 & 0x40) == 0 )
    return 1LL;
  v9 = *((_QWORD *)a1 + 20);
  if ( (v8 & 4) != 0 )
  {
    MiLockPageTableInternal(*((_QWORD *)a1 + 2), v4, 0LL, v8);
    MiUnlockPageTableInternal(*((_QWORD *)a1 + 2));
    *((_QWORD *)a1 + 5) = v4;
  }
  v10 = (__int64)(v4 << 25) >> 16;
  v11 = ((*((_QWORD *)a1 + 3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 3LL;
  if ( v10 >= v11 )
    v11 = v10;
  *(_QWORD *)(v9 + 8) = v11;
  return result;
}
