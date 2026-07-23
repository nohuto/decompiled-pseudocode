/*
 * XREFs of SeTokenCanImpersonate @ 0x1405DF060
 * Callers:
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x14000AF00 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x14000CAB0 (RtlSidDominatesForTrust.c)
 *     SeTokenIsRestricted @ 0x140086FD0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140086FF0 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x140087004 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x140087038 (SepAcquireOrderedReadLocks.c)
 *     SepCopyTokenIntegrity @ 0x1400E4838 (SepCopyTokenIntegrity.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14031DCE0 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BDAF8 (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlIsParentOfChildAppContainer @ 0x14069CA5C (RtlIsParentOfChildAppContainer.c)
 *     SeTokenIsElevated @ 0x1406D14C0 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406D4CC0 (RtlQueryElevationFlags.c)
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
  BOOLEAN DominatesTrust; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN Dominates; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+88h] [rbp+20h] BYREF

  result = 0;
  Dominates = 0;
  DominatesTrust = 0;
  v16 = 0;
  Flags.Flags = 0;
  *a4 = 0;
  if ( a3 >= 2 )
  {
    if ( *(_DWORD *)(a2 + 24) == 998 && !*(_DWORD *)(a2 + 28) )
    {
      if ( (*(_DWORD *)(Token + 200) & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
          return -1073741727;
        v7 = *(void **)(a2 + 784);
        v8 = *(void **)(Token + 784);
        if ( !RtlEqualSid(v8, v7) && !RtlIsParentOfChildAppContainer(v8, v7) )
          return -1073741727;
      }
      return 0;
    }
    result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), &DominatesTrust);
    if ( result < 0 )
      return result;
    if ( !DominatesTrust )
      *v9 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
      return 0;
    SepAcquireOrderedReadLocks(Token, a2);
    SepCopyTokenIntegrity(Token);
    SepCopyTokenIntegrity(a2);
    IsElevated = RtlSidDominates(0LL, 0LL, &Dominates);
    if ( IsElevated < 0 )
      goto LABEL_42;
    if ( !Dominates )
      goto LABEL_41;
    if ( SepIsImpersonationAllowedDueToCapability((char *)Token, a2)
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
      if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
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
      IsElevated = SeTokenIsElevated(a2, &v16);
      if ( IsElevated >= 0 )
      {
        if ( !v16 )
          goto LABEL_28;
        IsElevated = SeTokenIsElevated(Token, &v16);
        if ( IsElevated >= 0 )
        {
          if ( !v16 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
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
  return result;
}
