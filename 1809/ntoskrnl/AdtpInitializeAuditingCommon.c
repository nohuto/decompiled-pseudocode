/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140737208
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x1409C6290 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x140181AA8 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140737248 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140737754 (AdtpInitializeDriveLetters.c)
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
