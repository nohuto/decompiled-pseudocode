/*
 * XREFs of IoSetDumpRangeForPartialKernelDump @ 0x14029C8A0
 * Callers:
 *     IopAddPageDumpRange @ 0x140295FC4 (IopAddPageDumpRange.c)
 * Callees:
 *     IoSetDumpRange @ 0x140295270 (IoSetDumpRange.c)
 *     RtlNumberOfSetBitsEx @ 0x14030D500 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall IoSetDumpRangeForPartialKernelDump(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  unsigned int v8; // ebx

  if ( *(_QWORD *)(CrashdmpDumpBlock + 1424) <= (unsigned __int64)RtlNumberOfSetBitsEx(*(_QWORD *)(a1 + 16)) )
    return 3221225507LL;
  **(_QWORD **)(a1 + 32) = *(_QWORD *)(CrashdmpDumpBlock + 1424) - RtlNumberOfSetBitsEx(*(_QWORD *)(a1 + 16));
  v8 = IoSetDumpRange(a1, a2, a3, a4);
  *(_QWORD *)(*(_QWORD *)(CrashdmpDumpBlock + 8) + 40LL) = RtlNumberOfSetBitsEx(*(_QWORD *)(a1 + 16));
  return v8;
}
