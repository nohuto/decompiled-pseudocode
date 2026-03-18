/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x14075C1E4
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14009ADD0 (KeInitializeGuardedMutex.c)
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex(&CmpSIDMappingLock);
}
