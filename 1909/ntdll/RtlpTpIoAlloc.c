/*
 * XREFs of RtlpTpIoAlloc @ 0x18008969C
 * Callers:
 *     RtlpTpIoLookup @ 0x180089550 (RtlpTpIoLookup.c)
 * Callees:
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     TpBindFileToDirect @ 0x180062B90 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x180080A64 (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  char *Heap; // rdi
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  char *v10; // rsi
  _DWORD *v11; // r14
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
         &TppPoolpGlobalPoolLock,
         (volatile signed __int32 **)&v15);
  v14 = v9;
  if ( v9 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = RtlpTpIoCallback;
    v10 = Heap + 76;
    v11 = Heap + 72;
    if ( v15 )
    {
      TppGetCurrentThreadNumaNode((__int64)v15, (_DWORD *)Heap + 18, (unsigned __int8 *)Heap + 76);
    }
    else
    {
      *v11 = 0;
      *v10 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = TppDirectTaskVFuncs;
    *((_DWORD *)Heap + 4) = *v11;
    Heap[20] = *v10;
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
