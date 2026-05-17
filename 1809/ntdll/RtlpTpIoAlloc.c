/*
 * XREFs of RtlpTpIoAlloc @ 0x18008BF2C
 * Callers:
 *     RtlpTpIoLookup @ 0x18008BDE0 (RtlpTpIoLookup.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x180030EA8 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x18003135C (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int64 Heap; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _DWORD *v11; // rsi
  _BYTE *v12; // r14
  _PEB_LDR_DATA *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 184LL);
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_7;
  }
  v10 = TppPoolpReferenceGlobalPool(
          (volatile signed __int32 **)&TppPoolpGlobalPool,
          (char *)&TppPoolpGlobalPoolLock,
          (volatile signed __int32 **)&v16,
          v9);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = RtlpTpIoCallback;
    v11 = (_DWORD *)(Heap + 72);
    v12 = (_BYTE *)(Heap + 76);
    if ( v16 )
    {
      TppGetCurrentThreadNumaNode((__int64)v16, (_DWORD *)(Heap + 72), (unsigned __int8 *)(Heap + 76));
    }
    else
    {
      *v11 = 0;
      *v12 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = TppDirectTaskVFuncs;
    *(_DWORD *)(Heap + 16) = *v11;
    *(_BYTE *)(Heap + 20) = *v12;
    v13 = v16;
    *(_QWORD *)(Heap + 80) = v16;
    v10 = TpBindFileToDirect(a3, Heap + 8, v13, v9);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v10 = 0;
LABEL_7:
      v15 = v10;
    }
  }
  if ( v10 < 0 )
  {
    if ( v16 )
      TpDereferenceGlobalPool((__int64)v16, v6, v8, v9);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}
