/*
 * XREFs of ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015FD24
 * Callers:
 *     EngTextOut @ 0x1C0087B90 (EngTextOut.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0088B10 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0274348 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

UMPDReleaseAcquireRFONTSem *__fastcall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3,
        int a4)
{
  void **v4; // rdi
  struct RFONTOBJ *v6; // rcx
  __int64 v7; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = (void **)((char *)this + 56);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 7) = (char *)this + 12;
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 6);
  v6 = (UMPDReleaseAcquireRFONTSem *)((char *)this + 72);
  *((_DWORD *)v6 + 2) = 0;
  *(_QWORD *)v6 = a3;
  v7 = *((_QWORD *)this + 8);
  if ( v7 && (*(_DWORD *)(v7 + 40) & 0x8080) == 0x8080 && a3 && a4 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(v6, 0LL, (unsigned int *)this + 1, (unsigned int *)this + 2, v4);
  return this;
}
