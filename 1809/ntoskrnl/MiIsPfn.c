/*
 * XREFs of MiIsPfn @ 0x1400A8820
 * Callers:
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiConvertHiberPhasePte @ 0x14056D080 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x14057D070 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x14057D260 (MiMarkNonPagedHiberPhasePte.c)
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     MmIsExtentDangling @ 0x1408541B0 (MmIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140860568 (MmRelocatePfnList.c)
 *     MmAreMdlPagesLocked @ 0x140925CC8 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140925D88 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140925E88 (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > 0xFFFFFFFFFLL )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL) >> 53) & 1LL;
}
