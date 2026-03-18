/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C013A9FC
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C013DB30 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned __int16 v11; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int SpecificValueCaps; // r15d
  unsigned __int16 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int16 v25; // ax
  int v26; // eax
  int v27; // eax
  unsigned int v30; // [rsp+90h] [rbp+18h]

  v30 = a3;
  v9 = a8;
  v10 = 0;
  v11 = a5;
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v14 = a9;
  if ( !a9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v15 = a6;
  if ( !a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v16 = a7;
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !v11 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= v30 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a4, 0, v15, (__int64)&a5, v14);
  if ( a5 != v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  if ( SpecificValueCaps >= 0 )
  {
    v22 = 0;
    if ( v17 < v16 )
    {
      v23 = a8;
      while ( 1 )
      {
        if ( v22 >= v11 )
          goto LABEL_42;
        if ( *(_BYTE *)(a1 + 776) == *(_BYTE *)(v15 + 72LL * v22 + 2) && v17 < v30 )
          break;
LABEL_41:
        ++v22;
        if ( v17 >= v16 )
          goto LABEL_42;
      }
      v24 = 28LL * v17;
      *(_WORD *)(v24 + v9 + 24) = *(_WORD *)(v15 + 72LL * v22);
      *(_WORD *)(v24 + v9 + 26) = *(_WORD *)(v15 + 72LL * v22 + 56);
      *(_DWORD *)(v24 + v9) = *(_DWORD *)(v15 + 72LL * v22 + 40);
      *(_DWORD *)(v24 + v9 + 4) = *(_DWORD *)(v15 + 72LL * v22 + 44);
      if ( *(_WORD *)(v15 + 72LL * v22) == 1 )
      {
        v25 = *(_WORD *)(v15 + 72LL * v22 + 56);
        if ( v25 == 48 && *(_DWORD *)(v23 + 1336) )
        {
          *(_DWORD *)(v24 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
          {
LABEL_33:
            v26 = *(_DWORD *)(a1 + 188);
LABEL_34:
            *(_DWORD *)(v24 + v9 + 12) = v26;
            v27 = 13;
            *(_DWORD *)(v24 + v9 + 16) = 17;
LABEL_40:
            *(_DWORD *)(v24 + v9 + 20) = v27;
            ++v17;
            goto LABEL_41;
          }
LABEL_38:
          v26 = *(_DWORD *)(a1 + 184);
          goto LABEL_34;
        }
        if ( v25 == 49 && *(_DWORD *)(v23 + 1336) )
        {
          *(_DWORD *)(v24 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_33;
          goto LABEL_38;
        }
      }
      *(_DWORD *)(v24 + v9 + 8) = *(_DWORD *)(v15 + 72LL * v22 + 48);
      *(_DWORD *)(v24 + v9 + 12) = *(_DWORD *)(v15 + 72LL * v22 + 52);
      *(_DWORD *)(v24 + v9 + 16) = *(_DWORD *)(v15 + 72LL * v22 + 36);
      v27 = *(_DWORD *)(v15 + 72LL * v22 + 32);
      goto LABEL_40;
    }
LABEL_42:
    v10 = 1;
    *a2 = v17;
  }
  return v10;
}
