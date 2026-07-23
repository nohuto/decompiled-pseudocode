/*
 * XREFs of RtlFindAceByType @ 0x180044F10
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpGenerateInheritAcl @ 0x1800442B0 (RtlpGenerateInheritAcl.c)
 *     RtlpCopyAces @ 0x1800450E0 (RtlpCopyAces.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180045530 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 *     RtlIsUntrustedObject @ 0x1800E7850 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r9
  unsigned int v5; // r10d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
