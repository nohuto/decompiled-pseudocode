/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C0022AE8
 * Callers:
 *     RaidUnitFreeResources @ 0x1C00124B4 (RaidUnitFreeResources.c)
 *     StorpInitializeUnitTelemetry @ 0x1C0020678 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[276];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[276] = 0LL;
  }
  v3 = (void *)a1[278];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[278] = 0LL;
  }
  v4 = (void *)a1[279];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[279] = 0LL;
  }
}
