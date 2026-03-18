/*
 * XREFs of PspWow64GetSharedInformation @ 0x1406783FC
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x1406781C4 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14067E324 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406A7F7C (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x1409D6048 (PspInitializeSystemDlls.c)
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
