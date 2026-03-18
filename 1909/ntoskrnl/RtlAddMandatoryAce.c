/*
 * XREFs of RtlAddMandatoryAce @ 0x14069E9D4
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x14069E710 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14069FBC0 (IopCreateSecurityDescriptorPerType.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DE3C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x140A00C5C (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140A1DF20 (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1405C8D30 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1405DDC30 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1406583A0 (RtlCopySid.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlAddMandatoryAce(
        PACL Acl,
        ULONG Revision,
        ULONG Flags,
        ULONG MandatoryFlags,
        UCHAR AceType,
        PSID LabelSid)
{
  __int64 v6; // rdi
  int v9; // ecx
  UCHAR AclRevision; // si
  PACE v11; // rdx
  WORD v12; // r8
  NTSTATUS result; // eax
  PACE Ace; // [rsp+20h] [rbp-28h] BYREF

  LODWORD(Ace) = 0;
  v6 = *(_QWORD *)&MandatoryFlags;
  WORD2(Ace) = 4096;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(*(PSID *)&MandatoryFlags) )
    return -1073741704;
  v9 = *(_DWORD *)(v6 + 2) - (_DWORD)Ace;
  if ( !v9 )
    v9 = *(unsigned __int16 *)(v6 + 6) - WORD2(Ace);
  if ( v9 )
    return -1073741811;
  if ( Acl->AclRevision > 4u )
    return -1073741735;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (Flags & 0xFFFFFFE0) != 0 || ((unsigned int)LabelSid & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &Ace) )
    return -1073741705;
  v11 = Ace;
  v12 = 4 * (*(unsigned __int8 *)(v6 + 1) + 4);
  if ( !Ace || (char *)Ace + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  Ace->Header.AceSize = v12;
  v11->Header.AceFlags = Flags;
  v11->Header.AceType = 17;
  v11->AccessMask = (unsigned int)LabelSid;
  RtlCopySid(4 * *(unsigned __int8 *)(v6 + 1) + 8, &v11[1], (PSID)v6);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
