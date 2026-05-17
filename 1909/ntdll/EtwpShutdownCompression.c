/*
 * XREFs of EtwpShutdownCompression @ 0x18010E5C8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x180087B98 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpShutdownCompression(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 440) )
    return ZwFreeVirtualMemory();
  return result;
}
