/*
 * XREFs of MiFreeImageCfgContext @ 0x140097570
 * Callers:
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x14065ABB0 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageCfgContext(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
