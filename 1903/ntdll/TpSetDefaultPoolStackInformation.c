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
  if ( !qword_180166078 || *(_QWORD *)(qword_180166078 + 8) < a1[1] || *(_QWORD *)qword_180166078 < *a1 )
  {
    RtlAcquireSRWLockExclusive(&qword_180166480);
    Heap = (_QWORD *)qword_180166078;
    if ( qword_180166078
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_180166080 + 786432) | 8u, 16LL),
          (qword_180166078 = (__int64)Heap) != 0) )
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
    RtlReleaseSRWLockExclusive(&qword_180166480);
  }
  if ( v7 && v6 >= 0 )
  {
    v4 = sub_18007E7CC();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4);
      sub_18002F2D4((const void **)&qword_180166470, (__int64)&qword_180166480);
    }
  }
  return (unsigned int)v6;
}
