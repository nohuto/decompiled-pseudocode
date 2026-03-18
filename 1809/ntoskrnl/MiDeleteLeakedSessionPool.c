/*
 * XREFs of MiDeleteLeakedSessionPool @ 0x1406E0920
 * Callers:
 *     MiCheckSessionPoolAllocations @ 0x1406E0824 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x140061C10 (RtlFindSetBitsEx.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x140134CC8 (MiPartitionIdToPointer.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC124 (MiDeleteSessionPoolRange.c)
 *     RtlFindNextForwardRunClearEx @ 0x1402EE910 (RtlFindNextForwardRunClearEx.c)
 */

unsigned __int64 MiDeleteLeakedSessionPool()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 SetBits; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[6]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  memset(v11, 0, 0x28uLL);
  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v1 = MiPartitionIdToPointer(*(_WORD *)(v0 + 3182));
  v10[1] = *(_QWORD *)(v0 + 8032);
  v2 = 0LL;
  v10[0] = *(_QWORD *)(v0 + 8024);
  do
  {
    SetBits = RtlFindSetBitsEx(v10, 1uLL, v2);
    v4 = SetBits;
    if ( SetBits == -1LL || SetBits < v2 )
      break;
    NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v10, SetBits, &v12);
    v8 = v12;
    if ( !NextForwardRunClear )
      v8 = v10[0];
    v9 = v8 - v4;
    v2 += v9;
    MiDeleteSessionPoolRange(qword_140438F80 + (v4 << 21), v9 << 21, v11);
  }
  while ( v2 < v10[0] );
  v5 = v11[3];
  result = MiReturnCommit(v1, v11[3] - v11[1]);
  *(_QWORD *)(v0 + 232) -= v5;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v0 + 48), -v5);
  return result;
}
