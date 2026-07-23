/*
 * XREFs of LdrpAllocateTls @ 0x18003673C
 * Callers:
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     LdrpInitializeTls @ 0x180035890 (LdrpInitializeTls.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpComputeTlsSizeAndAlignment @ 0x1800368DC (LdrpComputeTlsSizeAndAlignment.c)
 *     LdrpGetNewTlsVector @ 0x18003692C (LdrpGetNewTlsVector.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // rsi
  void *ProcessHeap; // r15
  unsigned int SizeOfBitMap; // r14d
  void **p_ThreadLocalStoragePointer; // rbx
  _UNKNOWN **v4; // rax
  _QWORD *v5; // r12
  _QWORD *v6; // r13
  PVOID Heap; // rax
  _QWORD *v8; // rcx
  __int64 i; // rsi
  PVOID *v11; // r8
  __int64 Size; // [rsp+50h] [rbp-78h]
  unsigned int v13; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+D8h] [rbp+10h]
  _UNKNOWN **v15; // [rsp+E0h] [rbp+18h]
  __int64 v16; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v14 = LdrpTlsBitmap.SizeOfBitMap;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_9:
    v0->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (void **)LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
  if ( p_ThreadLocalStoragePointer )
  {
    v4 = &LdrpTlsList;
    v15 = &LdrpTlsList;
    v5 = LdrpTlsList;
    while ( v5 != v4 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
      Size = LdrpComputeTlsSizeAndAlignment(v6, &v13);
      v16 = v13;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v13 + 1LL + Size);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        for ( i = 0LL; (unsigned int)i < SizeOfBitMap; i = (unsigned int)(i + 1) )
        {
          v11 = (PVOID *)p_ThreadLocalStoragePointer[i];
          if ( v11 )
            RtlFreeHeap(ProcessHeap, 0, *(v11 - 1));
        }
        RtlFreeHeap(ProcessHeap, 0, p_ThreadLocalStoragePointer - 2);
        return 3221225495LL;
      }
      v8 = (_QWORD *)(~v16 & ((unsigned __int64)Heap + v13 + 1));
      *(v8 - 1) = Heap;
      p_ThreadLocalStoragePointer[*((unsigned int *)v6 + 16)] = v8;
      memmove(v8, (const void *)v6[2], Size);
      v4 = v15;
      if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          873,
          (unsigned int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          *((_DWORD *)v6 + 16),
          *((_DWORD *)v6 + 6) - v6[2],
          (const void *)v6[2],
          p_ThreadLocalStoragePointer[*((unsigned int *)v6 + 16)]);
        v4 = v15;
      }
    }
    goto LABEL_9;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 3221225495LL;
}
