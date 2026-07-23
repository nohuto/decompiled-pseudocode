/*
 * XREFs of MiFreeImageCfgContext @ 0x1400DA50C
 * Callers:
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x1406533F0 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
