/*
 * XREFs of ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00F7C84
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C008C470 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00A97DC (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, struct SURFACE *a2)
{
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  *((_QWORD *)this + 4) = a2;
  return this;
}
