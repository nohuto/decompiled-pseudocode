/*
 * XREFs of ZwDuplicateToken @ 0x1401B89D0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB30 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1402EDAB0 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1406BADF4 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x140895464 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(ExistingTokenHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
