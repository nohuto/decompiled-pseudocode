/*
 * XREFs of RtlActivateActivationContext @ 0x180071140
 * Callers:
 *     <none>
 * Callees:
 *     RtlActivateActivationContextEx @ 0x180071190 (RtlActivateActivationContextEx.c)
 */

NTSTATUS __cdecl RtlActivateActivationContext(ULONG Flags, PACTIVATION_CONTEXT ActivationContext, PULONG_PTR Cookie)
{
  NTSTATUS result; // eax

  if ( Cookie )
    *Cookie = 0LL;
  if ( Flags || !Cookie )
    return -1073741811;
  result = RtlActivateActivationContextEx(0, NtCurrentTeb(), ActivationContext, Cookie);
  if ( result >= 0 )
    return 0;
  return result;
}
