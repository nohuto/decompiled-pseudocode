/*
 * XREFs of NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x1408A1710
 * Callers:
 *     <none>
 * Callees:
 *     SepAccessCheckAndAuditAlarm @ 0x1405BB46C (SepAccessCheckAndAuditAlarm.c)
 */

NTSTATUS __stdcall NtAccessCheckByTypeResultListAndAuditAlarmByHandle(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        ACCESS_MASK DesiredAccess,
        AUDIT_EVENT_TYPE AuditType,
        ULONG Flags,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeListLength,
        PGENERIC_MAPPING GenericMapping,
        BOOLEAN ObjectCreation,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus,
        PBOOLEAN GenerateOnClose)
{
  HANDLE v18; // [rsp+B0h] [rbp+18h] BYREF

  v18 = ClientToken;
  return SepAccessCheckAndAuditAlarm(
           (int)SubsystemName,
           (int)HandleId,
           (int)&v18,
           (int)ObjectTypeName,
           (__int64)ObjectName,
           (__int64)SecurityDescriptor,
           PrincipalSelfSid,
           DesiredAccess,
           AuditType,
           Flags,
           (__int64)ObjectTypeList,
           ObjectTypeListLength,
           (__int64)GenericMapping,
           GrantedAccess,
           AccessStatus,
           (__int64)GenerateOnClose,
           1);
}
