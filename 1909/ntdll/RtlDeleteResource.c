/*
 * XREFs of RtlDeleteResource @ 0x180032AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  PRTL_RESOURCE_DEBUG DebugInfo; // rdx

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  DebugInfo = Resource->DebugInfo;
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)DebugInfo || DebugInfo >= (PRTL_RESOURCE_DEBUG)&RtlpForceCSDebugInfoCreation) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Resource->DebugInfo);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, DebugInfo);
  }
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
