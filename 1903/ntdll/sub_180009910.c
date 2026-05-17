/*
 * XREFs of sub_180009910 @ 0x180009910
 * Callers:
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 * Callees:
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800E6498 @ 0x1800E6498 (sub_1800E6498.c)
 */

__int64 __fastcall sub_180009910(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v5; // eax
  int v6; // ebx
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
  v5 = sub_180009998(a2, &UnicodeString);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    v6 = 0;
  }
  else
  {
    *a3 = 0;
    if ( v5 >= 0 )
    {
      if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString, &unk_180119568, 0LL) )
      {
        if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString, &unk_180119558, 0LL) )
        {
          v6 = -1073741823;
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
      v6 = RtlCheckTokenMembershipEx(a1, v15, 2LL, &v10);
      if ( v6 >= 0 )
      {
        if ( v10 )
        {
          v6 = sub_1800E6498(a1, v11);
          if ( v6 >= 0 )
          {
            if ( v11[0] )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_3:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v6;
}
