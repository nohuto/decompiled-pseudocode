/*
 * XREFs of ?TryComputeAlignedFieldSizes@UmfdTls@@SA_NIPEAII0I0I0@Z @ 0x1C0146CD8
 * Callers:
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0092550 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0146B80 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0162F60 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02C1730 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdTls::TryComputeAlignedFieldSizes(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int *a8)
{
  if ( a1 + 7 < a1 )
    return 0;
  *a2 = (a1 + 7) & 0xFFFFFFF8;
  if ( a3 + 7 < a3 )
    return 0;
  *a4 = (a3 + 7) & 0xFFFFFFF8;
  if ( a5 + 7 < a5 )
    return 0;
  *a6 = (a5 + 7) & 0xFFFFFFF8;
  if ( a7 + 7 < a7 )
    return 0;
  *a8 = (a7 + 7) & 0xFFFFFFF8;
  return 1;
}
