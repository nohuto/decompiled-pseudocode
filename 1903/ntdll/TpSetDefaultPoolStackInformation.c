/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x18007E680
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     TpSetPoolStackInformation @ 0x18007E7A0 (TpSetPoolStackInformation.c)
 *     sub_18007E7CC @ 0x18007E7CC (sub_18007E7CC.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(SIZE_T *a1)
{
  PTP_POOL_STACK_INFORMATION Heap; // rax
  SIZE_T v3; // rcx
  _TP_POOL *v4; // rax
  NTSTATUS v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+40h] [rbp+8h]

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !PoolStackInformation || PoolStackInformation->StackCommit < a1[1] || PoolStackInformation->StackReserve < *a1 )
  {
    RtlAcquireSRWLockExclusive(&stru_180166480);
    Heap = PoolStackInformation;
    if ( PoolStackInformation
      || (Heap = (PTP_POOL_STACK_INFORMATION)RtlAllocateHeap(
                                               NtCurrentPeb()->ProcessHeap,
                                               (dword_180166080 + 786432) | 8,
                                               0x10uLL),
          (PoolStackInformation = Heap) != 0LL) )
    {
      v3 = a1[1];
      if ( Heap->StackCommit < v3 )
      {
        Heap->StackCommit = v3;
        v7 = 1;
      }
      if ( Heap->StackReserve < *a1 )
      {
        Heap->StackReserve = *a1;
        v7 = 1;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&stru_180166480);
  }
  if ( v7 && v6 >= 0 )
  {
    v4 = (_TP_POOL *)sub_18007E7CC();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4, PoolStackInformation);
      sub_18002F2D4((const void **)&qword_180166470, &stru_180166480);
    }
  }
  return (unsigned int)v6;
}
