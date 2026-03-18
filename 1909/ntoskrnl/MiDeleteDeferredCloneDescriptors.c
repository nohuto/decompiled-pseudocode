/*
 * XREFs of MiDeleteDeferredCloneDescriptors @ 0x1402E391C
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140057470 (MiGetVadWakeList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteCloneZombies @ 0x140134D94 (MiDeleteCloneZombies.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     RtlpInterlockedFlushSList @ 0x1401CC5F0 (RtlpInterlockedFlushSList.c)
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
