/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C004DA90
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C004D5E0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
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
  int SpecificValueCaps; // r15d
  unsigned __int16 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // eax
  __int16 v26; // ax
  int v27; // eax

  v9 = a8;
  v10 = 0;
  v11 = a5;
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v14 = a9;
  if ( !a9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v15 = a6;
  if ( !a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v16 = a7;
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !v11 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a4, 0, v15, (__int64)&a5, v14);
  if ( a5 != v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  if ( SpecificValueCaps >= 0 )
  {
    v21 = 0;
    if ( v17 < v16 )
    {
      v22 = a8;
      while ( 1 )
      {
        if ( v21 >= v11 )
          goto LABEL_33;
        if ( *(_BYTE *)(a1 + 736) == *(_BYTE *)(v15 + 72LL * v21 + 2) && v17 < a3 )
          break;
LABEL_32:
        ++v21;
        if ( v17 >= v16 )
          goto LABEL_33;
      }
      v23 = 28LL * v17;
      *(_WORD *)(v23 + v9 + 24) = *(_WORD *)(v15 + 72LL * v21);
      *(_WORD *)(v23 + v9 + 26) = *(_WORD *)(v15 + 72LL * v21 + 56);
      *(_DWORD *)(v23 + v9) = *(_DWORD *)(v15 + 72LL * v21 + 40);
      *(_DWORD *)(v23 + v9 + 4) = *(_DWORD *)(v15 + 72LL * v21 + 44);
      if ( *(_WORD *)(v15 + 72LL * v21) != 1 )
        goto LABEL_30;
      v26 = *(_WORD *)(v15 + 72LL * v21 + 56);
      if ( v26 == 48 && *(_DWORD *)(v22 + 848) )
      {
        *(_DWORD *)(v23 + v9 + 8) = 0;
        if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) == 0 )
        {
LABEL_38:
          v27 = *(_DWORD *)(a1 + 184);
LABEL_39:
          *(_DWORD *)(v23 + v9 + 12) = v27;
          v24 = 13;
          *(_DWORD *)(v23 + v9 + 16) = 17;
          goto LABEL_31;
        }
      }
      else
      {
        if ( v26 != 49 || !*(_DWORD *)(v22 + 848) )
        {
LABEL_30:
          *(_DWORD *)(v23 + v9 + 8) = *(_DWORD *)(v15 + 72LL * v21 + 48);
          *(_DWORD *)(v23 + v9 + 12) = *(_DWORD *)(v15 + 72LL * v21 + 52);
          *(_DWORD *)(v23 + v9 + 16) = *(_DWORD *)(v15 + 72LL * v21 + 36);
          v24 = *(_DWORD *)(v15 + 72LL * v21 + 32);
LABEL_31:
          *(_DWORD *)(v23 + v9 + 20) = v24;
          ++v17;
          goto LABEL_32;
        }
        *(_DWORD *)(v23 + v9 + 8) = 0;
        if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_38;
      }
      v27 = *(_DWORD *)(a1 + 188);
      goto LABEL_39;
    }
LABEL_33:
    v10 = 1;
    *a2 = v17;
  }
  return v10;
}
