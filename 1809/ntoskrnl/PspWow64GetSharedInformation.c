/*
 * XREFs of PspWow64GetSharedInformation @ 0x14067959C
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x140679364 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14067F4C4 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406A91FC (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x1409D7048 (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

void *__fastcall PspWow64GetSharedInformation(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &PsWowX86SharedInformation;
  if ( v1 == 1 )
    return &PsWowArm32SharedInformation;
  return 0LL;
}
