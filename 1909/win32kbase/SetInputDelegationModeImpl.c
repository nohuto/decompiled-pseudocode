/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C008B4FC
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C008B2D0 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C0097CE8 (ApiSetEditionInternalSetCursorPos.c)
 *     DisableDelegation @ 0x1C009D4D0 (DisableDelegation.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C01758E0 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(int a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  CCursorClip *v5; // rcx
  char v6; // di
  UINT32 cData; // r9d
  unsigned int v9; // ebx
  int v10; // [rsp+30h] [rbp-9h] BYREF
  __int64 v11; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v13; // [rsp+60h] [rbp+27h]
  UINT32 v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+6Ch] [rbp+33h]
  __int64 *v16; // [rsp+70h] [rbp+37h]
  UINT32 v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+7Ch] [rbp+43h]

  v4 = a2;
  GetDomainLockRef(18LL, a2, a3);
  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 2uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v10;
    v16 = &v11;
    v10 = v4;
    v14 = cData;
    LODWORD(v11) = a1;
    v17 = cData;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5911, 0LL, 0LL, cData, &pData);
  }
  if ( v4 )
  {
    if ( (v4 & 2) != 0 )
    {
      CCursorClip::OverrideClip(v5, 1);
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = gptCursorAsync;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = v4;
    InputDelegation::CInputDelegationInfo::gInstance = a1;
  }
  else
  {
    v6 = *(&InputDelegation::CInputDelegationInfo::gInstance + 4);
    if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v9 = *(&InputDelegation::CInputDelegationInfo::gInstance + 2);
      v11 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
      DisableDelegation();
      if ( (v6 & 2) != 0 )
        ApiSetEditionInternalSetCursorPos(v9, HIDWORD(v11), 1LL);
      if ( (v6 & 1) != 0 )
        *(_DWORD *)(gpqForeground + 396) |= 1u;
    }
  }
  return 1LL;
}
