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

__int64 __fastcall sub_180009910(HANDLE TokenHandle, PCUNICODE_STRING Source, _BYTE *a3)
{
  int v5; // eax
  NTSTATUS v6; // ebx
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
  v5 = sub_180009998(Source, &UnicodeString);
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
      if ( RtlCompareUnicodeString(&UnicodeString, (PUNICODE_STRING)&stru_180119568, 0) )
      {
        if ( RtlCompareUnicodeString(&UnicodeString, (PUNICODE_STRING)&stru_180119558, 0) )
        {
          v6 = -1073741823;
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
      v6 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &IsMember);
      if ( v6 >= 0 )
      {
        if ( IsMember )
        {
          v6 = sub_1800E6498(TokenHandle, v9);
          if ( v6 >= 0 )
          {
            if ( v9[0] )
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
