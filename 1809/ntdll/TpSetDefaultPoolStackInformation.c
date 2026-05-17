/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x180032AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800313A4 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolStackInformation @ 0x180032BC0 (TpSetPoolStackInformation.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1, char *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD *Heap; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-18h]
  char v13; // [rsp+40h] [rbp+8h]

  v13 = 0;
  v12 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = TppPoolpGlobalPoolStackSize;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, (unsigned __int64)a2, a3, a4);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 16LL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v7 = a1[1];
      if ( Heap[1] < v7 )
      {
        Heap[1] = v7;
        v13 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v13 = 1;
      }
    }
    else
    {
      v12 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v13 && v12 >= 0 )
  {
    v8 = TpPoolReferenceExistingGlobalPool(v5, a2, (__int64)a3, a4);
    if ( v8 )
    {
      v12 = TpSetPoolStackInformation(v8);
      TppPoolpDereferenceGlobalPool(
        (const void **)&TppPoolpGlobalPool,
        (unsigned __int64)&TppPoolpGlobalPoolLock,
        v9,
        v10);
    }
  }
  return (unsigned int)v12;
}
