/*
 * XREFs of ?DxgkEngIsWinLogonProcess@@YAHXZ @ 0x1C0122590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 DxgkEngIsWinLogonProcess(void)
{
  return PsGetCurrentProcessId() == (HANDLE)gpidLogon;
}
