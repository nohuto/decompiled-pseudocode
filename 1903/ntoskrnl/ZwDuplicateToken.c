/*
 * XREFs of ZwDuplicateToken @ 0x1401C0910
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     RtlIsSandboxedTokenHandle @ 0x14013BDA4 (RtlIsSandboxedTokenHandle.c)
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1406DCB9C (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1408D3374 (RtlpIsAppContainer.c)
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
