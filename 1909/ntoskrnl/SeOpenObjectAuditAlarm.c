/*
 * XREFs of SeOpenObjectAuditAlarm @ 0x1406BE9B0
 * Callers:
 *     IopCreateSecurityCheck @ 0x140117380 (IopCreateSecurityCheck.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1406BE820 (ObCheckObjectAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F85C8 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14064D1D0 (SeOpenObjectAuditAlarmWithTransaction.c)
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
