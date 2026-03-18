/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334
 * Callers:
 *     GreGetTextFaceW @ 0x1C00491C0 (GreGetTextFaceW.c)
 *     NtGdiPolyPatBlt @ 0x1C00A5E90 (NtGdiPolyPatBlt.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiModifyWorldTransform @ 0x1C00BA280 (NtGdiModifyWorldTransform.c)
 *     GreDrawStream @ 0x1C00BA5C0 (GreDrawStream.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreGetDIBitsInternal @ 0x1C00BE2FC (GreGetDIBitsInternal.c)
 *     NtGdiGetDCObject @ 0x1C00BFC70 (NtGdiGetDCObject.c)
 *     NtGdiGetDCDword @ 0x1C00D7D70 (NtGdiGetDCDword.c)
 *     GreTransformPoints @ 0x1C00D963C (GreTransformPoints.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00D9DB0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C00EDED0 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     GreGetBoundsRect @ 0x1C0127818 (GreGetBoundsRect.c)
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
