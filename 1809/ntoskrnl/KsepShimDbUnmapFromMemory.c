/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x140684790
 * Callers:
 *     KseShimDatabaseClose @ 0x14067EB4C (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 *     SdbReleaseDatabase @ 0x140681C9C (SdbReleaseDatabase.c)
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
