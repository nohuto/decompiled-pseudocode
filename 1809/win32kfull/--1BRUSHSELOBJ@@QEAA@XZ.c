/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0101B78
 * Callers:
 *     GreMarkDeletableBrush @ 0x1C0101700 (GreMarkDeletableBrush.c)
 *     GreExtCreatePen @ 0x1C01017FC (GreExtCreatePen.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C013DB88 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     NtGdiFillRgn @ 0x1C013DCE0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C0282B60 (NtGdiFrameRgn.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0299C58 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0299E58 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetObjectBitmapHandle @ 0x1C029B200 (GreGetObjectBitmapHandle.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0101BB0 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((char *)this + 16);
}
