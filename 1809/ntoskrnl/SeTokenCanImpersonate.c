/*
 * XREFs of SeTokenCanImpersonate @ 0x140639100
 * Callers:
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140013360 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140013380 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x1400135BC (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1400135F0 (SepAcquireOrderedReadLocks.c)
 *     SepCopyTokenIntegrity @ 0x140091D60 (SepCopyTokenIntegrity.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x1400A9170 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x1400AD0E0 (RtlSidDominatesForTrust.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14030024C (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     RtlIsParentOfChildAppContainer @ 0x140655DF4 (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AEBEC (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x1406B1B9C (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406B6120 (RtlQueryElevationFlags.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  void *v7; // rbx
  void *v8; // rdi
  _BYTE *v9; // r11
  NTSTATUS IsElevated; // ebx
  void *v11; // rbp
  void *v12; // r14
  int v13; // eax
  PSID Sid2; // [rsp+20h] [rbp-48h]
  PSID Sid1; // [rsp+30h] [rbp-38h]
  _RTL_ELEVATION_FLAGS DominatesTrust; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN Dominates; // [rsp+78h] [rbp+10h] BYREF
  char v18; // [rsp+80h] [rbp+18h] BYREF

  Dominates = 0;
  LOBYTE(DominatesTrust.Flags) = 0;
  v18 = 0;
  *a4 = 0;
  if ( a3 < 2 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28) )
  {
    result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), (PBOOLEAN)&DominatesTrust);
    if ( result < 0 )
      return result;
    if ( !LOBYTE(DominatesTrust.Flags) )
      *v9 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
      return 0;
    SepAcquireOrderedReadLocks(Token, a2);
    SepCopyTokenIntegrity();
    SepCopyTokenIntegrity();
    IsElevated = RtlSidDominates(Sid1, Sid2, &Dominates);
    if ( IsElevated < 0 )
      goto LABEL_42;
    if ( !Dominates )
      goto LABEL_41;
    if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
      || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
    {
      IsElevated = 0;
    }
    else
    {
      if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
      {
LABEL_41:
        IsElevated = -1073741727;
        goto LABEL_42;
      }
      if ( RtlQueryElevationFlags(&DominatesTrust) < 0 || (DominatesTrust.Flags & 1) == 0 )
      {
LABEL_31:
        IsElevated = 0;
        if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
          || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
          && ((v11 = *(void **)(a2 + 784), v12 = *(void **)(Token + 784), RtlEqualSid(v12, v11))
           || RtlIsParentOfChildAppContainer(v12, v11)) )
        {
          if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
            || SeTokenIsRestricted((PACCESS_TOKEN)a2)
            && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
          {
            v13 = *(_DWORD *)(a2 + 120);
            if ( *(_DWORD *)(Token + 120) == v13 || v13 )
              goto LABEL_42;
          }
        }
        goto LABEL_41;
      }
      IsElevated = SeTokenIsElevated(a2, &v18);
      if ( IsElevated >= 0 )
      {
        if ( !v18 )
          goto LABEL_28;
        IsElevated = SeTokenIsElevated(Token, &v18);
        if ( IsElevated >= 0 )
        {
          if ( !v18 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
            goto LABEL_41;
LABEL_28:
          if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0
            && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 )
          {
            SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
            goto LABEL_41;
          }
          goto LABEL_31;
        }
      }
    }
LABEL_42:
    SepReleaseOrderedReadLocks(Token, a2);
    return IsElevated;
  }
  if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
    return 0;
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v7 = *(void **)(a2 + 784);
    v8 = *(void **)(Token + 784);
    if ( RtlEqualSid(v8, v7) || RtlIsParentOfChildAppContainer(v8, v7) )
      return 0;
  }
  return -1073741727;
}
