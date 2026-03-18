/*
 * XREFs of PspWow64GetSharedInformation @ 0x140679EC4
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x140679C8C (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x1406A3778 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406C94A8 (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x1409FE778 (PspInitializeSystemDlls.c)
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
