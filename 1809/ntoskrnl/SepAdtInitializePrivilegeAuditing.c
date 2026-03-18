/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x140736BA4
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x140736A60 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1409C6290 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140736C04 (SepRegQueryValue.c)
 */

char SepAdtInitializePrivilegeAuditing()
{
  __int64 **v0; // rax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !SepAdtRegNotifyHandle || (SepRegQueryValue(SepAdtRegNotifyHandle, &v2), v0 = SepFilterPrivilegesShort, !v2) )
    v0 = SepFilterPrivilegesLong;
  SepFilterPrivileges = v0;
  return 1;
}
