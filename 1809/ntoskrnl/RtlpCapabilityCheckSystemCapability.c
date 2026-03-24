/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x140894218
 * Callers:
 *     RtlCapabilityCheck @ 0x1408938C0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1400DCAF0 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembershipEx @ 0x1400DCB30 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     RtlCompareUnicodeString @ 0x1405BFF20 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x140655670 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894B90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpIsAppContainer @ 0x140895464 (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE ExistingTokenHandle, PCUNICODE_STRING Source, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  char v8; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v9[3]; // [rsp+21h] [rbp-3Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-3Ch] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+40h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v8 = 0;
  v9[0] = 0;
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
      if ( RtlCompareUnicodeString(&String1, &stru_140355E28, 0) )
      {
        if ( RtlCompareUnicodeString(&String1, &stru_140355E08, 0) )
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
      IsAppContainer = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v8);
      if ( IsAppContainer >= 0 )
      {
        if ( v8 )
        {
          IsAppContainer = RtlpIsAppContainer(ExistingTokenHandle, v9);
          if ( IsAppContainer >= 0 )
          {
            if ( v9[0] )
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
