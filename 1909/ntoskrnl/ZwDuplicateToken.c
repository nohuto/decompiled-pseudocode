/*
 * XREFs of ZwDuplicateToken @ 0x1401C1490
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     RtlIsSandboxedTokenHandle @ 0x14013C3C4 (RtlIsSandboxedTokenHandle.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1406DD81C (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1408D2C74 (RtlpIsAppContainer.c)
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
