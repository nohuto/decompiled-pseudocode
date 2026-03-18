/*
 * XREFs of SddlpAlloc @ 0x1406ED59C
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140001010 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x140193CC0 (SeConvertStringSidToSid.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B26B8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1405B2A3C (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 *     LookupSidInTable @ 0x1406DD454 (LookupSidInTable.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406FA150 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x140775184 (LocalpConvertStringSidToSid.c)
 *     LocalConvertSidToStringSidW @ 0x1408E311C (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForSid @ 0x1408E31C0 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x1408E3B3C (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408E3C1C (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408E3DD0 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1408E3E8C (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1408E3FF0 (GetAttributeName.c)
 *     GetOperandValue @ 0x1408E44C0 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408E4ABC (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408E4C68 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408E4E8C (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1408E5518 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1408E579C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408E5ED4 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408E6B18 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408E73A8 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
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
