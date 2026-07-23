/*
 * XREFs of ZwAlpcRevokeSecurityContext @ 0x1401B9410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcRevokeSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
