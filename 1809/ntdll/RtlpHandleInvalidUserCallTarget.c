/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800F98D0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180090150 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18002B1C8 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18002B260 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlFailFast2 @ 0x1800A52F0 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800F989C (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F9934 (RtlpUnsuppressForwardReferencingCallTarget.c)
 */

NTSTATUS __fastcall RtlpHandleInvalidUserCallTarget(void *a1)
{
  NTSTATUS result; // eax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess((__int64)a1, 1u);
  if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}
