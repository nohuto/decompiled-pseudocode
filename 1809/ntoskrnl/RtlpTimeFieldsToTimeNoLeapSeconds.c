/*
 * XREFs of RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140127228
 * Callers:
 *     RtlTimeFieldsToTime @ 0x140127130 (RtlTimeFieldsToTime.c)
 *     RtlpTimeFieldsToTime @ 0x1401271B0 (RtlpTimeFieldsToTime.c)
 *     RtlParseLeapSecondData @ 0x1409077CC (RtlParseLeapSecondData.c)
 *     SeMakeSystemToken @ 0x1409AEE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AF3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AF624 (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTimeFieldsToTimeNoLeapSeconds(__int16 *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // esi
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // r10
  unsigned int v10; // ebp
  unsigned int v11; // r11d
  int v13; // eax
  int v14; // ecx
  __int16 v15; // r8
  char result; // al

  v2 = a1[1];
  v3 = *a1;
  v4 = a1[3];
  v5 = a1[2] - 1;
  v6 = a1[4];
  v7 = v2;
  v8 = a1[5];
  v9 = v2 - 1;
  v10 = a1[6];
  if ( a1[1] < 1 )
    return 0;
  if ( a1[2] < 1 )
    return 0;
  v11 = v3 - 1601;
  if ( v3 - 1601 > 0x722A || (unsigned int)v9 > 0xB )
    return 0;
  if ( v3 == 400 * (v3 / 0x190) || v3 != 100 * (v3 / 0x64) && (v3 & 3) == 0 )
  {
    v13 = LeapYearDaysPrecedingMonth[v9];
    v14 = LeapYearDaysPrecedingMonth[v7];
  }
  else
  {
    v13 = NormalYearDaysPrecedingMonth[v9];
    v14 = NormalYearDaysPrecedingMonth[v7];
  }
  if ( (__int16)v5 >= v14 - v13 || v4 > 0x17 || v6 > 0x3B || v8 > 0x3B || v10 > 0x3E7 )
    return 0;
  if ( v3 - 1600 != 400 * ((v3 - 1600) / 0x190) && (v3 - 1600 == 100 * ((v3 - 1600) / 0x64) || (v3 & 3) != 0) )
    v15 = NormalYearDaysPrecedingMonth[v9];
  else
    v15 = LeapYearDaysPrecedingMonth[v9];
  result = 1;
  *a2 = 10000
      * (v10
       + 1000 * (v8 + 60 * (v6 + 60 * v4))
       + 86400000LL * (int)(v5 + (v11 >> 2) + v11 / 0x190 - ((4 * (v11 / 0x190)) & 0x7FFFFFF) + 365 * v11 + v15));
  return result;
}
