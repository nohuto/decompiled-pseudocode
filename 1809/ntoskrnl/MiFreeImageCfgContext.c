/*
 * XREFs of MiFreeImageCfgContext @ 0x1400DA46C
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406508FC (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x140652250 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
