/*
 * XREFs of ZwDuplicateToken @ 0x1401B8B30
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400DCBB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1402EDCA0 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1406BC094 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1408966C4 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
