/*
 * XREFs of PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14087CB40
 * Callers:
 *     PoFxAbandonDevice @ 0x1406EE2A8 (PoFxAbandonDevice.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14087C9EC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsDiagFreeDeviceDiagnostic(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)P[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67446F50u);
  v3 = (void *)P[8];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67446F50u);
  v4 = (void *)P[10];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x67446F50u);
  v5 = (void *)P[12];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x67446F50u);
  ExFreePoolWithTag(P, 0x67446F50u);
}
