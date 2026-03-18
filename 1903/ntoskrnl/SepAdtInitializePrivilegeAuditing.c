/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x1407754FC
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x1408E37B0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140A17C20 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x14061A920 (SepRegQueryValue.c)
 */

char SepAdtInitializePrivilegeAuditing()
{
  __int64 **v0; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v2) = 0;
  if ( !SepAdtRegNotifyHandle
    || (SepRegQueryValue(SepAdtRegNotifyHandle, L"FullPrivilegeAuditing", 3, 1u, &v2),
        v0 = SepFilterPrivilegesShort,
        !(_BYTE)v2) )
  {
    v0 = SepFilterPrivilegesLong;
  }
  SepFilterPrivileges = v0;
  return 1;
}
