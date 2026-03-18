/*
 * XREFs of RtlGetAce @ 0x1400040A0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1401340A8 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C72C0 (SepAppendAceToTokenObjectAcl.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x1407502F0 (ObpGetDosDevicesProtection.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075B930 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1408D3FF0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v4; // r9
  ULONG v5; // r8d

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = Acl + 1;
    *Ace = &Acl[1];
    v5 = 0;
    if ( AceIndex )
    {
      while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        ++v5;
        v4 = (PACL)((char *)v4 + v4->AclSize);
        *Ace = v4;
        if ( v5 >= AceIndex )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
