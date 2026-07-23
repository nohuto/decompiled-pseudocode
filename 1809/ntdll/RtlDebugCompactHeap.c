/*
 * XREFs of RtlDebugCompactHeap @ 0x180107568
 * Callers:
 *     RtlCompactHeap @ 0x18008C0A0 (RtlCompactHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     RtlCompactHeap @ 0x18008C0A0 (RtlCompactHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugCompactHeap(PRTL_CRITICAL_SECTION *Src, int a2)
{
  char v4; // si
  SIZE_T v6; // rbx
  ULONG v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_18015F488)(Src);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v7 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap(Src);
    v6 = RtlCompactHeap(Src, v7);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
