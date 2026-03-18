/*
 * XREFs of ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD53C
 * Callers:
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00AAE88 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00AAED0 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00BA080 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

void __fastcall DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(DCVISRGNSHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
}
