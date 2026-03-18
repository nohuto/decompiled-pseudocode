/*
 * XREFs of MiFreeImageLoadConfig @ 0x14072A1C0
 * Callers:
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x14072A130 (MiFreeRelocations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140728420 (MiFreeRetpolineRelocationInformation.c)
 */

void __fastcall MiFreeImageLoadConfig(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v3 = *(_QWORD **)(a1 + 24);
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
