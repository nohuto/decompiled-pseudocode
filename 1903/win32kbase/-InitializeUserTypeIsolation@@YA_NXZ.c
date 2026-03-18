/*
 * XREFs of ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C005DBBC
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C005DC08 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

PVOID InitializeUserTypeIsolation(void)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(PagedPoolSession, 0x30uLL, 0x6F736955u);
  gpUserTypeIsolation = result;
  if ( result )
  {
    memset(result, 0, 0x30uLL);
    return (PVOID)TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create();
  }
  return result;
}
