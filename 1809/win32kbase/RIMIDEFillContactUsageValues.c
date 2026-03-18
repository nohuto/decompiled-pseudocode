/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1C011E60C
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C011ED14 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(_DWORD *a1, __int64 a2, int *a3)
{
  int v3; // eax
  _DWORD *v4; // r10
  unsigned int v5; // r9d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // kr00_8

  v3 = *a3;
  v4 = a1;
  if ( *a3 == 2 && (unsigned int)a2 < 0xA )
    return 0;
  if ( v3 == 3 && (unsigned int)a2 < 0xB )
    return 0;
  v5 = 1;
  if ( (unsigned int)(v3 - 2) > 1 )
    return 0;
  a1[1] = a3[10];
  a1[4] = a3[11];
  LOBYTE(a1) = 4;
  v6 = a3[5];
  if ( (v6 & 4) != 0 )
  {
    v4[7] = 1;
    v6 = a3[5];
  }
  if ( (v6 & 2) != 0 )
    v4[10] = 1;
  if ( *a3 == 3 )
  {
    v7 = a3[27];
    if ( (v7 & 1) != 0 )
    {
      v4[13] = a3[28];
      v7 = a3[27];
    }
    if ( (v7 & 4) != 0 )
    {
      v4[25] = a3[30];
      v7 = a3[27];
    }
    if ( (v7 & 8) != 0 )
    {
      v4[28] = a3[31];
      v7 = a3[27];
    }
    if ( (v7 & 2) != 0 )
      v4[31] = a3[29];
    v8 = a3[26];
    if ( (v8 & 1) != 0 )
    {
      v4[16] = 1;
      v8 = a3[26];
    }
    if ( (v8 & 2) != 0 )
    {
      v4[19] = 1;
      v8 = a3[26];
    }
    if ( (v8 & 4) != 0 )
      v4[22] = 1;
    return v5;
  }
  if ( *a3 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    return 0;
  }
  v9 = a3[27];
  if ( (v9 & 4) != 0 )
  {
    v4[13] = a3[37];
    v9 = a3[27];
  }
  if ( (v9 & 1) != 0 )
  {
    v10 = a3[30] - a3[28];
    v4[19] = (HIDWORD(v10) ^ v10) - HIDWORD(v10);
    v4[22] = abs32(a3[31] - a3[29]);
  }
  v4[25] = a3[3];
  if ( (a3[27] & 2) != 0 )
    v4[28] = a3[36];
  v4[16] = 1;
  return v5;
}
