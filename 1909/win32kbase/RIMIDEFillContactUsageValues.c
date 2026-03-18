/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1C0147454
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0147D4C (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011C508 (WPP_RECORDER_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(_DWORD *a1, __int64 a2, int *a3)
{
  int v3; // edi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // r10d
  __int64 v10; // kr00_8
  int v11; // edx
  char v13; // [rsp+30h] [rbp-18h]

  v3 = *a3;
  if ( *a3 == 2 && (unsigned int)a2 < 0xA || v3 == 3 && (unsigned int)a2 < 0xB || (unsigned int)(v3 - 2) > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = a2;
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_Dd((_DWORD)gRimLog, a2, 1, 20, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v3, v13);
    }
    return 0;
  }
  LOBYTE(a2) = 4;
  a1[1] = a3[10];
  a1[4] = a3[11];
  v6 = a3[5];
  if ( (v6 & 4) != 0 )
    a1[7] = 1;
  if ( (v6 & 2) != 0 )
    a1[10] = 1;
  if ( v3 == 3 )
  {
    v7 = a3[27];
    if ( (v7 & 1) != 0 )
      a1[13] = a3[28];
    if ( (v7 & 4) != 0 )
      a1[25] = a3[30];
    if ( (v7 & 8) != 0 )
      a1[28] = a3[31];
    if ( (v7 & 2) != 0 )
      a1[31] = a3[29];
    v8 = a3[26];
    if ( (v8 & 1) != 0 )
      a1[16] = 1;
    if ( (v8 & 2) != 0 )
      a1[19] = 1;
    if ( (v8 & 4) != 0 )
      a1[22] = 1;
    return 1;
  }
  if ( v3 == 2 )
  {
    v9 = a3[27];
    if ( (v9 & 4) != 0 )
      a1[13] = a3[37];
    if ( (v9 & 1) != 0 )
    {
      v10 = a3[30] - a3[28];
      a1[19] = (HIDWORD(v10) ^ v10) - HIDWORD(v10);
      a1[22] = abs32(a3[31] - a3[29]);
    }
    a1[25] = a3[3];
    if ( (v9 & 2) != 0 )
      a1[28] = a3[36];
    a1[16] = 1;
    return 1;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v11, 1, 21, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v3);
  }
  return v5;
}
