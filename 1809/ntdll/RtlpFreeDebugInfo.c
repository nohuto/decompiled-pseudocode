/*
 * XREFs of RtlpFreeDebugInfo @ 0x18005C7C8
 * Callers:
 *     RtlDeleteResource @ 0x18005C660 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x180061A10 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpFreeDebugInfo(char *a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)a1 || a1 >= &RtlpForceCSDebugInfoCreation) )
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList);
  }
}
