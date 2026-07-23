/*
 * XREFs of sub_18005611C @ 0x18005611C
 * Callers:
 *     sub_180055FD0 @ 0x180055FD0 (sub_180055FD0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlFindClearBitsAndSet @ 0x180056290 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x180059350 (RtlClearBits.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18005611C(ULONG *a1, _BYTE *a2)
{
  ULONG SizeOfBitMap; // ebx
  ULONG ClearBitsAndSet; // eax
  ULONG *Heap; // rax
  ULONG *v8; // r14

  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  if ( !BitMapHeader.SizeOfBitMap )
  {
    BitMapHeader.SizeOfBitMap = 8;
    BitMapHeader.Buffer = (PULONG)&unk_180165248;
    qword_180165260 = 1LL;
LABEL_6:
    RtlClearBits(&BitMapHeader, SizeOfBitMap + 1, 7u);
    _bittestandset((signed __int32 *)BitMapHeader.Buffer, SizeOfBitMap);
    *a1 = SizeOfBitMap;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(BitMapHeader.SizeOfBitMap + 8) + 31) >> 5 <= qword_180165260 )
  {
    BitMapHeader.SizeOfBitMap += 8;
    goto LABEL_6;
  }
  Heap = (ULONG *)RtlAllocateHeap(
                    NtCurrentPeb()->ProcessHeap,
                    Flags + 786432,
                    4 * (((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    qword_180165260 = ((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5;
    memmove(Heap, BitMapHeader.Buffer, (unsigned __int64)(SizeOfBitMap + 7) >> 3);
    if ( (_UNKNOWN *)BitMapHeader.Buffer != &unk_180165248 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BitMapHeader.Buffer);
    BitMapHeader.SizeOfBitMap = SizeOfBitMap + 8;
    BitMapHeader.Buffer = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
