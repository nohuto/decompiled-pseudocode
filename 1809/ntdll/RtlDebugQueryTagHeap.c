/*
 * XREFs of RtlDebugQueryTagHeap @ 0x18010805C
 * Callers:
 *     RtlQueryTagHeap @ 0x1800F23D0 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     RtlQueryTagHeap @ 0x1800F23D0 (RtlQueryTagHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlDebugQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  char v9; // si
  void *TagHeap; // r14
  int v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v11 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap(a1, 0LL) )
      TagHeap = RtlQueryTagHeap(a1, v11, a3, a4, a5);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return TagHeap;
}
