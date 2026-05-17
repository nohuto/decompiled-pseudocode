/*
 * XREFs of RtlInitializeSid @ 0x1800487A0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002040 (RtlDefaultNpAcl.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800480C0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180048600 (RtlInitializeSidEx.c)
 *     RtlpOwnerAcesPresent @ 0x180048658 (RtlpOwnerAcesPresent.c)
 *     RtlGetAppContainerParent @ 0x18004AA90 (RtlGetAppContainerParent.c)
 *     RtlCreateServiceSid @ 0x18004B3A0 (RtlCreateServiceSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18004B61C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateVirtualAccountSid @ 0x18004CC20 (RtlCreateVirtualAccountSid.c)
 *     RtlpSetSecurityObject @ 0x18007C610 (RtlpSetSecurityObject.c)
 *     RtlpCompareKnownObjectAces @ 0x18008AC58 (RtlpCompareKnownObjectAces.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DEB38 (WerpAllocateAndInitializeSid.c)
 *     RtlpCompareKnownAces @ 0x1800E7EA8 (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E933C (RtlpValidLabelSubjectContext.c)
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
