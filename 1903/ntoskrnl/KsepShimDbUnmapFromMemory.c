/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x140708AA4
 * Callers:
 *     KseShimDatabaseClose @ 0x14070AA14 (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 *     SdbReleaseDatabase @ 0x140708CB4 (SdbReleaseDatabase.c)
 */

int KsepShimDbUnmapFromMemory()
{
  int result; // eax

  if ( KsepShimDbHandle )
    result = SdbReleaseDatabase(KsepShimDbHandle);
  if ( KsepShimDbAddress )
  {
    result = MmUnmapViewInSystemSpace(KsepShimDbAddress);
    KsepShimDbAddress = 0LL;
  }
  if ( KsepShimDbSectionPointer )
  {
    result = ObfDereferenceObject(KsepShimDbSectionPointer);
    KsepShimDbSectionPointer = 0LL;
  }
  if ( KsepShimDbSectionHandle )
  {
    result = ZwClose(KsepShimDbSectionHandle);
    KsepShimDbSectionHandle = 0LL;
  }
  if ( KsepShimDbFileHandle )
  {
    result = ZwClose(KsepShimDbFileHandle);
    KsepShimDbFileHandle = 0LL;
  }
  return result;
}
