/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78
 * Callers:
 *     NtGdiGetRandomRgn @ 0x1C00761B0 (NtGdiGetRandomRgn.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0078B50 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreGetTextFaceW @ 0x1C00834B0 (GreGetTextFaceW.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C008AD3C (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiSetPixel @ 0x1C008E4B0 (NtGdiSetPixel.c)
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiModifyWorldTransform @ 0x1C0096AA0 (NtGdiModifyWorldTransform.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     NtGdiPolyPatBlt @ 0x1C009E190 (NtGdiPolyPatBlt.c)
 *     GreGetDIBitsInternal @ 0x1C00A60BC (GreGetDIBitsInternal.c)
 *     GreDrawStream @ 0x1C00A6FB0 (GreDrawStream.c)
 *     NtGdiGetDCObject @ 0x1C00DA180 (NtGdiGetDCObject.c)
 *     NtGdiGetDCDword @ 0x1C00DA640 (NtGdiGetDCDword.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  *((_DWORD *)this + 132) &= ~4u;
  v1 = *((_DWORD *)this + 132);
  v2 = *((_QWORD *)this + 10);
  v3 = *(_DWORD *)(v2 + 352);
  if ( (v1 & 1) != 0 )
    v4 = v3 | 0x16090;
  else
    v4 = v3 | 0x6090;
  *(_DWORD *)(v2 + 352) = v4;
}
