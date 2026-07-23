/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x180078350
 * Callers:
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CC690 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlReplaceSidInSd @ 0x1800E4D10 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v3; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else if ( *((_DWORD *)SecurityDescriptor + 1) )
  {
    v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  *Owner = v3;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
