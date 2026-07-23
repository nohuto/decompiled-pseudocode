/*
 * XREFs of ExpFirmwareAccessAppContainerCheck @ 0x14090DC80
 * Callers:
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DADE4 (ExpGetSystemFirmwareTableInformation.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EDCB0 (NtQuerySystemEnvironmentValueEx.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140912EF0 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x1401C1070 (ZwQueryInformationToken.c)
 *     RtlRunOnceExecuteOnce @ 0x14061A280 (RtlRunOnceExecuteOnce.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 *     ExpCapabilityCheck @ 0x14090CE14 (ExpCapabilityCheck.c)
 */

bool __fastcall ExpFirmwareAccessAppContainerCheck(int a1)
{
  int v1; // ecx
  BOOLEAN IsMember[4]; // [rsp+30h] [rbp-D0h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v8; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v9; // [rsp+68h] [rbp-98h] BYREF
  _QWORD Sid[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v11; // [rsp+90h] [rbp-70h] BYREF
  int v12; // [rsp+98h] [rbp-68h]
  wchar_t v13; // [rsp+9Ch] [rbp-64h]
  _OWORD v14[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+E0h] [rbp-20h]
  wchar_t v16; // [rsp+E8h] [rbp-18h]
  _OWORD v17[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v18; // [rsp+130h] [rbp+30h]
  int v19; // [rsp+138h] [rbp+38h]

  TokenInformation = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(Sid, 0, sizeof(Sid));
  v11 = *(_QWORD *)L"smbios";
  v12 = *(_DWORD *)L"os";
  v14[0] = *(_OWORD *)L"Microsoft.firmwareRead_cw5n1h2txyewy";
  v13 = aSmbios[6];
  v14[2] = *(_OWORD *)L"reRead_cw5n1h2txyewy";
  v9.Buffer = (wchar_t *)&v11;
  v14[1] = *(_OWORD *)L"t.firmwareRead_cw5n1h2txyewy";
  v15 = *(_QWORD *)L"yewy";
  v16 = aMicrosoftFirmw_0[36];
  v14[3] = *(_OWORD *)L"w5n1h2txyewy";
  v17[0] = *(_OWORD *)L"Microsoft.firmwareWrite_cw5n1h2txyewy";
  v8.Buffer = (wchar_t *)v14;
  v19 = *(_DWORD *)L"y";
  v17[1] = *(_OWORD *)L"t.firmwareWrite_cw5n1h2txyewy";
  v17[2] = *(_OWORD *)L"reWrite_cw5n1h2txyewy";
  CapabilityName.Buffer = (wchar_t *)v17;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_QWORD *)&v9.Length = 917516LL;
  *(_QWORD *)&v8.Length = 4849736LL;
  v17[3] = *(_OWORD *)L"cw5n1h2txyewy";
  v18 = *(_QWORD *)L"xyewy";
  *(_QWORD *)&CapabilityName.Length = 4980810LL;
  if ( !a1 )
    return ExpCapabilityCheck(&v9);
  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
    goto LABEL_4;
  }
  if ( !ExpCapabilityCheck(&v8) )
  {
LABEL_4:
    if ( !ExpCapabilityCheck(&CapabilityName) )
      return 0;
  }
  if ( BYTE2(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4]) != 0x81 )
  {
    RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
    if ( !ExpTestSigningEnabled )
      return 0;
  }
  IsMember[0] = 0;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *RtlSubAuthoritySid(Sid, 0) = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  return ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenLinkedToken, &TokenInformation, 8u, &ReturnLength) >= 0
      && ReturnLength == 8
      && RtlCheckTokenMembershipEx(TokenInformation, Sid, 1u, IsMember) >= 0
      && IsMember[0];
}
