/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015EB20
 * Callers:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreSfmGetDirtyRgn @ 0x1C007593C (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C00A15B8 (GreDwmGetSurfaceData.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00A2D9C (GreSetRedirectionSurfaceSignaling.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02512C4 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     GreDwmGetRedirectionStyle @ 0x1C02537E0 (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0253CBC (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0253E1C (GreHLsurfSetUpdateId.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C0299860 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
