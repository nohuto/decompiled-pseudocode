/*
 * XREFs of SddlpAlloc @ 0x1406B1814
 * Callers:
 *     SeConvertStringSidToSid @ 0x140189520 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140300F10 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406B0A6C (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1406B1640 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x14074F05C (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x1408A71F4 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x1408A73F0 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1408A7514 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x1408A8110 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408A81F0 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408A83A4 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1408A846C (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1408A85D0 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A90BC (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408A9268 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408A94A8 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1408A9BA8 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A9E2C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408AA564 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408AB234 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
