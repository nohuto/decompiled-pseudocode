/*
 * XREFs of RtlDebugSizeHeap @ 0x180108AA4
 * Callers:
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18006D464 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugSizeHeap(PRTL_CRITICAL_SECTION *HeapHandle, int a2, char *a3)
{
  char v6; // r14
  SIZE_T v8; // rdi
  ULONG v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_18015F480)(HeapHandle);
  v8 = -1LL;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlSizeHeap") )
  {
    v9 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(HeapHandle);
    v10 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(HeapHandle, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v8;
}
