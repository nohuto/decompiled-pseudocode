/*
 * XREFs of RtlQueryInformationAcl @ 0x1405CA890
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140132DE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x140631A10 (RtlFirstFreeAce.c)
 */

NTSTATUS __stdcall RtlQueryInformationAcl(
        PACL Acl,
        PVOID Information,
        ULONG InformationLength,
        ACL_INFORMATION_CLASS InformationClass)
{
  UCHAR AclRevision; // cl
  __int32 v7; // r9d
  BOOLEAN v8; // al
  int v9; // edx
  PACE v10; // rcx
  int v11; // ecx
  PACE Ace; // [rsp+30h] [rbp+8h] BYREF

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) <= 2u )
  {
    v7 = InformationClass - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return -1073741821;
      if ( InformationLength >= 0xC )
      {
        v8 = RtlFirstFreeAce(Acl, &Ace);
        v9 = 0;
        if ( v8 )
        {
          v10 = Ace;
          *(_DWORD *)Information = Acl->AceCount;
          if ( v10 )
          {
            v11 = (_DWORD)v10 - (_DWORD)Acl;
            *((_DWORD *)Information + 1) = v11;
            v9 = Acl->AclSize - v11;
          }
          else
          {
            *((_DWORD *)Information + 1) = Acl->AclSize;
          }
          *((_DWORD *)Information + 2) = v9;
          return 0;
        }
        return -1073741811;
      }
    }
    else if ( InformationLength >= 4 )
    {
      *(_DWORD *)Information = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  return -1073741811;
}
