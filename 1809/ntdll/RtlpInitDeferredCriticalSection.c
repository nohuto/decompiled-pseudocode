/*
 * XREFs of RtlpInitDeferredCriticalSection @ 0x1800E980C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     InterlockedPushListSList @ 0x1800A3E60 (InterlockedPushListSList.c)
 */

__int64 RtlpInitDeferredCriticalSection()
{
  _QWORD *v0; // r8

  RtlFailedCriticalDebugAllocations = 0;
  if ( ((unsigned __int8)&RtlCriticalSectionDebugSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &RtlpStaticDebugInfo;
  RtlCriticalSectionDebugSList = 0uLL;
  do
  {
    *v0 = v0 + 6;
    v0 += 6;
  }
  while ( v0 <= qword_180163DC0 );
  *v0 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_180163DF0, 8);
  return 0LL;
}
