/*
 * XREFs of GetProcessorArchitectureIndex @ 0x1C00245B0
 * Callers:
 *     InitEnergyCounters @ 0x1C0024440 (InitEnergyCounters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004C40 (GetCpuIdInfo.c)
 */

__int64 GetProcessorArchitectureIndex()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdx
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int i; // r8d
  _DWORD *j; // rdx
  unsigned int v7; // [rsp+20h] [rbp-29h] BYREF
  _DWORD v8[8]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v9[16]; // [rsp+50h] [rbp+7h] BYREF

  v0 = 1;
  v8[0] = 55;
  v8[1] = 74;
  v8[2] = 90;
  v8[3] = 76;
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
  GetCpuIdInfo(1u, &v7);
  if ( (BYTE1(v7) & 0xF) == 6 )
  {
    v1 = v8;
    v2 = (v7 & 0xF0 | (v7 >> 8) & 0xF00) >> 4;
    v3 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( v2 == *v1 )
        return 0;
      ++v1;
    }
    for ( j = v9; v2 != *j; ++j )
    {
      if ( (unsigned int)++v3 >= 0x10 )
        return 2;
    }
  }
  else
  {
    return 2;
  }
  return v0;
}
