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

__int64 __fastcall RtlpCapabilityCheckSystemCapability(__int64 a1, __int64 a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  __int64 v8; // r8
  __int64 v9; // r8
  char v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[3]; // [rsp+21h] [rbp-3Fh] BYREF
  int v12; // [rsp+24h] [rbp-3Ch] BYREF
  __int16 v13; // [rsp+28h] [rbp-38h]
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]

  v13 = 1280;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v12 = 0;
  v10 = 0;
  v11[0] = 0;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, &UnicodeString);
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
      if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString, &unk_180119568, 0LL) )
      {
        if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString, &unk_180119558, 0LL) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        LOBYTE(v9) = 1;
        RtlInitializeSid(v15, &v12, v9);
        v16 = 4;
      }
      else
      {
        LOBYTE(v8) = 2;
        RtlInitializeSid(v15, &v12, v8);
        v16 = 32;
        v17 = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(a1, v15, 2LL, &v10);
      if ( IsAppContainer >= 0 )
      {
        if ( v10 )
        {
          IsAppContainer = RtlpIsAppContainer(a1, v11);
          if ( IsAppContainer >= 0 )
          {
            if ( v11[0] )
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
