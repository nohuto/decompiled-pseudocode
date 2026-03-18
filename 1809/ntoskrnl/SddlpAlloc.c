/*
 * XREFs of SddlpAlloc @ 0x1406B0594
 * Callers:
 *     SeConvertStringSidToSid @ 0x1401893C0 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140300C20 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7EC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406AFCAC (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x1406B03C0 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE8C (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x1408A4F70 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59E0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x1408A5FB4 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x1408A61B0 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1408A62D4 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x1408A6ED0 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408A6FB0 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408A7164 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1408A722C (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1408A7390 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408A7858 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A7E7C (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408A8028 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408A8268 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1408A8968 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A8BEC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408A9324 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FF4 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408AA8F0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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
