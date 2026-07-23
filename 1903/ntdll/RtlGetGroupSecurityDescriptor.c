/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x18007B0D0
 * Callers:
 *     RtlReplaceSidInSd @ 0x1800E4D10 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v3; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else if ( *((_DWORD *)SecurityDescriptor + 2) )
  {
    v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 2);
  }
  *Group = v3;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
