/*
 * XREFs of MiFreeImageLoadConfig @ 0x1406FE53C
 * Callers:
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x1406FE4A0 (MiFreeRelocations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140854E9C (MiFreeRetpolineRelocationInformation.c)
 */

void __fastcall MiFreeImageLoadConfig(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
