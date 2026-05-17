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

void *__fastcall RtlDeleteResource(struct _SLIST_ENTRY **a1)
{
  struct _SLIST_ENTRY *v2; // rdx

  RtlDeleteCriticalSection(a1);
  ZwClose(a1[5]);
  ZwClose(a1[7]);
  v2 = a1[11];
  if ( LOWORD(stru_180166180.Alignment) >= 0xAu
    && (&unk_180163D40 > (_UNKNOWN *)v2 || v2 >= (struct _SLIST_ENTRY *)&byte_180163EC0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1[11]);
  }
  else
  {
    RtlInterlockedPushEntrySList_0(&stru_180166180, v2);
  }
  return memset(a1, 0, 0x60uLL);
}
