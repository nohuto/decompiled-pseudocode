/*
 * XREFs of GetProcessorArchitectureIndex @ 0x1C0025070
 * Callers:
 *     InitEnergyCounters @ 0x1C0024F00 (InitEnergyCounters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004340 (GetCpuIdInfo.c)
 */

__int64 GetProcessorArchitectureIndex()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdx
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int i; // r8d
  _DWORD *j; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v8[8]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v9[20]; // [rsp+50h] [rbp-9h] BYREF

  v8[0] = 55;
  v8[1] = 74;
  v8[2] = 90;
  v8[3] = 76;
  v0 = 1;
  v8[4] = 93;
  v9[0] = 42;
  v9[1] = 45;
  v9[2] = 58;
  v9[3] = 62;
  v9[4] = 60;
  v9[5] = 63;
  v9[6] = 69;
  v9[7] = 70;
  v9[8] = 61;
  v9[9] = 71;
  v9[10] = 79;
  v9[11] = 86;
  v9[12] = 78;
  v9[13] = 94;
  v9[14] = 142;
  v9[15] = 158;
  v9[16] = 125;
  v9[17] = 126;
  v9[18] = 165;
  v9[19] = 166;
  v7[0] = 0LL;
  v7[1] = 0LL;
  GetCpuIdInfo(1u, v7);
  if ( (BYTE1(v7[0]) & 0xF) == 6 )
  {
    v1 = v8;
    v2 = (v7[0] & 0xF0 | (LODWORD(v7[0]) >> 8) & 0xF00) >> 4;
    v3 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( v2 == *v1 )
        return 0;
      ++v1;
    }
    for ( j = v9; v2 != *j; ++j )
    {
      if ( (unsigned int)++v3 >= 0x14 )
        return 2;
    }
  }
  else
  {
    return 2;
  }
  return v0;
}
