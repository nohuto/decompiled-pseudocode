/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64
 * Callers:
 *     NtGdiGetDCObject @ 0x1C0032C50 (NtGdiGetDCObject.c)
 *     GreGetDIBitsInternal @ 0x1C00340DC (GreGetDIBitsInternal.c)
 *     NtGdiPolyPatBlt @ 0x1C005C730 (NtGdiPolyPatBlt.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0063810 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiModifyWorldTransform @ 0x1C00702F0 (NtGdiModifyWorldTransform.c)
 *     GreDrawStream @ 0x1C0070630 (GreDrawStream.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSaveDC @ 0x1C008DF10 (GreSaveDC.c)
 *     GreGetTextFaceW @ 0x1C00A83E0 (GreGetTextFaceW.c)
 *     NtGdiGetDCDword @ 0x1C00F7C80 (NtGdiGetDCDword.c)
 *     GreGetBoundsRect @ 0x1C00FB5F8 (GreGetBoundsRect.c)
 *     GreTransformPoints @ 0x1C00FD8FC (GreTransformPoints.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00FE068 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0113B80 (-iSetMapMode@DC@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_DWORD *)this + 130);
  v2 = *((_QWORD *)this + 122);
  v3 = *(_DWORD *)(v2 + 340);
  if ( (v1 & 1) != 0 )
    v4 = v3 | 0x16090;
  else
    v4 = v3 | 0x6090;
  *(_DWORD *)(v2 + 340) = v4;
}
