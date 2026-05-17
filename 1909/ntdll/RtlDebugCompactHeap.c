/*
 * XREFs of RtlDebugCompactHeap @ 0x180104AA4
 * Callers:
 *     RtlCompactHeap @ 0x180089B20 (RtlCompactHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     RtlCompactHeap @ 0x180089B20 (RtlCompactHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1801068D0 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCompactHeap(_DWORD *Src, int a2)
{
  char v4; // si
  __int64 v6; // rbx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_18015FA58)(Src);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v7 = Src[29] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap(Src, 0LL);
    v6 = RtlCompactHeap((char *)Src, v7, v8, v9);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
