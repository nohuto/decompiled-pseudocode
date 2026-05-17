/*
 * XREFs of RtlpHandleInvalidUserCallTarget @ 0x1800F98D0
 * Callers:
 *     LdrpHandleInvalidUserCallTarget @ 0x180090140 (LdrpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x18002B1C8 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x18002B260 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlFailFast2 @ 0x1800A52D0 (RtlFailFast2.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800F989C (RtlpGuardIsSuppressedAddress.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F9934 (RtlpUnsuppressForwardReferencingCallTarget.c)
 */

__int64 __fastcall RtlpHandleInvalidUserCallTarget(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( RtlGuardAllowSuppressedCalls && RtlpGuardIsSuppressedAddress(a1) )
    return RtlpGuardGrantSuppressedCallAccess(a1, 1u);
  if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
    || !RtlGuardIsExportSuppressedAddress(a1)
    || (result = RtlpUnsuppressForwardReferencingCallTarget(a1), (int)result < 0) )
  {
    RtlFailFast2(0xAu);
  }
  return result;
}
