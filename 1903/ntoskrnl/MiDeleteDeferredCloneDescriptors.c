/*
 * XREFs of MiDeleteDeferredCloneDescriptors @ 0x1402E3BBC
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x1400573D0 (MiGetVadWakeList.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteCloneZombies @ 0x140134494 (MiDeleteCloneZombies.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     RtlpInterlockedFlushSList @ 0x1401CBA70 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 *__fastcall MiDeleteDeferredCloneDescriptors(__int64 a1)
{
  unsigned __int64 *v2; // rsi
  PSLIST_ENTRY v3; // rdi
  unsigned __int64 *v4; // rbp
  unsigned __int64 *v5; // rbx

  v2 = 0LL;
  v3 = RtlpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1296) + 368LL));
  if ( v3 )
  {
    v4 = (unsigned __int64 *)(a1 + 920);
    do
    {
      v5 = (unsigned __int64 *)&v3[-5];
      v3 = v3->Next;
      RtlAvlRemoveNode(v4, v5);
      *v5 = (unsigned __int64)v2;
      v2 = v5;
    }
    while ( v3 );
  }
  return v2;
}
