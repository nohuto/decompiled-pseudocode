/*
 * XREFs of ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C00928B4
 * Callers:
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0092050 (-CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0092410 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0146B80 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0162F60 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02C1730 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02C1970 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FontDriverDdiRequest::PrepareUsermodeFontObj(
        struct UmfdTls *a1,
        struct _FONTOBJ *a2,
        struct _FONTOBJ *a3)
{
  ULONG ulStyleSize; // eax

  a3->iUniq = a2->iUniq;
  a3->iFace = a2->iFace;
  a3->cxMax = a2->cxMax;
  a3->flFontType = a2->flFontType;
  a3->iTTUniq = a2->iTTUniq;
  a3->iFile = *(_QWORD *)a2->iFile;
  a3->sizLogResPpi = a2->sizLogResPpi;
  ulStyleSize = a2->ulStyleSize;
  a3->pvConsumer = 0LL;
  a3->ulStyleSize = ulStyleSize;
  a3->pvProducer = a2->pvProducer;
  *((_QWORD *)a1 + 5) = a2;
}
