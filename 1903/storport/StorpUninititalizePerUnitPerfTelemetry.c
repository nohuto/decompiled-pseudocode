/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C00229B8
 * Callers:
 *     RaidUnitFreeResources @ 0x1C0012418 (RaidUnitFreeResources.c)
 *     StorpInitializeUnitTelemetry @ 0x1C001FCC4 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[244];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[244] = 0LL;
  }
  v3 = (void *)a1[246];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[246] = 0LL;
  }
  v4 = (void *)a1[247];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[247] = 0LL;
  }
}
