/*
 * XREFs of LdrpAllocateTls @ 0x180055E24
 * Callers:
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     LdrpInitializeTls @ 0x180055158 (LdrpInitializeTls.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpGetNewTlsVector @ 0x180056000 (LdrpGetNewTlsVector.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D5908 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTls(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _TEB *v4; // r15
  void *ProcessHeap; // r12
  unsigned int v6; // r14d
  void **p_ThreadLocalStoragePointer; // rbx
  const void **v8; // rax
  const void **v9; // rsi
  int v10; // ecx
  size_t v11; // r9
  bool v12; // zf
  char v13; // al
  int v14; // edx
  __int64 Heap; // rax
  _QWORD *v16; // rcx
  __int64 i; // rsi
  _QWORD *v19; // r8
  size_t Size; // [rsp+50h] [rbp-78h]
  int v21; // [rsp+D0h] [rbp+8h]
  const void **v22; // [rsp+E0h] [rbp+18h]
  __int64 v23; // [rsp+E8h] [rbp+20h]

  v4 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  v6 = LdrpTlsBitmap;
  if ( !LdrpTlsBitmap )
  {
    p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
LABEL_13:
    v4->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (void **)LdrpGetNewTlsVector((unsigned int)LdrpTlsBitmap);
  if ( p_ThreadLocalStoragePointer )
  {
    v8 = (const void **)LdrpTlsList;
    while ( v8 != (const void **)&LdrpTlsList )
    {
      v9 = v8;
      v22 = (const void **)*v8;
      v10 = (*((_DWORD *)v8 + 13) >> 20) & 0xF;
      v11 = (_BYTE *)v8[3] - (_BYTE *)v8[2];
      Size = v11;
      v12 = (*((_DWORD *)v8 + 13) & 0xF00000) == 0;
      v13 = v10 - 1;
      if ( v12 )
        v13 = v10;
      v14 = 1 << v13;
      if ( (unsigned int)(1 << v13) < 0x10 )
        v14 = 16;
      v21 = v14 - 1;
      v23 = (unsigned int)(v14 - 1);
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 786432, v23 + v11 + 1);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
        {
          v19 = p_ThreadLocalStoragePointer[i];
          if ( v19 )
            RtlFreeHeap((__int64)ProcessHeap, 0, *(v19 - 1));
        }
        RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)(p_ThreadLocalStoragePointer - 2));
        return 3221225495LL;
      }
      v16 = (_QWORD *)(~v23 & (Heap + (unsigned int)(v21 + 1)));
      *(v16 - 1) = Heap;
      p_ThreadLocalStoragePointer[*((unsigned int *)v9 + 16)] = v16;
      memmove(v16, v9[2], Size);
      v8 = v22;
      if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          873,
          (unsigned int)"LdrpAllocateTls",
          2,
          (__int64)"TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          *((_DWORD *)v9 + 16),
          *((_DWORD *)v9 + 6) - *((_DWORD *)v9 + 4),
          v9[2],
          p_ThreadLocalStoragePointer[*((unsigned int *)v9 + 16)]);
        v8 = v22;
      }
    }
    goto LABEL_13;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 3221225495LL;
}
