/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14085C220
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
