/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x140854E9C
 * Callers:
 *     MiFreeImageLoadConfig @ 0x1406FE53C (MiFreeImageLoadConfig.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140854D60 (MiCreateRetpolineRelocationInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineRelocationInformation(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)P[6];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
}
