/*
 * XREFs of RtlInitializeSid @ 0x18000BAC0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     RtlGetAppContainerParent @ 0x18000B6A0 (RtlGetAppContainerParent.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x18000BA60 (RtlInitializeSidEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     RtlCreateVirtualAccountSid @ 0x1800829B0 (RtlCreateVirtualAccountSid.c)
 *     sub_180087874 @ 0x180087874 (sub_180087874.c)
 *     sub_1800DC748 @ 0x1800DC748 (sub_1800DC748.c)
 *     sub_1800E51B0 @ 0x1800E51B0 (sub_1800E51B0.c)
 *     sub_1800E52F0 @ 0x1800E52F0 (sub_1800E52F0.c)
 *     sub_1800E65E8 @ 0x1800E65E8 (sub_1800E65E8.c)
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
