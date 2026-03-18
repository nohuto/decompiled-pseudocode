/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E97CC
 * Callers:
 *     GreMarkDeletableBrush @ 0x1C00E93D4 (GreMarkDeletableBrush.c)
 *     GreExtCreatePen @ 0x1C00E94CC (GreExtCreatePen.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C011B554 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0286218 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0286404 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetObjectBitmapHandle @ 0x1C02875A0 (GreGetObjectBitmapHandle.c)
 * Callees:
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00E988C (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  HBRUSH v2; // rax
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  v2 = a2;
  LOBYTE(a2) = 16;
  v4 = HmgShareLockCheck(v2, a2);
  *(_QWORD *)this = v4;
  if ( v4 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
