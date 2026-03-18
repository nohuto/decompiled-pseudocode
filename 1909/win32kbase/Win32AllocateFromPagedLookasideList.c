/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C002C860
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0023310 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     AllocQueue @ 0x1C002E6F0 (AllocQueue.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
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
