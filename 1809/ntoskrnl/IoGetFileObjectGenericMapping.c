/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1406A4250
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14026C518 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140927130 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
