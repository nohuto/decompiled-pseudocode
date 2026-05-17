/*
 * XREFs of LdrpAcquireTlsIndex @ 0x180036AE8
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x18003699C (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlClearBits @ 0x180035B30 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x180036C60 (RtlFindClearBitsAndSet.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  unsigned int ClearBitsAndSet; // eax
  void *Heap; // rax
  void *v8; // r14

  v2 = LdrpTlsBitmap;
  if ( !LdrpTlsBitmap )
  {
    LdrpTlsBitmap = 8;
    Src = &LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
LABEL_6:
    RtlClearBits((__int64)&LdrpTlsBitmap, v2 + 1, 7u);
    _bittestandset((signed __int32 *)Src, v2);
    *a1 = v2;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1LL, 0LL);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(unsigned int)(LdrpTlsBitmap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap += 8;
    goto LABEL_6;
  }
  Heap = (void *)RtlAllocateHeap(
                   (__int64)NtCurrentPeb()->ProcessHeap,
                   NtdllBaseTag + 786432,
                   4 * (((unsigned __int64)(v2 + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    LdrpActualBitmapSize = ((unsigned __int64)(v2 + 8) + 31) >> 5;
    memmove(Heap, Src, (unsigned __int64)(v2 + 7) >> 3);
    if ( Src != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Src);
    LdrpTlsBitmap = v2 + 8;
    Src = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
