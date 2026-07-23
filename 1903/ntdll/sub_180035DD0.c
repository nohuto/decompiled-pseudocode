/*
 * XREFs of sub_180035DD0 @ 0x180035DD0
 * Callers:
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A01F0 (RtlInterlockedPushEntrySList_0.c)
 */

LOGICAL __fastcall sub_180035DD0(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_180166180.Alignment) >= 0xAu
    && (&unk_180163D40 > (_UNKNOWN *)ListEntry || ListEntry >= (PSLIST_ENTRY)&byte_180163EC0) )
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ListEntry);
  }
  else
  {
    return (unsigned int)RtlInterlockedPushEntrySList_0(&stru_180166180, ListEntry);
  }
}
