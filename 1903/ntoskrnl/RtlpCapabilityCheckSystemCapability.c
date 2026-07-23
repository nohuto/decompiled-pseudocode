/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x1408D23B8
 * Callers:
 *     RtlCapabilityCheck @ 0x1408D1A90 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 *     RtlInitializeSid @ 0x1406810A0 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D2AA0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpIsAppContainer @ 0x1408D3374 (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(PACCESS_TOKEN Token, PCUNICODE_STRING Source, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  NTSTATUS IsAppContainer; // ebx
  BOOLEAN IsMember; // [rsp+20h] [rbp-40h] BYREF
  char v9; // [rsp+21h] [rbp-3Fh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-3Ch] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+40h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  IsMember = 0;
  v9 = 0;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(Source, &String1);
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
      if ( RtlCompareUnicodeString(&String1, &stru_140375E50, 0) )
      {
        if ( RtlCompareUnicodeString(&String1, &stru_140375E30, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_14;
        }
        RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        *RtlSubAuthoritySid(Sid, 0) = 4;
      }
      else
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *RtlSubAuthoritySid(Sid, 0) = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(Token, Sid, 2u, &IsMember);
      if ( IsAppContainer >= 0 )
      {
        if ( IsMember )
        {
          IsAppContainer = RtlpIsAppContainer(Token);
          if ( IsAppContainer >= 0 )
          {
            if ( v9 )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_14:
  RtlFreeAnsiString(&String1);
  return (unsigned int)IsAppContainer;
}
