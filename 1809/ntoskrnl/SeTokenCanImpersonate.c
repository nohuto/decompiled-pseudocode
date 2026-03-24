/*
 * XREFs of SeTokenCanImpersonate @ 0x1406380E0
 * Callers:
 *     PsImpersonateClient @ 0x140637B70 (PsImpersonateClient.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140013360 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140013380 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x1400135BC (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1400135F0 (SepAcquireOrderedReadLocks.c)
 *     SepCopyTokenIntegrity @ 0x140091E20 (SepCopyTokenIntegrity.c)
 *     RtlEqualSid @ 0x1400A7DF0 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x1400A9230 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x1400AD1A0 (RtlSidDominatesForTrust.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14030005C (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     RtlIsParentOfChildAppContainer @ 0x140654C34 (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AD94C (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x1406B08FC (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406B4E80 (RtlQueryElevationFlags.c)
 */

__int64 __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  __int64 result; // rax
  void *v7; // rbx
  void *v8; // rdi
  _BYTE *v9; // r11
  int IsElevated; // ebx
  void *v11; // rbp
  void *v12; // r14
  int v13; // eax
  _DWORD *Buf2; // [rsp+20h] [rbp-48h]
  _DWORD *Buf1; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+70h] [rbp+8h] BYREF
  bool v17; // [rsp+78h] [rbp+10h] BYREF
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = 0;
  v16 = 0;
  v18 = 0;
  *a4 = 0;
  if ( a3 < 2 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28) )
  {
    result = RtlSidDominatesForTrust(*(_QWORD *)(Token + 1104), *(_QWORD *)(a2 + 1104), &v16);
    if ( (int)result < 0 )
      return result;
    if ( !v16 )
      *v9 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
      return 0LL;
    SepAcquireOrderedReadLocks(Token, a2);
    SepCopyTokenIntegrity();
    SepCopyTokenIntegrity();
    IsElevated = RtlSidDominates(Buf1, Buf2, &v17);
    if ( IsElevated < 0 )
      goto LABEL_42;
    if ( !v17 )
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
      if ( (int)RtlQueryElevationFlags(&v16) < 0 || (v16 & 1) == 0 )
      {
LABEL_31:
        IsElevated = 0;
        if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
          || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
          && ((v11 = *(void **)(a2 + 784), v12 = *(void **)(Token + 784), RtlEqualSid(v12, v11))
           || (unsigned __int8)RtlIsParentOfChildAppContainer(v12, v11)) )
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
    return (unsigned int)IsElevated;
  }
  if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v7 = *(void **)(a2 + 784);
    v8 = *(void **)(Token + 784);
    if ( RtlEqualSid(v8, v7) || (unsigned __int8)RtlIsParentOfChildAppContainer(v8, v7) )
      return 0LL;
  }
  return 3221225569LL;
}
