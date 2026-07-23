/*
 * XREFs of RtlSetAttributesSecurityDescriptor @ 0x1800E5110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetAttributesSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        SECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor == 1 )
    return RtlSetControlSecurityDescriptor(SecurityDescriptor, Control & 0x3FC0, Control & 0x3FC0);
  else
    return -1073741736;
}
