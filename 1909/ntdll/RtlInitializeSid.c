/*
 * XREFs of RtlInitializeSid @ 0x18000BAC0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180009910 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     RtlGetAppContainerParent @ 0x18000B6A0 (RtlGetAppContainerParent.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x18000BA60 (RtlInitializeSidEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpSetSecurityObject @ 0x18007BBE0 (RtlpSetSecurityObject.c)
 *     RtlCreateVirtualAccountSid @ 0x180083050 (RtlCreateVirtualAccountSid.c)
 *     RtlpCompareKnownObjectAces @ 0x180087F14 (RtlpCompareKnownObjectAces.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DC808 (WerpAllocateAndInitializeSid.c)
 *     RtlpCompareKnownAces @ 0x1800E52A0 (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53E0 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E66D8 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSid(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  return 0LL;
}
