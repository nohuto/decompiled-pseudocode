/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x18004B61C
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlInitializeSid @ 0x1800487A0 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlpIsAppContainer @ 0x1800E91EC (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(void *a1, __int64 a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  unsigned __int64 v8; // rbx
  char v9; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[3]; // [rsp+31h] [rbp-3Fh] BYREF
  int v11; // [rsp+34h] [rbp-3Ch] BYREF
  __int16 v12; // [rsp+38h] [rbp-38h]
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+5Ch] [rbp-14h]

  v12 = 1280;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11 = 0;
  v9 = 0;
  v10[0] = 0;
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
      v8 = (unsigned __int64)UnicodeString.Length >> 1;
      if ( (unsigned int)RtlCompareUnicodeStrings(UnicodeString.Buffer, v8, (unsigned int)L"DO", 2, 0) )
      {
        if ( (unsigned int)RtlCompareUnicodeStrings(UnicodeString.Buffer, v8, (unsigned int)L"IU", 2, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        RtlInitializeSid((__int64)v14, (__int64)&v11, 1u);
        v15 = 4;
      }
      else
      {
        RtlInitializeSid((__int64)v14, (__int64)&v11, 2u);
        v15 = 32;
        v16 = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(a1, (__int64)v14, 2, &v9);
      if ( IsAppContainer >= 0 )
      {
        if ( v9 )
        {
          IsAppContainer = RtlpIsAppContainer(a1, v10);
          if ( IsAppContainer >= 0 )
          {
            if ( v10[0] )
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
