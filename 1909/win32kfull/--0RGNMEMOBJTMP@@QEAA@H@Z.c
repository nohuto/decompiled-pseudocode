/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C01661A8
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00A5448 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::RGNMEMOBJ(this, 0, 1);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
