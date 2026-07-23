/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x1800F6EB0
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800F6D90 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, __int64 a2)
{
  char v4; // r14
  PVOID *v5; // rsi
  _DWORD *v6; // rbx
  PVOID **v7; // rdi
  bool v8; // zf
  PVOID **v9; // rax
  PVOID *v10; // rax
  PVOID v11; // r8
  __int64 v12; // rax
  PVOID BaseAddress; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_BaseAddress; // [rsp+28h] [rbp-8h]

  p_BaseAddress = &BaseAddress;
  BaseAddress = &BaseAddress;
  v4 = 0;
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v5 = (PVOID *)RtlpSecMemListHead;
  if ( RtlpSecMemListHead != &RtlpSecMemListHead )
  {
    do
    {
      v6 = v5 + 2;
      v7 = (PVOID **)v5;
      ++*((_DWORD *)v5 + 4);
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v5[3])(a1, a2) )
        v4 = 1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v8 = (*v6)-- == 1;
      v5 = (PVOID *)*v5;
      if ( v8 )
      {
        if ( v5[1] != v7
          || (v9 = (PVOID **)v7[1], *v9 != (PVOID *)v7)
          || (*v9 = v5, v5[1] = v9, v10 = p_BaseAddress, *p_BaseAddress != &BaseAddress) )
        {
LABEL_15:
          __fastfail(3u);
        }
        v7[1] = p_BaseAddress;
        *v7 = &BaseAddress;
        *v10 = v7;
        p_BaseAddress = (PVOID *)v7;
      }
    }
    while ( v5 != &RtlpSecMemListHead );
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( 1 )
  {
    v11 = BaseAddress;
    if ( BaseAddress == &BaseAddress )
      return v4;
    if ( *((PVOID **)BaseAddress + 1) != &BaseAddress )
      goto LABEL_15;
    v12 = *(_QWORD *)BaseAddress;
    if ( *(PVOID *)(*(_QWORD *)BaseAddress + 8LL) != BaseAddress )
      goto LABEL_15;
    BaseAddress = *(PVOID *)BaseAddress;
    *(_QWORD *)(v12 + 8) = &BaseAddress;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
}
