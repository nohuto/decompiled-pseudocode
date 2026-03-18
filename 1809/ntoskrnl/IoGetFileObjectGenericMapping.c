/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406A2FD0
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14026C228 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140926130 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
