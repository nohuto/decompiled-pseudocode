/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x180009910
 * Callers:
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlpIsAppContainer @ 0x1800E6588 (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE TokenHandle, PCUNICODE_STRING Source, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  NTSTATUS IsAppContainer; // ebx
  BOOLEAN IsMember; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v9[3]; // [rsp+21h] [rbp-3Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-3Ch] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _BYTE Sid[8]; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+4Ch] [rbp-14h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  IsMember = 0;
  v9[0] = 0;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(Source, &UnicodeString);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
  }
  else
  {
    *a3 = 0;
    if ( PolicyValueForSystemCapability >= 0 )
    {
      if ( RtlCompareUnicodeString(&UnicodeString, (PUNICODE_STRING)&stru_180119568, 0) )
      {
        if ( RtlCompareUnicodeString(&UnicodeString, (PUNICODE_STRING)&stru_180119558, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        v13 = 4;
      }
      else
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        v13 = 32;
        v14 = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &IsMember);
      if ( IsAppContainer >= 0 )
      {
        if ( IsMember )
        {
          IsAppContainer = RtlpIsAppContainer(TokenHandle, v9);
          if ( IsAppContainer >= 0 )
          {
            if ( v9[0] )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_3:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)IsAppContainer;
}
