/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406C6B10
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FD60 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
