/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x1406835D0
 * Callers:
 *     KseShimDatabaseClose @ 0x14067D98C (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     MmUnmapViewInSystemSpace @ 0x1405DF390 (MmUnmapViewInSystemSpace.c)
 *     SdbReleaseDatabase @ 0x140680ADC (SdbReleaseDatabase.c)
 */

void KsepShimDbUnmapFromMemory()
{
  if ( KsepShimDbHandle )
    SdbReleaseDatabase(KsepShimDbHandle);
  if ( KsepShimDbAddress )
  {
    MmUnmapViewInSystemSpace(KsepShimDbAddress);
    KsepShimDbAddress = 0LL;
  }
  if ( KsepShimDbSectionPointer )
  {
    ObfDereferenceObject(KsepShimDbSectionPointer);
    KsepShimDbSectionPointer = 0LL;
  }
  if ( KsepShimDbSectionHandle )
  {
    ZwClose(KsepShimDbSectionHandle);
    KsepShimDbSectionHandle = 0LL;
  }
  if ( KsepShimDbFileHandle )
  {
    ZwClose(KsepShimDbFileHandle);
    KsepShimDbFileHandle = 0LL;
  }
}
