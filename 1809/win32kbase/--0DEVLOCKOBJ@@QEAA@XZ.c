/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002AB38
 * Callers:
 *     GreGetNearestColor @ 0x1C0013600 (GreGetNearestColor.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C009D840 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0105E30 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C001DE64 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002AB64 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DCOBJ::DCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vInit(this);
  return this;
}
