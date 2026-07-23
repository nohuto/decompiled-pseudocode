/*
 * XREFs of RtlDeleteResource @ 0x180032AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  _SLIST_ENTRY *DebugInfo; // rdx

  RtlDeleteCriticalSection(&Resource->CriticalSection);
  ZwClose(Resource->SharedSemaphore);
  ZwClose(Resource->ExclusiveSemaphore);
  DebugInfo = (_SLIST_ENTRY *)Resource->DebugInfo;
  if ( LOWORD(stru_180166180.Alignment) >= 0xAu
    && (&unk_180163D40 > (_UNKNOWN *)DebugInfo || DebugInfo >= (_SLIST_ENTRY *)&byte_180163EC0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Resource->DebugInfo);
  }
  else
  {
    RtlInterlockedPushEntrySList_0(&stru_180166180, DebugInfo);
  }
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
