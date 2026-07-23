/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x180078680
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008D114 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlReplaceSidInSd @ 0x1800E79E0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 4;
  *DaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
    {
      if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else if ( *((_DWORD *)SecurityDescriptor + 4) )
      {
        v6 = (ACL *)((char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 4));
      }
    }
    *Dacl = v6;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
