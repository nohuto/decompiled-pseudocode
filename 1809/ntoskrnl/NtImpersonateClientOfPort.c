/*
 * XREFs of NtImpersonateClientOfPort @ 0x14084AD70
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcImpersonateClientOfPort @ 0x140638760 (NtAlpcImpersonateClientOfPort.c)
 */

NTSTATUS __stdcall NtImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE ClientMessage)
{
  NTSTATUS result; // eax

  result = NtAlpcImpersonateClientOfPort(PortHandle, ClientMessage, 0LL);
  if ( result == -1073740030 )
    return -1073741281;
  return result;
}
