/*
 * XREFs of ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C006D900
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C006CB74 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006D6C8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCriticalSection::TryAcquireExclusive(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(Resource, 0) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
