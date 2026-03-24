/*
 * XREFs of SepSidInTokenSidHash @ 0x1400AAB60
 * Callers:
 *     SepTokenIsOwner @ 0x1400131F0 (SepTokenIsOwner.c)
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9470 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMatchCapability @ 0x140122660 (SepMatchCapability.c)
 *     AuthzBasepDeviceMemberOf @ 0x140325774 (AuthzBasepDeviceMemberOf.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AD94C (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7DF0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x1400AAC20 (RtlSidHashLookup.c)
 */

char __fastcall SepSidInTokenSidHash(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, char a7)
{
  void *v8; // rsi
  __int64 v11; // rax
  int v13; // ecx

  v8 = a3;
  if ( !a4 && a7 && a3 && RtlEqualSid(SeAliasAdminsSid, a3) )
    return 0;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, v8) )
    v8 = a2;
  if ( a6 && RtlEqualSid(SeOwnerRightsSid, v8) )
    return 1;
  v11 = RtlSidHashLookup(a1, v8);
  if ( v11
    && (!a5 && v11 == *(_QWORD *)(a1 + 8) && ((*(_DWORD *)(v11 + 8) & 0x10) == 0 || a4)
     || (v13 = *(_DWORD *)(v11 + 8), (v13 & 4) != 0)
     || a4 && (v13 & 0x10) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
