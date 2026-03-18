/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140822170
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1400B8DD0 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
