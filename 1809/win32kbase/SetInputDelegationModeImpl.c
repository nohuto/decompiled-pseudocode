/*
 * XREFs of SetInputDelegationModeImpl @ 0x1C0034A24
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C00348E0 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C0088330 (ApiSetEditionInternalSetCursorPos.c)
 *     DisableDelegation @ 0x1C008AEF0 (DisableDelegation.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C0148B84 (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 */

__int64 __fastcall SetInputDelegationModeImpl(CCursorClip *a1, int a2)
{
  int v3; // edi
  char v4; // di
  UINT32 cData; // r9d
  unsigned int v7; // ebx
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+27h]
  UINT32 v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  __int64 *v14; // [rsp+70h] [rbp+37h]
  UINT32 v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  v3 = (int)a1;
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 2uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v14 = &v9;
    v8 = a2;
    v12 = cData;
    LODWORD(v9) = v3;
    v15 = cData;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A116D, 0LL, 0LL, cData, &pData);
  }
  if ( a2 )
  {
    if ( (a2 & 2) != 0 )
    {
      CCursorClip::OverrideClip(a1, 1);
      *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = gptCursorAsync;
    }
    *(&InputDelegation::CInputDelegationInfo::gInstance + 1) = a2;
    InputDelegation::CInputDelegationInfo::gInstance = v3;
  }
  else
  {
    v4 = *(&InputDelegation::CInputDelegationInfo::gInstance + 4);
    if ( *(&InputDelegation::CInputDelegationInfo::gInstance + 1) )
    {
      v7 = *(&InputDelegation::CInputDelegationInfo::gInstance + 2);
      v9 = *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
      DisableDelegation();
      if ( (v4 & 2) != 0 )
        ApiSetEditionInternalSetCursorPos(v7, HIDWORD(v9), 1LL);
      if ( (v4 & 1) != 0 )
        *(_DWORD *)(gpqForeground + 388) |= 1u;
    }
  }
  return 1LL;
}
