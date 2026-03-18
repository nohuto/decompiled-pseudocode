/*
 * XREFs of PspWow64GetSharedInformation @ 0x14067FF78
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x14067FD40 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406C7EC0 (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x1409FEC94 (PspInitializeSystemDlls.c)
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
