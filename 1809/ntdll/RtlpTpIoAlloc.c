/*
 * XREFs of RtlpTpIoAlloc @ 0x18008BF3C
 * Callers:
 *     RtlpTpIoLookup @ 0x18008BDF0 (RtlpTpIoLookup.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x180030EA8 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x18003135C (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  char *Heap; // rdi
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  _DWORD *v10; // rsi
  char *v11; // r14
  _PEB_LDR_DATA *v12; // rcx
  unsigned __int32 v14; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v9 = -1073741801;
    goto LABEL_7;
  }
  v9 = TppPoolpReferenceGlobalPool(
         (volatile signed __int32 **)&TppPoolpGlobalPool,
         (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock,
         (volatile signed __int32 **)&v15);
  v14 = v9;
  if ( v9 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = RtlpTpIoCallback;
    v10 = Heap + 72;
    v11 = Heap + 76;
    if ( v15 )
    {
      TppGetCurrentThreadNumaNode((__int64)v15, (_DWORD *)Heap + 18, (unsigned __int8 *)Heap + 76);
    }
    else
    {
      *v10 = 0;
      *v11 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = TppDirectTaskVFuncs;
    *((_DWORD *)Heap + 4) = *v10;
    Heap[20] = *v11;
    v12 = v15;
    *((_QWORD *)Heap + 10) = v15;
    v9 = TpBindFileToDirect(a3, (__int64)(Heap + 8), v12);
    v14 = v9;
    if ( v9 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v9 = 0;
LABEL_7:
      v14 = v9;
    }
  }
  if ( v9 < 0 )
  {
    if ( v15 )
      TpDereferenceGlobalPool(v15, v6, v8);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v14;
    }
  }
  return (unsigned int)v9;
}
