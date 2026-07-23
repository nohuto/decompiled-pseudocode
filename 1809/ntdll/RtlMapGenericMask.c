/*
 * XREFs of RtlMapGenericMask @ 0x180044EB0
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x18004494C (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x1800450E0 (RtlpCopyAces.c)
 *     RtlpApplyAclToObject @ 0x18007CE60 (RtlpApplyAclToObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D9010 (RtlNewSecurityGrantedAccess.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // r8d

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
  {
    v2 |= GenericMapping->GenericAll;
    *AccessMask = v2;
  }
  *AccessMask = v2 & 0xFFFFFFF;
}
