/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18000FFD0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x1800686E0 (RtlCreateAndSetSD.c)
 *     sub_1800862C4 @ 0x1800862C4 (sub_1800862C4.c)
 *     sub_1800868A8 @ 0x1800868A8 (sub_1800868A8.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __cdecl RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  memset(SecurityDescriptor, 0, 0x28uLL);
  result = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
