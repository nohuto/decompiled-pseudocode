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

__int64 __fastcall sub_18005611C(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  unsigned int ClearBitsAndSet; // eax
  void *Heap; // rax
  void *v8; // r14

  v2 = dword_180165250;
  if ( !dword_180165250 )
  {
    dword_180165250 = 8;
    Src = &unk_180165248;
    qword_180165260 = 1LL;
LABEL_6:
    RtlClearBits(&dword_180165250, v2 + 1, 7LL);
    _bittestandset((signed __int32 *)Src, v2);
    *a1 = v2;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&dword_180165250, 1LL);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(unsigned int)(dword_180165250 + 8) + 31) >> 5 <= qword_180165260 )
  {
    dword_180165250 += 8;
    goto LABEL_6;
  }
  Heap = (void *)RtlAllocateHeap(
                   (__int64)NtCurrentPeb()->ProcessHeap,
                   dword_18016542C + 786432,
                   4 * (((unsigned __int64)(v2 + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    qword_180165260 = ((unsigned __int64)(v2 + 8) + 31) >> 5;
    memmove(Heap, Src, (unsigned __int64)(v2 + 7) >> 3);
    if ( Src != &unk_180165248 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Src);
    dword_180165250 = v2 + 8;
    Src = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
