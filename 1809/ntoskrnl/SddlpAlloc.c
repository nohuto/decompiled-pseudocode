/*
 * XREFs of SddlpAlloc @ 0x1406B0574
 * Callers:
 *     SeConvertStringSidToSid @ 0x1401893E0 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140300D20 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7CC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406AFC8C (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1406B03A0 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE6C (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x1408A4F50 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59C0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x1408A5F94 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x1408A6190 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1408A62B4 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x1408A6EB0 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408A6F90 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408A7144 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1408A720C (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1408A7370 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408A7838 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A7E5C (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408A8008 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408A8248 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1408A8948 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A8BCC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408A9304 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FD4 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408AA8D0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
