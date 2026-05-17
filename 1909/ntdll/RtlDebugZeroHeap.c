/*
 * XREFs of RtlDebugZeroHeap @ 0x1801061A4
 * Callers:
 *     RtlZeroHeap @ 0x1800F2A30 (RtlZeroHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlZeroHeap @ 0x1800F2A30 (RtlZeroHeap.c)
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugZeroHeap(unsigned __int64 a1, int a2)
{
  char v4; // si
  int v6; // ebx
  unsigned int v7; // ebx

  v4 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18015FA60)(a1);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v4 = 1;
    v6 |= 1u;
  }
  if ( (unsigned __int8)RtlpValidateHeap(a1, 0LL) )
    v7 = RtlZeroHeap(a1, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v7;
}
