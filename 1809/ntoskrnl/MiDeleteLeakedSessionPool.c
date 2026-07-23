/*
 * XREFs of MiDeleteLeakedSessionPool @ 0x1406E1BA0
 * Callers:
 *     MiCheckSessionPoolAllocations @ 0x1406E1AA4 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x140061C10 (RtlFindSetBitsEx.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x140134DB8 (MiPartitionIdToPointer.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC414 (MiDeleteSessionPoolRange.c)
 *     RtlFindNextForwardRunClearEx @ 0x1402EEC00 (RtlFindNextForwardRunClearEx.c)
 */

unsigned __int64 MiDeleteLeakedSessionPool()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rbp
  ULONG64 v2; // rsi
  ULONG64 SetBits; // rax
  ULONG64 v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // rdx
  unsigned __int64 v9; // rdx
  _RTL_BITMAP_EX BitMapHeader; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v11[6]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  memset(v11, 0, 0x28uLL);
  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v1 = MiPartitionIdToPointer(*(_WORD *)(v0 + 3182));
  BitMapHeader = *(_RTL_BITMAP_EX *)(v0 + 8024);
  v2 = 0LL;
  do
  {
    SetBits = RtlFindSetBitsEx(&BitMapHeader, 1uLL, v2);
    v4 = SetBits;
    if ( SetBits == -1LL || SetBits < v2 )
      break;
    NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)&BitMapHeader, SetBits, &v12);
    SizeOfBitMap = v12;
    if ( !NextForwardRunClear )
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v9 = SizeOfBitMap - v4;
    v2 += v9;
    MiDeleteSessionPoolRange(qword_14043A040 + (v4 << 21), v9 << 21, v11);
  }
  while ( v2 < BitMapHeader.SizeOfBitMap );
  v5 = v11[3];
  result = MiReturnCommit(v1, v11[3] - v11[1]);
  *(_QWORD *)(v0 + 232) -= v5;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v0 + 48), -v5);
  return result;
}
