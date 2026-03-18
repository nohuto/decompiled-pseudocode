/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x140728420
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x1406EA2E0 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x14072A1C0 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
