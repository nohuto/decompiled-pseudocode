/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C968
 * Callers:
 *     GreGetNearestColor @ 0x1C00508E0 (GreGetNearestColor.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C012C72C (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C012CBD0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C012CDA0 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C998 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::vInit(this);
  return this;
}
