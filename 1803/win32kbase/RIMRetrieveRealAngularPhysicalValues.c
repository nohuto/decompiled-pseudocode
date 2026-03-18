/*
 * XREFs of RIMRetrieveRealAngularPhysicalValues @ 0x1C010869C
 * Callers:
 *     RIMRetrieveNormalizationRange @ 0x1C0108568 (RIMRetrieveNormalizationRange.c)
 * Callees:
 *     RIMComputePower @ 0x1C0108454 (RIMComputePower.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveRealAngularPhysicalValues(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  char v3; // r13
  int *v4; // r9
  unsigned int v6; // r15d
  __int16 v7; // r14
  int v8; // ebp
  int v9; // esi
  __int64 v11; // r12
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *v15; // r9
  unsigned int v16; // r15d
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v3 = *(_BYTE *)(a1 + 32) & 0xF;
  v21 = 62831;
  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = -4;
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL);
    v4 = 0LL;
  }
  v9 = *v4;
  if ( !*v4 )
    return 1LL;
  v11 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (*(_DWORD *)(a1 + 36) & 0xF) != 0 )
  {
    v12 = word_1C0183A60;
    do
    {
      if ( *v12 == v3 )
        break;
      ++v6;
      v12 += 4;
    }
    while ( v6 < 0xB );
    if ( v6 < 0xB )
      v7 = word_1C0183A60[2 * v6 + 1];
    v16 = RIMComputePower(v7);
    if ( !v16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
      v15 = (unsigned int *)a2;
    }
    if ( v9 < 0 )
      v9 = -v9;
    if ( (unsigned int)v11 < 5 )
    {
      v17 = dword_1C0183A48[v11];
      if ( v17 == 4 )
      {
        if ( v7 > -4 || !(v9 / v16) )
          return v2;
        if ( v7 < -4 )
        {
          v18 = 62831;
          do
          {
            if ( v8 <= -8 )
              break;
            v19 = v2;
            --v8;
            ++v2;
            v18 = dword_1C0183A38[v19] + 10 * v18;
          }
          while ( v8 > v7 );
          v21 = v18;
        }
        v20 = 360 * v9 / v21;
      }
      else
      {
        if ( v17 != 3 || v7 > -2 )
          return v2;
        v20 = v9 / v16;
      }
      v2 = 1;
      *v15 = v20;
    }
  }
  return v2;
}
