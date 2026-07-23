/*
 * XREFs of RtlAddMandatoryAce @ 0x1406318C0
 * Callers:
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14065396C (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140655210 (ObpVerifyAccessToBoundaryEntry.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F6418 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitSystemDacls @ 0x1409AE07C (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x1409DB2F8 (ExpKeyedEventInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlFirstFreeAce @ 0x140631A10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
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
  __int64 v6; // rsi
  int v9; // eax
  UCHAR AclRevision; // di
  PACE v11; // r9
  WORD v12; // dx
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
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u )
    return -1073741735;
  if ( AclRevision <= 2u )
    AclRevision = 2;
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
  memmove(&v11[1], (const void *)v6, 4LL * *(unsigned __int8 *)(v6 + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
