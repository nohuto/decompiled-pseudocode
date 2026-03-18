/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C00256F0
 * Callers:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     AllocQueue @ 0x1C005F060 (AllocQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AllocateFromPagedLookasideList(__int64 a1)
{
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0 )
    return 0LL;
  else
    return Win32AllocateFromPagedLookasideListImpl(a1);
}
