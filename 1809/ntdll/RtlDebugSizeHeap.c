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
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugSizeHeap(unsigned __int64 a1, int a2, __int64 a3)
{
  char v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18015F480)(a1);
  v8 = -1LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSizeHeap") )
  {
    v9 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(a1, 0LL);
    v10 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( RtlpValidateHeapEntry(a1, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(a1, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v8;
}
