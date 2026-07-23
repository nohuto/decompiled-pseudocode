/*
 * XREFs of sub_180055D84 @ 0x180055D84
 * Callers:
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_1800550B8 @ 0x1800550B8 (sub_1800550B8.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180055F60 @ 0x180055F60 (sub_180055F60.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 */

__int64 sub_180055D84()
{
  struct _TEB *v0; // r15
  PVOID ProcessHeap; // r12
  ULONG SizeOfBitMap; // r14d
  PVOID *p_ThreadLocalStoragePointer; // rbx
  const void **v4; // rax
  const void **v5; // rsi
  int v6; // ecx
  size_t v7; // r9
  bool v8; // zf
  char v9; // al
  int v10; // edx
  PVOID Heap; // rax
  _QWORD *v12; // rcx
  __int64 i; // rsi
  PVOID *v15; // r8
  size_t Size; // [rsp+50h] [rbp-78h]
  int v17; // [rsp+D0h] [rbp+8h]
  const void **v18; // [rsp+E0h] [rbp+18h]
  __int64 v19; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&stru_1801661B8);
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  if ( !BitMapHeader.SizeOfBitMap )
  {
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_13:
    v0->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&dword_180165240);
    RtlReleaseSRWLockShared(&stru_1801661B8);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (PVOID *)sub_180055F60(BitMapHeader.SizeOfBitMap);
  if ( p_ThreadLocalStoragePointer )
  {
    v4 = (const void **)off_18015F520;
    while ( v4 != (const void **)&off_18015F520 )
    {
      v5 = v4;
      v18 = (const void **)*v4;
      v6 = (*((_DWORD *)v4 + 13) >> 20) & 0xF;
      v7 = (_BYTE *)v4[3] - (_BYTE *)v4[2];
      Size = v7;
      v8 = (*((_DWORD *)v4 + 13) & 0xF00000) == 0;
      v9 = v6 - 1;
      if ( v8 )
        v9 = v6;
      v10 = 1 << v9;
      if ( (unsigned int)(1 << v9) < 0x10 )
        v10 = 16;
      v17 = v10 - 1;
      v19 = (unsigned int)(v10 - 1);
      Heap = RtlAllocateHeap(ProcessHeap, Flags + 786432, v19 + v7 + 1);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&stru_1801661B8);
        for ( i = 0LL; (unsigned int)i < SizeOfBitMap; i = (unsigned int)(i + 1) )
        {
          v15 = (PVOID *)p_ThreadLocalStoragePointer[i];
          if ( v15 )
            RtlFreeHeap(ProcessHeap, 0, *(v15 - 1));
        }
        RtlFreeHeap(ProcessHeap, 0, p_ThreadLocalStoragePointer - 2);
        return 3221225495LL;
      }
      v12 = (_QWORD *)(~v19 & ((unsigned __int64)Heap + (unsigned int)(v17 + 1)));
      *(v12 - 1) = Heap;
      p_ThreadLocalStoragePointer[*((unsigned int *)v5 + 16)] = v12;
      memmove(v12, v5[2], Size);
      v4 = v18;
      if ( (dword_18015FAB0 & 5) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          873,
          (unsigned int)"LdrpAllocateTls",
          2,
          (__int64)"TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          *((_DWORD *)v5 + 16),
          *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 4),
          v5[2],
          p_ThreadLocalStoragePointer[*((unsigned int *)v5 + 16)]);
        v4 = v18;
      }
    }
    goto LABEL_13;
  }
  RtlReleaseSRWLockShared(&stru_1801661B8);
  return 3221225495LL;
}
