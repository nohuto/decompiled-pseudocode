/*
 * XREFs of RtlpInitDeferredCriticalSection @ 0x1800E6B9C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     InterlockedPushListSList @ 0x1800A0A10 (InterlockedPushListSList.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

__int64 RtlpInitDeferredCriticalSection()
{
  _QWORD *v0; // r8
  _QWORD *v1; // rax

  RtlFailedCriticalDebugAllocations = 0;
  if ( ((unsigned __int8)&RtlCriticalSectionDebugSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = &RtlpStaticDebugInfo;
  RtlCriticalSectionDebugSList = 0uLL;
  do
  {
    v1 = v0 + 6;
    *v0 = v0 + 6;
    v0 = v1;
  }
  while ( v1 <= qword_180163E60 );
  *v1 = 0LL;
  InterlockedPushListSList(&RtlCriticalSectionDebugSList, (signed __int64)&RtlpStaticDebugInfo, qword_180163E90, 8);
  return 0LL;
}
