/*
 * XREFs of RtlGetAce @ 0x140016260
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140132DE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ObpGetDosDevicesProtection @ 0x14072D510 (ObpGetDosDevicesProtection.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140748E78 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
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
