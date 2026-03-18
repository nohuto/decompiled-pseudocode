/*
 * XREFs of MmGetNextNode @ 0x140080AF4
 * Callers:
 *     KiSearchForNewThread @ 0x1400132D4 (KiSearchForNewThread.c)
 *     PpmIdlePrepare @ 0x1400330E0 (PpmIdlePrepare.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140037C50 (ExpAllocatePoolWithTagFromNode.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KiChooseTargetProcessor @ 0x1400691D0 (KiChooseTargetProcessor.c)
 *     ExpTryQueueWorkItem @ 0x14008068C (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008081C (ExpQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x1401122C0 (PoAllProcessorsDeepIdle.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140465750 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
