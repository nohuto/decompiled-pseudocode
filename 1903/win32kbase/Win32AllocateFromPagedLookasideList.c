/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C002D9D0
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0022DF0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     AllocQueue @ 0x1C002F500 (AllocQueue.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
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
