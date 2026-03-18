/*
 * XREFs of ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C
 * Callers:
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008FE50 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C008FE80 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C009B400 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

DCVISRGNSHARELOCK *__fastcall DCVISRGNSHARELOCK::DCVISRGNSHARELOCK(DCVISRGNSHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  return this;
}
