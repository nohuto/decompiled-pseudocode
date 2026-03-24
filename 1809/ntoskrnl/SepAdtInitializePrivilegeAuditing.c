/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x140736B84
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x140736A40 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1409C6290 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140736BE4 (SepRegQueryValue.c)
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
