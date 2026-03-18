/*
 * XREFs of SddlpAlloc @ 0x1406EC2DC
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140001010 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1401934E0 (SeConvertStringSidToSid.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B22DC (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1405B2660 (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x1406DC7D4 (LookupSidInTable.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406F8374 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x140771BA4 (LocalpConvertStringSidToSid.c)
 *     LocalConvertSidToStringSidW @ 0x1408E3814 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForSid @ 0x1408E38B8 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x1408E4234 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408E4314 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408E44C8 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1408E4584 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1408E46E8 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408E4BB8 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408E51B4 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408E5360 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408E5584 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1408E5C10 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1408E5E94 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408E65CC (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408E7210 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408E7AA0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
