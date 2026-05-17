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

void *__fastcall RtlDeleteResource(HANDLE *a1)
{
  char *v2; // rdx

  RtlDeleteCriticalSection(a1);
  NtClose(a1[5]);
  NtClose(a1[7]);
  v2 = (char *)a1[11];
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && (&RtlpStaticDebugInfo > (_UNKNOWN *)v2 || v2 >= &RtlpForceCSDebugInfoCreation) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1[11]);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, v2);
  }
  return memset(a1, 0, 0x60uLL);
}
