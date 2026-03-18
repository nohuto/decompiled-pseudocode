/*
 * XREFs of ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C0066CC0
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C0066D0C (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

PVOID InitializeUserTypeIsolation(void)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  WPP_MAIN_CB.Dpc.DpcData = result;
  if ( result )
  {
    memset(result, 0, 0x28uLL);
    return (PVOID)TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Create();
  }
  return result;
}
