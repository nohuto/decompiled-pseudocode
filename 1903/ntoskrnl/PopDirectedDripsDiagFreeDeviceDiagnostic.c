/*
 * XREFs of PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x1408B7EE4
 * Callers:
 *     PoFxAbandonDevice @ 0x140730AC4 (PoFxAbandonDevice.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408B7D0C (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsDiagFreeDeviceDiagnostic(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)P[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67696450u);
  v3 = (void *)P[8];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67696450u);
  v4 = (void *)P[10];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x67696450u);
  v5 = (void *)P[12];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x67696450u);
  v6 = (void *)P[14];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x67696450u);
  ExFreePoolWithTag(P, 0x67696450u);
}
