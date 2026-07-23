/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x140765404
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400063D0 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
