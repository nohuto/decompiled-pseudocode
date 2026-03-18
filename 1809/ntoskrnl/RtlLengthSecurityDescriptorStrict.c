/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x1401B5E94
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140580AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405AD000 (CmpFindMatchingDescriptorCell.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1405B8380 (CmpTraceSecurityChanging.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x1408A3CC4 (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
