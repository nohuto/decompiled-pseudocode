/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x140760964
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400EEA20 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
