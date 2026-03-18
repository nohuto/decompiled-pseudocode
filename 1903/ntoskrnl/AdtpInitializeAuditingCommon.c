/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1407756D4
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A17C20 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x140194974 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140775714 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140775BF0 (AdtpInitializeDriveLetters.c)
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
