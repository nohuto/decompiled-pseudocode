/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1405961B0
 * Callers:
 *     IopCreateSecurityCheck @ 0x14012FFFC (IopCreateSecurityCheck.c)
 *     ObCheckObjectAccess @ 0x1405958F0 (ObCheckObjectAccess.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48E0 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140596850 (SeOpenObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeOpenObjectAuditAlarm(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        PBOOLEAN GenerateOnClose)
{
  if ( AccessMode )
    SeOpenObjectAuditAlarmWithTransaction(
      ObjectTypeName,
      Object,
      AbsoluteObjectName,
      SecurityDescriptor,
      AccessState,
      ObjectCreated,
      AccessGranted,
      AccessMode,
      0LL,
      GenerateOnClose);
}
