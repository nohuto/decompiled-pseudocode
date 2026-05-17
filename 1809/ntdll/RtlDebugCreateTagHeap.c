/*
 * XREFs of RtlDebugCreateTagHeap @ 0x1801079B0
 * Callers:
 *     RtlCreateTagHeap @ 0x180059E70 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlCreateTagHeap @ 0x180059E70 (RtlCreateTagHeap.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_DWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v10 = Src[29] | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v10 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap(Src, 0LL) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    RtlpValidateHeapHeaders(Src);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
