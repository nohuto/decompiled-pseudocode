/*
 * XREFs of SeTokenCanImpersonate @ 0x1405DE8C0
 * Callers:
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x14000AE70 (RtlSidDominates.c)
 *     RtlSidDominatesForTrust @ 0x14000CA20 (RtlSidDominatesForTrust.c)
 *     SeTokenIsRestricted @ 0x140086BB0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140086BD0 (SeTokenIsWriteRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x140086BE4 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x140086C18 (SepAcquireOrderedReadLocks.c)
 *     SepCopyTokenIntegrity @ 0x1400AE2E8 (SepCopyTokenIntegrity.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14031E290 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BD718 (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlIsParentOfChildAppContainer @ 0x14067F9B4 (RtlIsParentOfChildAppContainer.c)
 *     SeTokenIsElevated @ 0x1406D2160 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1406D55E0 (RtlQueryElevationFlags.c)
 */

__int64 __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  __int64 result; // rax
  _BYTE *v7; // r11
  int IsElevated; // ebx
  void *v9; // rbp
  void *v10; // r14
  int v11; // eax
  char v12; // [rsp+70h] [rbp+8h] BYREF
  bool v13; // [rsp+78h] [rbp+10h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  result = 0LL;
  v13 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  *a4 = 0;
  if ( a3 >= 2 && (*(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28)) )
  {
    result = RtlSidDominatesForTrust(*(_QWORD *)(Token + 1104), *(_QWORD *)(a2 + 1104), &v12);
    if ( (int)result >= 0 )
    {
      if ( !v12 )
        *v7 = 1;
      if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
        return 0LL;
      SepAcquireOrderedReadLocks(Token, a2);
      SepCopyTokenIntegrity(Token);
      SepCopyTokenIntegrity(a2);
      IsElevated = RtlSidDominates(0LL, 0LL, &v13);
      if ( IsElevated < 0 )
        goto LABEL_37;
      if ( !v13 )
        goto LABEL_36;
      if ( SepIsImpersonationAllowedDueToCapability(Token, a2)
        || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
      {
        IsElevated = 0;
      }
      else
      {
        if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
        {
LABEL_36:
          IsElevated = -1073741727;
          goto LABEL_37;
        }
        if ( (int)RtlQueryElevationFlags(&v15) < 0 || (v15 & 1) == 0 )
        {
LABEL_26:
          IsElevated = 0;
          if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
            || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
            && ((v9 = *(void **)(a2 + 784), v10 = *(void **)(Token + 784), RtlEqualSid(v10, v9))
             || (unsigned __int8)RtlIsParentOfChildAppContainer(v10, v9)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v11 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v11 || v11 )
                goto LABEL_37;
            }
          }
          goto LABEL_36;
        }
        IsElevated = SeTokenIsElevated(a2, &v14);
        if ( IsElevated >= 0 )
        {
          if ( !v14 )
            goto LABEL_23;
          IsElevated = SeTokenIsElevated(Token, &v14);
          if ( IsElevated >= 0 )
          {
            if ( !v14 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
              goto LABEL_36;
LABEL_23:
            if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0
              && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 )
            {
              SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
              goto LABEL_36;
            }
            goto LABEL_26;
          }
        }
      }
LABEL_37:
      SepReleaseOrderedReadLocks(Token, a2);
      return (unsigned int)IsElevated;
    }
  }
  return result;
}
