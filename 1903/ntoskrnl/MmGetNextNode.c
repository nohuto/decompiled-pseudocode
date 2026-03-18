/*
 * XREFs of MmGetNextNode @ 0x1400806F4
 * Callers:
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     PpmIdlePrepare @ 0x140032CF0 (PpmIdlePrepare.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140037850 (ExpAllocatePoolWithTagFromNode.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KiChooseTargetProcessor @ 0x140068F60 (KiChooseTargetProcessor.c)
 *     ExpTryQueueWorkItem @ 0x14008028C (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008041C (ExpQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x140112CD0 (PoAllProcessorsDeepIdle.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140465A50 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
