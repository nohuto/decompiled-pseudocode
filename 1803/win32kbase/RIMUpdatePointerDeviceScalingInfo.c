/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1C0058B70
 * Callers:
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0053880 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     rimSetDeviceDisplayConfig @ 0x1C0058974 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C00E9D84 (rimConvertCoordinatesWithRounding.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(_DWORD *a1, _DWORD *a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v7; // r9d
  int v8; // r10d
  unsigned int v9; // ebp
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // r8d
  unsigned int v13; // r14d
  unsigned int v14; // r13d
  unsigned int v15; // esi
  int v16; // eax
  unsigned int v17; // r11d
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // edx
  int v21; // ecx
  int *v22; // r12
  int v23; // eax
  _DWORD *v24; // r14
  int v25; // edx
  int v26; // ecx
  __int64 result; // rax
  int v28; // eax
  int v29; // r10d
  int v30; // ebp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx

  if ( !a2[14] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !a2[15] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !a2[22] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v7 = a2[23];
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v7 = a2[23];
  }
  v8 = a2[14];
  v9 = 0;
  v10 = a2[15];
  v11 = 0;
  v12 = a2[22];
  *a4 = v8;
  a4[1] = v10;
  v13 = a2[36];
  v14 = a2[35];
  v15 = a2[38] - v13;
  v16 = a2[27];
  v17 = a2[37] - v14;
  if ( v16 == 4 )
  {
    if ( (v8 << 14) / v10 < (v12 << 14) / v7 )
      v28 = (v8 << 14) / v12;
    else
      v28 = (v10 << 14) / v7;
    v17 = (v28 * v17) >> 14;
    v15 = (v28 * v15) >> 14;
    v14 = (v28 * v14) >> 14;
    v20 = (v12 * v28) >> 14;
    v13 = (unsigned int)(a2[36] * v28) >> 14;
    v7 = (v28 * v7) >> 14;
    a4[3] = v7;
    a4[2] = v20;
  }
  else if ( v16 == 2 )
  {
    a4[2] = v12;
    v20 = v12;
    a4[3] = v7;
  }
  else
  {
    a4[2] = v8;
    a4[3] = v10;
    v18 = (v8 << 14) / v12;
    v19 = (v10 << 14) / v7;
    v20 = v8;
    v7 = v10;
    v17 = (v18 * v17) >> 14;
    v15 = (v19 * v15) >> 14;
    v14 = (v18 * v14) >> 14;
    v13 = (v19 * v13) >> 14;
  }
  if ( a3 )
  {
    v9 = (a1[2] - *a1) * (abs32(v8 - v20) + 2 * v14) / (2 * v8);
    v11 = (a1[3] - a1[1]) * (abs32(v10 - v7) + 2 * v13) / (2 * v10);
  }
  a4[2] = v17;
  a4[3] = v15;
  if ( !a3 && ((a2[26] - 2) & 0xFFFFFFFD) == 0 )
  {
    v29 = v10 ^ v8;
    v30 = v11 ^ v9;
    *a4 = v29;
    v11 ^= v30;
    a4[1] ^= v29;
    *a4 ^= a4[1];
    a4[2] ^= v15;
    a4[3] ^= a4[2];
    a4[2] ^= a4[3];
    v9 = v11 ^ v30;
  }
  v21 = a4[2];
  v22 = a5 + 2;
  v23 = a1[2];
  if ( *a4 == v21 )
  {
    *v22 = v23;
  }
  else if ( !(unsigned int)rimConvertCoordinatesWithRounding(0, *a4, 0, v23, v21, a5 + 2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31);
  }
  v24 = a5 + 3;
  v25 = a4[1];
  v26 = a4[3];
  result = (unsigned int)a1[3];
  if ( v25 == v26 )
  {
    *v24 = result;
  }
  else
  {
    result = rimConvertCoordinatesWithRounding(0, v25, 0, result, v26, a5 + 3);
    if ( !(_DWORD)result )
      result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33);
  }
  if ( a3 )
  {
    *a5 += v9;
    *v22 += v9;
    a5[1] += v11;
    *v24 += v11;
    result = (unsigned int)(a2[26] - 2);
    if ( (result & 0xFFFFFFFD) == 0 )
    {
      *a4 ^= a4[1];
      a4[1] ^= *a4;
      *a4 ^= a4[1];
      a4[2] ^= a4[3];
      a4[3] ^= a4[2];
      result = (unsigned int)a4[3];
      a4[2] ^= result;
    }
  }
  return result;
}
