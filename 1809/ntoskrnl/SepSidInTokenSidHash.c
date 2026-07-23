/*
 * XREFs of SepSidInTokenSidHash @ 0x1400AAAA0
 * Callers:
 *     SepTokenIsOwner @ 0x1400131F0 (SepTokenIsOwner.c)
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMatchCapability @ 0x140122730 (SepMatchCapability.c)
 *     AuthzBasepDeviceMemberOf @ 0x140325964 (AuthzBasepDeviceMemberOf.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AEBEC (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x1400AAB60 (RtlSidHashLookup.c)
 */

char __fastcall SepSidInTokenSidHash(
        PSID_AND_ATTRIBUTES_HASH SidAttrHash,
        void *a2,
        void *a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  void *v8; // rsi
  PSID_AND_ATTRIBUTES v11; // rax
  ULONG Attributes; // ecx

  v8 = a3;
  if ( !a4 && a7 && a3 && RtlEqualSid(SeAliasAdminsSid, a3) )
    return 0;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, v8) )
    v8 = a2;
  if ( a6 && RtlEqualSid(SeOwnerRightsSid, v8) )
    return 1;
  v11 = RtlSidHashLookup(SidAttrHash, v8);
  if ( v11
    && (!a5 && v11 == SidAttrHash->SidAttr && ((v11->Attributes & 0x10) == 0 || a4)
     || (Attributes = v11->Attributes, (Attributes & 4) != 0)
     || a4 && (Attributes & 0x10) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
