/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406C4D30
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FAC0 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
