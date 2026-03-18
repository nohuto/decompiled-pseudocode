/*
 * XREFs of ExInitSystemPhase2 @ 0x140A09604
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     BootApplicationPersistentDataProcess @ 0x140A098F0 (BootApplicationPersistentDataProcess.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A3AC (ExpWatchProductTypeInitialization.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax

  ExpWatchProductTypeInitialization();
  MEMORY[0xFFFFF780000002E0] = -1;
  BootApplicationPersistentDataProcess(0LL);
  ExpMicrocodeInitialization(2LL);
  result = (unsigned int)KeMaximumProcessors;
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  return result;
}
