/*
 * XREFs of MiFreeImageCfgContext @ 0x14008E5D4
 * Callers:
 *     MiCaptureImageCfgContext @ 0x140642EB0 (MiCaptureImageCfgContext.c)
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
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
