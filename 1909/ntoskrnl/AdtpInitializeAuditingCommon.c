/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140778CB4
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A180E0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x140195154 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140778CF4 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1407791D0 (AdtpInitializeDriveLetters.c)
 */

__int64 AdtpInitializeAuditingCommon()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  AdtpNullSid = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( (int)result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( (int)result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
