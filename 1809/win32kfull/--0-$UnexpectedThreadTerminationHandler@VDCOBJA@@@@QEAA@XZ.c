/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015F030
 * Callers:
 *     GreHintDCWnd @ 0x1C000EAA0 (GreHintDCWnd.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0010EB8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C00553A0 (GreSelectRedirectionBitmap.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C005A330 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C0161060 (--0DCOBJA@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

char *__fastcall UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(char *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
