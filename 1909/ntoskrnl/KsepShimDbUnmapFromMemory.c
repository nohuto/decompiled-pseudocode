/*
 * XREFs of KsepShimDbUnmapFromMemory @ 0x14070A884
 * Callers:
 *     KseShimDatabaseClose @ 0x14070C7F4 (KseShimDatabaseClose.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     MmUnmapViewInSystemSpace @ 0x140648600 (MmUnmapViewInSystemSpace.c)
 *     SdbReleaseDatabase @ 0x14070AA94 (SdbReleaseDatabase.c)
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
