/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18000FFD0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x180068930 (RtlCreateAndSetSD.c)
 *     RtlpSysVolTakeOwnership @ 0x180086964 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180086F48 (RtlpSysVolCreateSecurityDescriptor.c)
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlCreateSecurityDescriptor(_BYTE *a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  memset(a1, 0, 0x28uLL);
  result = 0LL;
  *a1 = 1;
  return result;
}
