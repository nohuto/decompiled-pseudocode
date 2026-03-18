/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1406BEF00
 * Callers:
 *     IopCreateSecurityCheck @ 0x140115D10 (IopCreateSecurityCheck.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1406BED70 (ObCheckObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
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
