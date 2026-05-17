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

__int64 __fastcall LdrpAllocateTls(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rsi
  void *ProcessHeap; // r15
  unsigned int v6; // r14d
  void **p_ThreadLocalStoragePointer; // rbx
  _UNKNOWN **v8; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  __int64 Heap; // rax
  _QWORD *v12; // rcx
  __int64 i; // rsi
  _QWORD *v15; // r8
  __int64 Size; // [rsp+50h] [rbp-78h]
  unsigned int v17; // [rsp+D0h] [rbp+8h] BYREF
  int v18; // [rsp+D8h] [rbp+10h]
  _UNKNOWN **v19; // [rsp+E0h] [rbp+18h]
  __int64 v20; // [rsp+E8h] [rbp+20h]

  v4 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  v6 = LdrpTlsBitmap;
  v18 = LdrpTlsBitmap;
  if ( !LdrpTlsBitmap )
  {
    p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
LABEL_9:
    v4->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (void **)LdrpGetNewTlsVector((unsigned int)LdrpTlsBitmap);
  if ( p_ThreadLocalStoragePointer )
  {
    v8 = &LdrpTlsList;
    v19 = &LdrpTlsList;
    v9 = LdrpTlsList;
    while ( v9 != v8 )
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      Size = LdrpComputeTlsSizeAndAlignment(v10, &v17);
      v20 = v17;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v17 + 1LL + Size);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
        {
          v15 = p_ThreadLocalStoragePointer[i];
          if ( v15 )
            RtlFreeHeap((__int64)ProcessHeap, 0, *(v15 - 1));
        }
        RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)(p_ThreadLocalStoragePointer - 2));
        return 3221225495LL;
      }
      v12 = (_QWORD *)(~v20 & (Heap + v17 + 1));
      *(v12 - 1) = Heap;
      p_ThreadLocalStoragePointer[*((unsigned int *)v10 + 16)] = v12;
      memmove(v12, (const void *)v10[2], Size);
      v8 = v19;
      if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          873,
          (unsigned int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          *((_DWORD *)v10 + 16),
          *((_DWORD *)v10 + 6) - v10[2],
          (const void *)v10[2],
          p_ThreadLocalStoragePointer[*((unsigned int *)v10 + 16)]);
        v8 = v19;
      }
    }
    goto LABEL_9;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 3221225495LL;
}
