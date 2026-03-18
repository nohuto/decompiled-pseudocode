/*
 * XREFs of ZwDuplicateToken @ 0x1401B89B0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB10 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1402ED9B0 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1406BAE14 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x140895484 (RtlpIsAppContainer.c)
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
