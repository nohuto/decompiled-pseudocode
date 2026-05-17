/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x18007ED20
 * Callers:
 *     <none>
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     TpSetPoolStackInformation @ 0x18007EE40 (TpSetPoolStackInformation.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007EE6C (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1)
{
  _QWORD *Heap; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+40h] [rbp+8h]

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 16LL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v3 = a1[1];
      if ( Heap[1] < v3 )
      {
        Heap[1] = v3;
        v7 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v7 = 1;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v7 && v6 >= 0 )
  {
    v4 = TpPoolReferenceExistingGlobalPool();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v6;
}
