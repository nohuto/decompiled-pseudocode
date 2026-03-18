/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001C878
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C009D840 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0105E30 (NtGdiGetGammaRampCapability.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001C89C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  DCOBJ::~DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
}
