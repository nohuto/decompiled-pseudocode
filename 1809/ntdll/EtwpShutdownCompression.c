/*
 * XREFs of EtwpShutdownCompression @ 0x1800029B8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 */

LOGICAL __fastcall EtwpShutdownCompression(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 432);
  if ( v1 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 440) )
  {
    RegionSize = 0LL;
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 440), &RegionSize, 0x8000u);
  }
  return result;
}
